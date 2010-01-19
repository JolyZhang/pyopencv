// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "ndarray.hpp"
#include "vec4f.pypp.hpp"

namespace bp = boost::python;

void register_Vec4f_class(){

    { //::cv::Vec< float, 4 >
        typedef bp::class_< cv::Vec< float, 4 > > Vec4f_exposer_t;
        Vec4f_exposer_t Vec4f_exposer = Vec4f_exposer_t( "Vec4f", bp::init< >() );
        bp::scope Vec4f_scope( Vec4f_exposer );
        Vec4f_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Vec< float, 4 > >() );
        bp::scope().attr("depth") = (int)cv::Vec<float, 4>::depth;
        bp::scope().attr("channels") = (int)cv::Vec<float, 4>::channels;
        bp::scope().attr("type") = (int)cv::Vec<float, 4>::type;
        Vec4f_exposer.def( bp::init< float >(( bp::arg("v0") )) );
        bp::implicitly_convertible< float, cv::Vec< float, 4 > >();
        Vec4f_exposer.def( bp::init< float, float >(( bp::arg("v0"), bp::arg("v1") )) );
        Vec4f_exposer.def( bp::init< float, float, float >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2") )) );
        Vec4f_exposer.def( bp::init< float, float, float, float >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3") )) );
        Vec4f_exposer.def( bp::init< float, float, float, float, float >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4") )) );
        Vec4f_exposer.def( bp::init< float, float, float, float, float, float >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5") )) );
        Vec4f_exposer.def( bp::init< float, float, float, float, float, float, float >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6") )) );
        Vec4f_exposer.def( bp::init< float, float, float, float, float, float, float, float >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7") )) );
        Vec4f_exposer.def( bp::init< float, float, float, float, float, float, float, float, float >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8") )) );
        Vec4f_exposer.def( bp::init< float, float, float, float, float, float, float, float, float, float >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8"), bp::arg("v9") )) );
        Vec4f_exposer.def( bp::init< cv::Vec< float, 4 > const & >(( bp::arg("v") )) );
        { //::cv::Vec< float, 4 >::all
        
            typedef cv::Vec< float, 4 > exported_class_t;
            typedef ::cv::Vec< float, 4 > ( *all_function_type )( float );
            
            Vec4f_exposer.def( 
                "all"
                , all_function_type( &::cv::Vec< float, 4 >::all )
                , ( bp::arg("alpha") ) );
        
        }
        { //::cv::Vec< float, 4 >::cross
        
            typedef cv::Vec< float, 4 > exported_class_t;
            typedef ::cv::Vec< float, 4 > ( exported_class_t::*cross_function_type )( ::cv::Vec< float, 4 > const & ) const;
            
            Vec4f_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Vec< float, 4 >::cross )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< float, 4 >::ddot
        
            typedef cv::Vec< float, 4 > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Vec< float, 4 > const & ) const;
            
            Vec4f_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Vec< float, 4 >::ddot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< float, 4 >::dot
        
            typedef cv::Vec< float, 4 > exported_class_t;
            typedef float ( exported_class_t::*dot_function_type )( ::cv::Vec< float, 4 > const & ) const;
            
            Vec4f_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Vec< float, 4 >::dot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< float, 4 >::operator[]
        
            typedef cv::Vec< float, 4 > exported_class_t;
            typedef float ( exported_class_t::*__getitem___function_type )( int ) const;
            
            Vec4f_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< float, 4 >::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::cv::Vec< float, 4 >::operator[]
        
            typedef cv::Vec< float, 4 > exported_class_t;
            typedef float & ( exported_class_t::*__getitem___function_type )( int ) ;
            
            Vec4f_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< float, 4 >::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        Vec4f_exposer.staticmethod( "all" );
        Vec4f_exposer.def("from_ndarray", &bp::from_ndarray< cv::Vec4f > );
        Vec4f_exposer.staticmethod("from_ndarray");
        Vec4f_exposer.add_property("ndarray", &bp::as_ndarray< cv::Vec4f >);
    }

}
