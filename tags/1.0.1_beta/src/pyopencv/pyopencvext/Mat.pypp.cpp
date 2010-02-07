// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "opencv_extra.hpp"
#include "ndarray.hpp"
#include "Mat.pypp.hpp"

namespace bp = boost::python;

static boost::shared_ptr<cv::Mat> Mat__init1__(const bp::object &seq)
{
    cv::Mat *result = new cv::Mat();
    convert_Mat(seq, *result);
    return boost::shared_ptr<cv::Mat>(result);
}

static boost::shared_ptr<cv::Mat> Mat__init3__(int _rows, int _cols, int _type)
{
    cv::Mat *result = new cv::Mat(_rows, _cols, _type);
    return boost::shared_ptr<cv::Mat>(result);
}

void register_Mat_class(){

    { //::cv::Mat
        typedef bp::class_< cv::Mat > Mat_exposer_t;
        Mat_exposer_t Mat_exposer = Mat_exposer_t( "Mat", bp::init< >() );
        bp::scope Mat_scope( Mat_exposer );
        Mat_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Mat >() );
        bp::scope().attr("MAGIC_VAL") = (int)cv::Mat::MAGIC_VAL;
        bp::scope().attr("AUTO_STEP") = (int)cv::Mat::AUTO_STEP;
        bp::scope().attr("CONTINUOUS_FLAG") = (int)cv::Mat::CONTINUOUS_FLAG;
        Mat_exposer.def( bp::init< int, int, int >(( bp::arg("_rows"), bp::arg("_cols"), bp::arg("_type") )) );
        Mat_exposer.def( bp::init< int, int, int, cv::Scalar const & >(( bp::arg("_rows"), bp::arg("_cols"), bp::arg("_type"), bp::arg("_s") )) );
        Mat_exposer.def( bp::init< cv::Size, int >(( bp::arg("_size"), bp::arg("_type") )) );
        Mat_exposer.def( bp::init< cv::Size, int, cv::Scalar const & >(( bp::arg("_size"), bp::arg("_type"), bp::arg("_s") )) );
        Mat_exposer.def( bp::init< cv::Mat const & >(( bp::arg("m") )) );
        Mat_exposer.def( bp::init< cv::Mat const &, cv::Range const &, cv::Range const & >(( bp::arg("m"), bp::arg("rowRange"), bp::arg("colRange") )) );
        Mat_exposer.def( bp::init< cv::Mat const &, cv::Rect const & >(( bp::arg("m"), bp::arg("roi") )) );
        { //::cv::Mat::addref
        
            typedef void ( ::cv::Mat::*addref_function_type )(  ) ;
            
            Mat_exposer.def( 
                "addref"
                , addref_function_type( &::cv::Mat::addref ) );
        
        }
        { //::cv::Mat::adjustROI
        
            typedef ::cv::Mat & ( ::cv::Mat::*adjustROI_function_type )( int,int,int,int ) ;
            
            Mat_exposer.def( 
                "adjustROI"
                , adjustROI_function_type( &::cv::Mat::adjustROI )
                , ( bp::arg("dtop"), bp::arg("dbottom"), bp::arg("dleft"), bp::arg("dright") )
                , bp::return_self< >() );
        
        }
        { //::cv::Mat::assignTo
        
            typedef void ( ::cv::Mat::*assignTo_function_type )( ::cv::Mat &,int ) const;
            
            Mat_exposer.def( 
                "assignTo"
                , assignTo_function_type( &::cv::Mat::assignTo )
                , ( bp::arg("m"), bp::arg("type")=(int)(-0x000000001) ) );
        
        }
        { //::cv::Mat::channels
        
            typedef int ( ::cv::Mat::*channels_function_type )(  ) const;
            
            Mat_exposer.def( 
                "channels"
                , channels_function_type( &::cv::Mat::channels ) );
        
        }
        { //::cv::Mat::clone
        
            typedef ::cv::Mat ( ::cv::Mat::*clone_function_type )(  ) const;
            
            Mat_exposer.def( 
                "clone"
                , clone_function_type( &::cv::Mat::clone ) );
        
        }
        { //::cv::Mat::col
        
            typedef ::cv::Mat ( ::cv::Mat::*col_function_type )( int ) const;
            
            Mat_exposer.def( 
                "col"
                , col_function_type( &::cv::Mat::col )
                , ( bp::arg("x") ) );
        
        }
        { //::cv::Mat::colRange
        
            typedef ::cv::Mat ( ::cv::Mat::*colRange_function_type )( int,int ) const;
            
            Mat_exposer.def( 
                "colRange"
                , colRange_function_type( &::cv::Mat::colRange )
                , ( bp::arg("startcol"), bp::arg("endcol") ) );
        
        }
        { //::cv::Mat::colRange
        
            typedef ::cv::Mat ( ::cv::Mat::*colRange_function_type )( ::cv::Range const & ) const;
            
            Mat_exposer.def( 
                "colRange"
                , colRange_function_type( &::cv::Mat::colRange )
                , ( bp::arg("r") ) );
        
        }
        { //::cv::Mat::convertTo
        
            typedef void ( ::cv::Mat::*convertTo_function_type )( ::cv::Mat &,int,double,double ) const;
            
            Mat_exposer.def( 
                "convertTo"
                , convertTo_function_type( &::cv::Mat::convertTo )
                , ( bp::arg("m"), bp::arg("rtype"), bp::arg("alpha")=1, bp::arg("beta")=0 ) );
        
        }
        { //::cv::Mat::copyTo
        
            typedef void ( ::cv::Mat::*copyTo_function_type )( ::cv::Mat & ) const;
            
            Mat_exposer.def( 
                "copyTo"
                , copyTo_function_type( &::cv::Mat::copyTo )
                , ( bp::arg("m") ) );
        
        }
        { //::cv::Mat::copyTo
        
            typedef void ( ::cv::Mat::*copyTo_function_type )( ::cv::Mat &,::cv::Mat const & ) const;
            
            Mat_exposer.def( 
                "copyTo"
                , copyTo_function_type( &::cv::Mat::copyTo )
                , ( bp::arg("m"), bp::arg("mask") ) );
        
        }
        { //::cv::Mat::create
        
            typedef void ( ::cv::Mat::*create_function_type )( int,int,int ) ;
            
            Mat_exposer.def( 
                "create"
                , create_function_type( &::cv::Mat::create )
                , ( bp::arg("_rows"), bp::arg("_cols"), bp::arg("_type") ) );
        
        }
        { //::cv::Mat::create
        
            typedef void ( ::cv::Mat::*create_function_type )( ::cv::Size,int ) ;
            
            Mat_exposer.def( 
                "create"
                , create_function_type( &::cv::Mat::create )
                , ( bp::arg("_size"), bp::arg("_type") ) );
        
        }
        { //::cv::Mat::cross
        
            typedef ::cv::Mat ( ::cv::Mat::*cross_function_type )( ::cv::Mat const & ) const;
            
            Mat_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Mat::cross )
                , ( bp::arg("m") ) );
        
        }
        { //::cv::Mat::depth
        
            typedef int ( ::cv::Mat::*depth_function_type )(  ) const;
            
            Mat_exposer.def( 
                "depth"
                , depth_function_type( &::cv::Mat::depth ) );
        
        }
        { //::cv::Mat::diag
        
            typedef ::cv::Mat ( ::cv::Mat::*diag_function_type )( int ) const;
            
            Mat_exposer.def( 
                "diag"
                , diag_function_type( &::cv::Mat::diag )
                , ( bp::arg("d")=(int)(0) ) );
        
        }
        { //::cv::Mat::diag
        
            typedef ::cv::Mat ( *diag_function_type )( ::cv::Mat const & );
            
            Mat_exposer.def( 
                "diag"
                , diag_function_type( &::cv::Mat::diag )
                , ( bp::arg("d") ) );
        
        }
        { //::cv::Mat::dot
        
            typedef double ( ::cv::Mat::*dot_function_type )( ::cv::Mat const & ) const;
            
            Mat_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Mat::dot )
                , ( bp::arg("m") ) );
        
        }
        { //::cv::Mat::elemSize
        
            typedef ::size_t ( ::cv::Mat::*elemSize_function_type )(  ) const;
            
            Mat_exposer.def( 
                "elemSize"
                , elemSize_function_type( &::cv::Mat::elemSize ) );
        
        }
        { //::cv::Mat::elemSize1
        
            typedef ::size_t ( ::cv::Mat::*elemSize1_function_type )(  ) const;
            
            Mat_exposer.def( 
                "elemSize1"
                , elemSize1_function_type( &::cv::Mat::elemSize1 ) );
        
        }
        { //::cv::Mat::empty
        
            typedef bool ( ::cv::Mat::*empty_function_type )(  ) const;
            
            Mat_exposer.def( 
                "empty"
                , empty_function_type( &::cv::Mat::empty ) );
        
        }
        { //::cv::Mat::isContinuous
        
            typedef bool ( ::cv::Mat::*isContinuous_function_type )(  ) const;
            
            Mat_exposer.def( 
                "isContinuous"
                , isContinuous_function_type( &::cv::Mat::isContinuous ) );
        
        }
        { //::cv::Mat::locateROI
        
            typedef void ( ::cv::Mat::*locateROI_function_type )( ::cv::Size &,::cv::Point & ) const;
            
            Mat_exposer.def( 
                "locateROI"
                , locateROI_function_type( &::cv::Mat::locateROI )
                , ( bp::arg("wholeSize"), bp::arg("ofs") ) );
        
        }
        { //::cv::Mat::operator()
        
            typedef ::cv::Mat ( ::cv::Mat::*__call___function_type )( ::cv::Range,::cv::Range ) const;
            
            Mat_exposer.def( 
                "__call__"
                , __call___function_type( &::cv::Mat::operator() )
                , ( bp::arg("rowRange"), bp::arg("colRange") ) );
        
        }
        { //::cv::Mat::operator()
        
            typedef ::cv::Mat ( ::cv::Mat::*__call___function_type )( ::cv::Rect const & ) const;
            
            Mat_exposer.def( 
                "__call__"
                , __call___function_type( &::cv::Mat::operator() )
                , ( bp::arg("roi") ) );
        
        }
        { //::cv::Mat::operator=
        
            typedef ::cv::Mat & ( ::cv::Mat::*assign_function_type )( ::cv::Mat const & ) ;
            
            Mat_exposer.def( 
                "assign"
                , assign_function_type( &::cv::Mat::operator= )
                , ( bp::arg("m") )
                , bp::return_self< >() );
        
        }
        { //::cv::Mat::operator=
        
            typedef ::cv::Mat & ( ::cv::Mat::*assign_function_type )( ::cv::Scalar const & ) ;
            
            Mat_exposer.def( 
                "assign"
                , assign_function_type( &::cv::Mat::operator= )
                , ( bp::arg("s") )
                , bp::return_self< >() );
        
        }
        { //::cv::Mat::release
        
            typedef void ( ::cv::Mat::*release_function_type )(  ) ;
            
            Mat_exposer.def( 
                "release"
                , release_function_type( &::cv::Mat::release ) );
        
        }
        { //::cv::Mat::reshape
        
            typedef ::cv::Mat ( ::cv::Mat::*reshape_function_type )( int,int ) const;
            
            Mat_exposer.def( 
                "reshape"
                , reshape_function_type( &::cv::Mat::reshape )
                , ( bp::arg("_cn"), bp::arg("_rows")=(int)(0) ) );
        
        }
        { //::cv::Mat::row
        
            typedef ::cv::Mat ( ::cv::Mat::*row_function_type )( int ) const;
            
            Mat_exposer.def( 
                "row"
                , row_function_type( &::cv::Mat::row )
                , ( bp::arg("y") ) );
        
        }
        { //::cv::Mat::rowRange
        
            typedef ::cv::Mat ( ::cv::Mat::*rowRange_function_type )( int,int ) const;
            
            Mat_exposer.def( 
                "rowRange"
                , rowRange_function_type( &::cv::Mat::rowRange )
                , ( bp::arg("startrow"), bp::arg("endrow") ) );
        
        }
        { //::cv::Mat::rowRange
        
            typedef ::cv::Mat ( ::cv::Mat::*rowRange_function_type )( ::cv::Range const & ) const;
            
            Mat_exposer.def( 
                "rowRange"
                , rowRange_function_type( &::cv::Mat::rowRange )
                , ( bp::arg("r") ) );
        
        }
        { //::cv::Mat::setTo
        
            typedef ::cv::Mat & ( ::cv::Mat::*setTo_function_type )( ::cv::Scalar const &,::cv::Mat const & ) ;
            
            Mat_exposer.def( 
                "setTo"
                , setTo_function_type( &::cv::Mat::setTo )
                , ( bp::arg("s"), bp::arg("mask")=cv::Mat() )
                , bp::return_self< >() );
        
        }
        { //::cv::Mat::size
        
            typedef ::cv::Size ( ::cv::Mat::*size_function_type )(  ) const;
            
            Mat_exposer.def( 
                "size"
                , size_function_type( &::cv::Mat::size ) );
        
        }
        { //::cv::Mat::step1
        
            typedef ::size_t ( ::cv::Mat::*step1_function_type )(  ) const;
            
            Mat_exposer.def( 
                "step1"
                , step1_function_type( &::cv::Mat::step1 ) );
        
        }
        { //::cv::Mat::type
        
            typedef int ( ::cv::Mat::*type_function_type )(  ) const;
            
            Mat_exposer.def( 
                "type"
                , type_function_type( &::cv::Mat::type ) );
        
        }
        Mat_exposer.def_readwrite( "cols", &cv::Mat::cols );
        Mat_exposer.def_readwrite( "flags", &cv::Mat::flags );
        Mat_exposer.def_readwrite( "rows", &cv::Mat::rows );
        Mat_exposer.def_readwrite( "step", &cv::Mat::step );
        Mat_exposer.staticmethod( "diag" );
        Mat_exposer.def("from_ndarray", &bp::from_ndarray< cv::Mat >, (bp::arg("arr")) );
        Mat_exposer.staticmethod("from_ndarray");
        Mat_exposer.add_property("ndarray", &bp::as_ndarray< cv::Mat >);
        Mat_exposer.def("__init__", bp::make_constructor(&Mat__init3__, bp::default_call_policies(), ( bp::arg("_rows"), bp::arg("_cols"), bp::arg("_type") )));
    }

}
