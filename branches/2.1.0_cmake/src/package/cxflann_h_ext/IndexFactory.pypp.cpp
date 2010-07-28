// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "cxflann_h_wrapper.hpp"
#include "IndexFactory.pypp.hpp"

namespace bp = boost::python;

struct IndexFactory_wrapper : cv::flann::IndexFactory, bp::wrapper< cv::flann::IndexFactory > {

    IndexFactory_wrapper()
    : cv::flann::IndexFactory()
      , bp::wrapper< cv::flann::IndexFactory >(){
        // null constructor
        
    }

    virtual ::flann::Index * createIndex( ::cv::Mat const & dataset ) const {
        bp::override func_createIndex = this->get_override( "createIndex" );
        return func_createIndex( boost::ref(dataset) );
    }

};

void register_IndexFactory_class(){

    bp::class_< IndexFactory_wrapper, boost::noncopyable >( "IndexFactory" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::flann::IndexFactory >() )    
        .def( 
            "createIndex"
            , bp::pure_virtual( (::flann::Index * ( cv::flann::IndexFactory::* )( ::cv::Mat const & ) const)(&::cv::flann::IndexFactory::createIndex) )
            , ( bp::arg("dataset") )
            , bp::return_value_policy< bp::reference_existing_object >() );

}
