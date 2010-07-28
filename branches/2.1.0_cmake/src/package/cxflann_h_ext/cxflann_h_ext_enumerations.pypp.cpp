// This file has been generated by Py++.

#include "boost/python.hpp"
#include "cxflann_h_wrapper.hpp"
#include "cxflann_h_ext_enumerations.pypp.hpp"

namespace bp = boost::python;

void register_enumerations(){

    bp::enum_< CvStatus>("CvStatus")
        .value("CV_BADMEMBLOCK_ERR", CV_BADMEMBLOCK_ERR)
        .value("CV_INPLACE_NOT_SUPPORTED_ERR", CV_INPLACE_NOT_SUPPORTED_ERR)
        .value("CV_UNMATCHED_ROI_ERR", CV_UNMATCHED_ROI_ERR)
        .value("CV_NOTFOUND_ERR", CV_NOTFOUND_ERR)
        .value("CV_BADCONVERGENCE_ERR", CV_BADCONVERGENCE_ERR)
        .value("CV_BADDEPTH_ERR", CV_BADDEPTH_ERR)
        .value("CV_BADROI_ERR", CV_BADROI_ERR)
        .value("CV_BADHEADER_ERR", CV_BADHEADER_ERR)
        .value("CV_UNMATCHED_FORMATS_ERR", CV_UNMATCHED_FORMATS_ERR)
        .value("CV_UNSUPPORTED_COI_ERR", CV_UNSUPPORTED_COI_ERR)
        .value("CV_UNSUPPORTED_CHANNELS_ERR", CV_UNSUPPORTED_CHANNELS_ERR)
        .value("CV_UNSUPPORTED_DEPTH_ERR", CV_UNSUPPORTED_DEPTH_ERR)
        .value("CV_UNSUPPORTED_FORMAT_ERR", CV_UNSUPPORTED_FORMAT_ERR)
        .value("CV_BADARG_ERR", CV_BADARG_ERR)
        .value("CV_NOTDEFINED_ERR", CV_NOTDEFINED_ERR)
        .value("CV_BADCHANNELS_ERR", CV_BADCHANNELS_ERR)
        .value("CV_BADRANGE_ERR", CV_BADRANGE_ERR)
        .value("CV_BADSTEP_ERR", CV_BADSTEP_ERR)
        .value("CV_BADFLAG_ERR", CV_BADFLAG_ERR)
        .value("CV_DIV_BY_ZERO_ERR", CV_DIV_BY_ZERO_ERR)
        .value("CV_BADCOEF_ERR", CV_BADCOEF_ERR)
        .value("CV_BADFACTOR_ERR", CV_BADFACTOR_ERR)
        .value("CV_BADPOINT_ERR", CV_BADPOINT_ERR)
        .value("CV_BADSCALE_ERR", CV_BADSCALE_ERR)
        .value("CV_OUTOFMEM_ERR", CV_OUTOFMEM_ERR)
        .value("CV_NULLPTR_ERR", CV_NULLPTR_ERR)
        .value("CV_BADSIZE_ERR", CV_BADSIZE_ERR)
        .value("CV_NO_ERR", CV_NO_ERR)
        .value("CV_OK", CV_OK)
        .export_values()
        ;

    bp::enum_< cv::flann::flann_algorithm_t>("flann_algorithm_t")
        .value("LINEAR", cv::flann::LINEAR)
        .value("KDTREE", cv::flann::KDTREE)
        .value("KMEANS", cv::flann::KMEANS)
        .value("COMPOSITE", cv::flann::COMPOSITE)
        .value("SAVED", cv::flann::SAVED)
        .value("AUTOTUNED", cv::flann::AUTOTUNED)
        .export_values()
        ;

    bp::enum_< cv::flann::flann_centers_init_t>("flann_centers_init_t")
        .value("CENTERS_RANDOM", cv::flann::CENTERS_RANDOM)
        .value("CENTERS_GONZALES", cv::flann::CENTERS_GONZALES)
        .value("CENTERS_KMEANSPP", cv::flann::CENTERS_KMEANSPP)
        .export_values()
        ;

    bp::enum_< cv::flann::flann_distance_t>("flann_distance_t")
        .value("EUCLIDEAN", cv::flann::EUCLIDEAN)
        .value("MANHATTAN", cv::flann::MANHATTAN)
        .value("MINKOWSKI", cv::flann::MINKOWSKI)
        .export_values()
        ;

    bp::enum_< cv::flann::flann_log_level_t>("flann_log_level_t")
        .value("LOG_NONE", cv::flann::LOG_NONE)
        .value("LOG_FATAL", cv::flann::LOG_FATAL)
        .value("LOG_ERROR", cv::flann::LOG_ERROR)
        .value("LOG_WARN", cv::flann::LOG_WARN)
        .value("LOG_INFO", cv::flann::LOG_INFO)
        .export_values()
        ;

}
