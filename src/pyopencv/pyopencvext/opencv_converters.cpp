#include <boost/python/detail/prefix.hpp>
#include <boost/python/extract.hpp>
#include <boost/python/default_call_policies.hpp>
#include <boost/python/object.hpp>

#include <algorithm>
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

#include "opencv_converters.hpp"


// ================================================================================================
// New converters related to cv::Mat

// ------------------------------------------------------------------------------------------------
// 

// ================================================================================================

// convert_seq1d_to_Mat: convert a Python 1D sequence of objects of type cv::Point2? into a cv::Mat
template<typename Point2Type, typename ElementType, int MatType>
void convert_seq1d_of_Point2_to_Mat( const bp::object &in_arr, cv::Mat &out_arr )
{
    int len = bp::len(in_arr);
    out_arr.create(1, len, MatType);
    ElementType *data = (ElementType *)out_arr.data;
    for(int i = 0; i < len; ++i, data += 2)
    {
        const Point2Type &x = bp::extract<const Point2Type &>(in_arr[i]);
        data[0] = x.x;
        data[1] = x.y;
    }
}

// convert_seq1d_to_Mat: convert a Python 1D sequence of objects of type cv::Point3? into a cv::Mat
template<typename Point3Type, typename ElementType, int MatType>
void convert_seq1d_of_Point3_to_Mat( const bp::object &in_arr, cv::Mat &out_arr )
{
    int len = bp::len(in_arr);
    out_arr.create(1, len, MatType);
    ElementType *data = (ElementType *)out_arr.data;
    for(int i = 0; i < len; ++i, data += 3)
    {
        const Point3Type &x = bp::extract<const Point3Type &>(in_arr[i]);
        data[0] = x.x;
        data[1] = x.y;
        data[2] = x.z;
    }
}


// convert a Python sequence into a cv::Mat
template<> void convert_Mat<bp::object>( const bp::object &in_arr, cv::Mat &out_arr )
{
    char s[300];
    if(PyObject_HasAttrString(in_arr.ptr(), "__len__")) // Python 1D sequence
    {
        if(!bp::len(in_arr)) { out_arr = cv::Mat(); return; }
        if(bp::extract<const cv::Point2i &>(in_arr[0]).check())
            { convert_seq1d_of_Point2_to_Mat<cv::Point2i, int, CV_32SC2>(in_arr, out_arr); return; }
        if(bp::extract<const cv::Point2f &>(in_arr[0]).check())
            { convert_seq1d_of_Point2_to_Mat<cv::Point2f, float, CV_32FC2>(in_arr, out_arr); return; }
        if(bp::extract<const cv::Point2d &>(in_arr[0]).check())
            { convert_seq1d_of_Point2_to_Mat<cv::Point2d, double, CV_64FC2>(in_arr, out_arr); return; }
        if(bp::extract<const cv::Point3i &>(in_arr[0]).check())
            { convert_seq1d_of_Point3_to_Mat<cv::Point3i, int, CV_32SC3>(in_arr, out_arr); return; }
        if(bp::extract<const cv::Point3f &>(in_arr[0]).check())
            { convert_seq1d_of_Point3_to_Mat<cv::Point3f, float, CV_32FC3>(in_arr, out_arr); return; }
        if(bp::extract<const cv::Point3d &>(in_arr[0]).check())
            { convert_seq1d_of_Point3_to_Mat<cv::Point3d, double, CV_64FC3>(in_arr, out_arr); return; }
        if(PyObject_HasAttrString(bp::object(in_arr[0]).ptr(), "__len__")) // Python 2D sequence
        {
            sprintf( s, "Converting a Python 2D sequence into a cv::Mat in function convert_Mat<bp::object>() is not yet implemented." );
            PyErr_SetString(PyExc_NotImplementedError, s);
            throw bp::error_already_set(); 
        }

        sprintf( s, "Unknown element type while converting a Python sequence into a cv::Mat in function convert_Mat<bp::object>()." );
        PyErr_SetString(PyExc_NotImplementedError, s);
        throw bp::error_already_set(); 
    }

    sprintf( s, "Unknown object type while converting a Python object into a cv::Mat in function convert_Mat<bp::object>()." );
    PyErr_SetString(PyExc_NotImplementedError, s);
    throw bp::error_already_set(); 
}


// ================================================================================================

// workaround for getting a CvMat pointer
CvMat * get_CvMat_ptr(cv::Mat const &mat)
{
    if(mat.empty()) return 0;
    static int cnt = 0;
    static CvMat arr[1024];
    CvMat *result = &(arr[cnt] = mat);
    cnt = (cnt+1) & 1023;
    return result;
}


// workaround for getting an IplImage pointer
IplImage * get_IplImage_ptr(cv::Mat const &mat)
{
    if(mat.empty()) return 0;
    static int cnt = 0;
    static IplImage arr[1024];
    IplImage *result = &(arr[cnt] = mat);
    cnt = (cnt+1) & 1023;
    return result;
}


// ================================================================================================

// convert_vector_to_seq

#define CONVERT_VECTOR_TO_NDARRAY(VectType) \
CONVERT_VECTOR_TO_SEQ(VectType) \
{ \
    bp::ndarray out_arr; \
    bp::vector_to_ndarray(in_arr, out_arr); \
    return bp::sequence(out_arr); \
}

// basic
CONVERT_VECTOR_TO_NDARRAY(char);
CONVERT_VECTOR_TO_NDARRAY(unsigned char);
CONVERT_VECTOR_TO_NDARRAY(short);
CONVERT_VECTOR_TO_NDARRAY(unsigned short);
CONVERT_VECTOR_TO_NDARRAY(long);
CONVERT_VECTOR_TO_NDARRAY(unsigned long);
CONVERT_VECTOR_TO_NDARRAY(int);
CONVERT_VECTOR_TO_NDARRAY(unsigned int);
CONVERT_VECTOR_TO_NDARRAY(float);
CONVERT_VECTOR_TO_NDARRAY(double);

// Vec-like
CONVERT_VECTOR_TO_NDARRAY(cv::Vec2b);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec3b);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec4b);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec2s);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec3s);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec4s);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec2w);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec3w);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec4w);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec2i);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec3i);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec4i);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec2f);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec3f);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec4f);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec6f);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec2d);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec3d);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec4d);
CONVERT_VECTOR_TO_NDARRAY(cv::Vec6d);

// Point-like
CONVERT_VECTOR_TO_NDARRAY(cv::Point2i);
CONVERT_VECTOR_TO_NDARRAY(cv::Point2f);
CONVERT_VECTOR_TO_NDARRAY(cv::Point2d);
CONVERT_VECTOR_TO_NDARRAY(cv::Point3i);
CONVERT_VECTOR_TO_NDARRAY(cv::Point3f);
CONVERT_VECTOR_TO_NDARRAY(cv::Point3d);

// Rect-like
CONVERT_VECTOR_TO_NDARRAY(cv::Rect);
CONVERT_VECTOR_TO_NDARRAY(cv::Rectd);
CONVERT_VECTOR_TO_NDARRAY(cv::Rectf);
CONVERT_VECTOR_TO_NDARRAY(cv::RotatedRect);

// Scalar
CONVERT_VECTOR_TO_NDARRAY(cv::Scalar);

// Range
CONVERT_VECTOR_TO_NDARRAY(cv::Range);



// ================================================================================================
