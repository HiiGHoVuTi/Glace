/* Generated code for Python module 'pyreadline3.console.ansi'
 * created by Nuitka version 0.6.13.2
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pyreadline3$console$ansi" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyreadline3$console$ansi;
PyDictObject *moduledict_pyreadline3$console$ansi;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[121];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "pyreadline3.console.ansi");

    constants_created = true;
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyreadline3$console$ansi(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "pyreadline3.console.ansi");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_33f5de27b07d732cb23bc43237be5e34;
static PyCodeObject *codeobj_222af483563644b0a426544e42cc6e6a;
static PyCodeObject *codeobj_0c3807609ad20e8c9aa13670adba85ca;
static PyCodeObject *codeobj_90be76dbda3b7ce17cf374e629503bfd;
static PyCodeObject *codeobj_525059cc2f973cdef37fabac2af1060b;
static PyCodeObject *codeobj_935fe44a2cd7800203ae4d6170874f2c;
static PyCodeObject *codeobj_4924f6d339cad690a700eb811ea0e250;
static PyCodeObject *codeobj_05f54fe803269d1e52b4e075f74fd5e6;
static PyCodeObject *codeobj_668324715f0f294f7e7bcb779634cc96;
static PyCodeObject *codeobj_5ff7918d353a0d978ec645785501427a;
static PyCodeObject *codeobj_358a888d978db128a9e2e33a2c787fb9;
static PyCodeObject *codeobj_8b144c7f8d56aee837be054db0cbe968;
static PyCodeObject *codeobj_29dbca113e8b27bca85cdf6c3d0af9db;
static PyCodeObject *codeobj_ba4fa88d32345c1062a079e6e103dfab;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[58]; CHECK_OBJECT(module_filename_obj);
    codeobj_33f5de27b07d732cb23bc43237be5e34 = MAKE_CODEOBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[108], mod_consts[109], NULL, 1, 0, 0);
    codeobj_222af483563644b0a426544e42cc6e6a = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[110], NULL, NULL, 0, 0, 0);
    codeobj_0c3807609ad20e8c9aa13670adba85ca = MAKE_CODEOBJECT(module_filename_obj, 12, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[19], mod_consts[111], NULL, 0, 0, 0);
    codeobj_90be76dbda3b7ce17cf374e629503bfd = MAKE_CODEOBJECT(module_filename_obj, 74, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[50], mod_consts[111], NULL, 0, 0, 0);
    codeobj_525059cc2f973cdef37fabac2af1060b = MAKE_CODEOBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[84], mod_consts[112], NULL, 6, 0, 0);
    codeobj_935fe44a2cd7800203ae4d6170874f2c = MAKE_CODEOBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[84], mod_consts[113], NULL, 2, 0, 0);
    codeobj_4924f6d339cad690a700eb811ea0e250 = MAKE_CODEOBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[96], mod_consts[114], NULL, 1, 0, 0);
    codeobj_05f54fe803269d1e52b4e075f74fd5e6 = MAKE_CODEOBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[21], mod_consts[115], NULL, 1, 0, 0);
    codeobj_668324715f0f294f7e7bcb779634cc96 = MAKE_CODEOBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[91], mod_consts[116], NULL, 1, 0, 0);
    codeobj_5ff7918d353a0d978ec645785501427a = MAKE_CODEOBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[105], mod_consts[117], NULL, 3, 0, 0);
    codeobj_358a888d978db128a9e2e33a2c787fb9 = MAKE_CODEOBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[93], mod_consts[116], NULL, 2, 0, 0);
    codeobj_8b144c7f8d56aee837be054db0cbe968 = MAKE_CODEOBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[48], mod_consts[118], NULL, 3, 0, 0);
    codeobj_29dbca113e8b27bca85cdf6c3d0af9db = MAKE_CODEOBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[48], mod_consts[119], NULL, 2, 0, 0);
    codeobj_ba4fa88d32345c1062a079e6e103dfab = MAKE_CODEOBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[107], mod_consts[120], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__10_write_color_old(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__2_get_winattr();


static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__3_set_winattr();


static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__4___repr__();


static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__5_copy();


static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__6___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__7_write_color(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__8_parse_color(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__9_write_color(PyObject *defaults);


// The module function definitions.
static PyObject *impl_pyreadline3$console$ansi$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bold = python_pars[1];
    PyObject *par_inverse = python_pars[2];
    PyObject *par_color = python_pars[3];
    PyObject *par_background = python_pars[4];
    PyObject *par_backgroundbold = python_pars[5];
    struct Nuitka_FrameObject *frame_525059cc2f973cdef37fabac2af1060b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_525059cc2f973cdef37fabac2af1060b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_525059cc2f973cdef37fabac2af1060b)) {
        Py_XDECREF(cache_frame_525059cc2f973cdef37fabac2af1060b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_525059cc2f973cdef37fabac2af1060b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_525059cc2f973cdef37fabac2af1060b = MAKE_FUNCTION_FRAME(codeobj_525059cc2f973cdef37fabac2af1060b, module_pyreadline3$console$ansi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_525059cc2f973cdef37fabac2af1060b->m_type_description == NULL);
    frame_525059cc2f973cdef37fabac2af1060b = cache_frame_525059cc2f973cdef37fabac2af1060b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_525059cc2f973cdef37fabac2af1060b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_525059cc2f973cdef37fabac2af1060b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_bold);
        tmp_assattr_name_1 = par_bold;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_inverse);
        tmp_assattr_name_2 = par_inverse;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_color);
        tmp_assattr_name_3 = par_color;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_background);
        tmp_assattr_name_4 = par_background;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[3], tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_backgroundbold);
        tmp_assattr_name_5 = par_backgroundbold;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[4], tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_525059cc2f973cdef37fabac2af1060b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_525059cc2f973cdef37fabac2af1060b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_525059cc2f973cdef37fabac2af1060b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_525059cc2f973cdef37fabac2af1060b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_525059cc2f973cdef37fabac2af1060b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_525059cc2f973cdef37fabac2af1060b,
        type_description_1,
        par_self,
        par_bold,
        par_inverse,
        par_color,
        par_background,
        par_backgroundbold
    );


    // Release cached frame if used for exception.
    if (frame_525059cc2f973cdef37fabac2af1060b == cache_frame_525059cc2f973cdef37fabac2af1060b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_525059cc2f973cdef37fabac2af1060b);
        cache_frame_525059cc2f973cdef37fabac2af1060b = NULL;
    }

    assertFrameObject(frame_525059cc2f973cdef37fabac2af1060b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_bold);
    Py_DECREF(par_bold);
    par_bold = NULL;
    CHECK_OBJECT(par_inverse);
    Py_DECREF(par_inverse);
    par_inverse = NULL;
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    par_color = NULL;
    CHECK_OBJECT(par_background);
    Py_DECREF(par_background);
    par_background = NULL;
    CHECK_OBJECT(par_backgroundbold);
    Py_DECREF(par_backgroundbold);
    par_backgroundbold = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_bold);
    Py_DECREF(par_bold);
    par_bold = NULL;
    CHECK_OBJECT(par_inverse);
    Py_DECREF(par_inverse);
    par_inverse = NULL;
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    par_color = NULL;
    CHECK_OBJECT(par_background);
    Py_DECREF(par_background);
    par_background = NULL;
    CHECK_OBJECT(par_backgroundbold);
    Py_DECREF(par_backgroundbold);
    par_backgroundbold = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline3$console$ansi$$$function__2_get_winattr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_attr = NULL;
    struct Nuitka_FrameObject *frame_668324715f0f294f7e7bcb779634cc96;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_668324715f0f294f7e7bcb779634cc96 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[5];
        assert(var_attr == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_attr = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_668324715f0f294f7e7bcb779634cc96)) {
        Py_XDECREF(cache_frame_668324715f0f294f7e7bcb779634cc96);

#if _DEBUG_REFCOUNTS
        if (cache_frame_668324715f0f294f7e7bcb779634cc96 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_668324715f0f294f7e7bcb779634cc96 = MAKE_FUNCTION_FRAME(codeobj_668324715f0f294f7e7bcb779634cc96, module_pyreadline3$console$ansi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_668324715f0f294f7e7bcb779634cc96->m_type_description == NULL);
    frame_668324715f0f294f7e7bcb779634cc96 = cache_frame_668324715f0f294f7e7bcb779634cc96;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_668324715f0f294f7e7bcb779634cc96);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_668324715f0f294f7e7bcb779634cc96) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(var_attr);
        tmp_left_name_1 = var_attr;
        tmp_right_name_1 = mod_consts[6];
        tmp_result = BINARY_OPERATION_BITOR_LONG_LONG_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        assert(!(tmp_result == false));
        tmp_assign_source_2 = tmp_left_name_1;
        var_attr = tmp_assign_source_2;

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[4]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(var_attr);
        tmp_left_name_2 = var_attr;
        tmp_right_name_2 = mod_consts[8];
        tmp_result = BINARY_OPERATION_BITOR_LONG_LONG_INPLACE(&tmp_left_name_2, tmp_right_name_2);
        assert(!(tmp_result == false));
        tmp_assign_source_3 = tmp_left_name_2;
        var_attr = tmp_assign_source_3;

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[1]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        if (var_attr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_3 = var_attr;
        tmp_right_name_3 = mod_consts[10];
        tmp_result = BINARY_OPERATION_BITOR_LONG_LONG_INPLACE(&tmp_left_name_3, tmp_right_name_3);
        assert(!(tmp_result == false));
        tmp_assign_source_4 = tmp_left_name_3;
        var_attr = tmp_assign_source_4;

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_expression_name_6;
        if (var_attr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_4 = var_attr;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[11]);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_expression_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[2]);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_4);

            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_4);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_BITOR_LONG_OBJECT_INPLACE(&tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = tmp_left_name_4;
        var_attr = tmp_assign_source_5;

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT(var_attr);
        tmp_left_name_5 = var_attr;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_expression_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[11]);
        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_expression_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = par_self;
        tmp_subscript_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[3]);
        if (tmp_subscript_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_7);

            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_7);
        Py_DECREF(tmp_subscript_name_2);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = mod_consts[12];
        tmp_right_name_5 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_left_name_6);
        if (tmp_right_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_BITOR_OBJECT_OBJECT_INPLACE(&tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_right_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = tmp_left_name_5;
        var_attr = tmp_assign_source_6;

    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_668324715f0f294f7e7bcb779634cc96);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_668324715f0f294f7e7bcb779634cc96);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_668324715f0f294f7e7bcb779634cc96, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_668324715f0f294f7e7bcb779634cc96->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_668324715f0f294f7e7bcb779634cc96, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_668324715f0f294f7e7bcb779634cc96,
        type_description_1,
        par_self,
        var_attr
    );


    // Release cached frame if used for exception.
    if (frame_668324715f0f294f7e7bcb779634cc96 == cache_frame_668324715f0f294f7e7bcb779634cc96) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_668324715f0f294f7e7bcb779634cc96);
        cache_frame_668324715f0f294f7e7bcb779634cc96 = NULL;
    }

    assertFrameObject(frame_668324715f0f294f7e7bcb779634cc96);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_attr);
    tmp_return_value = var_attr;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(var_attr);
    Py_DECREF(var_attr);
    var_attr = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_attr);
    var_attr = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline3$console$ansi$$$function__3_set_winattr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_attr = python_pars[1];
    struct Nuitka_FrameObject *frame_358a888d978db128a9e2e33a2c787fb9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_358a888d978db128a9e2e33a2c787fb9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_358a888d978db128a9e2e33a2c787fb9)) {
        Py_XDECREF(cache_frame_358a888d978db128a9e2e33a2c787fb9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_358a888d978db128a9e2e33a2c787fb9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_358a888d978db128a9e2e33a2c787fb9 = MAKE_FUNCTION_FRAME(codeobj_358a888d978db128a9e2e33a2c787fb9, module_pyreadline3$console$ansi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_358a888d978db128a9e2e33a2c787fb9->m_type_description == NULL);
    frame_358a888d978db128a9e2e33a2c787fb9 = cache_frame_358a888d978db128a9e2e33a2c787fb9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_358a888d978db128a9e2e33a2c787fb9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_358a888d978db128a9e2e33a2c787fb9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_value_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_attr);
        tmp_left_name_1 = par_attr;
        tmp_right_name_1 = mod_consts[6];
        tmp_value_name_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_value_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_name_1);
        Py_DECREF(tmp_value_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_value_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_assattr_target_2;
        if (par_attr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = par_attr;
        tmp_right_name_2 = mod_consts[8];
        tmp_value_name_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_2);
        if (tmp_value_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_name_2);
        Py_DECREF(tmp_value_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_value_name_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_assattr_target_3;
        if (par_attr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_3 = par_attr;
        tmp_right_name_3 = mod_consts[10];
        tmp_value_name_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_3, tmp_right_name_3);
        if (tmp_value_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_name_3);
        Py_DECREF(tmp_value_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_3 = (tmp_res != 0) ? Py_True : Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[1], tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[13]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_attr == NULL) {
            Py_DECREF(tmp_expression_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_4 = par_attr;
        tmp_right_name_4 = mod_consts[14];
        tmp_subscript_name_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_4, tmp_right_name_4);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_1);

            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[2], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_assattr_target_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[13]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_attr == NULL) {
            Py_DECREF(tmp_expression_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_6 = par_attr;
        tmp_right_name_5 = mod_consts[15];
        tmp_left_name_5 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_6, tmp_right_name_5);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_3);

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = mod_consts[12];
        tmp_subscript_name_2 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_left_name_5, tmp_right_name_6);
        Py_DECREF(tmp_left_name_5);
        if (tmp_subscript_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_3);

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_3);
        Py_DECREF(tmp_subscript_name_2);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[3], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_358a888d978db128a9e2e33a2c787fb9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_358a888d978db128a9e2e33a2c787fb9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_358a888d978db128a9e2e33a2c787fb9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_358a888d978db128a9e2e33a2c787fb9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_358a888d978db128a9e2e33a2c787fb9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_358a888d978db128a9e2e33a2c787fb9,
        type_description_1,
        par_self,
        par_attr
    );


    // Release cached frame if used for exception.
    if (frame_358a888d978db128a9e2e33a2c787fb9 == cache_frame_358a888d978db128a9e2e33a2c787fb9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_358a888d978db128a9e2e33a2c787fb9);
        cache_frame_358a888d978db128a9e2e33a2c787fb9 = NULL;
    }

    assertFrameObject(frame_358a888d978db128a9e2e33a2c787fb9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_attr);
    par_attr = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_attr);
    par_attr = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline3$console$ansi$$$function__4___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4924f6d339cad690a700eb811ea0e250;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4924f6d339cad690a700eb811ea0e250 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4924f6d339cad690a700eb811ea0e250)) {
        Py_XDECREF(cache_frame_4924f6d339cad690a700eb811ea0e250);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4924f6d339cad690a700eb811ea0e250 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4924f6d339cad690a700eb811ea0e250 = MAKE_FUNCTION_FRAME(codeobj_4924f6d339cad690a700eb811ea0e250, module_pyreadline3$console$ansi, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4924f6d339cad690a700eb811ea0e250->m_type_description == NULL);
    frame_4924f6d339cad690a700eb811ea0e250 = cache_frame_4924f6d339cad690a700eb811ea0e250;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4924f6d339cad690a700eb811ea0e250);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4924f6d339cad690a700eb811ea0e250) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        tmp_left_name_1 = mod_consts[16];
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyTuple_New(6);
        {
            PyObject *tmp_expression_name_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_expression_name_3;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_expression_name_4;
            PyObject *tmp_expression_name_5;
            PyObject *tmp_expression_name_6;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 54;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[1]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
            tmp_left_name_2 = mod_consts[17];
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 54;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_3 = par_self;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[2]);
            if (tmp_right_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
            Py_DECREF(tmp_right_name_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 2, tmp_tuple_element_1);
            tmp_left_name_3 = mod_consts[17];
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 55;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_4 = par_self;
            tmp_right_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[3]);
            if (tmp_right_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_3);
            Py_DECREF(tmp_right_name_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 3, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 55;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_5 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[4]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 4, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 56;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_6 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[18]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 5, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4924f6d339cad690a700eb811ea0e250);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4924f6d339cad690a700eb811ea0e250);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4924f6d339cad690a700eb811ea0e250);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4924f6d339cad690a700eb811ea0e250, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4924f6d339cad690a700eb811ea0e250->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4924f6d339cad690a700eb811ea0e250, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4924f6d339cad690a700eb811ea0e250,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4924f6d339cad690a700eb811ea0e250 == cache_frame_4924f6d339cad690a700eb811ea0e250) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4924f6d339cad690a700eb811ea0e250);
        cache_frame_4924f6d339cad690a700eb811ea0e250 = NULL;
    }

    assertFrameObject(frame_4924f6d339cad690a700eb811ea0e250);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline3$console$ansi$$$function__5_copy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_x = NULL;
    struct Nuitka_FrameObject *frame_05f54fe803269d1e52b4e075f74fd5e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_05f54fe803269d1e52b4e075f74fd5e6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_05f54fe803269d1e52b4e075f74fd5e6)) {
        Py_XDECREF(cache_frame_05f54fe803269d1e52b4e075f74fd5e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05f54fe803269d1e52b4e075f74fd5e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05f54fe803269d1e52b4e075f74fd5e6 = MAKE_FUNCTION_FRAME(codeobj_05f54fe803269d1e52b4e075f74fd5e6, module_pyreadline3$console$ansi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_05f54fe803269d1e52b4e075f74fd5e6->m_type_description == NULL);
    frame_05f54fe803269d1e52b4e075f74fd5e6 = cache_frame_05f54fe803269d1e52b4e075f74fd5e6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_05f54fe803269d1e52b4e075f74fd5e6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_05f54fe803269d1e52b4e075f74fd5e6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_05f54fe803269d1e52b4e075f74fd5e6->m_frame.f_lineno = 59;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_assattr_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_assattr_target_1 = var_x;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_assattr_target_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_assattr_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[1]);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_assattr_target_2 = var_x;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_assattr_target_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_assattr_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[2]);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_assattr_target_3 = var_x;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_assattr_target_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_assattr_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[3]);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_assattr_target_4 = var_x;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[3], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_assattr_target_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_assattr_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[4]);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_assattr_target_5 = var_x;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[4], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_05f54fe803269d1e52b4e075f74fd5e6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_05f54fe803269d1e52b4e075f74fd5e6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_05f54fe803269d1e52b4e075f74fd5e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05f54fe803269d1e52b4e075f74fd5e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05f54fe803269d1e52b4e075f74fd5e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05f54fe803269d1e52b4e075f74fd5e6,
        type_description_1,
        par_self,
        var_x
    );


    // Release cached frame if used for exception.
    if (frame_05f54fe803269d1e52b4e075f74fd5e6 == cache_frame_05f54fe803269d1e52b4e075f74fd5e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_05f54fe803269d1e52b4e075f74fd5e6);
        cache_frame_05f54fe803269d1e52b4e075f74fd5e6 = NULL;
    }

    assertFrameObject(frame_05f54fe803269d1e52b4e075f74fd5e6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_x);
    tmp_return_value = var_x;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(var_x);
    Py_DECREF(var_x);
    var_x = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline3$console$ansi$$$function__6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_default = python_pars[1];
    struct Nuitka_FrameObject *frame_935fe44a2cd7800203ae4d6170874f2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_935fe44a2cd7800203ae4d6170874f2c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_935fe44a2cd7800203ae4d6170874f2c)) {
        Py_XDECREF(cache_frame_935fe44a2cd7800203ae4d6170874f2c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_935fe44a2cd7800203ae4d6170874f2c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_935fe44a2cd7800203ae4d6170874f2c = MAKE_FUNCTION_FRAME(codeobj_935fe44a2cd7800203ae4d6170874f2c, module_pyreadline3$console$ansi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_935fe44a2cd7800203ae4d6170874f2c->m_type_description == NULL);
    frame_935fe44a2cd7800203ae4d6170874f2c = cache_frame_935fe44a2cd7800203ae4d6170874f2c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_935fe44a2cd7800203ae4d6170874f2c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_935fe44a2cd7800203ae4d6170874f2c) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        tmp_isinstance_inst_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_isinstance_inst_1 == NULL)) {
            tmp_isinstance_inst_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_default);
        tmp_assattr_name_1 = par_default;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[20], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_assattr_target_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_935fe44a2cd7800203ae4d6170874f2c->m_frame.f_lineno = 79;
        tmp_assattr_name_2 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[20], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_name_1;
        tmp_assattr_name_3 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_assattr_name_3 == NULL)) {
            tmp_assattr_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[20]);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[18], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_935fe44a2cd7800203ae4d6170874f2c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_935fe44a2cd7800203ae4d6170874f2c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_935fe44a2cd7800203ae4d6170874f2c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_935fe44a2cd7800203ae4d6170874f2c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_935fe44a2cd7800203ae4d6170874f2c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_935fe44a2cd7800203ae4d6170874f2c,
        type_description_1,
        par_self,
        par_default
    );


    // Release cached frame if used for exception.
    if (frame_935fe44a2cd7800203ae4d6170874f2c == cache_frame_935fe44a2cd7800203ae4d6170874f2c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_935fe44a2cd7800203ae4d6170874f2c);
        cache_frame_935fe44a2cd7800203ae4d6170874f2c = NULL;
    }

    assertFrameObject(frame_935fe44a2cd7800203ae4d6170874f2c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    par_default = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    par_default = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline3$console$ansi$$$function__7_write_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_text = python_pars[1];
    PyObject *par_attr = python_pars[2];
    PyObject *var_defaultstate = NULL;
    PyObject *var_chunks = NULL;
    PyObject *var_n = NULL;
    PyObject *var_res = NULL;
    PyObject *var_chunk = NULL;
    PyObject *var_m = NULL;
    PyObject *var_parts = NULL;
    PyObject *var_part = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_2__comparison_result = NULL;
    PyObject *tmp_comparison_chain_2__operand_2 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8b144c7f8d56aee837be054db0cbe968;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8b144c7f8d56aee837be054db0cbe968 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8b144c7f8d56aee837be054db0cbe968)) {
        Py_XDECREF(cache_frame_8b144c7f8d56aee837be054db0cbe968);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b144c7f8d56aee837be054db0cbe968 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b144c7f8d56aee837be054db0cbe968 = MAKE_FUNCTION_FRAME(codeobj_8b144c7f8d56aee837be054db0cbe968, module_pyreadline3$console$ansi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8b144c7f8d56aee837be054db0cbe968->m_type_description == NULL);
    frame_8b144c7f8d56aee837be054db0cbe968 = cache_frame_8b144c7f8d56aee837be054db0cbe968;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8b144c7f8d56aee837be054db0cbe968);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8b144c7f8d56aee837be054db0cbe968) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_attr);
        tmp_isinstance_inst_1 = par_attr;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_attr);
        tmp_assign_source_1 = par_attr;
        assert(var_defaultstate == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_defaultstate = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_attr);
        tmp_compexpr_left_1 = par_attr;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[20]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8b144c7f8d56aee837be054db0cbe968->m_frame.f_lineno = 90;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[21]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_attr;
            assert(old != NULL);
            par_attr = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8b144c7f8d56aee837be054db0cbe968->m_frame.f_lineno = 92;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_defaultstate == NULL);
        var_defaultstate = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_attr);
        tmp_assattr_name_1 = par_attr;
        CHECK_OBJECT(var_defaultstate);
        tmp_assattr_target_1 = var_defaultstate;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(var_defaultstate);
        tmp_assign_source_4 = var_defaultstate;
        {
            PyObject *old = par_attr;
            assert(old != NULL);
            par_attr = tmp_assign_source_4;
            Py_INCREF(par_attr);
            Py_DECREF(old);
        }

    }
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_args_element_name_1 = par_text;
        frame_8b144c7f8d56aee837be054db0cbe968->m_frame.f_lineno = 95;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[23], tmp_args_element_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_chunks == NULL);
        var_chunks = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[5];
        assert(var_n == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_n = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = PyList_New(0);
        assert(var_res == NULL);
        var_res = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_chunks);
        tmp_iter_arg_1 = var_chunks;
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooo";
                exception_lineno = 98;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_chunk;
            var_chunk = tmp_assign_source_10;
            Py_INCREF(var_chunk);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_chunk);
        tmp_args_element_name_2 = var_chunk;
        frame_8b144c7f8d56aee837be054db0cbe968->m_frame.f_lineno = 99;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[25], tmp_args_element_name_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_m;
            var_m = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_m);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_m);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(var_m);
        tmp_called_instance_5 = var_m;
        frame_8b144c7f8d56aee837be054db0cbe968->m_frame.f_lineno = 101;
        tmp_called_instance_4 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_5,
            mod_consts[26],
            &PyTuple_GET_ITEM(mod_consts[27], 0)
        );

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_8b144c7f8d56aee837be054db0cbe968->m_frame.f_lineno = 101;
        tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_4,
            mod_consts[23],
            &PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_parts;
            var_parts = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_and_left_value_1_object_1;
        int tmp_truth_name_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tmp_and_right_value_1_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_parts);
        tmp_len_arg_1 = var_parts;
        tmp_compexpr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_2 = mod_consts[29];
        tmp_tmp_and_left_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        assert(!(tmp_tmp_and_left_value_1_object_1 == NULL));
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_and_left_value_1_object_1);
        assert(!(tmp_truth_name_2 == -1));
        tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_left_value_1_object_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (var_parts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_2 = var_parts;
        tmp_subscript_name_1 = mod_consts[5];
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_1, 0);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_3 = mod_consts[31];
        tmp_tmp_and_right_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_tmp_and_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_and_right_value_1_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_1_object_1);

            exception_lineno = 102;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_right_value_1_object_1);
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_name_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_3 = par_self;
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[20]);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_8b144c7f8d56aee837be054db0cbe968->m_frame.f_lineno = 103;
        tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[21]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_attr;
            par_attr = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    goto loop_start_1;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_2;
        if (var_parts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 105;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_iter_arg_2 = var_parts;
        tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_15 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooo";
                exception_lineno = 105;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_16 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_part;
            var_part = tmp_assign_source_16;
            Py_INCREF(var_part);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tmp_condition_result_5_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_part);
        tmp_compexpr_left_4 = var_part;
        tmp_compexpr_right_4 = mod_consts[31];
        tmp_tmp_condition_result_5_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_tmp_condition_result_5_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_5_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_5_object_1);

            exception_lineno = 106;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_5_object_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_name_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_4 = par_self;
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[20]);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        frame_8b144c7f8d56aee837be054db0cbe968->m_frame.f_lineno = 107;
        tmp_assign_source_17 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[21]);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = par_attr;
            par_attr = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_False;
        CHECK_OBJECT(par_attr);
        tmp_assattr_target_2 = par_attr;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[0], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_tmp_condition_result_6_object_1;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_part);
        tmp_compexpr_left_5 = var_part;
        tmp_compexpr_right_5 = mod_consts[32];
        tmp_tmp_condition_result_6_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_tmp_condition_result_6_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_tmp_condition_result_6_object_1);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_6_object_1);

            exception_lineno = 109;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_6 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_6_object_1);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = Py_True;
        if (par_attr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }

        tmp_assattr_target_3 = par_attr;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[1], tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_tmp_condition_result_7_object_1;
        int tmp_truth_name_6;
        CHECK_OBJECT(var_part);
        tmp_compexpr_left_6 = var_part;
        tmp_compexpr_right_6 = mod_consts[33];
        tmp_tmp_condition_result_7_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        if (tmp_tmp_condition_result_7_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_tmp_condition_result_7_object_1);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_7_object_1);

            exception_lineno = 112;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_7 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_7_object_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_True;
        if (par_attr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 113;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }

        tmp_assattr_target_4 = par_attr;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[0], tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_tmp_and_left_value_2_object_1;
        int tmp_truth_name_7;
        PyObject *tmp_outline_return_value_1;
        int tmp_truth_name_8;
        CHECK_OBJECT(var_part);
        tmp_len_arg_2 = var_part;
        tmp_compexpr_left_7 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_compexpr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_7 = mod_consts[34];
        tmp_tmp_and_left_value_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
        Py_DECREF(tmp_compexpr_left_7);
        assert(!(tmp_tmp_and_left_value_2_object_1 == NULL));
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_tmp_and_left_value_2_object_1);
        assert(!(tmp_truth_name_7 == -1));
        tmp_and_left_value_2 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_left_value_2_object_1);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        {
            PyObject *tmp_assign_source_18;
            if (var_part == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 114;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }

            tmp_assign_source_18 = var_part;
            {
                PyObject *old = tmp_comparison_chain_1__operand_2;
                tmp_comparison_chain_1__operand_2 = tmp_assign_source_18;
                Py_INCREF(tmp_comparison_chain_1__operand_2);
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            tmp_compexpr_left_8 = mod_consts[36];
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_right_8 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_19 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_comparison_chain_1__comparison_result;
                tmp_comparison_chain_1__comparison_result = tmp_assign_source_19;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_name_1 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_4;
            }
            tmp_condition_result_9 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_outline_return_value_1);
        goto try_return_handler_4;
        branch_no_9:;
        {
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_left_9 = tmp_comparison_chain_1__operand_2;
            tmp_compexpr_right_9 = mod_consts[37];
            tmp_outline_return_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
            if (tmp_outline_return_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_4;
            }
            goto try_return_handler_4;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_outline_return_value_1);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_outline_return_value_1);

            exception_lineno = 114;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_and_right_value_2 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_1);
        tmp_condition_result_8 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_8 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_assattr_target_5;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        if (var_part == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 115;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }

        tmp_int_arg_1 = var_part;
        tmp_left_name_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_1 = mod_consts[38];
        tmp_subscript_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_subscript_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assattr_name_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_2);
        Py_DECREF(tmp_subscript_name_2);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        if (par_attr == NULL) {
            Py_DECREF(tmp_assattr_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 115;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }

        tmp_assattr_target_5 = par_attr;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[2], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_tmp_and_left_value_3_object_1;
        int tmp_truth_name_9;
        PyObject *tmp_outline_return_value_2;
        int tmp_truth_name_10;
        if (var_part == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }

        tmp_len_arg_3 = var_part;
        tmp_compexpr_left_10 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_compexpr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_10 = mod_consts[34];
        tmp_tmp_and_left_value_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_10, tmp_compexpr_right_10);
        Py_DECREF(tmp_compexpr_left_10);
        assert(!(tmp_tmp_and_left_value_3_object_1 == NULL));
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_tmp_and_left_value_3_object_1);
        assert(!(tmp_truth_name_9 == -1));
        tmp_and_left_value_3 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_left_value_3_object_1);
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        {
            PyObject *tmp_assign_source_20;
            if (var_part == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 116;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_3;
            }

            tmp_assign_source_20 = var_part;
            {
                PyObject *old = tmp_comparison_chain_2__operand_2;
                tmp_comparison_chain_2__operand_2 = tmp_assign_source_20;
                Py_INCREF(tmp_comparison_chain_2__operand_2);
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            tmp_compexpr_left_11 = mod_consts[39];
            CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
            tmp_compexpr_right_11 = tmp_comparison_chain_2__operand_2;
            tmp_assign_source_21 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_11, tmp_compexpr_right_11);
            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_comparison_chain_2__comparison_result;
                tmp_comparison_chain_2__comparison_result = tmp_assign_source_21;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_operand_name_2;
            CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
            tmp_operand_name_2 = tmp_comparison_chain_2__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_5;
            }
            tmp_condition_result_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
        }
        branch_yes_11:;
        CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
        tmp_outline_return_value_2 = tmp_comparison_chain_2__comparison_result;
        Py_INCREF(tmp_outline_return_value_2);
        goto try_return_handler_5;
        branch_no_11:;
        {
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
            tmp_compexpr_left_12 = tmp_comparison_chain_2__operand_2;
            tmp_compexpr_right_12 = mod_consts[40];
            tmp_outline_return_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_12, tmp_compexpr_right_12);
            if (tmp_outline_return_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_5;
            }
            goto try_return_handler_5;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
        Py_DECREF(tmp_comparison_chain_2__operand_2);
        tmp_comparison_chain_2__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
        Py_DECREF(tmp_comparison_chain_2__comparison_result);
        tmp_comparison_chain_2__comparison_result = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
        Py_DECREF(tmp_comparison_chain_2__operand_2);
        tmp_comparison_chain_2__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_2__comparison_result);
        tmp_comparison_chain_2__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_outline_return_value_2);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_outline_return_value_2);

            exception_lineno = 116;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_and_right_value_3 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_2);
        tmp_condition_result_10 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_10 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_assattr_target_6;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        if (var_part == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }

        tmp_int_arg_2 = var_part;
        tmp_left_name_2 = PyNumber_Int(tmp_int_arg_2);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_2 = mod_consts[41];
        tmp_subscript_name_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        if (tmp_subscript_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assattr_name_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_3);
        Py_DECREF(tmp_subscript_name_3);
        if (tmp_assattr_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        if (par_attr == NULL) {
            Py_DECREF(tmp_assattr_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }

        tmp_assattr_target_6 = par_attr;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[42], tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
    }
    branch_no_10:;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 105;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    goto loop_start_1;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_len_arg_4;
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_3 = var_n;
        if (var_chunk == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_len_arg_4 = var_chunk;
        tmp_right_name_3 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_ADD_LONG_LONG_INPLACE(&tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        assert(!(tmp_result == false));
        tmp_assign_source_22 = tmp_left_name_3;
        var_n = tmp_assign_source_22;

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_8;
        if (var_res == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_7 = var_res;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[46]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        if (par_attr == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_8 = par_attr;
        frame_8b144c7f8d56aee837be054db0cbe968->m_frame.f_lineno = 121;
        tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[21]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 121;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_element_name_3, 0, tmp_tuple_element_1);
        if (var_chunk == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "ooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_chunk;
        PyTuple_SET_ITEM0(tmp_args_element_name_3, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_8b144c7f8d56aee837be054db0cbe968->m_frame.f_lineno = 121;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 98;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_tuple_element_2;
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_n;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        if (var_res == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "ooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = var_res;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8b144c7f8d56aee837be054db0cbe968);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8b144c7f8d56aee837be054db0cbe968);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8b144c7f8d56aee837be054db0cbe968);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b144c7f8d56aee837be054db0cbe968, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b144c7f8d56aee837be054db0cbe968->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b144c7f8d56aee837be054db0cbe968, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b144c7f8d56aee837be054db0cbe968,
        type_description_1,
        par_self,
        par_text,
        par_attr,
        var_defaultstate,
        var_chunks,
        var_n,
        var_res,
        var_chunk,
        var_m,
        var_parts,
        var_part
    );


    // Release cached frame if used for exception.
    if (frame_8b144c7f8d56aee837be054db0cbe968 == cache_frame_8b144c7f8d56aee837be054db0cbe968) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8b144c7f8d56aee837be054db0cbe968);
        cache_frame_8b144c7f8d56aee837be054db0cbe968 = NULL;
    }

    assertFrameObject(frame_8b144c7f8d56aee837be054db0cbe968);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_text);
    par_text = NULL;
    Py_XDECREF(par_attr);
    par_attr = NULL;
    Py_XDECREF(var_defaultstate);
    var_defaultstate = NULL;
    Py_XDECREF(var_chunks);
    var_chunks = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
    Py_XDECREF(var_chunk);
    var_chunk = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_parts);
    var_parts = NULL;
    Py_XDECREF(var_part);
    var_part = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_text);
    par_text = NULL;
    Py_XDECREF(par_attr);
    par_attr = NULL;
    Py_XDECREF(var_defaultstate);
    var_defaultstate = NULL;
    Py_XDECREF(var_chunks);
    var_chunks = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
    Py_XDECREF(var_chunk);
    var_chunk = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_parts);
    var_parts = NULL;
    Py_XDECREF(var_part);
    var_part = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline3$console$ansi$$$function__8_parse_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_text = python_pars[1];
    PyObject *par_attr = python_pars[2];
    PyObject *var_n = NULL;
    PyObject *var_res = NULL;
    PyObject *outline_0_var_attr = NULL;
    PyObject *outline_0_var_text = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5ff7918d353a0d978ec645785501427a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_33f5de27b07d732cb23bc43237be5e34_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_33f5de27b07d732cb23bc43237be5e34_2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_5ff7918d353a0d978ec645785501427a = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5ff7918d353a0d978ec645785501427a)) {
        Py_XDECREF(cache_frame_5ff7918d353a0d978ec645785501427a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5ff7918d353a0d978ec645785501427a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5ff7918d353a0d978ec645785501427a = MAKE_FUNCTION_FRAME(codeobj_5ff7918d353a0d978ec645785501427a, module_pyreadline3$console$ansi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5ff7918d353a0d978ec645785501427a->m_type_description == NULL);
    frame_5ff7918d353a0d978ec645785501427a = cache_frame_5ff7918d353a0d978ec645785501427a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5ff7918d353a0d978ec645785501427a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5ff7918d353a0d978ec645785501427a) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_text);
        tmp_args_element_name_1 = par_text;
        CHECK_OBJECT(par_attr);
        tmp_args_element_name_2 = par_attr;
        frame_5ff7918d353a0d978ec645785501427a->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[48],
                call_args
            );
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 125;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 125;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 125;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[49];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 125;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_n == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_n = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_res == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_res = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_n);
        tmp_tuple_element_1 = var_n;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(var_res);
            tmp_iter_arg_2 = var_res;
            tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_7;
        }
        if (isFrameUnusable(cache_frame_33f5de27b07d732cb23bc43237be5e34_2)) {
            Py_XDECREF(cache_frame_33f5de27b07d732cb23bc43237be5e34_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_33f5de27b07d732cb23bc43237be5e34_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_33f5de27b07d732cb23bc43237be5e34_2 = MAKE_FUNCTION_FRAME(codeobj_33f5de27b07d732cb23bc43237be5e34, module_pyreadline3$console$ansi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_33f5de27b07d732cb23bc43237be5e34_2->m_type_description == NULL);
        frame_33f5de27b07d732cb23bc43237be5e34_2 = cache_frame_33f5de27b07d732cb23bc43237be5e34_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_33f5de27b07d732cb23bc43237be5e34_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_33f5de27b07d732cb23bc43237be5e34_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_8 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 126;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_3 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_3 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
            if (tmp_assign_source_10 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 126;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_4 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
            if (tmp_assign_source_11 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 126;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 126;
                        goto try_except_handler_7;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[49];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 126;
                goto try_except_handler_7;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_6;
        // End of try:
        try_end_3:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        try_end_4:;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_12 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_attr;
                outline_0_var_attr = tmp_assign_source_12;
                Py_INCREF(outline_0_var_attr);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_13 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_text;
                outline_0_var_text = tmp_assign_source_13;
                Py_INCREF(outline_0_var_text);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_expression_name_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_attr);
            tmp_expression_name_1 = outline_0_var_attr;
            tmp_append_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[18]);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_2 = "oo";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_tuple_element_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_tuple_element_1);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_33f5de27b07d732cb23bc43237be5e34_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_33f5de27b07d732cb23bc43237be5e34_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_33f5de27b07d732cb23bc43237be5e34_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_33f5de27b07d732cb23bc43237be5e34_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_33f5de27b07d732cb23bc43237be5e34_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_33f5de27b07d732cb23bc43237be5e34_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_33f5de27b07d732cb23bc43237be5e34_2,
            type_description_2,
            outline_0_var_attr,
            outline_0_var_text
        );


        // Release cached frame if used for exception.
        if (frame_33f5de27b07d732cb23bc43237be5e34_2 == cache_frame_33f5de27b07d732cb23bc43237be5e34_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_33f5de27b07d732cb23bc43237be5e34_2);
            cache_frame_33f5de27b07d732cb23bc43237be5e34_2 = NULL;
        }

        assertFrameObject(frame_33f5de27b07d732cb23bc43237be5e34_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_0_var_attr);
        outline_0_var_attr = NULL;
        Py_XDECREF(outline_0_var_text);
        outline_0_var_text = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_attr);
        outline_0_var_attr = NULL;
        Py_XDECREF(outline_0_var_text);
        outline_0_var_text = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 126;
        goto tuple_build_exception_1;
        outline_result_1:;
        PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5ff7918d353a0d978ec645785501427a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5ff7918d353a0d978ec645785501427a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5ff7918d353a0d978ec645785501427a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5ff7918d353a0d978ec645785501427a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5ff7918d353a0d978ec645785501427a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5ff7918d353a0d978ec645785501427a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5ff7918d353a0d978ec645785501427a,
        type_description_1,
        par_self,
        par_text,
        par_attr,
        var_n,
        var_res
    );


    // Release cached frame if used for exception.
    if (frame_5ff7918d353a0d978ec645785501427a == cache_frame_5ff7918d353a0d978ec645785501427a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5ff7918d353a0d978ec645785501427a);
        cache_frame_5ff7918d353a0d978ec645785501427a = NULL;
    }

    assertFrameObject(frame_5ff7918d353a0d978ec645785501427a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_text);
    par_text = NULL;
    Py_XDECREF(par_attr);
    par_attr = NULL;
    CHECK_OBJECT(var_n);
    Py_DECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_text);
    par_text = NULL;
    Py_XDECREF(par_attr);
    par_attr = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline3$console$ansi$$$function__9_write_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    PyObject *par_attr = python_pars[1];
    PyObject *var_a = NULL;
    struct Nuitka_FrameObject *frame_29dbca113e8b27bca85cdf6c3d0af9db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_29dbca113e8b27bca85cdf6c3d0af9db = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_29dbca113e8b27bca85cdf6c3d0af9db)) {
        Py_XDECREF(cache_frame_29dbca113e8b27bca85cdf6c3d0af9db);

#if _DEBUG_REFCOUNTS
        if (cache_frame_29dbca113e8b27bca85cdf6c3d0af9db == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_29dbca113e8b27bca85cdf6c3d0af9db = MAKE_FUNCTION_FRAME(codeobj_29dbca113e8b27bca85cdf6c3d0af9db, module_pyreadline3$console$ansi, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_29dbca113e8b27bca85cdf6c3d0af9db->m_type_description == NULL);
    frame_29dbca113e8b27bca85cdf6c3d0af9db = cache_frame_29dbca113e8b27bca85cdf6c3d0af9db;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_29dbca113e8b27bca85cdf6c3d0af9db);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_29dbca113e8b27bca85cdf6c3d0af9db) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_name_1 == NULL)) {
            tmp_args_element_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_29dbca113e8b27bca85cdf6c3d0af9db->m_frame.f_lineno = 130;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_a == NULL);
        var_a = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(var_a);
        tmp_called_instance_1 = var_a;
        CHECK_OBJECT(par_text);
        tmp_args_element_name_2 = par_text;
        CHECK_OBJECT(par_attr);
        tmp_args_element_name_3 = par_attr;
        frame_29dbca113e8b27bca85cdf6c3d0af9db->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[48],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_29dbca113e8b27bca85cdf6c3d0af9db);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_29dbca113e8b27bca85cdf6c3d0af9db);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_29dbca113e8b27bca85cdf6c3d0af9db);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_29dbca113e8b27bca85cdf6c3d0af9db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_29dbca113e8b27bca85cdf6c3d0af9db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29dbca113e8b27bca85cdf6c3d0af9db, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_29dbca113e8b27bca85cdf6c3d0af9db,
        type_description_1,
        par_text,
        par_attr,
        var_a
    );


    // Release cached frame if used for exception.
    if (frame_29dbca113e8b27bca85cdf6c3d0af9db == cache_frame_29dbca113e8b27bca85cdf6c3d0af9db) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_29dbca113e8b27bca85cdf6c3d0af9db);
        cache_frame_29dbca113e8b27bca85cdf6c3d0af9db = NULL;
    }

    assertFrameObject(frame_29dbca113e8b27bca85cdf6c3d0af9db);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_text);
    par_text = NULL;
    Py_XDECREF(par_attr);
    par_attr = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_text);
    par_text = NULL;
    Py_XDECREF(par_attr);
    par_attr = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline3$console$ansi$$$function__10_write_color_old(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    PyObject *par_attr = python_pars[1];
    PyObject *var_res = NULL;
    PyObject *var_chunks = NULL;
    PyObject *var_n = NULL;
    PyObject *var_chunk = NULL;
    PyObject *var_m = NULL;
    PyObject *var_part = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_2__comparison_result = NULL;
    PyObject *tmp_comparison_chain_2__operand_2 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_ba4fa88d32345c1062a079e6e103dfab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ba4fa88d32345c1062a079e6e103dfab = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_res == NULL);
        var_res = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_ba4fa88d32345c1062a079e6e103dfab)) {
        Py_XDECREF(cache_frame_ba4fa88d32345c1062a079e6e103dfab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba4fa88d32345c1062a079e6e103dfab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba4fa88d32345c1062a079e6e103dfab = MAKE_FUNCTION_FRAME(codeobj_ba4fa88d32345c1062a079e6e103dfab, module_pyreadline3$console$ansi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ba4fa88d32345c1062a079e6e103dfab->m_type_description == NULL);
    frame_ba4fa88d32345c1062a079e6e103dfab = cache_frame_ba4fa88d32345c1062a079e6e103dfab;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ba4fa88d32345c1062a079e6e103dfab);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ba4fa88d32345c1062a079e6e103dfab) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_args_element_name_1 = par_text;
        frame_ba4fa88d32345c1062a079e6e103dfab->m_frame.f_lineno = 140;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[23], tmp_args_element_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_chunks == NULL);
        var_chunks = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[5];
        assert(var_n == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_n = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_attr);
        tmp_compexpr_left_1 = par_attr;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[51];
        {
            PyObject *old = par_attr;
            assert(old != NULL);
            par_attr = tmp_assign_source_4;
            Py_INCREF(par_attr);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_chunks);
        tmp_iter_arg_1 = var_chunks;
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 144;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_chunk;
            var_chunk = tmp_assign_source_7;
            Py_INCREF(var_chunk);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_chunk);
        tmp_args_element_name_2 = var_chunk;
        frame_ba4fa88d32345c1062a079e6e103dfab->m_frame.f_lineno = 145;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[25], tmp_args_element_name_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_m;
            var_m = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_m);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_m);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_m);
        tmp_called_instance_4 = var_m;
        frame_ba4fa88d32345c1062a079e6e103dfab->m_frame.f_lineno = 147;
        tmp_called_instance_3 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_4,
            mod_consts[26],
            &PyTuple_GET_ITEM(mod_consts[27], 0)
        );

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_ba4fa88d32345c1062a079e6e103dfab->m_frame.f_lineno = 147;
        tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[23],
            &PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 147;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_11 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_part;
            var_part = tmp_assign_source_11;
            Py_INCREF(var_part);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_part);
        tmp_compexpr_left_2 = var_part;
        tmp_compexpr_right_2 = mod_consts[31];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 148;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[5];
        {
            PyObject *old = par_attr;
            par_attr = tmp_assign_source_12;
            Py_INCREF(par_attr);
            Py_XDECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_part);
        tmp_compexpr_left_3 = var_part;
        tmp_compexpr_right_3 = mod_consts[32];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 150;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if (par_attr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 151;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_left_name_1 = par_attr;
        tmp_right_name_1 = mod_consts[10];
        tmp_result = BINARY_OPERATION_BITOR_OBJECT_LONG_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_13 = tmp_left_name_1;
        par_attr = tmp_assign_source_13;

    }
    branch_no_4:;
    branch_end_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tmp_condition_result_5_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_part);
        tmp_compexpr_left_4 = var_part;
        tmp_compexpr_right_4 = mod_consts[33];
        tmp_tmp_condition_result_5_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_tmp_condition_result_5_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_5_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_5_object_1);

            exception_lineno = 153;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_5_object_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        if (par_attr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 154;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_left_name_2 = par_attr;
        tmp_right_name_2 = mod_consts[6];
        tmp_result = BINARY_OPERATION_BITOR_OBJECT_LONG_INPLACE(&tmp_left_name_2, tmp_right_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_14 = tmp_left_name_2;
        par_attr = tmp_assign_source_14;

    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_and_left_value_1_object_1;
        int tmp_truth_name_5;
        PyObject *tmp_outline_return_value_1;
        int tmp_truth_name_6;
        CHECK_OBJECT(var_part);
        tmp_len_arg_1 = var_part;
        tmp_compexpr_left_5 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_5 = mod_consts[34];
        tmp_tmp_and_left_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        assert(!(tmp_tmp_and_left_value_1_object_1 == NULL));
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_tmp_and_left_value_1_object_1);
        assert(!(tmp_truth_name_5 == -1));
        tmp_and_left_value_1 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_left_value_1_object_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        {
            PyObject *tmp_assign_source_15;
            if (var_part == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 155;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }

            tmp_assign_source_15 = var_part;
            {
                PyObject *old = tmp_comparison_chain_1__operand_2;
                tmp_comparison_chain_1__operand_2 = tmp_assign_source_15;
                Py_INCREF(tmp_comparison_chain_1__operand_2);
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            tmp_compexpr_left_6 = mod_consts[36];
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_right_6 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_16 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_1 = "oooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_comparison_chain_1__comparison_result;
                tmp_comparison_chain_1__comparison_result = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_name_1 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_1 = "oooooooo";
                goto try_except_handler_4;
            }
            tmp_condition_result_7 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_outline_return_value_1);
        goto try_return_handler_4;
        branch_no_7:;
        {
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_left_7 = tmp_comparison_chain_1__operand_2;
            tmp_compexpr_right_7 = mod_consts[37];
            tmp_outline_return_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
            if (tmp_outline_return_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_1 = "oooooooo";
                goto try_except_handler_4;
            }
            goto try_return_handler_4;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_outline_return_value_1);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_outline_return_value_1);

            exception_lineno = 155;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_and_right_value_1 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_1);
        tmp_condition_result_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_6 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_name_3;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_right_name_3;
        if (var_part == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_int_arg_1 = var_part;
        tmp_left_name_3 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_3 = mod_consts[38];
        tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_left_name_3);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_part;
            var_part = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        if (par_attr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 159;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_left_name_7 = par_attr;
        tmp_right_name_4 = mod_consts[52];
        tmp_left_name_6 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_7, tmp_right_name_4);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_part);
        tmp_left_name_9 = var_part;
        tmp_right_name_6 = mod_consts[29];
        tmp_left_name_8 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_9, tmp_right_name_6);
        if (tmp_left_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 160;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_7 = mod_consts[34];
        tmp_right_name_5 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_left_name_8, tmp_right_name_7);
        Py_DECREF(tmp_left_name_8);
        if (tmp_right_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 160;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_left_name_5 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_5);
        Py_DECREF(tmp_left_name_6);
        Py_DECREF(tmp_right_name_5);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        if (var_part == NULL) {
            Py_DECREF(tmp_left_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 161;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_left_name_10 = var_part;
        tmp_right_name_9 = mod_consts[34];
        tmp_right_name_8 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_10, tmp_right_name_9);
        if (tmp_right_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_5);

            exception_lineno = 161;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_left_name_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_8);
        Py_DECREF(tmp_left_name_5);
        Py_DECREF(tmp_right_name_8);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        if (var_part == NULL) {
            Py_DECREF(tmp_left_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_left_name_12 = var_part;
        tmp_right_name_11 = mod_consts[12];
        tmp_left_name_11 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_12, tmp_right_name_11);
        if (tmp_left_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 162;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_12 = mod_consts[34];
        tmp_right_name_10 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_left_name_11, tmp_right_name_12);
        Py_DECREF(tmp_left_name_11);
        if (tmp_right_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 162;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_18 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_10);
        Py_DECREF(tmp_left_name_4);
        Py_DECREF(tmp_right_name_10);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = par_attr;
            par_attr = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_tmp_and_left_value_2_object_1;
        int tmp_truth_name_7;
        PyObject *tmp_outline_return_value_2;
        int tmp_truth_name_8;
        if (var_part == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_len_arg_2 = var_part;
        tmp_compexpr_left_8 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_compexpr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_8 = mod_consts[34];
        tmp_tmp_and_left_value_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        Py_DECREF(tmp_compexpr_left_8);
        assert(!(tmp_tmp_and_left_value_2_object_1 == NULL));
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_tmp_and_left_value_2_object_1);
        assert(!(tmp_truth_name_7 == -1));
        tmp_and_left_value_2 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_left_value_2_object_1);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        {
            PyObject *tmp_assign_source_19;
            if (var_part == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 163;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }

            tmp_assign_source_19 = var_part;
            {
                PyObject *old = tmp_comparison_chain_2__operand_2;
                tmp_comparison_chain_2__operand_2 = tmp_assign_source_19;
                Py_INCREF(tmp_comparison_chain_2__operand_2);
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            tmp_compexpr_left_9 = mod_consts[39];
            CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
            tmp_compexpr_right_9 = tmp_comparison_chain_2__operand_2;
            tmp_assign_source_20 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "oooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_comparison_chain_2__comparison_result;
                tmp_comparison_chain_2__comparison_result = tmp_assign_source_20;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_operand_name_2;
            CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
            tmp_operand_name_2 = tmp_comparison_chain_2__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "oooooooo";
                goto try_except_handler_5;
            }
            tmp_condition_result_9 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
        tmp_outline_return_value_2 = tmp_comparison_chain_2__comparison_result;
        Py_INCREF(tmp_outline_return_value_2);
        goto try_return_handler_5;
        branch_no_9:;
        {
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
            tmp_compexpr_left_10 = tmp_comparison_chain_2__operand_2;
            tmp_compexpr_right_10 = mod_consts[40];
            tmp_outline_return_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_10, tmp_compexpr_right_10);
            if (tmp_outline_return_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "oooooooo";
                goto try_except_handler_5;
            }
            goto try_return_handler_5;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
        Py_DECREF(tmp_comparison_chain_2__operand_2);
        tmp_comparison_chain_2__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
        Py_DECREF(tmp_comparison_chain_2__comparison_result);
        tmp_comparison_chain_2__comparison_result = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
        Py_DECREF(tmp_comparison_chain_2__operand_2);
        tmp_comparison_chain_2__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_2__comparison_result);
        tmp_comparison_chain_2__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_outline_return_value_2);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_outline_return_value_2);

            exception_lineno = 163;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_and_right_value_2 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_2);
        tmp_condition_result_8 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_8 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_13;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_right_name_13;
        if (var_part == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_int_arg_2 = var_part;
        tmp_left_name_13 = PyNumber_Int(tmp_int_arg_2);
        if (tmp_left_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_13 = mod_consts[41];
        tmp_assign_source_21 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_13, tmp_right_name_13);
        Py_DECREF(tmp_left_name_13);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_part;
            var_part = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_14;
        PyObject *tmp_right_name_15;
        PyObject *tmp_left_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_16;
        PyObject *tmp_right_name_17;
        PyObject *tmp_right_name_18;
        PyObject *tmp_left_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_19;
        PyObject *tmp_right_name_20;
        PyObject *tmp_right_name_21;
        PyObject *tmp_left_name_22;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_22;
        PyObject *tmp_right_name_23;
        if (par_attr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 167;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_left_name_17 = par_attr;
        tmp_right_name_14 = mod_consts[53];
        tmp_left_name_16 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_17, tmp_right_name_14);
        if (tmp_left_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_part);
        tmp_left_name_19 = var_part;
        tmp_right_name_16 = mod_consts[29];
        tmp_left_name_18 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_19, tmp_right_name_16);
        if (tmp_left_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_16);

            exception_lineno = 168;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_17 = mod_consts[54];
        tmp_right_name_15 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_left_name_18, tmp_right_name_17);
        Py_DECREF(tmp_left_name_18);
        if (tmp_right_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_16);

            exception_lineno = 168;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_left_name_15 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_16, tmp_right_name_15);
        Py_DECREF(tmp_left_name_16);
        Py_DECREF(tmp_right_name_15);
        if (tmp_left_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        if (var_part == NULL) {
            Py_DECREF(tmp_left_name_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_left_name_21 = var_part;
        tmp_right_name_19 = mod_consts[34];
        tmp_left_name_20 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_21, tmp_right_name_19);
        if (tmp_left_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_15);

            exception_lineno = 169;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_20 = mod_consts[12];
        tmp_right_name_18 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_left_name_20, tmp_right_name_20);
        Py_DECREF(tmp_left_name_20);
        if (tmp_right_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_15);

            exception_lineno = 169;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_left_name_14 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_15, tmp_right_name_18);
        Py_DECREF(tmp_left_name_15);
        Py_DECREF(tmp_right_name_18);
        if (tmp_left_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        if (var_part == NULL) {
            Py_DECREF(tmp_left_name_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_left_name_23 = var_part;
        tmp_right_name_22 = mod_consts[12];
        tmp_left_name_22 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_23, tmp_right_name_22);
        if (tmp_left_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_14);

            exception_lineno = 170;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_23 = mod_consts[34];
        tmp_right_name_21 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_left_name_22, tmp_right_name_23);
        Py_DECREF(tmp_left_name_22);
        if (tmp_right_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_14);

            exception_lineno = 170;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_22 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_14, tmp_right_name_21);
        Py_DECREF(tmp_left_name_14);
        Py_DECREF(tmp_right_name_21);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = par_attr;
            par_attr = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    branch_no_8:;
    branch_end_6:;
    branch_end_5:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 147;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    goto loop_start_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_name_24;
        PyObject *tmp_right_name_24;
        PyObject *tmp_len_arg_3;
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_24 = var_n;
        if (var_chunk == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_len_arg_3 = var_chunk;
        tmp_right_name_24 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_right_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_ADD_LONG_LONG_INPLACE(&tmp_left_name_24, tmp_right_name_24);
        Py_DECREF(tmp_right_name_24);
        assert(!(tmp_result == false));
        tmp_assign_source_23 = tmp_left_name_24;
        var_n = tmp_assign_source_23;

    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_9;
        if (var_chunk == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_truth_name_9 = CHECK_IF_TRUE(var_chunk);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_10 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_25;
        PyObject *tmp_right_name_25;
        if (var_res == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_1 = var_res;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[46]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_25 = mod_consts[55];
        if (par_attr == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_right_name_25 = par_attr;
        tmp_tuple_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_25, tmp_right_name_25);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 175;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_element_name_3, 0, tmp_tuple_element_1);
        if (var_chunk == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "oooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_chunk;
        PyTuple_SET_ITEM0(tmp_args_element_name_3, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_3);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_ba4fa88d32345c1062a079e6e103dfab->m_frame.f_lineno = 175;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_10:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 144;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_res == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 176;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_res;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba4fa88d32345c1062a079e6e103dfab);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba4fa88d32345c1062a079e6e103dfab);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba4fa88d32345c1062a079e6e103dfab);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ba4fa88d32345c1062a079e6e103dfab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba4fa88d32345c1062a079e6e103dfab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba4fa88d32345c1062a079e6e103dfab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba4fa88d32345c1062a079e6e103dfab,
        type_description_1,
        par_text,
        par_attr,
        var_res,
        var_chunks,
        var_n,
        var_chunk,
        var_m,
        var_part
    );


    // Release cached frame if used for exception.
    if (frame_ba4fa88d32345c1062a079e6e103dfab == cache_frame_ba4fa88d32345c1062a079e6e103dfab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ba4fa88d32345c1062a079e6e103dfab);
        cache_frame_ba4fa88d32345c1062a079e6e103dfab = NULL;
    }

    assertFrameObject(frame_ba4fa88d32345c1062a079e6e103dfab);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_text);
    par_text = NULL;
    Py_XDECREF(par_attr);
    par_attr = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
    Py_XDECREF(var_chunks);
    var_chunks = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_chunk);
    var_chunk = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_part);
    var_part = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_text);
    par_text = NULL;
    Py_XDECREF(par_attr);
    par_attr = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
    Py_XDECREF(var_chunks);
    var_chunks = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_chunk);
    var_chunk = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_part);
    var_part = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__10_write_color_old(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$console$ansi$$$function__10_write_color_old,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ba4fa88d32345c1062a079e6e103dfab,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$console$ansi,
        mod_consts[56],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$console$ansi$$$function__1___init__,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[85],
#endif
        codeobj_525059cc2f973cdef37fabac2af1060b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$console$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__2_get_winattr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$console$ansi$$$function__2_get_winattr,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        mod_consts[92],
#endif
        codeobj_668324715f0f294f7e7bcb779634cc96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$console$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__3_set_winattr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$console$ansi$$$function__3_set_winattr,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[94],
#endif
        codeobj_358a888d978db128a9e2e33a2c787fb9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$console$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__4___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$console$ansi$$$function__4___repr__,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        mod_consts[97],
#endif
        codeobj_4924f6d339cad690a700eb811ea0e250,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$console$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__5_copy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$console$ansi$$$function__5_copy,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_05f54fe803269d1e52b4e075f74fd5e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$console$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__6___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$console$ansi$$$function__6___init__,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_935fe44a2cd7800203ae4d6170874f2c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$console$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__7_write_color(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$console$ansi$$$function__7_write_color,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_8b144c7f8d56aee837be054db0cbe968,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$console$ansi,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__8_parse_color(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$console$ansi$$$function__8_parse_color,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_5ff7918d353a0d978ec645785501427a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$console$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$console$ansi$$$function__9_write_color(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$console$ansi$$$function__9_write_color,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_29dbca113e8b27bca85cdf6c3d0af9db,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$console$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_pyreadline3$console$ansi[] = {
    impl_pyreadline3$console$ansi$$$function__1___init__,
    impl_pyreadline3$console$ansi$$$function__2_get_winattr,
    impl_pyreadline3$console$ansi$$$function__3_set_winattr,
    impl_pyreadline3$console$ansi$$$function__4___repr__,
    impl_pyreadline3$console$ansi$$$function__5_copy,
    impl_pyreadline3$console$ansi$$$function__6___init__,
    impl_pyreadline3$console$ansi$$$function__7_write_color,
    impl_pyreadline3$console$ansi$$$function__8_parse_color,
    impl_pyreadline3$console$ansi$$$function__9_write_color,
    impl_pyreadline3$console$ansi$$$function__10_write_color_old,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_pyreadline3$console$ansi;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_pyreadline3$console$ansi) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_pyreadline3$console$ansi[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_pyreadline3$console$ansi,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Actual name might be different when loaded as a package.
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "pyreadline3.console.ansi";

// Internal entry point for module code.
PyObject *modulecode_pyreadline3$console$ansi(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_pyreadline3$console$ansi = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyreadline3.console.ansi: Skipping module init, already done.\n");
#endif

        return module_pyreadline3$console$ansi;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 0x300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("pyreadline3.console.ansi: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pyreadline3.console.ansi: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pyreadline3.console.ansi: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initpyreadline3$console$ansi\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_pyreadline3$console$ansi = MODULE_DICT(module_pyreadline3$console$ansi);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL) {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyreadline3$console$ansi,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyreadline3$console$ansi,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyreadline3$console$ansi,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyreadline3$console$ansi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyreadline3$console$ansi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyreadline3$console$ansi);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pyreadline3$console$ansi);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_222af483563644b0a426544e42cc6e6a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_pyreadline3$console$ansi$$$class__1_AnsiState_12 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_0c3807609ad20e8c9aa13670adba85ca_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0c3807609ad20e8c9aa13670adba85ca_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_pyreadline3$console$ansi$$$class__2_AnsiWriter_74 = NULL;
    struct Nuitka_FrameObject *frame_90be76dbda3b7ce17cf374e629503bfd_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_90be76dbda3b7ce17cf374e629503bfd_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_222af483563644b0a426544e42cc6e6a = MAKE_MODULE_FRAME(codeobj_222af483563644b0a426544e42cc6e6a, module_pyreadline3$console$ansi);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_222af483563644b0a426544e42cc6e6a);
    assert(Py_REFCNT(frame_222af483563644b0a426544e42cc6e6a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[58];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[61], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[62], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        frame_222af483563644b0a426544e42cc6e6a->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_HARD___FUTURE__();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyreadline3$console$ansi,
                mod_consts[64],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[64]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyreadline3$console$ansi,
                mod_consts[65],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[65]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyreadline3$console$ansi,
                mod_consts[66],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[66]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_7);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;
        frame_222af483563644b0a426544e42cc6e6a->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[68];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_pyreadline3$console$ansi;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[5];
        frame_222af483563644b0a426544e42cc6e6a->m_frame.f_lineno = 5;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        frame_222af483563644b0a426544e42cc6e6a->m_frame.f_lineno = 6;
        tmp_assign_source_10 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_10 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_222af483563644b0a426544e42cc6e6a->m_frame.f_lineno = 8;
        tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[70],
            &PyTuple_GET_ITEM(mod_consts[71], 0)
        );

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        frame_222af483563644b0a426544e42cc6e6a->m_frame.f_lineno = 9;
        tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[70],
            &PyTuple_GET_ITEM(mod_consts[72], 0)
        );

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_12);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[73];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_13 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[74];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = mod_consts[5];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_15 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[74];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[75]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[75]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[19];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_222af483563644b0a426544e42cc6e6a->m_frame.f_lineno = 12;
        tmp_assign_source_16 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[76]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[77];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[78];
        tmp_getattr_default_1 = mod_consts[79];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[78]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 12;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyreadline3$console$ansi$$$class__1_AnsiState_12 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[80];
        tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[81], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[19];
        tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[82], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_0c3807609ad20e8c9aa13670adba85ca_2)) {
            Py_XDECREF(cache_frame_0c3807609ad20e8c9aa13670adba85ca_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0c3807609ad20e8c9aa13670adba85ca_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0c3807609ad20e8c9aa13670adba85ca_2 = MAKE_FUNCTION_FRAME(codeobj_0c3807609ad20e8c9aa13670adba85ca, module_pyreadline3$console$ansi, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_0c3807609ad20e8c9aa13670adba85ca_2->m_type_description == NULL);
        frame_0c3807609ad20e8c9aa13670adba85ca_2 = cache_frame_0c3807609ad20e8c9aa13670adba85ca_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0c3807609ad20e8c9aa13670adba85ca_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0c3807609ad20e8c9aa13670adba85ca_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[83];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_pyreadline3$console$ansi$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = PyDict_Copy(mod_consts[86]);
        tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_dict_seq_1;
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_called_instance_10;
            tmp_res = MAPPING_HAS_ITEM(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[87]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_name_2 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[87]);

            if (unlikely(tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[87]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = MAPPING_HAS_ITEM(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[88]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_name_3 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[88]);

            if (unlikely(tmp_called_name_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_name_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[88]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_3 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[11]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_0c3807609ad20e8c9aa13670adba85ca_2->m_frame.f_lineno = 28;
            tmp_args_element_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[89]);
            Py_DECREF(tmp_called_instance_3);
            if (tmp_args_element_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_4 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[11]);

            if (unlikely(tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);
                Py_DECREF(tmp_args_element_name_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);
                Py_DECREF(tmp_args_element_name_2);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_0c3807609ad20e8c9aa13670adba85ca_2->m_frame.f_lineno = 28;
            tmp_args_element_name_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[90]);
            Py_DECREF(tmp_called_instance_4);
            if (tmp_args_element_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);
                Py_DECREF(tmp_args_element_name_2);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_0c3807609ad20e8c9aa13670adba85ca_2->m_frame.f_lineno = 28;
            {
                PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
                tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
            }

            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_name_4 = (PyObject *)&PyZip_Type;
            tmp_called_instance_5 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[11]);

            if (unlikely(tmp_called_instance_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_name_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_0c3807609ad20e8c9aa13670adba85ca_2->m_frame.f_lineno = 28;
            tmp_args_element_name_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[89]);
            Py_DECREF(tmp_called_instance_5);
            if (tmp_args_element_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_6 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[11]);

            if (unlikely(tmp_called_instance_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_args_element_name_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_args_element_name_4);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_0c3807609ad20e8c9aa13670adba85ca_2->m_frame.f_lineno = 28;
            tmp_args_element_name_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[90]);
            Py_DECREF(tmp_called_instance_6);
            if (tmp_args_element_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_args_element_name_4);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_0c3807609ad20e8c9aa13670adba85ca_2->m_frame.f_lineno = 28;
            {
                PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
                tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
            }

            Py_DECREF(tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            frame_0c3807609ad20e8c9aa13670adba85ca_2->m_frame.f_lineno = 28;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_res = MAPPING_HAS_ITEM(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[88]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_name_5 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[88]);

            if (unlikely(tmp_called_name_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[88]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_7 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[11]);

            if (unlikely(tmp_called_instance_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_name_5);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_5);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_0c3807609ad20e8c9aa13670adba85ca_2->m_frame.f_lineno = 28;
            tmp_args_element_name_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[89]);
            Py_DECREF(tmp_called_instance_7);
            if (tmp_args_element_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_5);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_8 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[11]);

            if (unlikely(tmp_called_instance_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_name_5);
                Py_DECREF(tmp_args_element_name_6);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_5);
                Py_DECREF(tmp_args_element_name_6);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_0c3807609ad20e8c9aa13670adba85ca_2->m_frame.f_lineno = 28;
            tmp_args_element_name_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[90]);
            Py_DECREF(tmp_called_instance_8);
            if (tmp_args_element_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_5);
                Py_DECREF(tmp_args_element_name_6);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_0c3807609ad20e8c9aa13670adba85ca_2->m_frame.f_lineno = 28;
            {
                PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
                tmp_dict_seq_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
            }

            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_6);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_dict_seq_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_name_6 = (PyObject *)&PyZip_Type;
            tmp_called_instance_9 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[11]);

            if (unlikely(tmp_called_instance_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_0c3807609ad20e8c9aa13670adba85ca_2->m_frame.f_lineno = 28;
            tmp_args_element_name_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[89]);
            Py_DECREF(tmp_called_instance_9);
            if (tmp_args_element_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_10 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[11]);

            if (unlikely(tmp_called_instance_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_args_element_name_8);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_name_8);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_0c3807609ad20e8c9aa13670adba85ca_2->m_frame.f_lineno = 28;
            tmp_args_element_name_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[90]);
            Py_DECREF(tmp_called_instance_10);
            if (tmp_args_element_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_name_8);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_0c3807609ad20e8c9aa13670adba85ca_2->m_frame.f_lineno = 28;
            {
                PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9};
                tmp_dict_seq_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, call_args);
            }

            Py_DECREF(tmp_args_element_name_8);
            Py_DECREF(tmp_args_element_name_9);
            if (tmp_dict_seq_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_dictset_value = TO_DICT(tmp_dict_seq_1, NULL);
            Py_DECREF(tmp_dict_seq_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline3$console$ansi$$$function__2_get_winattr();

        tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[91], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline3$console$ansi$$$function__3_set_winattr();

        tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[93], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            tmp_res = MAPPING_HAS_ITEM(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[95]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_name_7 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[95]);

            if (unlikely(tmp_called_name_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_10 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[91]);

            if (unlikely(tmp_args_element_name_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_name_7);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_7);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_11 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[93]);

            if (unlikely(tmp_args_element_name_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_name_7);
                Py_DECREF(tmp_args_element_name_10);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[93]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_7);
                Py_DECREF(tmp_args_element_name_10);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_0c3807609ad20e8c9aa13670adba85ca_2->m_frame.f_lineno = 49;
            {
                PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
            }

            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_10);
            Py_DECREF(tmp_args_element_name_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_name_8 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_12 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[91]);

            if (unlikely(tmp_args_element_name_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_13 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[93]);

            if (unlikely(tmp_args_element_name_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_args_element_name_12);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[93]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_name_12);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_0c3807609ad20e8c9aa13670adba85ca_2->m_frame.f_lineno = 49;
            {
                PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_8, call_args);
            }

            Py_DECREF(tmp_args_element_name_12);
            Py_DECREF(tmp_args_element_name_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline3$console$ansi$$$function__4___repr__();

        tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[96], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline3$console$ansi$$$function__5_copy();

        tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[21], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0c3807609ad20e8c9aa13670adba85ca_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0c3807609ad20e8c9aa13670adba85ca_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0c3807609ad20e8c9aa13670adba85ca_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0c3807609ad20e8c9aa13670adba85ca_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0c3807609ad20e8c9aa13670adba85ca_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0c3807609ad20e8c9aa13670adba85ca_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_0c3807609ad20e8c9aa13670adba85ca_2 == cache_frame_0c3807609ad20e8c9aa13670adba85ca_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_0c3807609ad20e8c9aa13670adba85ca_2);
            cache_frame_0c3807609ad20e8c9aa13670adba85ca_2 = NULL;
        }

        assertFrameObject(frame_0c3807609ad20e8c9aa13670adba85ca_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = mod_consts[73];
            tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_10 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12, mod_consts[99], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_9 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[19];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_pyreadline3$console$ansi$$$class__1_AnsiState_12;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_222af483563644b0a426544e42cc6e6a->m_frame.f_lineno = 12;
            tmp_assign_source_19 = CALL_FUNCTION(tmp_called_name_9, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_18 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12);
        locals_pyreadline3$console$ansi$$$class__1_AnsiState_12 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyreadline3$console$ansi$$$class__1_AnsiState_12);
        locals_pyreadline3$console$ansi$$$class__1_AnsiState_12 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 12;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_18);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_10;
        tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_10 == NULL)) {
            tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_222af483563644b0a426544e42cc6e6a->m_frame.f_lineno = 68;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_10, &PyTuple_GET_ITEM(mod_consts[100], 0));

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = PyDict_Copy(mod_consts[101]);
        UPDATE_STRING_DICT1(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_21);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[73];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_22 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_arg_name_4;
        PyObject *tmp_dict_arg_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_4, tmp_key_name_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = mod_consts[74];
        tmp_metaclass_name_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_5;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_5;
        }
        tmp_condition_result_12 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_name_6 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = mod_consts[5];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_5;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_8:;
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_arg_name_6;
        tmp_key_name_6 = mod_consts[74];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_6, tmp_key_name_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[74];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 74;

        goto try_except_handler_5;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_7, mod_consts[75]);
        tmp_condition_result_14 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_name_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_8 = tmp_class_creation_2__metaclass;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[75]);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_5;
        }
        tmp_tuple_element_4 = mod_consts[50];
        tmp_args_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_4 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_name_3, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_name_3 = tmp_class_creation_2__class_decl_dict;
        frame_222af483563644b0a426544e42cc6e6a->m_frame.f_lineno = 74;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_name_11, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_name_3);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_9, mod_consts[76]);
        tmp_operand_name_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_5;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_name_2 = mod_consts[77];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[78];
        tmp_getattr_default_2 = mod_consts[79];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_5;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_name_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_name_10 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[78]);
            Py_DECREF(tmp_expression_name_10);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 74;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_26;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyreadline3$console$ansi$$$class__2_AnsiWriter_74 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[80];
        tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__2_AnsiWriter_74, mod_consts[81], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__2_AnsiWriter_74, mod_consts[82], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_7;
        }
        if (isFrameUnusable(cache_frame_90be76dbda3b7ce17cf374e629503bfd_3)) {
            Py_XDECREF(cache_frame_90be76dbda3b7ce17cf374e629503bfd_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_90be76dbda3b7ce17cf374e629503bfd_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_90be76dbda3b7ce17cf374e629503bfd_3 = MAKE_FUNCTION_FRAME(codeobj_90be76dbda3b7ce17cf374e629503bfd, module_pyreadline3$console$ansi, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_90be76dbda3b7ce17cf374e629503bfd_3->m_type_description == NULL);
        frame_90be76dbda3b7ce17cf374e629503bfd_3 = cache_frame_90be76dbda3b7ce17cf374e629503bfd_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_90be76dbda3b7ce17cf374e629503bfd_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_90be76dbda3b7ce17cf374e629503bfd_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_6;
            tmp_tuple_element_6 = PyObject_GetItem(locals_pyreadline3$console$ansi$$$class__2_AnsiWriter_74, mod_consts[20]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_tuple_element_6 == NULL)) {
                        tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                    }

                    if (tmp_tuple_element_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 75;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_tuple_element_6);
                }
            }

            tmp_defaults_2 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_6);


            tmp_dictset_value = MAKE_FUNCTION_pyreadline3$console$ansi$$$function__6___init__(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__2_AnsiWriter_74, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[103];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_pyreadline3$console$ansi$$$function__7_write_color(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__2_AnsiWriter_74, mod_consts[48], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[103];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_pyreadline3$console$ansi$$$function__8_parse_color(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__2_AnsiWriter_74, mod_consts[105], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_90be76dbda3b7ce17cf374e629503bfd_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_90be76dbda3b7ce17cf374e629503bfd_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_90be76dbda3b7ce17cf374e629503bfd_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_90be76dbda3b7ce17cf374e629503bfd_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_90be76dbda3b7ce17cf374e629503bfd_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_90be76dbda3b7ce17cf374e629503bfd_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_90be76dbda3b7ce17cf374e629503bfd_3 == cache_frame_90be76dbda3b7ce17cf374e629503bfd_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_90be76dbda3b7ce17cf374e629503bfd_3);
            cache_frame_90be76dbda3b7ce17cf374e629503bfd_3 = NULL;
        }

        assertFrameObject(frame_90be76dbda3b7ce17cf374e629503bfd_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            tmp_compexpr_right_2 = mod_consts[73];
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            assert(tmp_condition_result_16 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_8:;
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_pyreadline3$console$ansi$$$class__2_AnsiWriter_74, mod_consts[99], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_7;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_12 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[50];
            tmp_args_name_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_name_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_pyreadline3$console$ansi$$$class__2_AnsiWriter_74;
            PyTuple_SET_ITEM0(tmp_args_name_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_222af483563644b0a426544e42cc6e6a->m_frame.f_lineno = 74;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_name_12, tmp_args_name_4, tmp_kwargs_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_27 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_pyreadline3$console$ansi$$$class__2_AnsiWriter_74);
        locals_pyreadline3$console$ansi$$$class__2_AnsiWriter_74 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyreadline3$console$ansi$$$class__2_AnsiWriter_74);
        locals_pyreadline3$console$ansi$$$class__2_AnsiWriter_74 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 74;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_27);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_222af483563644b0a426544e42cc6e6a);
#endif
    popFrameStack();

    assertFrameObject(frame_222af483563644b0a426544e42cc6e6a);

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_222af483563644b0a426544e42cc6e6a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_222af483563644b0a426544e42cc6e6a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_222af483563644b0a426544e42cc6e6a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_222af483563644b0a426544e42cc6e6a, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[103];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_29 = MAKE_FUNCTION_pyreadline3$console$ansi$$$function__9_write_color(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = mod_consts[103];
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_30 = MAKE_FUNCTION_pyreadline3$console$ansi$$$function__10_write_color_old(tmp_defaults_6);

        UPDATE_STRING_DICT1(moduledict_pyreadline3$console$ansi, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_30);
    }

    return module_pyreadline3$console$ansi;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

