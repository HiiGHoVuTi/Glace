/* Generated code for Python module 'pyreadline3.keysyms.ironpython_keysyms'
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

/* The "module_pyreadline3$keysyms$ironpython_keysyms" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyreadline3$keysyms$ironpython_keysyms;
PyDictObject *moduledict_pyreadline3$keysyms$ironpython_keysyms;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[171];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "pyreadline3.keysyms.ironpython_keysyms");

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
void checkModuleConstants_pyreadline3$keysyms$ironpython_keysyms(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "pyreadline3.keysyms.ironpython_keysyms");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8eed568b1ef809d65e34fe9f14182b64;
static PyCodeObject *codeobj_3385ab28e0c055e1efe2e93a6be59b2a;
static PyCodeObject *codeobj_e101d0d27e3f042c2680389f204ed7d4;
static PyCodeObject *codeobj_3a742ab29438db54125c8ada0c95fb67;
static PyCodeObject *codeobj_0a30150832fb45ddfc32304ac9252a19;
static PyCodeObject *codeobj_60cee3207c4521156c6079023cb62394;
static PyCodeObject *codeobj_fae37f5e90e76d1574f89f0a0b10f9b5;
static PyCodeObject *codeobj_857d74a7d41e8656d6cefbb962153476;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[58]; CHECK_OBJECT(module_filename_obj);
    codeobj_8eed568b1ef809d65e34fe9f14182b64 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[163], NULL, NULL, 0, 0, 0);
    codeobj_3385ab28e0c055e1efe2e93a6be59b2a = MAKE_CODEOBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[38], mod_consts[164], NULL, 4, 0, 0);
    codeobj_e101d0d27e3f042c2680389f204ed7d4 = MAKE_CODEOBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[159], mod_consts[165], NULL, 1, 0, 0);
    codeobj_3a742ab29438db54125c8ada0c95fb67 = MAKE_CODEOBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[8], mod_consts[166], NULL, 1, 0, 0);
    codeobj_0a30150832fb45ddfc32304ac9252a19 = MAKE_CODEOBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[5], mod_consts[167], NULL, 1, 0, 0);
    codeobj_60cee3207c4521156c6079023cb62394 = MAKE_CODEOBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[162], mod_consts[168], NULL, 3, 0, 0);
    codeobj_fae37f5e90e76d1574f89f0a0b10f9b5 = MAKE_CODEOBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[161], mod_consts[169], NULL, 2, 0, 0);
    codeobj_857d74a7d41e8656d6cefbb962153476 = MAKE_CODEOBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[155], mod_consts[170], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__1_make_keysym();


static PyObject *MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__2_key_text_to_keyinfo();


static PyObject *MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__3_char_to_keyinfo(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__4_keyname_to_keyinfo();


static PyObject *MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__5_keyseq_to_keyinfo();


static PyObject *MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__6_make_keyinfo();


static PyObject *MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__7_make_KeyPress();


// The module function definitions.
static PyObject *impl_pyreadline3$keysyms$ironpython_keysyms$$$function__1_make_keysym(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_keycode = python_pars[0];
    PyObject *var_sym = NULL;
    struct Nuitka_FrameObject *frame_857d74a7d41e8656d6cefbb962153476;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_857d74a7d41e8656d6cefbb962153476 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_857d74a7d41e8656d6cefbb962153476)) {
        Py_XDECREF(cache_frame_857d74a7d41e8656d6cefbb962153476);

#if _DEBUG_REFCOUNTS
        if (cache_frame_857d74a7d41e8656d6cefbb962153476 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_857d74a7d41e8656d6cefbb962153476 = MAKE_FUNCTION_FRAME(codeobj_857d74a7d41e8656d6cefbb962153476, module_pyreadline3$keysyms$ironpython_keysyms, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_857d74a7d41e8656d6cefbb962153476->m_type_description == NULL);
    frame_857d74a7d41e8656d6cefbb962153476 = cache_frame_857d74a7d41e8656d6cefbb962153476;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_857d74a7d41e8656d6cefbb962153476);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_857d74a7d41e8656d6cefbb962153476) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_keycode);
        tmp_subscript_name_1 = par_keycode;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert(var_sym == NULL);
        var_sym = tmp_assign_source_1;
    }
    goto try_end_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_857d74a7d41e8656d6cefbb962153476, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_857d74a7d41e8656d6cefbb962153476, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[1];
        assert(var_sym == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_sym = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 107;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_857d74a7d41e8656d6cefbb962153476->m_frame) frame_857d74a7d41e8656d6cefbb962153476->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_2;
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
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    if (var_sym == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 111;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_sym;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_857d74a7d41e8656d6cefbb962153476);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_857d74a7d41e8656d6cefbb962153476);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_857d74a7d41e8656d6cefbb962153476);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_857d74a7d41e8656d6cefbb962153476, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_857d74a7d41e8656d6cefbb962153476->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_857d74a7d41e8656d6cefbb962153476, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_857d74a7d41e8656d6cefbb962153476,
        type_description_1,
        par_keycode,
        var_sym
    );


    // Release cached frame if used for exception.
    if (frame_857d74a7d41e8656d6cefbb962153476 == cache_frame_857d74a7d41e8656d6cefbb962153476) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_857d74a7d41e8656d6cefbb962153476);
        cache_frame_857d74a7d41e8656d6cefbb962153476 = NULL;
    }

    assertFrameObject(frame_857d74a7d41e8656d6cefbb962153476);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_keycode);
    Py_DECREF(par_keycode);
    par_keycode = NULL;
    Py_XDECREF(var_sym);
    var_sym = NULL;
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

    CHECK_OBJECT(par_keycode);
    Py_DECREF(par_keycode);
    par_keycode = NULL;
    Py_XDECREF(var_sym);
    var_sym = NULL;
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


static PyObject *impl_pyreadline3$keysyms$ironpython_keysyms$$$function__2_key_text_to_keyinfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_keytext = python_pars[0];
    struct Nuitka_FrameObject *frame_e101d0d27e3f042c2680389f204ed7d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e101d0d27e3f042c2680389f204ed7d4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e101d0d27e3f042c2680389f204ed7d4)) {
        Py_XDECREF(cache_frame_e101d0d27e3f042c2680389f204ed7d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e101d0d27e3f042c2680389f204ed7d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e101d0d27e3f042c2680389f204ed7d4 = MAKE_FUNCTION_FRAME(codeobj_e101d0d27e3f042c2680389f204ed7d4, module_pyreadline3$keysyms$ironpython_keysyms, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e101d0d27e3f042c2680389f204ed7d4->m_type_description == NULL);
    frame_e101d0d27e3f042c2680389f204ed7d4 = cache_frame_e101d0d27e3f042c2680389f204ed7d4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e101d0d27e3f042c2680389f204ed7d4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e101d0d27e3f042c2680389f204ed7d4) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_keytext);
        tmp_called_instance_1 = par_keytext;
        frame_e101d0d27e3f042c2680389f204ed7d4->m_frame.f_lineno = 121;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[3],
            &PyTuple_GET_ITEM(mod_consts[4], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_keytext == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_keytext;
        tmp_subscript_name_1 = mod_consts[7];
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e101d0d27e3f042c2680389f204ed7d4->m_frame.f_lineno = 122;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_keytext == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = par_keytext;
        frame_e101d0d27e3f042c2680389f204ed7d4->m_frame.f_lineno = 124;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e101d0d27e3f042c2680389f204ed7d4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e101d0d27e3f042c2680389f204ed7d4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e101d0d27e3f042c2680389f204ed7d4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e101d0d27e3f042c2680389f204ed7d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e101d0d27e3f042c2680389f204ed7d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e101d0d27e3f042c2680389f204ed7d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e101d0d27e3f042c2680389f204ed7d4,
        type_description_1,
        par_keytext
    );


    // Release cached frame if used for exception.
    if (frame_e101d0d27e3f042c2680389f204ed7d4 == cache_frame_e101d0d27e3f042c2680389f204ed7d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e101d0d27e3f042c2680389f204ed7d4);
        cache_frame_e101d0d27e3f042c2680389f204ed7d4 = NULL;
    }

    assertFrameObject(frame_e101d0d27e3f042c2680389f204ed7d4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_keytext);
    par_keytext = NULL;
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

    Py_XDECREF(par_keytext);
    par_keytext = NULL;
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


static PyObject *impl_pyreadline3$keysyms$ironpython_keysyms$$$function__3_char_to_keyinfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_char = python_pars[0];
    PyObject *par_control = python_pars[1];
    PyObject *par_meta = python_pars[2];
    PyObject *par_shift = python_pars[3];
    PyObject *var_vk = NULL;
    struct Nuitka_FrameObject *frame_3385ab28e0c055e1efe2e93a6be59b2a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3385ab28e0c055e1efe2e93a6be59b2a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3385ab28e0c055e1efe2e93a6be59b2a)) {
        Py_XDECREF(cache_frame_3385ab28e0c055e1efe2e93a6be59b2a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3385ab28e0c055e1efe2e93a6be59b2a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3385ab28e0c055e1efe2e93a6be59b2a = MAKE_FUNCTION_FRAME(codeobj_3385ab28e0c055e1efe2e93a6be59b2a, module_pyreadline3$keysyms$ironpython_keysyms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3385ab28e0c055e1efe2e93a6be59b2a->m_type_description == NULL);
    frame_3385ab28e0c055e1efe2e93a6be59b2a = cache_frame_3385ab28e0c055e1efe2e93a6be59b2a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3385ab28e0c055e1efe2e93a6be59b2a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3385ab28e0c055e1efe2e93a6be59b2a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_ord_arg_1;
        CHECK_OBJECT(par_char);
        tmp_ord_arg_1 = par_char;
        tmp_assign_source_1 = BUILTIN_ORD(tmp_ord_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vk == NULL);
        var_vk = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_vk);
        tmp_left_name_1 = var_vk;
        tmp_right_name_1 = mod_consts[10];
        tmp_compexpr_left_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[10];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 129;
            type_description_1 = "ooooo";
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
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_1;
        tmp_called_name_1 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_name_1 != NULL);
        tmp_left_name_2 = mod_consts[12];
        CHECK_OBJECT(par_char);
        tmp_tuple_element_1 = par_char;
        tmp_right_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_name_2, 0, tmp_tuple_element_1);
        if (var_vk == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "ooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_vk;
        PyTuple_SET_ITEM0(tmp_right_name_2, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_name_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_3385ab28e0c055e1efe2e93a6be59b2a->m_frame.f_lineno = 130;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[14];
        frame_3385ab28e0c055e1efe2e93a6be59b2a->m_frame.f_lineno = 131;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 131;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        if (var_vk == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_3 = var_vk;
        tmp_right_name_3 = mod_consts[15];
        tmp_condition_result_2 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_left_name_3, tmp_right_name_3);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_True;
        {
            PyObject *old = par_shift;
            assert(old != NULL);
            par_shift = tmp_assign_source_2;
            Py_INCREF(par_shift);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        if (var_vk == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_4 = var_vk;
        tmp_right_name_4 = mod_consts[16];
        tmp_condition_result_3 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_left_name_4, tmp_right_name_4);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        assert(tmp_condition_result_3 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_True;
        {
            PyObject *old = par_control;
            assert(old != NULL);
            par_control = tmp_assign_source_3;
            Py_INCREF(par_control);
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        if (var_vk == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_5 = var_vk;
        tmp_right_name_5 = mod_consts[17];
        tmp_condition_result_4 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_left_name_5, tmp_right_name_5);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_True;
        {
            PyObject *old = par_meta;
            assert(old != NULL);
            par_meta = tmp_assign_source_4;
            Py_INCREF(par_meta);
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_control);
        tmp_tuple_element_2 = par_control;
        tmp_return_value = PyTuple_New(4);
        {
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_meta);
            tmp_tuple_element_2 = par_meta;
            PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
            CHECK_OBJECT(par_shift);
            tmp_tuple_element_2 = par_shift;
            PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
            if (var_vk == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 138;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }

            tmp_left_name_6 = var_vk;
            tmp_right_name_6 = mod_consts[18];
            tmp_tuple_element_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_name_6, tmp_right_name_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_return_value, 3, tmp_tuple_element_2);
        }
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
    RESTORE_FRAME_EXCEPTION(frame_3385ab28e0c055e1efe2e93a6be59b2a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3385ab28e0c055e1efe2e93a6be59b2a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3385ab28e0c055e1efe2e93a6be59b2a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3385ab28e0c055e1efe2e93a6be59b2a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3385ab28e0c055e1efe2e93a6be59b2a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3385ab28e0c055e1efe2e93a6be59b2a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3385ab28e0c055e1efe2e93a6be59b2a,
        type_description_1,
        par_char,
        par_control,
        par_meta,
        par_shift,
        var_vk
    );


    // Release cached frame if used for exception.
    if (frame_3385ab28e0c055e1efe2e93a6be59b2a == cache_frame_3385ab28e0c055e1efe2e93a6be59b2a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3385ab28e0c055e1efe2e93a6be59b2a);
        cache_frame_3385ab28e0c055e1efe2e93a6be59b2a = NULL;
    }

    assertFrameObject(frame_3385ab28e0c055e1efe2e93a6be59b2a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_char);
    Py_DECREF(par_char);
    par_char = NULL;
    CHECK_OBJECT(par_control);
    Py_DECREF(par_control);
    par_control = NULL;
    CHECK_OBJECT(par_meta);
    Py_DECREF(par_meta);
    par_meta = NULL;
    CHECK_OBJECT(par_shift);
    Py_DECREF(par_shift);
    par_shift = NULL;
    Py_XDECREF(var_vk);
    var_vk = NULL;
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

    CHECK_OBJECT(par_char);
    Py_DECREF(par_char);
    par_char = NULL;
    Py_XDECREF(par_control);
    par_control = NULL;
    Py_XDECREF(par_meta);
    par_meta = NULL;
    Py_XDECREF(par_shift);
    par_shift = NULL;
    Py_XDECREF(var_vk);
    var_vk = NULL;
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


static PyObject *impl_pyreadline3$keysyms$ironpython_keysyms$$$function__4_keyname_to_keyinfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_keyname = python_pars[0];
    PyObject *var_control = NULL;
    PyObject *var_meta = NULL;
    PyObject *var_shift = NULL;
    PyObject *var_lkeyname = NULL;
    struct Nuitka_FrameObject *frame_3a742ab29438db54125c8ada0c95fb67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3a742ab29438db54125c8ada0c95fb67 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_False;
        assert(var_control == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_control = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_False;
        assert(var_meta == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_meta = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_False;
        assert(var_shift == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_shift = tmp_assign_source_3;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_3a742ab29438db54125c8ada0c95fb67)) {
        Py_XDECREF(cache_frame_3a742ab29438db54125c8ada0c95fb67);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3a742ab29438db54125c8ada0c95fb67 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3a742ab29438db54125c8ada0c95fb67 = MAKE_FUNCTION_FRAME(codeobj_3a742ab29438db54125c8ada0c95fb67, module_pyreadline3$keysyms$ironpython_keysyms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3a742ab29438db54125c8ada0c95fb67->m_type_description == NULL);
    frame_3a742ab29438db54125c8ada0c95fb67 = cache_frame_3a742ab29438db54125c8ada0c95fb67;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3a742ab29438db54125c8ada0c95fb67);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3a742ab29438db54125c8ada0c95fb67) == 2); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        if (par_keyname == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 147;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_keyname;
        frame_3a742ab29438db54125c8ada0c95fb67->m_frame.f_lineno = 147;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[20]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_lkeyname;
            var_lkeyname = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_lkeyname);
        tmp_called_instance_2 = var_lkeyname;
        frame_3a742ab29438db54125c8ada0c95fb67->m_frame.f_lineno = 148;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[3],
            &PyTuple_GET_ITEM(mod_consts[21], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 148;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_True;
        {
            PyObject *old = var_control;
            var_control = tmp_assign_source_5;
            Py_INCREF(var_control);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        if (par_keyname == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_keyname;
        tmp_subscript_name_1 = mod_consts[22];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_keyname;
            par_keyname = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        if (var_lkeyname == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_lkeyname;
        frame_3a742ab29438db54125c8ada0c95fb67->m_frame.f_lineno = 151;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[3],
            &PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_True;
        {
            PyObject *old = var_control;
            var_control = tmp_assign_source_7;
            Py_INCREF(var_control);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        if (par_keyname == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_keyname;
        tmp_subscript_name_2 = mod_consts[25];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_keyname;
            par_keyname = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_3;
        if (var_lkeyname == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = var_lkeyname;
        frame_3a742ab29438db54125c8ada0c95fb67->m_frame.f_lineno = 154;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_4,
            mod_consts[3],
            &PyTuple_GET_ITEM(mod_consts[26], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_True;
        {
            PyObject *old = var_meta;
            var_meta = tmp_assign_source_9;
            Py_INCREF(var_meta);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_3;
        if (par_keyname == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_keyname;
        tmp_subscript_name_3 = mod_consts[25];
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_keyname;
            par_keyname = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_4;
        if (var_lkeyname == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = var_lkeyname;
        frame_3a742ab29438db54125c8ada0c95fb67->m_frame.f_lineno = 157;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_5,
            mod_consts[3],
            &PyTuple_GET_ITEM(mod_consts[27], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 157;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_True;
        {
            PyObject *old = var_meta;
            var_meta = tmp_assign_source_11;
            Py_INCREF(var_meta);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_4;
        if (par_keyname == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 159;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_keyname;
        tmp_subscript_name_4 = mod_consts[28];
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_keyname;
            par_keyname = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_5;
        int tmp_truth_name_5;
        if (var_lkeyname == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 160;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = var_lkeyname;
        frame_3a742ab29438db54125c8ada0c95fb67->m_frame.f_lineno = 160;
        tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_6,
            mod_consts[3],
            &PyTuple_GET_ITEM(mod_consts[29], 0)
        );

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 160;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_True;
        {
            PyObject *old = var_shift;
            var_shift = tmp_assign_source_13;
            Py_INCREF(var_shift);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_5;
        if (par_keyname == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_keyname;
        tmp_subscript_name_5 = mod_consts[30];
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_5);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_keyname;
            par_keyname = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_condition_result_6_object_1;
        if (par_keyname == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = par_keyname;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[31];
        tmp_tmp_condition_result_6_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        assert(!(tmp_tmp_condition_result_6_object_1 == NULL));
        tmp_condition_result_6 = CHECK_IF_TRUE(tmp_tmp_condition_result_6_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_6_object_1);
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_tuple_element_1;
        if (var_control == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_control;
        tmp_return_value = PyTuple_New(4);
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_expression_name_6;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_name_2;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            if (var_meta == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 166;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }

            tmp_tuple_element_1 = var_meta;
            PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
            if (var_shift == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 166;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }

            tmp_tuple_element_1 = var_shift;
            PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
            tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_expression_name_6 == NULL)) {
                tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
            }

            if (tmp_expression_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[36]);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            if (par_keyname == NULL) {
                Py_DECREF(tmp_called_name_1);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 167;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_7 = par_keyname;
            frame_3a742ab29438db54125c8ada0c95fb67->m_frame.f_lineno = 167;
            tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[20]);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 167;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            tmp_args_element_name_2 = mod_consts[37];
            frame_3a742ab29438db54125c8ada0c95fb67->m_frame.f_lineno = 166;
            {
                PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
            }

            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_keyname == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = par_keyname;
        if (var_control == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = var_control;
        if (var_meta == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = var_meta;
        if (var_shift == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = var_shift;
        frame_3a742ab29438db54125c8ada0c95fb67->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_6:;
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 146;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3a742ab29438db54125c8ada0c95fb67);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3a742ab29438db54125c8ada0c95fb67);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3a742ab29438db54125c8ada0c95fb67);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3a742ab29438db54125c8ada0c95fb67, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3a742ab29438db54125c8ada0c95fb67->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3a742ab29438db54125c8ada0c95fb67, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3a742ab29438db54125c8ada0c95fb67,
        type_description_1,
        par_keyname,
        var_control,
        var_meta,
        var_shift,
        var_lkeyname
    );


    // Release cached frame if used for exception.
    if (frame_3a742ab29438db54125c8ada0c95fb67 == cache_frame_3a742ab29438db54125c8ada0c95fb67) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3a742ab29438db54125c8ada0c95fb67);
        cache_frame_3a742ab29438db54125c8ada0c95fb67 = NULL;
    }

    assertFrameObject(frame_3a742ab29438db54125c8ada0c95fb67);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_keyname);
    par_keyname = NULL;
    Py_XDECREF(var_control);
    var_control = NULL;
    Py_XDECREF(var_meta);
    var_meta = NULL;
    Py_XDECREF(var_shift);
    var_shift = NULL;
    Py_XDECREF(var_lkeyname);
    var_lkeyname = NULL;
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

    Py_XDECREF(par_keyname);
    par_keyname = NULL;
    Py_XDECREF(var_control);
    var_control = NULL;
    Py_XDECREF(var_meta);
    var_meta = NULL;
    Py_XDECREF(var_shift);
    var_shift = NULL;
    Py_XDECREF(var_lkeyname);
    var_lkeyname = NULL;
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


static PyObject *impl_pyreadline3$keysyms$ironpython_keysyms$$$function__5_keyseq_to_keyinfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_keyseq = python_pars[0];
    PyObject *var_res = NULL;
    PyObject *var_control = NULL;
    PyObject *var_meta = NULL;
    PyObject *var_shift = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    struct Nuitka_FrameObject *frame_0a30150832fb45ddfc32304ac9252a19;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0a30150832fb45ddfc32304ac9252a19 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_res == NULL);
        var_res = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_False;
        assert(var_control == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_control = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_False;
        assert(var_meta == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_meta = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_False;
        assert(var_shift == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_shift = tmp_assign_source_4;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_0a30150832fb45ddfc32304ac9252a19)) {
        Py_XDECREF(cache_frame_0a30150832fb45ddfc32304ac9252a19);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a30150832fb45ddfc32304ac9252a19 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a30150832fb45ddfc32304ac9252a19 = MAKE_FUNCTION_FRAME(codeobj_0a30150832fb45ddfc32304ac9252a19, module_pyreadline3$keysyms$ironpython_keysyms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0a30150832fb45ddfc32304ac9252a19->m_type_description == NULL);
    frame_0a30150832fb45ddfc32304ac9252a19 = cache_frame_0a30150832fb45ddfc32304ac9252a19;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0a30150832fb45ddfc32304ac9252a19);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0a30150832fb45ddfc32304ac9252a19) == 2); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        if (par_keyseq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_keyseq;
        frame_0a30150832fb45ddfc32304ac9252a19->m_frame.f_lineno = 179;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[3],
            &PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 179;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_True;
        {
            PyObject *old = var_control;
            var_control = tmp_assign_source_5;
            Py_INCREF(var_control);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        if (par_keyseq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 181;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_keyseq;
        tmp_subscript_name_1 = mod_consts[41];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_keyseq;
            par_keyseq = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        if (par_keyseq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 182;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_keyseq;
        frame_0a30150832fb45ddfc32304ac9252a19->m_frame.f_lineno = 182;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[3],
            &PyTuple_GET_ITEM(mod_consts[42], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 182;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_True;
        {
            PyObject *old = var_meta;
            var_meta = tmp_assign_source_7;
            Py_INCREF(var_meta);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        if (par_keyseq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 184;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_keyseq;
        tmp_subscript_name_2 = mod_consts[41];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_keyseq;
            par_keyseq = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_3;
        if (par_keyseq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_keyseq;
        frame_0a30150832fb45ddfc32304ac9252a19->m_frame.f_lineno = 185;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[3],
            &PyTuple_GET_ITEM(mod_consts[43], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 185;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        if (var_res == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = var_res;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[45]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = mod_consts[46];
        if (var_control == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = var_control;
        if (var_meta == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = var_meta;
        if (var_shift == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = var_shift;
        frame_0a30150832fb45ddfc32304ac9252a19->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_2, call_args);
        }

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_0a30150832fb45ddfc32304ac9252a19->m_frame.f_lineno = 186;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_False;
        {
            PyObject *old = tmp_assign_unpack_1__assign_source;
            tmp_assign_unpack_1__assign_source = tmp_assign_source_9;
            Py_INCREF(tmp_assign_unpack_1__assign_source);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_10 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_control;
            var_control = tmp_assign_source_10;
            Py_INCREF(var_control);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_11 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_meta;
            var_meta = tmp_assign_source_11;
            Py_INCREF(var_meta);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_12 = tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = var_shift;
            var_shift = tmp_assign_source_12;
            Py_INCREF(var_shift);
            Py_XDECREF(old);
        }

    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_3;
        if (par_keyseq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_keyseq;
        tmp_subscript_name_3 = mod_consts[47];
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_keyseq;
            par_keyseq = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_condition_result_4_object_1;
        if (par_keyseq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = par_keyseq;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[31];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        assert(!(tmp_tmp_condition_result_4_object_1 == NULL));
        tmp_condition_result_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        if (var_res == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = var_res;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[45]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_keyseq == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_keyseq;
        tmp_subscript_name_4 = mod_consts[48];
        tmp_args_element_name_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_4, 0);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_control == NULL) {
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_8 = var_control;
        if (var_meta == NULL) {
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = var_meta;
        if (var_shift == NULL) {
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_10 = var_shift;
        frame_0a30150832fb45ddfc32304ac9252a19->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_args_element_name_7);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_0a30150832fb45ddfc32304ac9252a19->m_frame.f_lineno = 190;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_False;
        {
            PyObject *old = tmp_assign_unpack_2__assign_source;
            tmp_assign_unpack_2__assign_source = tmp_assign_source_14;
            Py_INCREF(tmp_assign_unpack_2__assign_source);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_15 = tmp_assign_unpack_2__assign_source;
        {
            PyObject *old = var_control;
            var_control = tmp_assign_source_15;
            Py_INCREF(var_control);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_16 = tmp_assign_unpack_2__assign_source;
        {
            PyObject *old = var_meta;
            var_meta = tmp_assign_source_16;
            Py_INCREF(var_meta);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_17 = tmp_assign_unpack_2__assign_source;
        {
            PyObject *old = var_shift;
            var_shift = tmp_assign_source_17;
            Py_INCREF(var_shift);
            Py_XDECREF(old);
        }

    }
    CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
    Py_DECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_5;
        if (par_keyseq == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_keyseq;
        tmp_subscript_name_5 = mod_consts[49];
        tmp_assign_source_18 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_5);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_keyseq;
            par_keyseq = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_expression_name_8;
        PyObject *tmp_subscript_name_6;
        if (var_res == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 194;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = var_res;
        tmp_subscript_name_6 = mod_consts[48];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_8, tmp_subscript_name_6, 0);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 178;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a30150832fb45ddfc32304ac9252a19);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a30150832fb45ddfc32304ac9252a19);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a30150832fb45ddfc32304ac9252a19);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0a30150832fb45ddfc32304ac9252a19, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a30150832fb45ddfc32304ac9252a19->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a30150832fb45ddfc32304ac9252a19, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a30150832fb45ddfc32304ac9252a19,
        type_description_1,
        par_keyseq,
        var_res,
        var_control,
        var_meta,
        var_shift
    );


    // Release cached frame if used for exception.
    if (frame_0a30150832fb45ddfc32304ac9252a19 == cache_frame_0a30150832fb45ddfc32304ac9252a19) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0a30150832fb45ddfc32304ac9252a19);
        cache_frame_0a30150832fb45ddfc32304ac9252a19 = NULL;
    }

    assertFrameObject(frame_0a30150832fb45ddfc32304ac9252a19);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_keyseq);
    par_keyseq = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
    Py_XDECREF(var_control);
    var_control = NULL;
    Py_XDECREF(var_meta);
    var_meta = NULL;
    Py_XDECREF(var_shift);
    var_shift = NULL;
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

    Py_XDECREF(par_keyseq);
    par_keyseq = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
    Py_XDECREF(var_control);
    var_control = NULL;
    Py_XDECREF(var_meta);
    var_meta = NULL;
    Py_XDECREF(var_shift);
    var_shift = NULL;
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


static PyObject *impl_pyreadline3$keysyms$ironpython_keysyms$$$function__6_make_keyinfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_keycode = python_pars[0];
    PyObject *par_state = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = Py_False;
        tmp_return_value = PyTuple_New(4);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_False;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_False;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_keycode);
        tmp_tuple_element_1 = par_keycode;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_keycode);
    Py_DECREF(par_keycode);
    par_keycode = NULL;
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    par_state = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline3$keysyms$ironpython_keysyms$$$function__7_make_KeyPress(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_char = python_pars[0];
    PyObject *par_state = python_pars[1];
    PyObject *par_keycode = python_pars[2];
    PyObject *var_shift = NULL;
    PyObject *var_control = NULL;
    PyObject *var_meta = NULL;
    PyObject *var_keyname = NULL;
    struct Nuitka_FrameObject *frame_60cee3207c4521156c6079023cb62394;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_60cee3207c4521156c6079023cb62394 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_60cee3207c4521156c6079023cb62394)) {
        Py_XDECREF(cache_frame_60cee3207c4521156c6079023cb62394);

#if _DEBUG_REFCOUNTS
        if (cache_frame_60cee3207c4521156c6079023cb62394 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_60cee3207c4521156c6079023cb62394 = MAKE_FUNCTION_FRAME(codeobj_60cee3207c4521156c6079023cb62394, module_pyreadline3$keysyms$ironpython_keysyms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_60cee3207c4521156c6079023cb62394->m_type_description == NULL);
    frame_60cee3207c4521156c6079023cb62394 = cache_frame_60cee3207c4521156c6079023cb62394;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_60cee3207c4521156c6079023cb62394);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_60cee3207c4521156c6079023cb62394) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_value_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_int_arg_2;
        CHECK_OBJECT(par_state);
        tmp_int_arg_1 = par_state;
        tmp_left_name_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_int_arg_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_int_arg_2 == NULL)) {
            tmp_int_arg_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyNumber_Int(tmp_int_arg_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_value_name_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_value_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_name_1);
        Py_DECREF(tmp_value_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = (tmp_res != 0) ? Py_True : Py_False;
        assert(var_shift == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_shift = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_value_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_int_arg_4;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_int_arg_3 = par_state;
        tmp_left_name_2 = PyNumber_Int(tmp_int_arg_3);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_int_arg_4 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_int_arg_4 == NULL)) {
            tmp_int_arg_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_int_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 207;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = PyNumber_Int(tmp_int_arg_4);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 207;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_value_name_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_value_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_name_2);
        Py_DECREF(tmp_value_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = (tmp_res != 0) ? Py_True : Py_False;
        assert(var_control == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_control = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_value_name_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_int_arg_5;
        PyObject *tmp_right_name_3;
        PyObject *tmp_int_arg_6;
        if (par_state == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_int_arg_5 = par_state;
        tmp_left_name_3 = PyNumber_Int(tmp_int_arg_5);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_int_arg_6 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_int_arg_6 == NULL)) {
            tmp_int_arg_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_int_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_3);

            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = PyNumber_Int(tmp_int_arg_6);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_3);

            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_value_name_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_left_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_value_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_name_3);
        Py_DECREF(tmp_value_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = (tmp_res != 0) ? Py_True : Py_False;
        assert(var_meta == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_meta = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_keycode);
        tmp_args_element_name_1 = par_keycode;
        tmp_args_element_name_2 = mod_consts[1];
        frame_60cee3207c4521156c6079023cb62394->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[36],
                call_args
            );
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_60cee3207c4521156c6079023cb62394->m_frame.f_lineno = 209;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[20]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_keyname == NULL);
        var_keyname = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        CHECK_OBJECT(var_control);
        tmp_and_left_value_1 = CHECK_IF_TRUE(var_control) == 1;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_meta);
        tmp_and_right_value_1 = CHECK_IF_TRUE(var_meta) == 1;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_False;
        {
            PyObject *old = var_control;
            assert(old != NULL);
            var_control = tmp_assign_source_5;
            Py_INCREF(var_control);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_False;
        {
            PyObject *old = var_meta;
            assert(old != NULL);
            var_meta = tmp_assign_source_6;
            Py_INCREF(var_meta);
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        CHECK_OBJECT(var_control);
        tmp_condition_result_2 = CHECK_IF_TRUE(var_control) == 1;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unicode_arg_1;
        if (par_keycode == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_unicode_arg_1 = par_keycode;
        tmp_assign_source_7 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_char;
            assert(old != NULL);
            par_char = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_char == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 215;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = par_char;
        CHECK_OBJECT(var_shift);
        tmp_args_element_name_4 = var_shift;
        CHECK_OBJECT(var_control);
        tmp_args_element_name_5 = var_control;
        CHECK_OBJECT(var_meta);
        tmp_args_element_name_6 = var_meta;
        CHECK_OBJECT(var_keyname);
        tmp_args_element_name_7 = var_keyname;
        frame_60cee3207c4521156c6079023cb62394->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_60cee3207c4521156c6079023cb62394);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_60cee3207c4521156c6079023cb62394);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_60cee3207c4521156c6079023cb62394);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_60cee3207c4521156c6079023cb62394, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_60cee3207c4521156c6079023cb62394->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_60cee3207c4521156c6079023cb62394, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_60cee3207c4521156c6079023cb62394,
        type_description_1,
        par_char,
        par_state,
        par_keycode,
        var_shift,
        var_control,
        var_meta,
        var_keyname
    );


    // Release cached frame if used for exception.
    if (frame_60cee3207c4521156c6079023cb62394 == cache_frame_60cee3207c4521156c6079023cb62394) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_60cee3207c4521156c6079023cb62394);
        cache_frame_60cee3207c4521156c6079023cb62394 = NULL;
    }

    assertFrameObject(frame_60cee3207c4521156c6079023cb62394);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_char);
    par_char = NULL;
    Py_XDECREF(par_state);
    par_state = NULL;
    Py_XDECREF(par_keycode);
    par_keycode = NULL;
    CHECK_OBJECT(var_shift);
    Py_DECREF(var_shift);
    var_shift = NULL;
    CHECK_OBJECT(var_control);
    Py_DECREF(var_control);
    var_control = NULL;
    CHECK_OBJECT(var_meta);
    Py_DECREF(var_meta);
    var_meta = NULL;
    CHECK_OBJECT(var_keyname);
    Py_DECREF(var_keyname);
    var_keyname = NULL;
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

    Py_XDECREF(par_char);
    par_char = NULL;
    Py_XDECREF(par_state);
    par_state = NULL;
    Py_XDECREF(par_keycode);
    par_keycode = NULL;
    Py_XDECREF(var_shift);
    var_shift = NULL;
    Py_XDECREF(var_control);
    var_control = NULL;
    Py_XDECREF(var_meta);
    var_meta = NULL;
    Py_XDECREF(var_keyname);
    var_keyname = NULL;
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



static PyObject *MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__1_make_keysym() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$keysyms$ironpython_keysyms$$$function__1_make_keysym,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_857d74a7d41e8656d6cefbb962153476,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$keysyms$ironpython_keysyms,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__2_key_text_to_keyinfo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$keysyms$ironpython_keysyms$$$function__2_key_text_to_keyinfo,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e101d0d27e3f042c2680389f204ed7d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$keysyms$ironpython_keysyms,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__3_char_to_keyinfo(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$keysyms$ironpython_keysyms$$$function__3_char_to_keyinfo,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3385ab28e0c055e1efe2e93a6be59b2a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$keysyms$ironpython_keysyms,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__4_keyname_to_keyinfo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$keysyms$ironpython_keysyms$$$function__4_keyname_to_keyinfo,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3a742ab29438db54125c8ada0c95fb67,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$keysyms$ironpython_keysyms,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__5_keyseq_to_keyinfo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$keysyms$ironpython_keysyms$$$function__5_keyseq_to_keyinfo,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0a30150832fb45ddfc32304ac9252a19,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$keysyms$ironpython_keysyms,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__6_make_keyinfo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$keysyms$ironpython_keysyms$$$function__6_make_keyinfo,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fae37f5e90e76d1574f89f0a0b10f9b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$keysyms$ironpython_keysyms,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__7_make_KeyPress() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$keysyms$ironpython_keysyms$$$function__7_make_KeyPress,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_60cee3207c4521156c6079023cb62394,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$keysyms$ironpython_keysyms,
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

function_impl_code functable_pyreadline3$keysyms$ironpython_keysyms[] = {
    impl_pyreadline3$keysyms$ironpython_keysyms$$$function__1_make_keysym,
    impl_pyreadline3$keysyms$ironpython_keysyms$$$function__2_key_text_to_keyinfo,
    impl_pyreadline3$keysyms$ironpython_keysyms$$$function__3_char_to_keyinfo,
    impl_pyreadline3$keysyms$ironpython_keysyms$$$function__4_keyname_to_keyinfo,
    impl_pyreadline3$keysyms$ironpython_keysyms$$$function__5_keyseq_to_keyinfo,
    impl_pyreadline3$keysyms$ironpython_keysyms$$$function__6_make_keyinfo,
    impl_pyreadline3$keysyms$ironpython_keysyms$$$function__7_make_KeyPress,
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

    function_impl_code *current = functable_pyreadline3$keysyms$ironpython_keysyms;
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

    if (offset > sizeof(functable_pyreadline3$keysyms$ironpython_keysyms) || offset < 0) {
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
        functable_pyreadline3$keysyms$ironpython_keysyms[offset],
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
        module_pyreadline3$keysyms$ironpython_keysyms,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "pyreadline3.keysyms.ironpython_keysyms";

// Internal entry point for module code.
PyObject *modulecode_pyreadline3$keysyms$ironpython_keysyms(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_pyreadline3$keysyms$ironpython_keysyms = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyreadline3.keysyms.ironpython_keysyms: Skipping module init, already done.\n");
#endif

        return module_pyreadline3$keysyms$ironpython_keysyms;
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
    PRINT_STRING("pyreadline3.keysyms.ironpython_keysyms: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pyreadline3.keysyms.ironpython_keysyms: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pyreadline3.keysyms.ironpython_keysyms: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initpyreadline3$keysyms$ironpython_keysyms\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_pyreadline3$keysyms$ironpython_keysyms = MODULE_DICT(module_pyreadline3$keysyms$ironpython_keysyms);

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
        moduledict_pyreadline3$keysyms$ironpython_keysyms,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyreadline3$keysyms$ironpython_keysyms,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyreadline3$keysyms$ironpython_keysyms,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyreadline3$keysyms$ironpython_keysyms,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyreadline3$keysyms$ironpython_keysyms,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyreadline3$keysyms$ironpython_keysyms);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pyreadline3$keysyms$ironpython_keysyms);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8eed568b1ef809d65e34fe9f14182b64;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_8eed568b1ef809d65e34fe9f14182b64 = MAKE_MODULE_FRAME(codeobj_8eed568b1ef809d65e34fe9f14182b64, module_pyreadline3$keysyms$ironpython_keysyms);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_8eed568b1ef809d65e34fe9f14182b64);
    assert(Py_REFCNT(frame_8eed568b1ef809d65e34fe9f14182b64) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[58];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[60]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[60]);

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
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        frame_8eed568b1ef809d65e34fe9f14182b64->m_frame.f_lineno = 10;
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
                (PyObject *)moduledict_pyreadline3$keysyms$ironpython_keysyms,
                mod_consts[64],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[64]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyreadline3$keysyms$ironpython_keysyms,
                mod_consts[65],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[65]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyreadline3$keysyms$ironpython_keysyms,
                mod_consts[66],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[66]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_7);
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
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[67];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_pyreadline3$keysyms$ironpython_keysyms;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[48];
        frame_8eed568b1ef809d65e34fe9f14182b64->m_frame.f_lineno = 12;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[68];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_pyreadline3$keysyms$ironpython_keysyms;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[69];
        tmp_level_name_2 = mod_consts[31];
        frame_8eed568b1ef809d65e34fe9f14182b64->m_frame.f_lineno = 14;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pyreadline3$keysyms$ironpython_keysyms,
                mod_consts[55],
                mod_consts[31]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[55]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_pyreadline3$keysyms$ironpython_keysyms,
                mod_consts[70],
                mod_consts[31]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[70]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_pyreadline3$keysyms$ironpython_keysyms,
                mod_consts[71],
                mod_consts[31]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[71]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_12);
    }
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[72]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[74]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[50]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[74]);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[52]);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[74]);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[53]);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_8;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[75]);
        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = mod_consts[76];
        tmp_assign_source_17 = _PyDict_NewPresized( 60 );
        {
            PyObject *tmp_expression_name_9;
            PyObject *tmp_expression_name_10;
            PyObject *tmp_expression_name_11;
            PyObject *tmp_expression_name_12;
            PyObject *tmp_expression_name_13;
            PyObject *tmp_expression_name_14;
            PyObject *tmp_expression_name_15;
            PyObject *tmp_expression_name_16;
            PyObject *tmp_expression_name_17;
            PyObject *tmp_expression_name_18;
            PyObject *tmp_expression_name_19;
            PyObject *tmp_expression_name_20;
            PyObject *tmp_expression_name_21;
            PyObject *tmp_expression_name_22;
            PyObject *tmp_expression_name_23;
            PyObject *tmp_expression_name_24;
            PyObject *tmp_expression_name_25;
            PyObject *tmp_expression_name_26;
            PyObject *tmp_expression_name_27;
            PyObject *tmp_expression_name_28;
            PyObject *tmp_expression_name_29;
            PyObject *tmp_expression_name_30;
            PyObject *tmp_expression_name_31;
            PyObject *tmp_expression_name_32;
            PyObject *tmp_expression_name_33;
            PyObject *tmp_expression_name_34;
            PyObject *tmp_expression_name_35;
            PyObject *tmp_expression_name_36;
            PyObject *tmp_expression_name_37;
            PyObject *tmp_expression_name_38;
            PyObject *tmp_expression_name_39;
            PyObject *tmp_expression_name_40;
            PyObject *tmp_expression_name_41;
            PyObject *tmp_expression_name_42;
            PyObject *tmp_expression_name_43;
            PyObject *tmp_expression_name_44;
            PyObject *tmp_expression_name_45;
            PyObject *tmp_expression_name_46;
            PyObject *tmp_expression_name_47;
            PyObject *tmp_expression_name_48;
            PyObject *tmp_expression_name_49;
            PyObject *tmp_expression_name_50;
            PyObject *tmp_expression_name_51;
            PyObject *tmp_expression_name_52;
            PyObject *tmp_expression_name_53;
            PyObject *tmp_expression_name_54;
            PyObject *tmp_expression_name_55;
            PyObject *tmp_expression_name_56;
            PyObject *tmp_expression_name_57;
            PyObject *tmp_expression_name_58;
            PyObject *tmp_expression_name_59;
            PyObject *tmp_expression_name_60;
            PyObject *tmp_expression_name_61;
            PyObject *tmp_expression_name_62;
            PyObject *tmp_expression_name_63;
            PyObject *tmp_expression_name_64;
            PyObject *tmp_expression_name_65;
            PyObject *tmp_expression_name_66;
            PyObject *tmp_expression_name_67;
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_9 == NULL)) {
                tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[77]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[77];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_10 == NULL)) {
                tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[78]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[78];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_11 == NULL)) {
                tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[79]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[80];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_12 == NULL)) {
                tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[81]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[81];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_13 == NULL)) {
                tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[82]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[82];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_14 == NULL)) {
                tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[83]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[84];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_15 == NULL)) {
                tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[85]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[86];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_16 == NULL)) {
                tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[87]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[87];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_17 == NULL)) {
                tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[88]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[88];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_18 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_18 == NULL)) {
                tmp_expression_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[89]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[90];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_19 == NULL)) {
                tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[91]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[92];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_20 == NULL)) {
                tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[93]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[94];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_21 == NULL)) {
                tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[95]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[96];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_22 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_22 == NULL)) {
                tmp_expression_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[97]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[97];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_23 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_23 == NULL)) {
                tmp_expression_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[98]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[98];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_24 == NULL)) {
                tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[99]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[99];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_25 == NULL)) {
                tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[100]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[100];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_26 == NULL)) {
                tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[101]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[101];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_27 == NULL)) {
                tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[102]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[102];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_28 == NULL)) {
                tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[103]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[103];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_29 == NULL)) {
                tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[104]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[104];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_30 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_30 == NULL)) {
                tmp_expression_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[105]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[105];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_31 == NULL)) {
                tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[106]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[106];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_32 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_32 == NULL)) {
                tmp_expression_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[107]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[107];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_33 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_33 == NULL)) {
                tmp_expression_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[108]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[108];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_34 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_34 == NULL)) {
                tmp_expression_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[109]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[109];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_35 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_35 == NULL)) {
                tmp_expression_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[110]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[110];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_36 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_36 == NULL)) {
                tmp_expression_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[111]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[111];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_37 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_37 == NULL)) {
                tmp_expression_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, mod_consts[112]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[112];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_38 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_38 == NULL)) {
                tmp_expression_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[113]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[113];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_39 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_39 == NULL)) {
                tmp_expression_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[114]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[114];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_40 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_40 == NULL)) {
                tmp_expression_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_40, mod_consts[115]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[115];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_41 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_41 == NULL)) {
                tmp_expression_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[116]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[116];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_42 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_42 == NULL)) {
                tmp_expression_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_42, mod_consts[117]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[117];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_43 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_43 == NULL)) {
                tmp_expression_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_43, mod_consts[118]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[118];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_44 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_44 == NULL)) {
                tmp_expression_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_44, mod_consts[119]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[119];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_45 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_45 == NULL)) {
                tmp_expression_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_45, mod_consts[120]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[120];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_46 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_46 == NULL)) {
                tmp_expression_name_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_46, mod_consts[121]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[121];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_47 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_47 == NULL)) {
                tmp_expression_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_47, mod_consts[122]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[122];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_48 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_48 == NULL)) {
                tmp_expression_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_48, mod_consts[123]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[123];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_49 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_49 == NULL)) {
                tmp_expression_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_49, mod_consts[124]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[124];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_50 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_50 == NULL)) {
                tmp_expression_name_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_50, mod_consts[125]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[125];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_51 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_51 == NULL)) {
                tmp_expression_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_51, mod_consts[126]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[126];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_52 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_52 == NULL)) {
                tmp_expression_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_52, mod_consts[127]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[128];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_53 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_53 == NULL)) {
                tmp_expression_name_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_53, mod_consts[129]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[130];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_54 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_54 == NULL)) {
                tmp_expression_name_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_54, mod_consts[131]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[132];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_55 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_55 == NULL)) {
                tmp_expression_name_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_55, mod_consts[133]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[134];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_56 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_56 == NULL)) {
                tmp_expression_name_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_56, mod_consts[135]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[136];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_57 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_57 == NULL)) {
                tmp_expression_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_57, mod_consts[137]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[138];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_58 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_58 == NULL)) {
                tmp_expression_name_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_58, mod_consts[139]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[140];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_59 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_59 == NULL)) {
                tmp_expression_name_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_59, mod_consts[141]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[142];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_60 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_60 == NULL)) {
                tmp_expression_name_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_60, mod_consts[143]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[144];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_61 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_61 == NULL)) {
                tmp_expression_name_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_61, mod_consts[145]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[146];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_62 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_62 == NULL)) {
                tmp_expression_name_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_62, mod_consts[147]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[148];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_63 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_63 == NULL)) {
                tmp_expression_name_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_63, mod_consts[149]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[149];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_64 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_64 == NULL)) {
                tmp_expression_name_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_64, mod_consts[150]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[150];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_65 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_65 == NULL)) {
                tmp_expression_name_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_65, mod_consts[151]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[151];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_66 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_66 == NULL)) {
                tmp_expression_name_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_66, mod_consts[152]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[152];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
            tmp_expression_name_67 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_name_67 == NULL)) {
                tmp_expression_name_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_name_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_67, mod_consts[153]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[154];
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_17);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__1_make_keysym();

        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_8eed568b1ef809d65e34fe9f14182b64->m_frame.f_lineno = 115;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[156]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_20;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_21 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 115;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_22 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_23 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 115;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_24 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_24 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 115;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_24;
            Py_XDECREF(old);
        }

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


                    exception_lineno = 115;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[157];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 115;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_25 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_25);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_26 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_26);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_called_instance_2;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_3;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_3;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_3;
        }
        frame_8eed568b1ef809d65e34fe9f14182b64->m_frame.f_lineno = 116;
        tmp_ass_subscript_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[20]);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_3;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_3;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 115;

        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8eed568b1ef809d65e34fe9f14182b64);
#endif
    popFrameStack();

    assertFrameObject(frame_8eed568b1ef809d65e34fe9f14182b64);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8eed568b1ef809d65e34fe9f14182b64);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8eed568b1ef809d65e34fe9f14182b64, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8eed568b1ef809d65e34fe9f14182b64->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8eed568b1ef809d65e34fe9f14182b64, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__2_key_text_to_keyinfo();

        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[160];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_28 = MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__3_char_to_keyinfo(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__4_keyname_to_keyinfo();

        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__5_keyseq_to_keyinfo();

        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__6_make_keyinfo();

        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_pyreadline3$keysyms$ironpython_keysyms$$$function__7_make_KeyPress();

        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$ironpython_keysyms, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_32);
    }

    return module_pyreadline3$keysyms$ironpython_keysyms;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

