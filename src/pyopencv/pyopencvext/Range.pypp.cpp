// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "ndarray.hpp"
#include "opencv_converters.hpp"
#include "Range.pypp.hpp"

namespace bp = boost::python;

void register_Range_class(){

    { //::cv::Range
        typedef bp::class_< cv::Range > Range_exposer_t;
        Range_exposer_t Range_exposer = Range_exposer_t( "Range", bp::init< >() );
        bp::scope Range_scope( Range_exposer );
        Range_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Range >() );
        Range_exposer.def( bp::init< int, int >(( bp::arg("_start"), bp::arg("_end") )) );
        Range_exposer.def( bp::init< CvSlice const & >(( bp::arg("slice") )) );
        bp::implicitly_convertible< CvSlice const &, cv::Range >();
        { //::cv::Range::all
        
            typedef ::cv::Range ( *all_function_type )(  );
            
            Range_exposer.def( 
                "all"
                , all_function_type( &::cv::Range::all ) );
        
        }
        { //::cv::Range::empty
        
            typedef bool ( ::cv::Range::*empty_function_type )(  ) const;
            
            Range_exposer.def( 
                "empty"
                , empty_function_type( &::cv::Range::empty ) );
        
        }
        Range_exposer.def( "__temp_func", &cv::Range::operator ::CvSlice  );
        { //::cv::Range::size
        
            typedef int ( ::cv::Range::*size_function_type )(  ) const;
            
            Range_exposer.def( 
                "size"
                , size_function_type( &::cv::Range::size ) );
        
        }
        Range_exposer.def_readwrite( "end", &cv::Range::end );
        Range_exposer.def_readwrite( "start", &cv::Range::start );
        Range_exposer.staticmethod( "all" );
        Range_exposer.def("from_ndarray", &bp::from_ndarray< cv::Range >, (bp::arg("arr")) );
        Range_exposer.staticmethod("from_ndarray");
        Range_exposer.add_property("ndarray", &bp::as_ndarray< cv::Range >);
        Range_exposer.def("__not__", &__not__<cv::Range> );
        Range_exposer.def("__iand__", &__iand__<cv::Range, cv::Range >, bp::return_self<>() );
        Range_exposer.def("__and__", &__and__<cv::Range, cv::Range> );
        Range_exposer.def("__ne__", &__ne__<cv::Range, cv::Range> );
        Range_exposer.def("__eq__", &__eq__<cv::Range, cv::Range> );
        Range_exposer.def("__add__", &__add__<cv::Range, int> );
        Range_exposer.def("__sub__", &__sub__<cv::Range, int> );
    }

}
