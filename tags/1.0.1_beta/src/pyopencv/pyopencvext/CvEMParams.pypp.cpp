// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvEMParams.pypp.hpp"

namespace bp = boost::python;

struct CvEMParams_wrapper : CvEMParams, bp::wrapper< CvEMParams > {

    CvEMParams_wrapper(CvEMParams const & arg )
    : CvEMParams( arg )
      , bp::wrapper< CvEMParams >(){
        // copy constructor
        
    }

    CvEMParams_wrapper( )
    : CvEMParams( )
      , bp::wrapper< CvEMParams >(){
        // null constructor
    
    }

    cv::Mat probs_as_Mat;
    CvMat probs_as_CvMat;
    void set_probs(cv::Mat const &new_probs)
    {
        probs_as_Mat = new_probs; // to keep a reference to probs
        probs_as_CvMat = probs_as_Mat; // to ensure probs points to a valid CvMat
        probs = &probs_as_CvMat;
    }
    cv::Mat & get_probs()
    {
        if(probs != &probs_as_CvMat) set_probs(cv::Mat(probs));
        return probs_as_Mat;
    }

    cv::Mat weights_as_Mat;
    CvMat weights_as_CvMat;
    void set_weights(cv::Mat const &new_weights)
    {
        weights_as_Mat = new_weights; // to keep a reference to weights
        weights_as_CvMat = weights_as_Mat; // to ensure weights points to a valid CvMat
        weights = &weights_as_CvMat;
    }
    cv::Mat & get_weights()
    {
        if(weights != &weights_as_CvMat) set_weights(cv::Mat(weights));
        return weights_as_Mat;
    }

    cv::Mat means_as_Mat;
    CvMat means_as_CvMat;
    void set_means(cv::Mat const &new_means)
    {
        means_as_Mat = new_means; // to keep a reference to means
        means_as_CvMat = means_as_Mat; // to ensure means points to a valid CvMat
        means = &means_as_CvMat;
    }
    cv::Mat & get_means()
    {
        if(means != &means_as_CvMat) set_means(cv::Mat(means));
        return means_as_Mat;
    }

    cv::TermCriteria get_term_crit() { return cv::TermCriteria(term_crit); }
    void set_term_crit(cv::TermCriteria const &_term_crit) { term_crit = _term_crit; }

    CvEMParams_wrapper(int _nclusters, int _cov_mat_type, int _start_step)
        : CvEMParams(_nclusters, _cov_mat_type, _start_step), bp::wrapper< CvEMParams >() { }

};

void register_CvEMParams_class(){

    bp::class_< CvEMParams_wrapper >( "CvEMParams", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvEMParams >() )    
        .def_readwrite( "cov_mat_type", &CvEMParams::cov_mat_type )    
        .def_readwrite( "nclusters", &CvEMParams::nclusters )    
        .def_readwrite( "start_step", &CvEMParams::start_step )    
        .add_property( "probs", bp::make_function(&::CvEMParams_wrapper::get_probs, bp::return_internal_reference<>()),
        &::CvEMParams_wrapper::set_probs)    
        .add_property( "weights", bp::make_function(&::CvEMParams_wrapper::get_weights, bp::return_internal_reference<>()),
        &::CvEMParams_wrapper::set_weights)    
        .add_property( "means", bp::make_function(&::CvEMParams_wrapper::get_means, bp::return_internal_reference<>()),
        &::CvEMParams_wrapper::set_means)    
        .add_property( "term_crit", &::CvEMParams_wrapper::get_term_crit, &::CvEMParams_wrapper::set_term_crit)    
        .def( bp::init< int, int, int >(( bp::arg("_nclusters"), bp::arg("_cov_mat_type")=1, bp::arg("_start_step")=0 )) );

}
