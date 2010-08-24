// This file has been generated by Py++.

#include "boost/python.hpp"

#include "__array_1.pypp.hpp"

#include "boost/python/suite/indexing/vector_indexing_suite.hpp"

#include "__ctypes_integration.pypp.hpp"

#include "cxtypes_h_wrapper.hpp"

#include "cxtypes_h_ext/cxtypes_h_ext_classes_1.pypp.hpp"

#include "cxtypes_h_ext/cxtypes_h_ext_classes_2.pypp.hpp"

#include "cxtypes_h_ext/cxtypes_h_ext_classes_3.pypp.hpp"

#include "cxtypes_h_ext/cxtypes_h_ext_enumerations.pypp.hpp"

#include "cxtypes_h_ext/cxtypes_h_ext_free_functions.pypp.hpp"

#include "cxtypes_h_ext/cxtypes_h_ext_global_variables.pypp.hpp"

namespace bp = boost::python;

struct CvRNG_to_python
{
    static PyObject* convert(CvRNG const& x)
    {
        return bp::incref(bp::object(cv::RNG(x)).ptr());
    }
};

BOOST_PYTHON_MODULE(cxtypes_h_ext){
    register_enumerations();

    bp::to_python_converter<CvRNG, CvRNG_to_python, false>();

    register_classes_1();

    register_classes_2();

    register_classes_3();

    register_global_variables();

    register_free_functions();
}
