// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "MSER.pypp.hpp"

namespace bp = boost::python;

static boost::python::object __call___3db7f85e36cc2236e94ccc0caba03336( ::cv::MSER const & inst, ::cv::Mat const & image, ::cv::Mat const & mask ){
    std::vector<std::vector<cv::Point_<int> > > msers2;
    inst.operator()(image, msers2, mask);
    return bp::object( msers2 );
}

void register_MSER_class(){

    bp::class_< cv::MSER, bp::bases< CvMSERParams > >( "MSER", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::MSER >() )    
        .def( bp::init< int, int, int, float, float, int, double, double, int >(( bp::arg("_delta"), bp::arg("_min_area"), bp::arg("_max_area"), bp::arg("_max_variation"), bp::arg("_min_diversity"), bp::arg("_max_evolution"), bp::arg("_area_threshold"), bp::arg("_min_margin"), bp::arg("_edge_blur_size") )) )    
        .def( 
            "__call__"
            , (boost::python::object (*)( cv::MSER const &,cv::Mat const &,cv::Mat const & ))( &__call___3db7f85e36cc2236e94ccc0caba03336 )
            , ( bp::arg("inst"), bp::arg("image"), bp::arg("mask") )
            , "\nWrapped function:"
    "\n    operator()"
    "\nArgument 'msers':"\
    "\n    C/C++ type: ::std::vector< std::vector< cv::Point_<int> > > &."\
    "\n    Python type: vector_vector_Point2i."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nReturns:"\
    "\n    msers" );

}