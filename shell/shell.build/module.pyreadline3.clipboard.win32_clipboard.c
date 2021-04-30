/* Generated code for Python module 'pyreadline3.clipboard.win32_clipboard'
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

/* The "module_pyreadline3$clipboard$win32_clipboard" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyreadline3$clipboard$win32_clipboard;
PyDictObject *moduledict_pyreadline3$clipboard$win32_clipboard;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[71];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "pyreadline3.clipboard.win32_clipboard");

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
void checkModuleConstants_pyreadline3$clipboard$win32_clipboard(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "pyreadline3.clipboard.win32_clipboard");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_4eafcfcfc528ea63e6d38a91bc5ea2f9;
static PyCodeObject *codeobj_e11aedb95a0c2f3dda1ba67089949e92;
static PyCodeObject *codeobj_9d30f55b73d15bf76b920ebf22a813c9;
static PyCodeObject *codeobj_57631058868a744eb71dfd07352d31e4;
static PyCodeObject *codeobj_e16c2c0ea3157f0e655c9da454f5cba5;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[32]; CHECK_OBJECT(module_filename_obj);
    codeobj_4eafcfcfc528ea63e6d38a91bc5ea2f9 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[66], NULL, NULL, 0, 0, 0);
    codeobj_e11aedb95a0c2f3dda1ba67089949e92 = MAKE_CODEOBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[64], mod_consts[67], NULL, 0, 0, 0);
    codeobj_9d30f55b73d15bf76b920ebf22a813c9 = MAKE_CODEOBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[65], mod_consts[68], NULL, 1, 0, 0);
    codeobj_57631058868a744eb71dfd07352d31e4 = MAKE_CODEOBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[62], mod_consts[69], NULL, 0, 0, 0);
    codeobj_e16c2c0ea3157f0e655c9da454f5cba5 = MAKE_CODEOBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[63], mod_consts[70], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pyreadline3$clipboard$win32_clipboard$$$function__1_enum();


static PyObject *MAKE_FUNCTION_pyreadline3$clipboard$win32_clipboard$$$function__2_getformatname();


static PyObject *MAKE_FUNCTION_pyreadline3$clipboard$win32_clipboard$$$function__3_GetClipboardText();


static PyObject *MAKE_FUNCTION_pyreadline3$clipboard$win32_clipboard$$$function__4_SetClipboardText();


// The module function definitions.
static PyObject *impl_pyreadline3$clipboard$win32_clipboard$$$function__1_enum(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_q = NULL;
    struct Nuitka_FrameObject *frame_57631058868a744eb71dfd07352d31e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_57631058868a744eb71dfd07352d31e4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_57631058868a744eb71dfd07352d31e4)) {
        Py_XDECREF(cache_frame_57631058868a744eb71dfd07352d31e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_57631058868a744eb71dfd07352d31e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_57631058868a744eb71dfd07352d31e4 = MAKE_FUNCTION_FRAME(codeobj_57631058868a744eb71dfd07352d31e4, module_pyreadline3$clipboard$win32_clipboard, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_57631058868a744eb71dfd07352d31e4->m_type_description == NULL);
    frame_57631058868a744eb71dfd07352d31e4 = cache_frame_57631058868a744eb71dfd07352d31e4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_57631058868a744eb71dfd07352d31e4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_57631058868a744eb71dfd07352d31e4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_57631058868a744eb71dfd07352d31e4->m_frame.f_lineno = 83;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[1]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_57631058868a744eb71dfd07352d31e4->m_frame.f_lineno = 84;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, mod_consts[1]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_q == NULL);
        var_q = tmp_assign_source_1;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        if (var_q == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_1 = var_q;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "o";
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
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (var_q == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = var_q;
        frame_57631058868a744eb71dfd07352d31e4->m_frame.f_lineno = 86;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_q;
            var_q = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 85;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_2;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_57631058868a744eb71dfd07352d31e4->m_frame.f_lineno = 87;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_name_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_57631058868a744eb71dfd07352d31e4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_57631058868a744eb71dfd07352d31e4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_57631058868a744eb71dfd07352d31e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_57631058868a744eb71dfd07352d31e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57631058868a744eb71dfd07352d31e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_57631058868a744eb71dfd07352d31e4,
        type_description_1,
        var_q
    );


    // Release cached frame if used for exception.
    if (frame_57631058868a744eb71dfd07352d31e4 == cache_frame_57631058868a744eb71dfd07352d31e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_57631058868a744eb71dfd07352d31e4);
        cache_frame_57631058868a744eb71dfd07352d31e4 = NULL;
    }

    assertFrameObject(frame_57631058868a744eb71dfd07352d31e4);

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
    Py_XDECREF(var_q);
    var_q = NULL;
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

    Py_XDECREF(var_q);
    var_q = NULL;
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


static PyObject *impl_pyreadline3$clipboard$win32_clipboard$$$function__2_getformatname(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_format = python_pars[0];
    PyObject *var_buffer = NULL;
    PyObject *var_bufferSize = NULL;
    struct Nuitka_FrameObject *frame_e16c2c0ea3157f0e655c9da454f5cba5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e16c2c0ea3157f0e655c9da454f5cba5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e16c2c0ea3157f0e655c9da454f5cba5)) {
        Py_XDECREF(cache_frame_e16c2c0ea3157f0e655c9da454f5cba5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e16c2c0ea3157f0e655c9da454f5cba5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e16c2c0ea3157f0e655c9da454f5cba5 = MAKE_FUNCTION_FRAME(codeobj_e16c2c0ea3157f0e655c9da454f5cba5, module_pyreadline3$clipboard$win32_clipboard, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e16c2c0ea3157f0e655c9da454f5cba5->m_type_description == NULL);
    frame_e16c2c0ea3157f0e655c9da454f5cba5 = cache_frame_e16c2c0ea3157f0e655c9da454f5cba5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e16c2c0ea3157f0e655c9da454f5cba5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e16c2c0ea3157f0e655c9da454f5cba5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_e16c2c0ea3157f0e655c9da454f5cba5->m_frame.f_lineno = 91;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[6]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_buffer == NULL);
        var_buffer = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buffer);
        tmp_args_element_name_1 = var_buffer;
        frame_e16c2c0ea3157f0e655c9da454f5cba5->m_frame.f_lineno = 92;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_bufferSize == NULL);
        var_bufferSize = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_1;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_e16c2c0ea3157f0e655c9da454f5cba5->m_frame.f_lineno = 93;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, mod_consts[1]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_format);
        tmp_args_element_name_2 = par_format;
        CHECK_OBJECT(var_buffer);
        tmp_args_element_name_3 = var_buffer;
        CHECK_OBJECT(var_bufferSize);
        tmp_args_element_name_4 = var_bufferSize;
        frame_e16c2c0ea3157f0e655c9da454f5cba5->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_3;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_e16c2c0ea3157f0e655c9da454f5cba5->m_frame.f_lineno = 95;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tmp_called_name_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(var_buffer);
        tmp_expression_name_1 = var_buffer;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e16c2c0ea3157f0e655c9da454f5cba5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e16c2c0ea3157f0e655c9da454f5cba5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e16c2c0ea3157f0e655c9da454f5cba5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e16c2c0ea3157f0e655c9da454f5cba5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e16c2c0ea3157f0e655c9da454f5cba5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e16c2c0ea3157f0e655c9da454f5cba5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e16c2c0ea3157f0e655c9da454f5cba5,
        type_description_1,
        par_format,
        var_buffer,
        var_bufferSize
    );


    // Release cached frame if used for exception.
    if (frame_e16c2c0ea3157f0e655c9da454f5cba5 == cache_frame_e16c2c0ea3157f0e655c9da454f5cba5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e16c2c0ea3157f0e655c9da454f5cba5);
        cache_frame_e16c2c0ea3157f0e655c9da454f5cba5 = NULL;
    }

    assertFrameObject(frame_e16c2c0ea3157f0e655c9da454f5cba5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_format);
    Py_DECREF(par_format);
    par_format = NULL;
    Py_XDECREF(var_buffer);
    var_buffer = NULL;
    CHECK_OBJECT(var_bufferSize);
    Py_DECREF(var_bufferSize);
    var_bufferSize = NULL;
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

    CHECK_OBJECT(par_format);
    Py_DECREF(par_format);
    par_format = NULL;
    Py_XDECREF(var_buffer);
    var_buffer = NULL;
    Py_XDECREF(var_bufferSize);
    var_bufferSize = NULL;
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


static PyObject *impl_pyreadline3$clipboard$win32_clipboard$$$function__3_GetClipboardText(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_text = NULL;
    PyObject *var_hClipMem = NULL;
    struct Nuitka_FrameObject *frame_e11aedb95a0c2f3dda1ba67089949e92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e11aedb95a0c2f3dda1ba67089949e92 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[10];
        assert(var_text == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_text = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_e11aedb95a0c2f3dda1ba67089949e92)) {
        Py_XDECREF(cache_frame_e11aedb95a0c2f3dda1ba67089949e92);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e11aedb95a0c2f3dda1ba67089949e92 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e11aedb95a0c2f3dda1ba67089949e92 = MAKE_FUNCTION_FRAME(codeobj_e11aedb95a0c2f3dda1ba67089949e92, module_pyreadline3$clipboard$win32_clipboard, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e11aedb95a0c2f3dda1ba67089949e92->m_type_description == NULL);
    frame_e11aedb95a0c2f3dda1ba67089949e92 = cache_frame_e11aedb95a0c2f3dda1ba67089949e92;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e11aedb95a0c2f3dda1ba67089949e92);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e11aedb95a0c2f3dda1ba67089949e92) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e11aedb95a0c2f3dda1ba67089949e92->m_frame.f_lineno = 101;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[1]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 101;
            type_description_1 = "oo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_args_element_name_1 == NULL)) {
            tmp_args_element_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e11aedb95a0c2f3dda1ba67089949e92->m_frame.f_lineno = 102;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_hClipMem == NULL);
        var_hClipMem = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_hClipMem);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_hClipMem);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hClipMem);
        tmp_args_element_name_3 = var_hClipMem;
        frame_e11aedb95a0c2f3dda1ba67089949e92->m_frame.f_lineno = 104;
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e11aedb95a0c2f3dda1ba67089949e92->m_frame.f_lineno = 104;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_text;
            assert(old != NULL);
            var_text = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hClipMem);
        tmp_args_element_name_4 = var_hClipMem;
        frame_e11aedb95a0c2f3dda1ba67089949e92->m_frame.f_lineno = 105;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_call_result_3;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e11aedb95a0c2f3dda1ba67089949e92->m_frame.f_lineno = 106;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tmp_called_name_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_1:;
    if (var_text == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 107;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_text;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e11aedb95a0c2f3dda1ba67089949e92);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e11aedb95a0c2f3dda1ba67089949e92);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e11aedb95a0c2f3dda1ba67089949e92);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e11aedb95a0c2f3dda1ba67089949e92, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e11aedb95a0c2f3dda1ba67089949e92->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e11aedb95a0c2f3dda1ba67089949e92, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e11aedb95a0c2f3dda1ba67089949e92,
        type_description_1,
        var_text,
        var_hClipMem
    );


    // Release cached frame if used for exception.
    if (frame_e11aedb95a0c2f3dda1ba67089949e92 == cache_frame_e11aedb95a0c2f3dda1ba67089949e92) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e11aedb95a0c2f3dda1ba67089949e92);
        cache_frame_e11aedb95a0c2f3dda1ba67089949e92 = NULL;
    }

    assertFrameObject(frame_e11aedb95a0c2f3dda1ba67089949e92);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_text);
    var_text = NULL;
    Py_XDECREF(var_hClipMem);
    var_hClipMem = NULL;
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

    Py_XDECREF(var_text);
    var_text = NULL;
    Py_XDECREF(var_hClipMem);
    var_hClipMem = NULL;
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


static PyObject *impl_pyreadline3$clipboard$win32_clipboard$$$function__4_SetClipboardText(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    PyObject *var_buffer = NULL;
    PyObject *var_bufferSize = NULL;
    PyObject *var_hGlobalMem = NULL;
    PyObject *var_lpGlobalMem = NULL;
    struct Nuitka_FrameObject *frame_9d30f55b73d15bf76b920ebf22a813c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9d30f55b73d15bf76b920ebf22a813c9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9d30f55b73d15bf76b920ebf22a813c9)) {
        Py_XDECREF(cache_frame_9d30f55b73d15bf76b920ebf22a813c9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d30f55b73d15bf76b920ebf22a813c9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d30f55b73d15bf76b920ebf22a813c9 = MAKE_FUNCTION_FRAME(codeobj_9d30f55b73d15bf76b920ebf22a813c9, module_pyreadline3$clipboard$win32_clipboard, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9d30f55b73d15bf76b920ebf22a813c9->m_type_description == NULL);
    frame_9d30f55b73d15bf76b920ebf22a813c9 = cache_frame_9d30f55b73d15bf76b920ebf22a813c9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9d30f55b73d15bf76b920ebf22a813c9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9d30f55b73d15bf76b920ebf22a813c9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_args_element_name_2 = par_text;
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 111;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 111;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_buffer == NULL);
        var_buffer = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buffer);
        tmp_args_element_name_3 = var_buffer;
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 112;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bufferSize == NULL);
        var_bufferSize = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_name_4 == NULL)) {
            tmp_args_element_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bufferSize);
        tmp_args_element_name_6 = var_bufferSize;
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 113;
        tmp_args_element_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_6);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_args_element_name_5);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hGlobalMem == NULL);
        var_hGlobalMem = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_assattr_name_1 == NULL)) {
            tmp_assattr_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[23], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hGlobalMem);
        tmp_args_element_name_7 = var_hGlobalMem;
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 115;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_7);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lpGlobalMem == NULL);
        var_lpGlobalMem = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_16;
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lpGlobalMem);
        tmp_args_element_name_9 = var_lpGlobalMem;
        tmp_args_element_name_10 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_args_element_name_10 == NULL)) {
            tmp_args_element_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_8, call_args);
        }

        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_8);

            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_name_10 == NULL)) {
            tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_8);

            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buffer);
        tmp_args_element_name_13 = var_buffer;
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 117;
        tmp_args_element_name_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_13);
        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_8);

            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_14 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_args_element_name_14 == NULL)) {
            tmp_args_element_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_8);
            Py_DECREF(tmp_args_element_name_12);

            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_14};
            tmp_args_element_name_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_9, call_args);
        }

        Py_DECREF(tmp_args_element_name_12);
        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_8);

            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_11 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_name_11 == NULL)) {
            tmp_called_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_8);
            Py_DECREF(tmp_args_element_name_11);

            exception_lineno = 118;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bufferSize);
        tmp_args_element_name_16 = var_bufferSize;
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 118;
        tmp_args_element_name_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_16);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_8);
            Py_DECREF(tmp_args_element_name_11);

            exception_lineno = 118;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_11, tmp_args_element_name_15};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_7, call_args);
        }

        Py_DECREF(tmp_args_element_name_8);
        Py_DECREF(tmp_args_element_name_11);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_18;
        tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_12 == NULL)) {
            tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_13 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_name_13 == NULL)) {
            tmp_called_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hGlobalMem);
        tmp_args_element_name_18 = var_hGlobalMem;
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 119;
        tmp_args_element_name_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_18);
        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 119;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_17);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_14;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_1;
        tmp_called_name_14 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_name_14 == NULL)) {
            tmp_called_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 120;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, mod_consts[1]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_call_result_4;
        tmp_called_name_15 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_name_15 == NULL)) {
            tmp_called_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 121;
        tmp_call_result_4 = CALL_FUNCTION_NO_ARGS(tmp_called_name_15);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_name_16;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        tmp_called_name_16 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_name_16 == NULL)) {
            tmp_called_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_19 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_args_element_name_19 == NULL)) {
            tmp_args_element_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hGlobalMem);
        tmp_args_element_name_20 = var_hGlobalMem;
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = {tmp_args_element_name_19, tmp_args_element_name_20};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_16, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_call_result_6;
        tmp_called_name_17 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_name_17 == NULL)) {
            tmp_called_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame.f_lineno = 123;
        tmp_call_result_6 = CALL_FUNCTION_NO_ARGS(tmp_called_name_17);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d30f55b73d15bf76b920ebf22a813c9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d30f55b73d15bf76b920ebf22a813c9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9d30f55b73d15bf76b920ebf22a813c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d30f55b73d15bf76b920ebf22a813c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d30f55b73d15bf76b920ebf22a813c9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d30f55b73d15bf76b920ebf22a813c9,
        type_description_1,
        par_text,
        var_buffer,
        var_bufferSize,
        var_hGlobalMem,
        var_lpGlobalMem
    );


    // Release cached frame if used for exception.
    if (frame_9d30f55b73d15bf76b920ebf22a813c9 == cache_frame_9d30f55b73d15bf76b920ebf22a813c9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9d30f55b73d15bf76b920ebf22a813c9);
        cache_frame_9d30f55b73d15bf76b920ebf22a813c9 = NULL;
    }

    assertFrameObject(frame_9d30f55b73d15bf76b920ebf22a813c9);

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
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    par_text = NULL;
    CHECK_OBJECT(var_buffer);
    Py_DECREF(var_buffer);
    var_buffer = NULL;
    CHECK_OBJECT(var_bufferSize);
    Py_DECREF(var_bufferSize);
    var_bufferSize = NULL;
    CHECK_OBJECT(var_hGlobalMem);
    Py_DECREF(var_hGlobalMem);
    var_hGlobalMem = NULL;
    CHECK_OBJECT(var_lpGlobalMem);
    Py_DECREF(var_lpGlobalMem);
    var_lpGlobalMem = NULL;
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

    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    par_text = NULL;
    Py_XDECREF(var_buffer);
    var_buffer = NULL;
    Py_XDECREF(var_bufferSize);
    var_bufferSize = NULL;
    Py_XDECREF(var_hGlobalMem);
    var_hGlobalMem = NULL;
    Py_XDECREF(var_lpGlobalMem);
    var_lpGlobalMem = NULL;
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



static PyObject *MAKE_FUNCTION_pyreadline3$clipboard$win32_clipboard$$$function__1_enum() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$clipboard$win32_clipboard$$$function__1_enum,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_57631058868a744eb71dfd07352d31e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$clipboard$win32_clipboard,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$clipboard$win32_clipboard$$$function__2_getformatname() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$clipboard$win32_clipboard$$$function__2_getformatname,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e16c2c0ea3157f0e655c9da454f5cba5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$clipboard$win32_clipboard,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$clipboard$win32_clipboard$$$function__3_GetClipboardText() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$clipboard$win32_clipboard$$$function__3_GetClipboardText,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e11aedb95a0c2f3dda1ba67089949e92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$clipboard$win32_clipboard,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline3$clipboard$win32_clipboard$$$function__4_SetClipboardText() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline3$clipboard$win32_clipboard$$$function__4_SetClipboardText,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9d30f55b73d15bf76b920ebf22a813c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline3$clipboard$win32_clipboard,
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

function_impl_code functable_pyreadline3$clipboard$win32_clipboard[] = {
    impl_pyreadline3$clipboard$win32_clipboard$$$function__1_enum,
    impl_pyreadline3$clipboard$win32_clipboard$$$function__2_getformatname,
    impl_pyreadline3$clipboard$win32_clipboard$$$function__3_GetClipboardText,
    impl_pyreadline3$clipboard$win32_clipboard$$$function__4_SetClipboardText,
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

    function_impl_code *current = functable_pyreadline3$clipboard$win32_clipboard;
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

    if (offset > sizeof(functable_pyreadline3$clipboard$win32_clipboard) || offset < 0) {
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
        functable_pyreadline3$clipboard$win32_clipboard[offset],
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
        module_pyreadline3$clipboard$win32_clipboard,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "pyreadline3.clipboard.win32_clipboard";

// Internal entry point for module code.
PyObject *modulecode_pyreadline3$clipboard$win32_clipboard(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_pyreadline3$clipboard$win32_clipboard = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyreadline3.clipboard.win32_clipboard: Skipping module init, already done.\n");
#endif

        return module_pyreadline3$clipboard$win32_clipboard;
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
    PRINT_STRING("pyreadline3.clipboard.win32_clipboard: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pyreadline3.clipboard.win32_clipboard: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pyreadline3.clipboard.win32_clipboard: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initpyreadline3$clipboard$win32_clipboard\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_pyreadline3$clipboard$win32_clipboard = MODULE_DICT(module_pyreadline3$clipboard$win32_clipboard);

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
        moduledict_pyreadline3$clipboard$win32_clipboard,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyreadline3$clipboard$win32_clipboard,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyreadline3$clipboard$win32_clipboard,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyreadline3$clipboard$win32_clipboard,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyreadline3$clipboard$win32_clipboard,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyreadline3$clipboard$win32_clipboard);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pyreadline3$clipboard$win32_clipboard);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_4eafcfcfc528ea63e6d38a91bc5ea2f9;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_4eafcfcfc528ea63e6d38a91bc5ea2f9 = MAKE_MODULE_FRAME(codeobj_4eafcfcfc528ea63e6d38a91bc5ea2f9, module_pyreadline3$clipboard$win32_clipboard);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_4eafcfcfc528ea63e6d38a91bc5ea2f9);
    assert(Py_REFCNT(frame_4eafcfcfc528ea63e6d38a91bc5ea2f9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[32];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[36], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        frame_4eafcfcfc528ea63e6d38a91bc5ea2f9->m_frame.f_lineno = 35;
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
                (PyObject *)moduledict_pyreadline3$clipboard$win32_clipboard,
                mod_consts[38],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[38]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyreadline3$clipboard$win32_clipboard,
                mod_consts[39],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[39]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyreadline3$clipboard$win32_clipboard,
                mod_consts[40],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[40]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_7);
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
        tmp_name_name_1 = mod_consts[41];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_pyreadline3$clipboard$win32_clipboard;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[1];
        frame_4eafcfcfc528ea63e6d38a91bc5ea2f9->m_frame.f_lineno = 37;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[42];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_pyreadline3$clipboard$win32_clipboard;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[1];
        frame_4eafcfcfc528ea63e6d38a91bc5ea2f9->m_frame.f_lineno = 38;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pyreadline3$clipboard$win32_clipboard,
                mod_consts[43],
                Py_None
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_9);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[41];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_pyreadline3$clipboard$win32_clipboard;
        tmp_locals_arg_name_3 = (PyObject *)moduledict_pyreadline3$clipboard$win32_clipboard;
        tmp_fromlist_name_3 = mod_consts[44];
        tmp_level_name_3 = mod_consts[1];
        frame_4eafcfcfc528ea63e6d38a91bc5ea2f9->m_frame.f_lineno = 39;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_pyreadline3$clipboard$win32_clipboard, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[45];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_pyreadline3$clipboard$win32_clipboard;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[46];
        tmp_level_name_4 = mod_consts[1];
        frame_4eafcfcfc528ea63e6d38a91bc5ea2f9->m_frame.f_lineno = 41;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_pyreadline3$clipboard$win32_clipboard,
                mod_consts[12],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[12]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_pyreadline3$clipboard$win32_clipboard,
                mod_consts[20],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[20]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_12);
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
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[47];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_pyreadline3$clipboard$win32_clipboard;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[48];
        tmp_level_name_5 = mod_consts[1];
        frame_4eafcfcfc528ea63e6d38a91bc5ea2f9->m_frame.f_lineno = 42;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_pyreadline3$clipboard$win32_clipboard,
                mod_consts[49],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[49]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_pyreadline3$clipboard$win32_clipboard,
                mod_consts[18],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[18]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_15);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[51]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[0]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[52]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_3 = PyList_New(1);
        PyList_SET_ITEM(tmp_assattr_name_3, 0, tmp_list_element_1);
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_3);

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[53], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[54]);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_4);

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[23], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[51]);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[29]);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_expression_name_8;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[51]);
        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[11]);
        Py_DECREF(tmp_expression_name_7);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_list_element_2;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_assattr_target_5;
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_list_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[55]);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_5 = PyList_New(1);
        PyList_SET_ITEM(tmp_assattr_name_5, 0, tmp_list_element_2);
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_5);

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[53], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_assattr_target_6;
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[56]);
        if (tmp_assattr_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_6);

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[23], tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_expression_name_12;
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[51]);
        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[57]);
        Py_DECREF(tmp_expression_name_11);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_list_element_3;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_assattr_target_7;
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_list_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[55]);
        if (tmp_list_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_7 = PyList_New(3);
        PyList_SET_ITEM(tmp_assattr_name_7, 0, tmp_list_element_3);
        tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_list_element_3 == NULL)) {
            tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_assattr_name_7, 1, tmp_list_element_3);
        tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_list_element_3 == NULL)) {
            tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_assattr_name_7, 2, tmp_list_element_3);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assattr_name_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_assattr_target_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_7);

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[53], tmp_assattr_name_7);
        Py_DECREF(tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_expression_name_15;
        tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_name_15 == NULL)) {
            tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_expression_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[51]);
        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[30]);
        Py_DECREF(tmp_expression_name_14);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_list_element_4;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_assattr_target_8;
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_list_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[55]);
        if (tmp_list_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_8 = PyList_New(2);
        {
            PyObject *tmp_expression_name_17;
            PyList_SET_ITEM(tmp_assattr_name_8, 0, tmp_list_element_4);
            tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_name_17 == NULL)) {
                tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_expression_name_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto list_build_exception_2;
            }
            tmp_list_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[56]);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assattr_name_8, 1, tmp_list_element_4);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assattr_name_8);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_assattr_target_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_8);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[53], tmp_assattr_name_8);
        Py_DECREF(tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_assattr_target_9;
        tmp_expression_name_18 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_18 == NULL)) {
            tmp_expression_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[56]);
        if (tmp_assattr_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_assattr_target_9 == NULL)) {
            tmp_assattr_target_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_assattr_target_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_9);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[23], tmp_assattr_name_9);
        Py_DECREF(tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_expression_name_20;
        tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_name_20 == NULL)) {
            tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[51]);
        if (tmp_expression_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[2]);
        Py_DECREF(tmp_expression_name_19);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_list_element_5;
        PyObject *tmp_assattr_target_10;
        tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_list_element_5 == NULL)) {
            tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_10 = PyList_New(1);
        PyList_SET_ITEM0(tmp_assattr_name_10, 0, tmp_list_element_5);
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_10 == NULL)) {
            tmp_assattr_target_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_10 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[53], tmp_assattr_name_10);
        Py_DECREF(tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_expression_name_22;
        tmp_expression_name_22 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_name_22 == NULL)) {
            tmp_expression_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_expression_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[51]);
        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[4]);
        Py_DECREF(tmp_expression_name_21);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_assattr_target_11;
        tmp_assattr_name_11 = PyList_New(0);
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_target_11 == NULL)) {
            tmp_assattr_target_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        assert(!(tmp_assattr_target_11 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[53], tmp_assattr_name_11);
        Py_DECREF(tmp_assattr_name_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_expression_name_24;
        tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_name_24 == NULL)) {
            tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[59]);
        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[19]);
        Py_DECREF(tmp_expression_name_23);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_list_element_6;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_assattr_target_12;
        tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_25 == NULL)) {
            tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_list_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[55]);
        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_12 = PyList_New(2);
        PyList_SET_ITEM(tmp_assattr_name_12, 0, tmp_list_element_6);
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto list_build_exception_3;
        }
        PyList_SET_ITEM0(tmp_assattr_name_12, 1, tmp_list_element_6);
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_assattr_name_12);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_target_12 == NULL)) {
            tmp_assattr_target_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_assattr_target_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_12);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[53], tmp_assattr_name_12);
        Py_DECREF(tmp_assattr_name_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_assattr_target_13;
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[60]);
        if (tmp_assattr_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_assattr_target_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_13);

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[23], tmp_assattr_name_13);
        Py_DECREF(tmp_assattr_name_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_expression_name_28;
        tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_name_28 == NULL)) {
            tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_expression_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[59]);
        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[14]);
        Py_DECREF(tmp_expression_name_27);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_list_element_7;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_assattr_target_14;
        tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_name_29 == NULL)) {
            tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_list_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[60]);
        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_14 = PyList_New(1);
        PyList_SET_ITEM(tmp_assattr_name_14, 0, tmp_list_element_7);
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_assattr_target_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_14);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[53], tmp_assattr_name_14);
        Py_DECREF(tmp_assattr_name_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_assattr_target_15;
        tmp_assattr_name_15 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_assattr_name_15 == NULL)) {
            tmp_assattr_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_assattr_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_assattr_target_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[23], tmp_assattr_name_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_expression_name_30;
        PyObject *tmp_expression_name_31;
        tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_name_31 == NULL)) {
            tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_expression_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[59]);
        if (tmp_expression_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[15]);
        Py_DECREF(tmp_expression_name_30);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assattr_name_16;
        PyObject *tmp_list_element_8;
        PyObject *tmp_assattr_target_16;
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_16 = PyList_New(1);
        PyList_SET_ITEM0(tmp_assattr_name_16, 0, tmp_list_element_8);
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_assattr_target_16 == NULL)) {
            tmp_assattr_target_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        assert(!(tmp_assattr_target_16 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[53], tmp_assattr_name_16);
        Py_DECREF(tmp_assattr_name_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_expression_name_34;
        tmp_expression_name_34 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_expression_name_34 == NULL)) {
            tmp_expression_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_expression_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[50]);
        if (tmp_expression_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[59]);
        Py_DECREF(tmp_expression_name_33);
        if (tmp_expression_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[61]);
        Py_DECREF(tmp_expression_name_32);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assattr_name_17;
        PyObject *tmp_assattr_target_17;
        tmp_assattr_name_17 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_name_17 == NULL)) {
            tmp_assattr_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_assattr_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_assattr_target_17 == NULL)) {
            tmp_assattr_target_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        assert(!(tmp_assattr_target_17 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[23], tmp_assattr_name_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_18;
        PyObject *tmp_list_element_9;
        PyObject *tmp_assattr_target_18;
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_18 = PyList_New(3);
        PyList_SET_ITEM0(tmp_assattr_name_18, 0, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_assattr_name_18, 1, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_assattr_name_18, 2, tmp_list_element_9);
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_assattr_name_18);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        tmp_assattr_target_18 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_assattr_target_18 == NULL)) {
            tmp_assattr_target_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_assattr_target_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_18);

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[53], tmp_assattr_name_18);
        Py_DECREF(tmp_assattr_name_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4eafcfcfc528ea63e6d38a91bc5ea2f9);
#endif
    popFrameStack();

    assertFrameObject(frame_4eafcfcfc528ea63e6d38a91bc5ea2f9);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4eafcfcfc528ea63e6d38a91bc5ea2f9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4eafcfcfc528ea63e6d38a91bc5ea2f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4eafcfcfc528ea63e6d38a91bc5ea2f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4eafcfcfc528ea63e6d38a91bc5ea2f9, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_pyreadline3$clipboard$win32_clipboard$$$function__1_enum();

        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_pyreadline3$clipboard$win32_clipboard$$$function__2_getformatname();

        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_pyreadline3$clipboard$win32_clipboard$$$function__3_GetClipboardText();

        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_pyreadline3$clipboard$win32_clipboard$$$function__4_SetClipboardText();

        UPDATE_STRING_DICT1(moduledict_pyreadline3$clipboard$win32_clipboard, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_30);
    }

    return module_pyreadline3$clipboard$win32_clipboard;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

