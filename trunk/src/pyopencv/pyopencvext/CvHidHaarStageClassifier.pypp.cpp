// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "boost/python/list.hpp"
#include "boost/python/tuple.hpp"
#include "CvHidHaarStageClassifier.pypp.hpp"

namespace bp = boost::python;

static bp::object get_classifier( CvHidHaarStageClassifier const & inst ){
    bp::list l;
    for(int i = 0; i < inst.count; ++i)
        l.append(inst.classifier[i]);
    return bp::tuple(l);
}

static ::CvHidHaarStageClassifier * get_next( ::CvHidHaarStageClassifier const & inst ) { return inst.next; }

static ::CvHidHaarStageClassifier * get_parent( ::CvHidHaarStageClassifier const & inst ) { return inst.parent; }

static ::CvHidHaarStageClassifier * get_child( ::CvHidHaarStageClassifier const & inst ) { return inst.child; }

void register_CvHidHaarStageClassifier_class(){

    bp::class_< CvHidHaarStageClassifier >( "CvHidHaarStageClassifier" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvHidHaarStageClassifier >() )    
        .def_readwrite( "count", &CvHidHaarStageClassifier::count )    
        .def_readwrite( "threshold", &CvHidHaarStageClassifier::threshold )    
        .def_readwrite( "two_rects", &CvHidHaarStageClassifier::two_rects )    
        .add_property( "classifier", &::get_classifier )    
        .add_property( "next", bp::make_function(&::get_next, bp::return_internal_reference<>()) )    
        .add_property( "parent", bp::make_function(&::get_parent, bp::return_internal_reference<>()) )    
        .add_property( "child", bp::make_function(&::get_child, bp::return_internal_reference<>()) );

}
