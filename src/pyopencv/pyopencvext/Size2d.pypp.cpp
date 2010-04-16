// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "ndarray.hpp"
#include "opencv_converters.hpp"
#include "Size2d.pypp.hpp"

namespace bp = boost::python;

void register_Size2d_class(){

    { //::cv::Size_< double >
        typedef bp::class_< cv::Size_< double > > Size2d_exposer_t;
        Size2d_exposer_t Size2d_exposer = Size2d_exposer_t( "Size2d", bp::init< >() );
        bp::scope Size2d_scope( Size2d_exposer );
        Size2d_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Size_< double > >() );
        Size2d_exposer.def( bp::init< double, double >(( bp::arg("_width"), bp::arg("_height") )) );
        Size2d_exposer.def( bp::init< cv::Size_< double > const & >(( bp::arg("sz") )) );
        Size2d_exposer.def( bp::init< CvSize const & >(( bp::arg("sz") )) );
        bp::implicitly_convertible< CvSize const &, cv::Size_< double > >();
        Size2d_exposer.def( bp::init< CvSize2D32f const & >(( bp::arg("sz") )) );
        bp::implicitly_convertible< CvSize2D32f const &, cv::Size_< double > >();
        Size2d_exposer.def( bp::init< cv::Point_< double > const & >(( bp::arg("pt") )) );
        bp::implicitly_convertible< cv::Point_< double > const &, cv::Size_< double > >();
        { //::cv::Size_< double >::area
        
            typedef cv::Size_< double > exported_class_t;
            typedef double ( exported_class_t::*area_function_type )(  ) const;
            
            Size2d_exposer.def( 
                "area"
                , area_function_type( &::cv::Size_< double >::area ) );
        
        }
        Size2d_exposer.def( "__temp_func", &cv::Size_< double >::operator ::CvSize  );
        Size2d_exposer.def( "__temp_func", &cv::Size_< double >::operator ::CvSize2D32f  );
        { //::cv::Size_< double >::operator=
        
            typedef cv::Size_< double > exported_class_t;
            typedef ::cv::Size_< double > & ( exported_class_t::*assign_function_type )( ::cv::Size_< double > const & ) ;
            
            Size2d_exposer.def( 
                "assign"
                , assign_function_type( &::cv::Size_< double >::operator= )
                , ( bp::arg("sz") )
                , bp::return_self< >() );
        
        }
        Size2d_exposer.def_readwrite( "height", &cv::Size_< double >::height );
        Size2d_exposer.def_readwrite( "width", &cv::Size_< double >::width );
        Size2d_exposer.def("from_ndarray", &bp::from_ndarray< cv::Size2d >, (bp::arg("arr")) );
        Size2d_exposer.staticmethod("from_ndarray");
        Size2d_exposer.add_property("ndarray", &bp::as_ndarray< cv::Size2d >);
        Size2d_exposer.def("__iadd__", &__iadd__<cv::Size2d, cv::Size2d>, bp::return_self<>() );
        Size2d_exposer.def("__isub__", &__isub__<cv::Size2d, cv::Size2d>, bp::return_self<>() );
        Size2d_exposer.def("__add__", &__add__<cv::Size2d, cv::Size2d> );
        Size2d_exposer.def("__sub__", &__sub__<cv::Size2d, cv::Size2d> );
        Size2d_exposer.def("__eq__", &__eq__<cv::Size2d, cv::Size2d> );
        Size2d_exposer.def("__ne__", &__ne__<cv::Size2d, cv::Size2d> );
        Size2d_exposer.def("__mul__", &__mul__<cv::Size2d, double> );
    }

}
