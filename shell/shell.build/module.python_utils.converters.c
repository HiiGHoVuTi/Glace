/* Generated code for Python module 'python_utils.converters'
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

/* The "module_python_utils$converters" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_python_utils$converters;
PyDictObject *moduledict_python_utils$converters;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[61];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "python_utils.converters");

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
void checkModuleConstants_python_utils$converters(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "python_utils.converters");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_7f6d9f44946685a71d091d9a5884409a;
static PyCodeObject *codeobj_ce19e04041d7cf7b686fca9e313cdc2e;
static PyCodeObject *codeobj_0821ab947e5a43376edfeaa6e3fb2b7e;
static PyCodeObject *codeobj_19027bbe2210870887323e687b2e283f;
static PyCodeObject *codeobj_92e9ca91bbb0f94ee1b633aeaa6bd745;
static PyCodeObject *codeobj_bf6f6ad59f676c6b522a92b05e68c350;
static PyCodeObject *codeobj_c492a23f5ecbc14661c42bd1f7e1a807;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[38]; CHECK_OBJECT(module_filename_obj);
    codeobj_7f6d9f44946685a71d091d9a5884409a = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[56], NULL, NULL, 0, 0, 0);
    codeobj_ce19e04041d7cf7b686fca9e313cdc2e = MAKE_CODEOBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[55], mod_consts[57], NULL, 5, 0, 0);
    codeobj_0821ab947e5a43376edfeaa6e3fb2b7e = MAKE_CODEOBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[54], mod_consts[58], NULL, 2, 0, 0);
    codeobj_19027bbe2210870887323e687b2e283f = MAKE_CODEOBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[50], mod_consts[59], NULL, 4, 0, 0);
    codeobj_92e9ca91bbb0f94ee1b633aeaa6bd745 = MAKE_CODEOBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[49], mod_consts[59], NULL, 4, 0, 0);
    codeobj_bf6f6ad59f676c6b522a92b05e68c350 = MAKE_CODEOBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[53], mod_consts[60], NULL, 3, 0, 0);
    codeobj_c492a23f5ecbc14661c42bd1f7e1a807 = MAKE_CODEOBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[52], mod_consts[60], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_python_utils$converters$$$function__1_to_int(PyObject *defaults);


static PyObject *MAKE_FUNCTION_python_utils$converters$$$function__2_to_float(PyObject *defaults);


static PyObject *MAKE_FUNCTION_python_utils$converters$$$function__3_to_unicode(PyObject *defaults);


static PyObject *MAKE_FUNCTION_python_utils$converters$$$function__4_to_str(PyObject *defaults);


static PyObject *MAKE_FUNCTION_python_utils$converters$$$function__5_scale_1024();


static PyObject *MAKE_FUNCTION_python_utils$converters$$$function__6_remap();


// The module function definitions.
static PyObject *impl_python_utils$converters$$$function__1_to_int(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input_ = python_pars[0];
    PyObject *par_default = python_pars[1];
    PyObject *par_exception = python_pars[2];
    PyObject *par_regexp = python_pars[3];
    PyObject *var_match = NULL;
    struct Nuitka_FrameObject *frame_92e9ca91bbb0f94ee1b633aeaa6bd745;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_92e9ca91bbb0f94ee1b633aeaa6bd745 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_92e9ca91bbb0f94ee1b633aeaa6bd745)) {
        Py_XDECREF(cache_frame_92e9ca91bbb0f94ee1b633aeaa6bd745);

#if _DEBUG_REFCOUNTS
        if (cache_frame_92e9ca91bbb0f94ee1b633aeaa6bd745 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_92e9ca91bbb0f94ee1b633aeaa6bd745 = MAKE_FUNCTION_FRAME(codeobj_92e9ca91bbb0f94ee1b633aeaa6bd745, module_python_utils$converters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_92e9ca91bbb0f94ee1b633aeaa6bd745->m_type_description == NULL);
    frame_92e9ca91bbb0f94ee1b633aeaa6bd745 = cache_frame_92e9ca91bbb0f94ee1b633aeaa6bd745;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_92e9ca91bbb0f94ee1b633aeaa6bd745);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_92e9ca91bbb0f94ee1b633aeaa6bd745) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_regexp);
        tmp_compexpr_left_1 = par_regexp;
        tmp_compexpr_right_1 = Py_True;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_92e9ca91bbb0f94ee1b633aeaa6bd745->m_frame.f_lineno = 69;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[1],
            &PyTuple_GET_ITEM(mod_consts[2], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_regexp;
            assert(old != NULL);
            par_regexp = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_regexp);
        tmp_isinstance_inst_1 = par_regexp;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[4]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_regexp);
        tmp_args_element_name_1 = par_regexp;
        frame_92e9ca91bbb0f94ee1b633aeaa6bd745->m_frame.f_lineno = 71;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[1], tmp_args_element_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_regexp;
            par_regexp = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(par_regexp);
        tmp_expression_name_2 = par_regexp;
        tmp_attribute_name_1 = mod_consts[5];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_2, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_regexp);
        tmp_compexpr_left_2 = par_regexp;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_4 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = mod_consts[6];
        CHECK_OBJECT(par_regexp);
        tmp_right_name_1 = par_regexp;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_92e9ca91bbb0f94ee1b633aeaa6bd745->m_frame.f_lineno = 75;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 75;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    branch_no_3:;
    branch_end_2:;
    branch_end_1:;
    // Tried code:
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_1;
        if (par_regexp == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 78;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(par_regexp);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_2;
        if (par_regexp == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_3 = par_regexp;
        CHECK_OBJECT(par_input_);
        tmp_args_element_name_2 = par_input_;
        frame_92e9ca91bbb0f94ee1b633aeaa6bd745->m_frame.f_lineno = 79;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[5], tmp_args_element_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_match == NULL);
        var_match = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_match);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_match);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_match);
        tmp_called_instance_4 = var_match;
        frame_92e9ca91bbb0f94ee1b633aeaa6bd745->m_frame.f_lineno = 81;
        tmp_expression_name_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[8]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_1 = mod_consts[9];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_1, -1);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_input_;
            par_input_ = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    branch_no_6:;
    branch_no_5:;
    {
        PyObject *tmp_int_arg_1;
        if (par_input_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_int_arg_1 = par_input_;
        tmp_return_value = PyNumber_Int(tmp_int_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_92e9ca91bbb0f94ee1b633aeaa6bd745, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_92e9ca91bbb0f94ee1b633aeaa6bd745, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        CHECK_OBJECT(par_exception);
        tmp_compexpr_right_3 = par_exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    CHECK_OBJECT(par_default);
    tmp_return_value = par_default;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_7;
    branch_no_7:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 77;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_92e9ca91bbb0f94ee1b633aeaa6bd745->m_frame) frame_92e9ca91bbb0f94ee1b633aeaa6bd745->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    branch_end_7:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_92e9ca91bbb0f94ee1b633aeaa6bd745);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_92e9ca91bbb0f94ee1b633aeaa6bd745);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_92e9ca91bbb0f94ee1b633aeaa6bd745);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_92e9ca91bbb0f94ee1b633aeaa6bd745, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_92e9ca91bbb0f94ee1b633aeaa6bd745->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_92e9ca91bbb0f94ee1b633aeaa6bd745, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_92e9ca91bbb0f94ee1b633aeaa6bd745,
        type_description_1,
        par_input_,
        par_default,
        par_exception,
        par_regexp,
        var_match
    );


    // Release cached frame if used for exception.
    if (frame_92e9ca91bbb0f94ee1b633aeaa6bd745 == cache_frame_92e9ca91bbb0f94ee1b633aeaa6bd745) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_92e9ca91bbb0f94ee1b633aeaa6bd745);
        cache_frame_92e9ca91bbb0f94ee1b633aeaa6bd745 = NULL;
    }

    assertFrameObject(frame_92e9ca91bbb0f94ee1b633aeaa6bd745);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_input_);
    par_input_ = NULL;
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    par_default = NULL;
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);
    par_exception = NULL;
    Py_XDECREF(par_regexp);
    par_regexp = NULL;
    Py_XDECREF(var_match);
    var_match = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_input_);
    par_input_ = NULL;
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    par_default = NULL;
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);
    par_exception = NULL;
    Py_XDECREF(par_regexp);
    par_regexp = NULL;
    Py_XDECREF(var_match);
    var_match = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_python_utils$converters$$$function__2_to_float(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input_ = python_pars[0];
    PyObject *par_default = python_pars[1];
    PyObject *par_exception = python_pars[2];
    PyObject *par_regexp = python_pars[3];
    PyObject *var_match = NULL;
    struct Nuitka_FrameObject *frame_19027bbe2210870887323e687b2e283f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_19027bbe2210870887323e687b2e283f = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_19027bbe2210870887323e687b2e283f)) {
        Py_XDECREF(cache_frame_19027bbe2210870887323e687b2e283f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_19027bbe2210870887323e687b2e283f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_19027bbe2210870887323e687b2e283f = MAKE_FUNCTION_FRAME(codeobj_19027bbe2210870887323e687b2e283f, module_python_utils$converters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_19027bbe2210870887323e687b2e283f->m_type_description == NULL);
    frame_19027bbe2210870887323e687b2e283f = cache_frame_19027bbe2210870887323e687b2e283f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_19027bbe2210870887323e687b2e283f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_19027bbe2210870887323e687b2e283f) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_regexp);
        tmp_compexpr_left_1 = par_regexp;
        tmp_compexpr_right_1 = Py_True;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_19027bbe2210870887323e687b2e283f->m_frame.f_lineno = 142;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[1],
            &PyTuple_GET_ITEM(mod_consts[12], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_regexp;
            assert(old != NULL);
            par_regexp = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_regexp);
        tmp_isinstance_inst_1 = par_regexp;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[4]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_regexp);
        tmp_args_element_name_1 = par_regexp;
        frame_19027bbe2210870887323e687b2e283f->m_frame.f_lineno = 144;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[1], tmp_args_element_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_regexp;
            par_regexp = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(par_regexp);
        tmp_expression_name_2 = par_regexp;
        tmp_attribute_name_1 = mod_consts[5];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_2, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_regexp);
        tmp_compexpr_left_2 = par_regexp;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_4 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[13];
        frame_19027bbe2210870887323e687b2e283f->m_frame.f_lineno = 148;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 148;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    branch_no_3:;
    branch_end_2:;
    branch_end_1:;
    // Tried code:
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_1;
        if (par_regexp == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(par_regexp);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_2;
        if (par_regexp == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_3 = par_regexp;
        CHECK_OBJECT(par_input_);
        tmp_args_element_name_2 = par_input_;
        frame_19027bbe2210870887323e687b2e283f->m_frame.f_lineno = 152;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[5], tmp_args_element_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_match == NULL);
        var_match = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_match);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_match);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_match);
        tmp_called_instance_4 = var_match;
        frame_19027bbe2210870887323e687b2e283f->m_frame.f_lineno = 154;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_4,
            mod_consts[14],
            &PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_input_;
            par_input_ = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    branch_no_6:;
    branch_no_5:;
    {
        PyObject *tmp_float_arg_1;
        if (par_input_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 155;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_float_arg_1 = par_input_;
        tmp_return_value = TO_FLOAT(tmp_float_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_19027bbe2210870887323e687b2e283f, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_19027bbe2210870887323e687b2e283f, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        CHECK_OBJECT(par_exception);
        tmp_compexpr_right_3 = par_exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    CHECK_OBJECT(par_default);
    tmp_return_value = par_default;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_7;
    branch_no_7:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 150;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_19027bbe2210870887323e687b2e283f->m_frame) frame_19027bbe2210870887323e687b2e283f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    branch_end_7:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_19027bbe2210870887323e687b2e283f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_19027bbe2210870887323e687b2e283f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_19027bbe2210870887323e687b2e283f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_19027bbe2210870887323e687b2e283f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_19027bbe2210870887323e687b2e283f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_19027bbe2210870887323e687b2e283f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_19027bbe2210870887323e687b2e283f,
        type_description_1,
        par_input_,
        par_default,
        par_exception,
        par_regexp,
        var_match
    );


    // Release cached frame if used for exception.
    if (frame_19027bbe2210870887323e687b2e283f == cache_frame_19027bbe2210870887323e687b2e283f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_19027bbe2210870887323e687b2e283f);
        cache_frame_19027bbe2210870887323e687b2e283f = NULL;
    }

    assertFrameObject(frame_19027bbe2210870887323e687b2e283f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_input_);
    par_input_ = NULL;
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    par_default = NULL;
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);
    par_exception = NULL;
    Py_XDECREF(par_regexp);
    par_regexp = NULL;
    Py_XDECREF(var_match);
    var_match = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_input_);
    par_input_ = NULL;
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    par_default = NULL;
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);
    par_exception = NULL;
    Py_XDECREF(par_regexp);
    par_regexp = NULL;
    Py_XDECREF(var_match);
    var_match = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_python_utils$converters$$$function__3_to_unicode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input_ = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    PyObject *par_errors = python_pars[2];
    struct Nuitka_FrameObject *frame_c492a23f5ecbc14661c42bd1f7e1a807;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c492a23f5ecbc14661c42bd1f7e1a807 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c492a23f5ecbc14661c42bd1f7e1a807)) {
        Py_XDECREF(cache_frame_c492a23f5ecbc14661c42bd1f7e1a807);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c492a23f5ecbc14661c42bd1f7e1a807 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c492a23f5ecbc14661c42bd1f7e1a807 = MAKE_FUNCTION_FRAME(codeobj_c492a23f5ecbc14661c42bd1f7e1a807, module_python_utils$converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c492a23f5ecbc14661c42bd1f7e1a807->m_type_description == NULL);
    frame_c492a23f5ecbc14661c42bd1f7e1a807 = cache_frame_c492a23f5ecbc14661c42bd1f7e1a807;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c492a23f5ecbc14661c42bd1f7e1a807);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c492a23f5ecbc14661c42bd1f7e1a807) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_input_);
        tmp_isinstance_inst_1 = par_input_;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[17]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_input_);
        tmp_called_instance_1 = par_input_;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_name_1 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_args_element_name_2 = par_errors;
        frame_c492a23f5ecbc14661c42bd1f7e1a807->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[18],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_input_;
            par_input_ = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input_);
        tmp_args_element_name_3 = par_input_;
        frame_c492a23f5ecbc14661c42bd1f7e1a807->m_frame.f_lineno = 181;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[19], tmp_args_element_name_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_input_;
            par_input_ = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c492a23f5ecbc14661c42bd1f7e1a807);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c492a23f5ecbc14661c42bd1f7e1a807);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c492a23f5ecbc14661c42bd1f7e1a807, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c492a23f5ecbc14661c42bd1f7e1a807->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c492a23f5ecbc14661c42bd1f7e1a807, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c492a23f5ecbc14661c42bd1f7e1a807,
        type_description_1,
        par_input_,
        par_encoding,
        par_errors
    );


    // Release cached frame if used for exception.
    if (frame_c492a23f5ecbc14661c42bd1f7e1a807 == cache_frame_c492a23f5ecbc14661c42bd1f7e1a807) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c492a23f5ecbc14661c42bd1f7e1a807);
        cache_frame_c492a23f5ecbc14661c42bd1f7e1a807 = NULL;
    }

    assertFrameObject(frame_c492a23f5ecbc14661c42bd1f7e1a807);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(par_input_);
    tmp_return_value = par_input_;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_input_);
    Py_DECREF(par_input_);
    par_input_ = NULL;
    Py_XDECREF(par_encoding);
    par_encoding = NULL;
    Py_XDECREF(par_errors);
    par_errors = NULL;
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

    Py_XDECREF(par_input_);
    par_input_ = NULL;
    Py_XDECREF(par_encoding);
    par_encoding = NULL;
    Py_XDECREF(par_errors);
    par_errors = NULL;
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


static PyObject *impl_python_utils$converters$$$function__4_to_str(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input_ = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    PyObject *par_errors = python_pars[2];
    struct Nuitka_FrameObject *frame_bf6f6ad59f676c6b522a92b05e68c350;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_bf6f6ad59f676c6b522a92b05e68c350 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bf6f6ad59f676c6b522a92b05e68c350)) {
        Py_XDECREF(cache_frame_bf6f6ad59f676c6b522a92b05e68c350);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf6f6ad59f676c6b522a92b05e68c350 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf6f6ad59f676c6b522a92b05e68c350 = MAKE_FUNCTION_FRAME(codeobj_bf6f6ad59f676c6b522a92b05e68c350, module_python_utils$converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bf6f6ad59f676c6b522a92b05e68c350->m_type_description == NULL);
    frame_bf6f6ad59f676c6b522a92b05e68c350 = cache_frame_bf6f6ad59f676c6b522a92b05e68c350;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bf6f6ad59f676c6b522a92b05e68c350);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bf6f6ad59f676c6b522a92b05e68c350) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_input_);
        tmp_isinstance_inst_1 = par_input_;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[17]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(par_input_);
        tmp_expression_name_2 = par_input_;
        tmp_attribute_name_1 = mod_consts[21];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_2, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input_);
        tmp_args_element_name_1 = par_input_;
        frame_bf6f6ad59f676c6b522a92b05e68c350->m_frame.f_lineno = 206;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[19], tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_input_;
            par_input_ = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(par_input_);
        tmp_called_instance_2 = par_input_;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_name_2 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_args_element_name_3 = par_errors;
        frame_bf6f6ad59f676c6b522a92b05e68c350->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[21],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_input_;
            par_input_ = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf6f6ad59f676c6b522a92b05e68c350);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf6f6ad59f676c6b522a92b05e68c350);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bf6f6ad59f676c6b522a92b05e68c350, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf6f6ad59f676c6b522a92b05e68c350->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf6f6ad59f676c6b522a92b05e68c350, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf6f6ad59f676c6b522a92b05e68c350,
        type_description_1,
        par_input_,
        par_encoding,
        par_errors
    );


    // Release cached frame if used for exception.
    if (frame_bf6f6ad59f676c6b522a92b05e68c350 == cache_frame_bf6f6ad59f676c6b522a92b05e68c350) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bf6f6ad59f676c6b522a92b05e68c350);
        cache_frame_bf6f6ad59f676c6b522a92b05e68c350 = NULL;
    }

    assertFrameObject(frame_bf6f6ad59f676c6b522a92b05e68c350);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(par_input_);
    tmp_return_value = par_input_;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_input_);
    Py_DECREF(par_input_);
    par_input_ = NULL;
    Py_XDECREF(par_encoding);
    par_encoding = NULL;
    Py_XDECREF(par_errors);
    par_errors = NULL;
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

    Py_XDECREF(par_input_);
    par_input_ = NULL;
    Py_XDECREF(par_encoding);
    par_encoding = NULL;
    Py_XDECREF(par_errors);
    par_errors = NULL;
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


static PyObject *impl_python_utils$converters$$$function__5_scale_1024(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_n_prefixes = python_pars[1];
    PyObject *var_power = NULL;
    PyObject *var_scaled = NULL;
    struct Nuitka_FrameObject *frame_0821ab947e5a43376edfeaa6e3fb2b7e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0821ab947e5a43376edfeaa6e3fb2b7e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0821ab947e5a43376edfeaa6e3fb2b7e)) {
        Py_XDECREF(cache_frame_0821ab947e5a43376edfeaa6e3fb2b7e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0821ab947e5a43376edfeaa6e3fb2b7e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0821ab947e5a43376edfeaa6e3fb2b7e = MAKE_FUNCTION_FRAME(codeobj_0821ab947e5a43376edfeaa6e3fb2b7e, module_python_utils$converters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0821ab947e5a43376edfeaa6e3fb2b7e->m_type_description == NULL);
    frame_0821ab947e5a43376edfeaa6e3fb2b7e = cache_frame_0821ab947e5a43376edfeaa6e3fb2b7e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0821ab947e5a43376edfeaa6e3fb2b7e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0821ab947e5a43376edfeaa6e3fb2b7e) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_x);
        tmp_compexpr_left_1 = par_x;
        tmp_compexpr_right_1 = mod_consts[23];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 230;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[23];
        assert(var_power == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_power = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_called_name_1 = LOOKUP_BUILTIN(mod_consts[24]);
        assert(tmp_called_name_1 != NULL);
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_name_2 = par_x;
        tmp_args_element_name_3 = mod_consts[27];
        frame_0821ab947e5a43376edfeaa6e3fb2b7e->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[26],
                call_args
            );
        }

        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[28];
        tmp_int_arg_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n_prefixes);
        tmp_left_name_2 = par_n_prefixes;
        tmp_right_name_2 = mod_consts[29];
        tmp_args_element_name_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_2);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_0821ab947e5a43376edfeaa6e3fb2b7e->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_power == NULL);
        var_power = tmp_assign_source_2;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        if (par_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_float_arg_1 = par_x;
        tmp_left_name_3 = TO_FLOAT(tmp_float_arg_1);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = mod_consts[27];
        tmp_left_name_5 = mod_consts[28];
        CHECK_OBJECT(var_power);
        tmp_right_name_5 = var_power;
        tmp_right_name_4 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_name_5, tmp_right_name_5);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_3);

            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = BINARY_OPERATION_POW_OBJECT_LONG_OBJECT(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_3);

            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_left_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_scaled == NULL);
        var_scaled = tmp_assign_source_3;
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_scaled);
        tmp_tuple_element_1 = var_scaled;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (var_power == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 235;
            type_description_1 = "oooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_power;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
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
    RESTORE_FRAME_EXCEPTION(frame_0821ab947e5a43376edfeaa6e3fb2b7e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0821ab947e5a43376edfeaa6e3fb2b7e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0821ab947e5a43376edfeaa6e3fb2b7e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0821ab947e5a43376edfeaa6e3fb2b7e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0821ab947e5a43376edfeaa6e3fb2b7e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0821ab947e5a43376edfeaa6e3fb2b7e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0821ab947e5a43376edfeaa6e3fb2b7e,
        type_description_1,
        par_x,
        par_n_prefixes,
        var_power,
        var_scaled
    );


    // Release cached frame if used for exception.
    if (frame_0821ab947e5a43376edfeaa6e3fb2b7e == cache_frame_0821ab947e5a43376edfeaa6e3fb2b7e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0821ab947e5a43376edfeaa6e3fb2b7e);
        cache_frame_0821ab947e5a43376edfeaa6e3fb2b7e = NULL;
    }

    assertFrameObject(frame_0821ab947e5a43376edfeaa6e3fb2b7e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_x);
    par_x = NULL;
    Py_XDECREF(par_n_prefixes);
    par_n_prefixes = NULL;
    Py_XDECREF(var_power);
    var_power = NULL;
    CHECK_OBJECT(var_scaled);
    Py_DECREF(var_scaled);
    var_scaled = NULL;
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

    Py_XDECREF(par_x);
    par_x = NULL;
    Py_XDECREF(par_n_prefixes);
    par_n_prefixes = NULL;
    Py_XDECREF(var_power);
    var_power = NULL;
    Py_XDECREF(var_scaled);
    var_scaled = NULL;
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


static PyObject *impl_python_utils$converters$$$function__6_remap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_old_min = python_pars[1];
    PyObject *par_old_max = python_pars[2];
    PyObject *par_new_min = python_pars[3];
    PyObject *par_new_max = python_pars[4];
    PyObject *var_old_range = NULL;
    PyObject *var_new_range = NULL;
    PyObject *var_new_value = NULL;
    struct Nuitka_FrameObject *frame_ce19e04041d7cf7b686fca9e313cdc2e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ce19e04041d7cf7b686fca9e313cdc2e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ce19e04041d7cf7b686fca9e313cdc2e)) {
        Py_XDECREF(cache_frame_ce19e04041d7cf7b686fca9e313cdc2e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ce19e04041d7cf7b686fca9e313cdc2e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ce19e04041d7cf7b686fca9e313cdc2e = MAKE_FUNCTION_FRAME(codeobj_ce19e04041d7cf7b686fca9e313cdc2e, module_python_utils$converters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ce19e04041d7cf7b686fca9e313cdc2e->m_type_description == NULL);
    frame_ce19e04041d7cf7b686fca9e313cdc2e = cache_frame_ce19e04041d7cf7b686fca9e313cdc2e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ce19e04041d7cf7b686fca9e313cdc2e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ce19e04041d7cf7b686fca9e313cdc2e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_old_max);
        tmp_left_name_1 = par_old_max;
        CHECK_OBJECT(par_old_min);
        tmp_right_name_1 = par_old_min;
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_old_range == NULL);
        var_old_range = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(par_new_max);
        tmp_left_name_2 = par_new_max;
        CHECK_OBJECT(par_new_min);
        tmp_right_name_2 = par_new_min;
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_range == NULL);
        var_new_range = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_new_range);
        tmp_compexpr_left_1 = var_new_range;
        tmp_compexpr_right_1 = mod_consts[23];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 286;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[23];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_old_range);
        tmp_compexpr_left_2 = var_old_range;
        tmp_compexpr_right_2 = mod_consts[23];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 289;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        if (par_new_min == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 290;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_3 = par_new_min;
        assert(var_new_value == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_new_value = tmp_assign_source_3;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT(par_value);
        tmp_left_name_4 = par_value;
        if (par_old_min == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 292;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_3 = par_old_min;
        tmp_left_name_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_3);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_range);
        tmp_right_name_4 = var_new_range;
        tmp_assign_source_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_4);
        Py_DECREF(tmp_left_name_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_value == NULL);
        var_new_value = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        if (par_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT(var_new_value);
        tmp_left_name_5 = var_new_value;
        CHECK_OBJECT(var_old_range);
        tmp_right_name_5 = var_old_range;
        tmp_assign_source_5 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_new_value;
            var_new_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT(var_new_value);
        tmp_left_name_6 = var_new_value;
        CHECK_OBJECT(var_old_range);
        tmp_right_name_6 = var_old_range;
        tmp_assign_source_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_6);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_new_value;
            var_new_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT(var_new_value);
        tmp_left_name_7 = var_new_value;
        if (par_new_min == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 298;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_7 = par_new_min;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_7, tmp_right_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = tmp_left_name_7;
        var_new_value = tmp_assign_source_7;

    }
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ce19e04041d7cf7b686fca9e313cdc2e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ce19e04041d7cf7b686fca9e313cdc2e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ce19e04041d7cf7b686fca9e313cdc2e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ce19e04041d7cf7b686fca9e313cdc2e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ce19e04041d7cf7b686fca9e313cdc2e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ce19e04041d7cf7b686fca9e313cdc2e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ce19e04041d7cf7b686fca9e313cdc2e,
        type_description_1,
        par_value,
        par_old_min,
        par_old_max,
        par_new_min,
        par_new_max,
        var_old_range,
        var_new_range,
        var_new_value
    );


    // Release cached frame if used for exception.
    if (frame_ce19e04041d7cf7b686fca9e313cdc2e == cache_frame_ce19e04041d7cf7b686fca9e313cdc2e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ce19e04041d7cf7b686fca9e313cdc2e);
        cache_frame_ce19e04041d7cf7b686fca9e313cdc2e = NULL;
    }

    assertFrameObject(frame_ce19e04041d7cf7b686fca9e313cdc2e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_new_value);
    tmp_return_value = var_new_value;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_value);
    par_value = NULL;
    Py_XDECREF(par_old_min);
    par_old_min = NULL;
    Py_XDECREF(par_old_max);
    par_old_max = NULL;
    Py_XDECREF(par_new_min);
    par_new_min = NULL;
    Py_XDECREF(par_new_max);
    par_new_max = NULL;
    Py_XDECREF(var_old_range);
    var_old_range = NULL;
    Py_XDECREF(var_new_range);
    var_new_range = NULL;
    Py_XDECREF(var_new_value);
    var_new_value = NULL;
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

    Py_XDECREF(par_value);
    par_value = NULL;
    Py_XDECREF(par_old_min);
    par_old_min = NULL;
    Py_XDECREF(par_old_max);
    par_old_max = NULL;
    Py_XDECREF(par_new_min);
    par_new_min = NULL;
    Py_XDECREF(par_new_max);
    par_new_max = NULL;
    Py_XDECREF(var_old_range);
    var_old_range = NULL;
    Py_XDECREF(var_new_range);
    var_new_range = NULL;
    Py_XDECREF(var_new_value);
    var_new_value = NULL;
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



static PyObject *MAKE_FUNCTION_python_utils$converters$$$function__1_to_int(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_python_utils$converters$$$function__1_to_int,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_92e9ca91bbb0f94ee1b633aeaa6bd745,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_python_utils$converters,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_python_utils$converters$$$function__2_to_float(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_python_utils$converters$$$function__2_to_float,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_19027bbe2210870887323e687b2e283f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_python_utils$converters,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_python_utils$converters$$$function__3_to_unicode(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_python_utils$converters$$$function__3_to_unicode,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c492a23f5ecbc14661c42bd1f7e1a807,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_python_utils$converters,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_python_utils$converters$$$function__4_to_str(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_python_utils$converters$$$function__4_to_str,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bf6f6ad59f676c6b522a92b05e68c350,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_python_utils$converters,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_python_utils$converters$$$function__5_scale_1024() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_python_utils$converters$$$function__5_scale_1024,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0821ab947e5a43376edfeaa6e3fb2b7e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_python_utils$converters,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_python_utils$converters$$$function__6_remap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_python_utils$converters$$$function__6_remap,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ce19e04041d7cf7b686fca9e313cdc2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_python_utils$converters,
        mod_consts[36],
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

function_impl_code functable_python_utils$converters[] = {
    impl_python_utils$converters$$$function__1_to_int,
    impl_python_utils$converters$$$function__2_to_float,
    impl_python_utils$converters$$$function__3_to_unicode,
    impl_python_utils$converters$$$function__4_to_str,
    impl_python_utils$converters$$$function__5_scale_1024,
    impl_python_utils$converters$$$function__6_remap,
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

    function_impl_code *current = functable_python_utils$converters;
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

    if (offset > sizeof(functable_python_utils$converters) || offset < 0) {
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
        functable_python_utils$converters[offset],
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
        module_python_utils$converters,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "python_utils.converters";

// Internal entry point for module code.
PyObject *modulecode_python_utils$converters(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_python_utils$converters = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("python_utils.converters: Skipping module init, already done.\n");
#endif

        return module_python_utils$converters;
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
    PRINT_STRING("python_utils.converters: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("python_utils.converters: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("python_utils.converters: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initpython_utils$converters\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_python_utils$converters = MODULE_DICT(module_python_utils$converters);

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
        moduledict_python_utils$converters,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_python_utils$converters,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_python_utils$converters,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_python_utils$converters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_python_utils$converters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_python_utils$converters);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_python_utils$converters, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_python_utils$converters, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_python_utils$converters, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_python_utils$converters);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_python_utils$converters, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_7f6d9f44946685a71d091d9a5884409a;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_7f6d9f44946685a71d091d9a5884409a = MAKE_MODULE_FRAME(codeobj_7f6d9f44946685a71d091d9a5884409a, module_python_utils$converters);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_7f6d9f44946685a71d091d9a5884409a);
    assert(Py_REFCNT(frame_7f6d9f44946685a71d091d9a5884409a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[38];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[41], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[42], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        frame_7f6d9f44946685a71d091d9a5884409a->m_frame.f_lineno = 1;
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
                (PyObject *)moduledict_python_utils$converters,
                mod_consts[44],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[44]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_python_utils$converters,
                mod_consts[45],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[45]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_python_utils$converters,
                mod_consts[46],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[46]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_python_utils$converters,
                mod_consts[47],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[47]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[0];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_python_utils$converters;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[23];
        frame_7f6d9f44946685a71d091d9a5884409a->m_frame.f_lineno = 4;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[3];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_python_utils$converters;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[23];
        frame_7f6d9f44946685a71d091d9a5884409a->m_frame.f_lineno = 5;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_10);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f6d9f44946685a71d091d9a5884409a);
#endif
    popFrameStack();

    assertFrameObject(frame_7f6d9f44946685a71d091d9a5884409a);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f6d9f44946685a71d091d9a5884409a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f6d9f44946685a71d091d9a5884409a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f6d9f44946685a71d091d9a5884409a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f6d9f44946685a71d091d9a5884409a, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[25];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_python_utils$converters;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = mod_consts[23];
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT1(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[48];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_12 = MAKE_FUNCTION_python_utils$converters$$$function__1_to_int(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[48];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_13 = MAKE_FUNCTION_python_utils$converters$$$function__2_to_float(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[51];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_14 = MAKE_FUNCTION_python_utils$converters$$$function__3_to_unicode(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[51];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_15 = MAKE_FUNCTION_python_utils$converters$$$function__4_to_str(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_python_utils$converters$$$function__5_scale_1024();

        UPDATE_STRING_DICT1(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_python_utils$converters$$$function__6_remap();

        UPDATE_STRING_DICT1(moduledict_python_utils$converters, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_17);
    }

    return module_python_utils$converters;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

