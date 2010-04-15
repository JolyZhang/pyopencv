// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "opencv_converters.hpp"
#include "PlanarObjectDetector.pypp.hpp"

namespace bp = boost::python;

struct PlanarObjectDetector_wrapper : cv::PlanarObjectDetector, bp::wrapper< cv::PlanarObjectDetector > {

    PlanarObjectDetector_wrapper(cv::PlanarObjectDetector const & arg )
    : cv::PlanarObjectDetector( arg )
      , bp::wrapper< cv::PlanarObjectDetector >(){
        // copy constructor
        
    }

    PlanarObjectDetector_wrapper( )
    : cv::PlanarObjectDetector( )
      , bp::wrapper< cv::PlanarObjectDetector >(){
        // null constructor
    
    }

    PlanarObjectDetector_wrapper(::cv::FileNode const & node )
    : cv::PlanarObjectDetector( boost::ref(node) )
      , bp::wrapper< cv::PlanarObjectDetector >(){
        // constructor
    
    }

    static boost::python::object __call___4ace94e257458a02821c3e23f229be80( ::cv::PlanarObjectDetector const & inst, ::cv::Mat const & image, ::cv::Mat & H, cv::Mat & corners ){
        ::std::vector< cv::Point_<float> > corners2;
        convert_from_Mat_to_vector_of_T(corners, corners2);
        bool result = inst.operator()(image, H, corners2);
        convert_from_vector_of_T_to_Mat(corners2, corners);
        return bp::object( result );
    }

    virtual void train( ::std::vector< cv::Mat > const & pyr, int _npoints=300, int _patchSize=cv::FernClassifier::PATCH_SIZE, int _nstructs=cv::FernClassifier::DEFAULT_STRUCTS, int _structSize=cv::FernClassifier::DEFAULT_STRUCT_SIZE, int _nviews=cv::FernClassifier::DEFAULT_VIEWS, ::cv::LDetector const & detector=cv::LDetector(), ::cv::PatchGenerator const & patchGenerator=cv::PatchGenerator() ) {
        namespace bpl = boost::python;
        if( bpl::override func_train = this->get_override( "train" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_train.ptr(), pyr, _npoints, _patchSize, _nstructs, _structSize, _nviews, detector, patchGenerator );
        }
        else{
            cv::PlanarObjectDetector::train( boost::ref(pyr), _npoints, _patchSize, _nstructs, _structSize, _nviews, boost::ref(detector), boost::ref(patchGenerator) );
        }
    }
    
    static void default_train_54eace8da687689cec07018f6937568f( ::cv::PlanarObjectDetector & inst, bp::list const & pyr, int _npoints=300, int _patchSize=cv::FernClassifier::PATCH_SIZE, int _nstructs=cv::FernClassifier::DEFAULT_STRUCTS, int _structSize=cv::FernClassifier::DEFAULT_STRUCT_SIZE, int _nviews=cv::FernClassifier::DEFAULT_VIEWS, ::cv::LDetector const & detector=cv::LDetector(), ::cv::PatchGenerator const & patchGenerator=cv::PatchGenerator() ){
        ::std::vector< cv::Mat > pyr2;
        convert_from_object_to_T(pyr, pyr2);
        if( dynamic_cast< PlanarObjectDetector_wrapper * >( boost::addressof( inst ) ) ){
            inst.::cv::PlanarObjectDetector::train(pyr2, _npoints, _patchSize, _nstructs, _structSize, _nviews, detector, patchGenerator);
        }
        else{
            inst.train(pyr2, _npoints, _patchSize, _nstructs, _structSize, _nviews, detector, patchGenerator);
        }
    }

    virtual void train( ::std::vector< cv::Mat > const & pyr, ::std::vector< cv::KeyPoint > const & keypoints, int _patchSize=cv::FernClassifier::PATCH_SIZE, int _nstructs=cv::FernClassifier::DEFAULT_STRUCTS, int _structSize=cv::FernClassifier::DEFAULT_STRUCT_SIZE, int _nviews=cv::FernClassifier::DEFAULT_VIEWS, ::cv::LDetector const & detector=cv::LDetector(), ::cv::PatchGenerator const & patchGenerator=cv::PatchGenerator() ) {
        namespace bpl = boost::python;
        if( bpl::override func_train = this->get_override( "train" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_train.ptr(), pyr, keypoints, _patchSize, _nstructs, _structSize, _nviews, detector, patchGenerator );
        }
        else{
            cv::PlanarObjectDetector::train( boost::ref(pyr), boost::ref(keypoints), _patchSize, _nstructs, _structSize, _nviews, boost::ref(detector), boost::ref(patchGenerator) );
        }
    }
    
    static void default_train_397cef68f28ef0598cf4d0402f508184( ::cv::PlanarObjectDetector & inst, bp::list const & pyr, bp::list const & keypoints, int _patchSize=cv::FernClassifier::PATCH_SIZE, int _nstructs=cv::FernClassifier::DEFAULT_STRUCTS, int _structSize=cv::FernClassifier::DEFAULT_STRUCT_SIZE, int _nviews=cv::FernClassifier::DEFAULT_VIEWS, ::cv::LDetector const & detector=cv::LDetector(), ::cv::PatchGenerator const & patchGenerator=cv::PatchGenerator() ){
        ::std::vector< cv::Mat > pyr2;
        ::std::vector< cv::KeyPoint > keypoints2;
        convert_from_object_to_T(pyr, pyr2);
        convert_from_object_to_T(keypoints, keypoints2);
        if( dynamic_cast< PlanarObjectDetector_wrapper * >( boost::addressof( inst ) ) ){
            inst.::cv::PlanarObjectDetector::train(pyr2, keypoints2, _patchSize, _nstructs, _structSize, _nviews, detector, patchGenerator);
        }
        else{
            inst.train(pyr2, keypoints2, _patchSize, _nstructs, _structSize, _nviews, detector, patchGenerator);
        }
    }

};

static boost::shared_ptr<cv::PlanarObjectDetector> PlanarObjectDetector_init1(bp::list const & pyr, int _npoints=300, int _patchSize=cv::FernClassifier::PATCH_SIZE, int _nstructs=cv::FernClassifier::DEFAULT_STRUCTS, int _structSize=cv::FernClassifier::DEFAULT_STRUCT_SIZE, int _nviews=cv::FernClassifier::DEFAULT_VIEWS, ::cv::LDetector const & detector=cv::LDetector(), ::cv::PatchGenerator const & patchGenerator=cv::PatchGenerator() ){
    std::vector<cv::Mat, std::allocator<cv::Mat> > pyr2;
    convert_from_object_to_T(pyr, pyr2);
    return boost::shared_ptr<cv::PlanarObjectDetector>(
        new cv::PlanarObjectDetector(pyr2, _npoints, _patchSize, _nstructs, _structSize, _nviews, detector, patchGenerator));
}

void register_PlanarObjectDetector_class(){

    { //::cv::PlanarObjectDetector
        typedef bp::class_< PlanarObjectDetector_wrapper > PlanarObjectDetector_exposer_t;
        PlanarObjectDetector_exposer_t PlanarObjectDetector_exposer = PlanarObjectDetector_exposer_t( "PlanarObjectDetector", bp::init< >() );
        bp::scope PlanarObjectDetector_scope( PlanarObjectDetector_exposer );
        PlanarObjectDetector_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::PlanarObjectDetector >() );
        PlanarObjectDetector_exposer.def( bp::init< cv::FileNode const & >(( bp::arg("node") )) );
        bp::implicitly_convertible< cv::FileNode const &, cv::PlanarObjectDetector >();
        { //::cv::PlanarObjectDetector::getModelPoints
        
            typedef ::std::vector< cv::KeyPoint > ( ::cv::PlanarObjectDetector::*getModelPoints_function_type )(  ) const;
            
            PlanarObjectDetector_exposer.def( 
                "getModelPoints"
                , getModelPoints_function_type( &::cv::PlanarObjectDetector::getModelPoints ) );
        
        }
        { //::cv::PlanarObjectDetector::operator()
        
            typedef boost::python::object ( *__call___function_type )( ::cv::PlanarObjectDetector const &,::cv::Mat const &,::cv::Mat &,cv::Mat & );
            
            PlanarObjectDetector_exposer.def( 
                "__call__"
                , __call___function_type( &PlanarObjectDetector_wrapper::__call___4ace94e257458a02821c3e23f229be80 )
                , ( bp::arg("inst"), bp::arg("image"), bp::arg("H"), bp::arg("corners") )
                , "\nWrapped function:"
    "\n    operator()"
    "\nArgument 'corners':"\
    "\n    C/C++ type: ::std::vector< cv::Point_<float> > &."\
    "\n    Python type: Mat."\
    "\n    Invoke asMat() to convert a 1D Python sequence into a Mat, e.g. "\
    "\n    asMat([0,1,2]) or asMat((0,1,2))." );
        
        }
        { //::cv::PlanarObjectDetector::read
        
            typedef void ( ::cv::PlanarObjectDetector::*read_function_type )( ::cv::FileNode const & ) ;
            
            PlanarObjectDetector_exposer.def( 
                "read"
                , read_function_type( &::cv::PlanarObjectDetector::read )
                , ( bp::arg("node") ) );
        
        }
        { //::cv::PlanarObjectDetector::setVerbose
        
            typedef void ( ::cv::PlanarObjectDetector::*setVerbose_function_type )( bool ) ;
            
            PlanarObjectDetector_exposer.def( 
                "setVerbose"
                , setVerbose_function_type( &::cv::PlanarObjectDetector::setVerbose )
                , ( bp::arg("verbose") ) );
        
        }
        { //::cv::PlanarObjectDetector::train
        
            typedef void ( *default_train_54eace8da687689cec07018f6937568f_function_type )( ::cv::PlanarObjectDetector &,bp::list const &,int,int,int,int,int,::cv::LDetector const &,::cv::PatchGenerator const & );
            
            PlanarObjectDetector_exposer.def( 
                "train_54eace8da687689cec07018f6937568f"
                , default_train_54eace8da687689cec07018f6937568f_function_type( &PlanarObjectDetector_wrapper::default_train_54eace8da687689cec07018f6937568f )
                , ( bp::arg("inst"), bp::arg("pyr"), bp::arg("_npoints")=(int)(300), bp::arg("_patchSize")=(int)(cv::FernClassifier::PATCH_SIZE), bp::arg("_nstructs")=(int)(cv::FernClassifier::DEFAULT_STRUCTS), bp::arg("_structSize")=(int)(cv::FernClassifier::DEFAULT_STRUCT_SIZE), bp::arg("_nviews")=(int)(cv::FernClassifier::DEFAULT_VIEWS), bp::arg("detector")=cv::LDetector(), bp::arg("patchGenerator")=cv::PatchGenerator() )
                , "\nWrapped function:"
    "\n    train"
    "\nArgument 'pyr':"\
    "\n    C/C++ type: ::std::vector< cv::Mat > const &."\
    "\n    Python type: list of Mat, e.g. [Mat(), Mat(), Mat()]." );
        
        }
        { //::cv::PlanarObjectDetector::train
        
            typedef void ( *default_train_397cef68f28ef0598cf4d0402f508184_function_type )( ::cv::PlanarObjectDetector &,bp::list const &,bp::list const &,int,int,int,int,::cv::LDetector const &,::cv::PatchGenerator const & );
            
            PlanarObjectDetector_exposer.def( 
                "train_397cef68f28ef0598cf4d0402f508184"
                , default_train_397cef68f28ef0598cf4d0402f508184_function_type( &PlanarObjectDetector_wrapper::default_train_397cef68f28ef0598cf4d0402f508184 )
                , ( bp::arg("inst"), bp::arg("pyr"), bp::arg("keypoints"), bp::arg("_patchSize")=(int)(cv::FernClassifier::PATCH_SIZE), bp::arg("_nstructs")=(int)(cv::FernClassifier::DEFAULT_STRUCTS), bp::arg("_structSize")=(int)(cv::FernClassifier::DEFAULT_STRUCT_SIZE), bp::arg("_nviews")=(int)(cv::FernClassifier::DEFAULT_VIEWS), bp::arg("detector")=cv::LDetector(), bp::arg("patchGenerator")=cv::PatchGenerator() )
                , "\nWrapped function:"
    "\n    train"
    "\nArgument 'pyr':"\
    "\n    C/C++ type: ::std::vector< cv::Mat > const &."\
    "\n    Python type: list of Mat, e.g. [Mat(), Mat(), Mat()]."\
    "\nArgument 'keypoints':"\
    "\n    C/C++ type: ::std::vector< cv::KeyPoint > const &."\
    "\n    Python type: list."\
    "\n    To convert a Mat into a list, invoke one of Mat's member functions "\
    "\n    to_list_of_...()." );
        
        }
        { //::cv::PlanarObjectDetector::write
        
            typedef void ( ::cv::PlanarObjectDetector::*write_function_type )( ::cv::FileStorage &,::cv::String const & ) const;
            
            PlanarObjectDetector_exposer.def( 
                "write"
                , write_function_type( &::cv::PlanarObjectDetector::write )
                , ( bp::arg("fs"), bp::arg("name")=std::string() ) );
        
        }
        PlanarObjectDetector_exposer.def("__init__", bp::make_constructor(&PlanarObjectDetector_init1, bp::default_call_policies(), ( bp::arg("pyr"), bp::arg("_npoints")=(int)(300), bp::arg("_patchSize")=(int)(cv::FernClassifier::PATCH_SIZE), bp::arg("_nstructs")=(int)(cv::FernClassifier::DEFAULT_STRUCTS), bp::arg("_structSize")=(int)(cv::FernClassifier::DEFAULT_STRUCT_SIZE), bp::arg("_nviews")=(int)(cv::FernClassifier::DEFAULT_VIEWS), bp::arg("detector")=cv::LDetector(), bp::arg("patchGenerator")=cv::PatchGenerator() )) );
    }

}
