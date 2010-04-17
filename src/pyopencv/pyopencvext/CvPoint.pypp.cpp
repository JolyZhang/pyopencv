// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvPoint.pypp.hpp"

namespace bp = boost::python;

void register_CvPoint_class(){

    bp::class_< CvPoint >( "CvPoint", "\n2D point with integer coordinates (usually zero-based)."
    "\n"
    "\nWarning: This structure is obsolete. It exists only to support "
    "\nbackward compatibility. Please use class Point2i instead."
    "\nReference:"
    "\n    `wiki http://opencv.willowgarage.com/documentation/basic_structures.html#cvpoint`_" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvPoint >(), "\n2D point with integer coordinates (usually zero-based)."
    "\n"
    "\nWarning: This structure is obsolete. It exists only to support "
    "\nbackward compatibility. Please use class Point2i instead."
    "\nReference:"
    "\n    `wiki http://opencv.willowgarage.com/documentation/basic_structures.html#cvpoint`_" )    
        .def_readwrite( "x", &CvPoint::x )    
        .def_readwrite( "y", &CvPoint::y );

}