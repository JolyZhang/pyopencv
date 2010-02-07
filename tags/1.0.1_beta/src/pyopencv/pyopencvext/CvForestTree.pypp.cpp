// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvForestTree.pypp.hpp"

namespace bp = boost::python;

struct CvForestTree_wrapper : CvForestTree, bp::wrapper< CvForestTree > {

    CvForestTree_wrapper(CvForestTree const & arg )
    : CvForestTree( arg )
      , bp::wrapper< CvForestTree >(){
        // copy constructor
        
    }

    CvForestTree_wrapper( )
    : CvForestTree( )
      , bp::wrapper< CvForestTree >(){
        // null constructor
    
    }

    virtual int get_var_count(  ) const  {
        if( bp::override func_get_var_count = this->get_override( "get_var_count" ) )
            return func_get_var_count(  );
        else{
            return this->CvForestTree::get_var_count(  );
        }
    }
    
    int default_get_var_count(  ) const  {
        return CvForestTree::get_var_count( );
    }

    virtual void read( ::CvFileStorage * fs, ::CvFileNode * node, ::CvRTrees * forest, ::CvDTreeTrainData * _data ) {
        namespace bpl = boost::python;
        if( bpl::override func_read = this->get_override( "read" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read.ptr(), fs, node, forest, _data );
        }
        else{
            CvForestTree::read( boost::python::ptr(fs), boost::python::ptr(node), boost::python::ptr(forest), boost::python::ptr(_data) );
        }
    }
    
    static void default_read_8d6757d6bbd70f87efa21a9a88d7b91b( ::CvForestTree & inst, ::cv::FileStorage & fs, ::cv::FileNode & node, ::CvRTrees * forest, ::CvDTreeTrainData * _data ){
        if( dynamic_cast< CvForestTree_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvForestTree::read(fs.fs, *(node), forest, _data);
        }
        else{
            inst.read(fs.fs, *(node), forest, _data);
        }
    }

    virtual void read( ::CvFileStorage * fs, ::CvFileNode * node ) {
        namespace bpl = boost::python;
        if( bpl::override func_read = this->get_override( "read" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read.ptr(), fs, node );
        }
        else{
            CvForestTree::read( boost::python::ptr(fs), boost::python::ptr(node) );
        }
    }
    
    static void default_read_21f4d9d118da24ef774e945ac72443bf( ::CvForestTree & inst, ::cv::FileStorage & fs, ::cv::FileNode & node ){
        if( dynamic_cast< CvForestTree_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvForestTree::read(fs.fs, *(node));
        }
        else{
            inst.read(fs.fs, *(node));
        }
    }

    virtual void read( ::CvFileStorage * fs, ::CvFileNode * node, ::CvDTreeTrainData * data ) {
        namespace bpl = boost::python;
        if( bpl::override func_read = this->get_override( "read" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read.ptr(), fs, node, data );
        }
        else{
            CvForestTree::read( boost::python::ptr(fs), boost::python::ptr(node), boost::python::ptr(data) );
        }
    }
    
    static void default_read_f1eddefe30282eed3e835c344b312841( ::CvForestTree & inst, ::cv::FileStorage & fs, ::cv::FileNode & node, ::CvDTreeTrainData * data ){
        if( dynamic_cast< CvForestTree_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvForestTree::read(fs.fs, *(node), data);
        }
        else{
            inst.read(fs.fs, *(node), data);
        }
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->CvDTree::clear(  );
        }
    }
    
    void default_clear(  ) {
        CvDTree::clear( );
    }

    virtual void load( char const * filename, char const * name=0 ) {
        if( bp::override func_load = this->get_override( "load" ) )
            func_load( filename, name );
        else{
            this->CvStatModel::load( filename, name );
        }
    }
    
    void default_load( char const * filename, char const * name=0 ) {
        CvStatModel::load( filename, name );
    }

    virtual ::CvDTreeNode * predict( ::cv::Mat const & _sample, ::cv::Mat const & _missing_data_mask=cv::Mat(), bool preprocessed_input=false ) const  {
        if( bp::override func_predict = this->get_override( "predict" ) )
            return func_predict( boost::ref(_sample), boost::ref(_missing_data_mask), preprocessed_input );
        else{
            return this->CvDTree::predict( boost::ref(_sample), boost::ref(_missing_data_mask), preprocessed_input );
        }
    }
    
    ::CvDTreeNode * default_predict( ::cv::Mat const & _sample, ::cv::Mat const & _missing_data_mask=cv::Mat(), bool preprocessed_input=false ) const  {
        return CvDTree::predict( boost::ref(_sample), boost::ref(_missing_data_mask), preprocessed_input );
    }

    virtual void save( char const * filename, char const * name=0 ) const  {
        if( bp::override func_save = this->get_override( "save" ) )
            func_save( filename, name );
        else{
            this->CvStatModel::save( filename, name );
        }
    }
    
    void default_save( char const * filename, char const * name=0 ) const  {
        CvStatModel::save( filename, name );
    }

    virtual bool train( ::CvMLData * _data, ::CvDTreeParams _params=::CvDTreeParams( ) ) {
        if( bp::override func_train = this->get_override( "train" ) )
            return func_train( boost::python::ptr(_data), _params );
        else{
            return this->CvDTree::train( boost::python::ptr(_data), _params );
        }
    }
    
    bool default_train( ::CvMLData * _data, ::CvDTreeParams _params=::CvDTreeParams( ) ) {
        return CvDTree::train( boost::python::ptr(_data), _params );
    }

    virtual bool train( ::cv::Mat const & _train_data, int _tflag, ::cv::Mat const & _responses, ::cv::Mat const & _var_idx=cv::Mat(), ::cv::Mat const & _sample_idx=cv::Mat(), ::cv::Mat const & _var_type=cv::Mat(), ::cv::Mat const & _missing_mask=cv::Mat(), ::CvDTreeParams params=::CvDTreeParams( ) ) {
        if( bp::override func_train = this->get_override( "train" ) )
            return func_train( boost::ref(_train_data), _tflag, boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), boost::ref(_var_type), boost::ref(_missing_mask), params );
        else{
            return this->CvDTree::train( boost::ref(_train_data), _tflag, boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), boost::ref(_var_type), boost::ref(_missing_mask), params );
        }
    }
    
    bool default_train( ::cv::Mat const & _train_data, int _tflag, ::cv::Mat const & _responses, ::cv::Mat const & _var_idx=cv::Mat(), ::cv::Mat const & _sample_idx=cv::Mat(), ::cv::Mat const & _var_type=cv::Mat(), ::cv::Mat const & _missing_mask=cv::Mat(), ::CvDTreeParams params=::CvDTreeParams( ) ) {
        return CvDTree::train( boost::ref(_train_data), _tflag, boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), boost::ref(_var_type), boost::ref(_missing_mask), params );
    }

    virtual void write( ::CvFileStorage * fs, char const * name ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_write = this->get_override( "write" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_write.ptr(), fs, name );
        }
        else{
            CvDTree::write( boost::python::ptr(fs), name );
        }
    }
    
    static void default_write_d5b05f94ebb65d268cbd4756fe0d6221( ::CvDTree const & inst, ::cv::FileStorage & fs, char const * name ){
        if( dynamic_cast< CvForestTree_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvDTree::write(fs.fs, name);
        }
        else{
            inst.write(fs.fs, name);
        }
    }

    virtual void write( ::CvFileStorage * fs ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_write = this->get_override( "write" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_write.ptr(), fs );
        }
        else{
            CvDTree::write( boost::python::ptr(fs) );
        }
    }
    
    static void default_write_d1e064f966d50e01902f80ef0f045741( ::CvDTree const & inst, ::cv::FileStorage & fs ){
        if( dynamic_cast< CvForestTree_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvDTree::write(fs.fs);
        }
        else{
            inst.write(fs.fs);
        }
    }

};

void register_CvForestTree_class(){

    bp::class_< CvForestTree_wrapper, bp::bases< CvDTree > >( "CvForestTree", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvForestTree >() )    
        .def( 
            "get_var_count"
            , (int ( ::CvForestTree::* )(  ) const)(&::CvForestTree::get_var_count)
            , (int ( CvForestTree_wrapper::* )(  ) const)(&CvForestTree_wrapper::default_get_var_count) )    
        .def( 
            "read_8d6757d6bbd70f87efa21a9a88d7b91b"
            , (void (*)( ::CvForestTree &,::cv::FileStorage &,::cv::FileNode &,::CvRTrees *,::CvDTreeTrainData * ))( &CvForestTree_wrapper::default_read_8d6757d6bbd70f87efa21a9a88d7b91b )
            , ( bp::arg("inst"), bp::arg("fs"), bp::arg("node"), bp::arg("forest"), bp::arg("_data") ) )    
        .def( 
            "read_21f4d9d118da24ef774e945ac72443bf"
            , (void (*)( ::CvForestTree &,::cv::FileStorage &,::cv::FileNode & ))( &CvForestTree_wrapper::default_read_21f4d9d118da24ef774e945ac72443bf )
            , ( bp::arg("inst"), bp::arg("fs"), bp::arg("node") ) )    
        .def( 
            "read_f1eddefe30282eed3e835c344b312841"
            , (void (*)( ::CvForestTree &,::cv::FileStorage &,::cv::FileNode &,::CvDTreeTrainData * ))( &CvForestTree_wrapper::default_read_f1eddefe30282eed3e835c344b312841 )
            , ( bp::arg("inst"), bp::arg("fs"), bp::arg("node"), bp::arg("data") ) )    
        .def( 
            "clear"
            , (void ( ::CvDTree::* )(  ) )(&::CvDTree::clear)
            , (void ( CvForestTree_wrapper::* )(  ) )(&CvForestTree_wrapper::default_clear) )    
        .def( 
            "load"
            , (void ( ::CvStatModel::* )( char const *,char const * ) )(&::CvStatModel::load)
            , (void ( CvForestTree_wrapper::* )( char const *,char const * ) )(&CvForestTree_wrapper::default_load)
            , ( bp::arg("filename"), bp::arg("name")=bp::object() ) )    
        .def( 
            "predict"
            , (::CvDTreeNode * ( ::CvDTree::* )( ::cv::Mat const &,::cv::Mat const &,bool ) const)(&::CvDTree::predict)
            , (::CvDTreeNode * ( CvForestTree_wrapper::* )( ::cv::Mat const &,::cv::Mat const &,bool ) const)(&CvForestTree_wrapper::default_predict)
            , ( bp::arg("_sample"), bp::arg("_missing_data_mask")=cv::Mat(), bp::arg("preprocessed_input")=(bool)(false) )
            , bp::return_internal_reference< >() )    
        .def( 
            "save"
            , (void ( ::CvStatModel::* )( char const *,char const * ) const)(&::CvStatModel::save)
            , (void ( CvForestTree_wrapper::* )( char const *,char const * ) const)(&CvForestTree_wrapper::default_save)
            , ( bp::arg("filename"), bp::arg("name")=bp::object() ) )    
        .def( 
            "train"
            , (bool ( ::CvDTree::* )( ::CvMLData *,::CvDTreeParams ) )(&::CvDTree::train)
            , (bool ( CvForestTree_wrapper::* )( ::CvMLData *,::CvDTreeParams ) )(&CvForestTree_wrapper::default_train)
            , ( bp::arg("_data"), bp::arg("_params")=::CvDTreeParams( ) ) )    
        .def( 
            "train"
            , (bool ( ::CvDTree::* )( ::cv::Mat const &,int,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::CvDTreeParams ) )(&::CvDTree::train)
            , (bool ( CvForestTree_wrapper::* )( ::cv::Mat const &,int,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::CvDTreeParams ) )(&CvForestTree_wrapper::default_train)
            , ( bp::arg("_train_data"), bp::arg("_tflag"), bp::arg("_responses"), bp::arg("_var_idx")=cv::Mat(), bp::arg("_sample_idx")=cv::Mat(), bp::arg("_var_type")=cv::Mat(), bp::arg("_missing_mask")=cv::Mat(), bp::arg("params")=::CvDTreeParams( ) ) )    
        .def( 
            "write_d5b05f94ebb65d268cbd4756fe0d6221"
            , (void (*)( ::CvDTree const &,::cv::FileStorage &,char const * ))( &CvForestTree_wrapper::default_write_d5b05f94ebb65d268cbd4756fe0d6221 )
            , ( bp::arg("inst"), bp::arg("fs"), bp::arg("name") ) )    
        .def( 
            "write_d1e064f966d50e01902f80ef0f045741"
            , (void (*)( ::CvDTree const &,::cv::FileStorage & ))( &CvForestTree_wrapper::default_write_d1e064f966d50e01902f80ef0f045741 )
            , ( bp::arg("inst"), bp::arg("fs") ) );

}
