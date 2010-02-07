// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "FilterEngine.pypp.hpp"

namespace bp = boost::python;

void register_FilterEngine_class(){

    bp::class_< cv::FilterEngine >( "FilterEngine" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::FilterEngine >() );

}
