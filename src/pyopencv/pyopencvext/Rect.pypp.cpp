// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "ndarray.hpp"
#include "opencv_converters.hpp"
#include "Rect.pypp.hpp"

namespace bp = boost::python;

void register_Rect_class(){

    { //::cv::Rect_< int >
        typedef bp::class_< cv::Rect_< int > > Rect_exposer_t;
        Rect_exposer_t Rect_exposer = Rect_exposer_t( "Rect", bp::init< >() );
        bp::scope Rect_scope( Rect_exposer );
        Rect_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Rect_< int > >() );
        Rect_exposer.def( bp::init< int, int, int, int >(( bp::arg("_x"), bp::arg("_y"), bp::arg("_width"), bp::arg("_height") )) );
        Rect_exposer.def( bp::init< cv::Rect_< int > const & >(( bp::arg("r") )) );
        Rect_exposer.def( bp::init< cv::Point_< int > const &, cv::Size_< int > const & >(( bp::arg("org"), bp::arg("sz") )) );
        Rect_exposer.def( bp::init< cv::Point_< int > const &, cv::Point_< int > const & >(( bp::arg("pt1"), bp::arg("pt2") )) );
        { //::cv::Rect_< int >::area
        
            typedef cv::Rect_< int > exported_class_t;
            typedef int ( exported_class_t::*area_function_type )(  ) const;
            
            Rect_exposer.def( 
                "area"
                , area_function_type( &::cv::Rect_< int >::area ) );
        
        }
        { //::cv::Rect_< int >::br
        
            typedef cv::Rect_< int > exported_class_t;
            typedef ::cv::Point_< int > ( exported_class_t::*br_function_type )(  ) const;
            
            Rect_exposer.def( 
                "br"
                , br_function_type( &::cv::Rect_< int >::br ) );
        
        }
        { //::cv::Rect_< int >::contains
        
            typedef cv::Rect_< int > exported_class_t;
            typedef bool ( exported_class_t::*contains_function_type )( ::cv::Point_< int > const & ) const;
            
            Rect_exposer.def( 
                "contains"
                , contains_function_type( &::cv::Rect_< int >::contains )
                , ( bp::arg("pt") ) );
        
        }
        { //::cv::Rect_< int >::operator=
        
            typedef cv::Rect_< int > exported_class_t;
            typedef ::cv::Rect_< int > & ( exported_class_t::*assign_function_type )( ::cv::Rect_< int > const & ) ;
            
            Rect_exposer.def( 
                "assign"
                , assign_function_type( &::cv::Rect_< int >::operator= )
                , ( bp::arg("r") )
                , bp::return_self< >() );
        
        }
        { //::cv::Rect_< int >::size
        
            typedef cv::Rect_< int > exported_class_t;
            typedef ::cv::Size_< int > ( exported_class_t::*size_function_type )(  ) const;
            
            Rect_exposer.def( 
                "size"
                , size_function_type( &::cv::Rect_< int >::size ) );
        
        }
        { //::cv::Rect_< int >::tl
        
            typedef cv::Rect_< int > exported_class_t;
            typedef ::cv::Point_< int > ( exported_class_t::*tl_function_type )(  ) const;
            
            Rect_exposer.def( 
                "tl"
                , tl_function_type( &::cv::Rect_< int >::tl ) );
        
        }
        Rect_exposer.def_readwrite( "height", &cv::Rect_< int >::height );
        Rect_exposer.def_readwrite( "width", &cv::Rect_< int >::width );
        Rect_exposer.def_readwrite( "x", &cv::Rect_< int >::x );
        Rect_exposer.def_readwrite( "y", &cv::Rect_< int >::y );
        Rect_exposer.def("from_ndarray", &bp::from_ndarray< cv::Rect >, (bp::arg("arr")) );
        Rect_exposer.staticmethod("from_ndarray");
        Rect_exposer.add_property("ndarray", &bp::as_ndarray< cv::Rect >);
        Rect_exposer.def("__iadd__", &__iadd__<cv::Rect, cv::Point_<int> >, bp::return_self<>() );
        Rect_exposer.def("__iadd__", &__iadd__<cv::Rect, cv::Size_<int> >, bp::return_self<>() );
        Rect_exposer.def("__isub__", &__isub__<cv::Rect, cv::Point_<int> >, bp::return_self<>() );
        Rect_exposer.def("__isub__", &__isub__<cv::Rect, cv::Size_<int> >, bp::return_self<>() );
        Rect_exposer.def("__iand__", &__iand__<cv::Rect, cv::Rect>, bp::return_self<>() );
        Rect_exposer.def("__ior__", &__ior__<cv::Rect, cv::Rect>, bp::return_self<>() );
        Rect_exposer.def("__and__", &__and__<cv::Rect, cv::Rect> );
        Rect_exposer.def("__or__", &__or__<cv::Rect, cv::Rect> );
        Rect_exposer.def("__eq__", &__eq__<cv::Rect, cv::Rect> );
        Rect_exposer.def("__add__", &__add__<cv::Rect, cv::Point_<int> > );
        Rect_exposer.def("__sub__", &__sub__<cv::Rect, cv::Point_<int> > );
        Rect_exposer.def("__add__", &__add__<cv::Rect, cv::Size_<int> > );
    }

}
