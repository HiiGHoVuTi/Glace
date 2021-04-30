/* Generated code for Python module 'cmd2.history'
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

/* The "module_cmd2$history" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cmd2$history;
PyDictObject *moduledict_cmd2$history;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[173];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "cmd2.history");

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
void checkModuleConstants_cmd2$history(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "cmd2.history");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e319c63649c0fbb042f148a9dc2e12e8;
static PyCodeObject *codeobj_a62d85748ccc480823b4be9dc72ff0ff;
static PyCodeObject *codeobj_4799afc4bc062e58ea547e396abc96c8;
static PyCodeObject *codeobj_c4c5db956ebb8324f9912b71c0005485;
static PyCodeObject *codeobj_4ad543c402c0e32b0e2926f2426e7193;
static PyCodeObject *codeobj_dcc111e237a686706a67df21c8395f51;
static PyCodeObject *codeobj_8565d1d3fd01e1f90081e938c4f97595;
static PyCodeObject *codeobj_35afb1e8b3e36cf120f017ea9393d273;
static PyCodeObject *codeobj_bafffb009d91900526ca9f19a4aa77ca;
static PyCodeObject *codeobj_acc1a59cf4e2325447bb43a0d8c8d015;
static PyCodeObject *codeobj_471bb5179a5d83f72b03bb86a04ee4e0;
static PyCodeObject *codeobj_902375a385b40565a03f655eea3082d3;
static PyCodeObject *codeobj_289e27240090e9a4ae5c07d301d088cb;
static PyCodeObject *codeobj_d7c938279ea93ca16ed1d7884adf8e16;
static PyCodeObject *codeobj_3b2e39db880bff12842ae616a25441ac;
static PyCodeObject *codeobj_4c10bb8129182bf8ee5cd6109cb89dc1;
static PyCodeObject *codeobj_f926fefba287fd7b5e0e4699dfca24b9;
static PyCodeObject *codeobj_3929ce6cd715bdb8cd50b6ddbfdefa78;
static PyCodeObject *codeobj_6d33dc71c2786f4ec5426ff30370ccac;
static PyCodeObject *codeobj_ce0af8c1262f4da3de606c1d226620d4;
static PyCodeObject *codeobj_df4e7ee023bc6e0117b807c1f3b78a44;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[77]; CHECK_OBJECT(module_filename_obj);
    codeobj_e319c63649c0fbb042f148a9dc2e12e8 = MAKE_CODEOBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], mod_consts[154], NULL, 1, 0, 0);
    codeobj_a62d85748ccc480823b4be9dc72ff0ff = MAKE_CODEOBJECT(module_filename_obj, 279, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], mod_consts[155], NULL, 1, 0, 0);
    codeobj_4799afc4bc062e58ea547e396abc96c8 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[156], NULL, NULL, 0, 0, 0);
    codeobj_c4c5db956ebb8324f9912b71c0005485 = MAKE_CODEOBJECT(module_filename_obj, 87, CO_NOFREE, mod_consts[126], mod_consts[157], NULL, 0, 0, 0);
    codeobj_4ad543c402c0e32b0e2926f2426e7193 = MAKE_CODEOBJECT(module_filename_obj, 23, CO_NOFREE, mod_consts[26], mod_consts[157], NULL, 0, 0, 0);
    codeobj_dcc111e237a686706a67df21c8395f51 = MAKE_CODEOBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[20], mod_consts[158], mod_consts[157], 2, 0, 0);
    codeobj_8565d1d3fd01e1f90081e938c4f97595 = MAKE_CODEOBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[115], mod_consts[159], NULL, 1, 0, 0);
    codeobj_35afb1e8b3e36cf120f017ea9393d273 = MAKE_CODEOBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], mod_consts[160], NULL, 2, 0, 0);
    codeobj_bafffb009d91900526ca9f19a4aa77ca = MAKE_CODEOBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[27], mod_consts[161], mod_consts[157], 2, 0, 0);
    codeobj_acc1a59cf4e2325447bb43a0d8c8d015 = MAKE_CODEOBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[29], mod_consts[162], mod_consts[157], 1, 0, 0);
    codeobj_471bb5179a5d83f72b03bb86a04ee4e0 = MAKE_CODEOBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[159], NULL, 1, 0, 0);
    codeobj_902375a385b40565a03f655eea3082d3 = MAKE_CODEOBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[163], NULL, 2, 0, 0);
    codeobj_289e27240090e9a4ae5c07d301d088cb = MAKE_CODEOBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[53], mod_consts[164], mod_consts[165], 1, 0, 0);
    codeobj_d7c938279ea93ca16ed1d7884adf8e16 = MAKE_CODEOBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[53], mod_consts[166], mod_consts[167], 1, 0, 0);
    codeobj_3b2e39db880bff12842ae616a25441ac = MAKE_CODEOBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[123], mod_consts[168], NULL, 4, 0, 0);
    codeobj_4c10bb8129182bf8ee5cd6109cb89dc1 = MAKE_CODEOBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[159], NULL, 1, 0, 0);
    codeobj_f926fefba287fd7b5e0e4699dfca24b9 = MAKE_CODEOBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[147], mod_consts[169], NULL, 3, 0, 0);
    codeobj_3929ce6cd715bdb8cd50b6ddbfdefa78 = MAKE_CODEOBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[170], NULL, 3, 0, 0);
    codeobj_6d33dc71c2786f4ec5426ff30370ccac = MAKE_CODEOBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[159], NULL, 1, 0, 0);
    codeobj_ce0af8c1262f4da3de606c1d226620d4 = MAKE_CODEOBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[145], mod_consts[171], NULL, 3, 0, 0);
    codeobj_df4e7ee023bc6e0117b807c1f3b78a44 = MAKE_CODEOBJECT(module_filename_obj, 281, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[150], mod_consts[172], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_cmd2$history$$$function__10_get(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$history$$$function__11_span(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$history$$$function__12_str_search(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$history$$$function__12_str_search$$$function__1_isin(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_cmd2$history$$$function__13_regex_search(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$history$$$function__13_regex_search$$$function__1_isin(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_cmd2$history$$$function__14_truncate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$history$$$function__1___str__();


static PyObject *MAKE_FUNCTION_cmd2$history$$$function__2_raw(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$history$$$function__3_expanded(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$history$$$function__4_pr(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$history$$$function__5___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_cmd2$history$$$function__6_start_session(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$history$$$function__7__zero_based_index(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$history$$$function__8_append(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_cmd2$history$$$function__9_clear(PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_cmd2$history$$$function__1___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8565d1d3fd01e1f90081e938c4f97595;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8565d1d3fd01e1f90081e938c4f97595 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8565d1d3fd01e1f90081e938c4f97595)) {
        Py_XDECREF(cache_frame_8565d1d3fd01e1f90081e938c4f97595);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8565d1d3fd01e1f90081e938c4f97595 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8565d1d3fd01e1f90081e938c4f97595 = MAKE_FUNCTION_FRAME(codeobj_8565d1d3fd01e1f90081e938c4f97595, module_cmd2$history, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8565d1d3fd01e1f90081e938c4f97595->m_type_description == NULL);
    frame_8565d1d3fd01e1f90081e938c4f97595 = cache_frame_8565d1d3fd01e1f90081e938c4f97595;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8565d1d3fd01e1f90081e938c4f97595);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8565d1d3fd01e1f90081e938c4f97595) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[0]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8565d1d3fd01e1f90081e938c4f97595);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8565d1d3fd01e1f90081e938c4f97595);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8565d1d3fd01e1f90081e938c4f97595);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8565d1d3fd01e1f90081e938c4f97595, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8565d1d3fd01e1f90081e938c4f97595->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8565d1d3fd01e1f90081e938c4f97595, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8565d1d3fd01e1f90081e938c4f97595,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8565d1d3fd01e1f90081e938c4f97595 == cache_frame_8565d1d3fd01e1f90081e938c4f97595) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8565d1d3fd01e1f90081e938c4f97595);
        cache_frame_8565d1d3fd01e1f90081e938c4f97595 = NULL;
    }

    assertFrameObject(frame_8565d1d3fd01e1f90081e938c4f97595);

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


static PyObject *impl_cmd2$history$$$function__2_raw(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4c10bb8129182bf8ee5cd6109cb89dc1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4c10bb8129182bf8ee5cd6109cb89dc1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4c10bb8129182bf8ee5cd6109cb89dc1)) {
        Py_XDECREF(cache_frame_4c10bb8129182bf8ee5cd6109cb89dc1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c10bb8129182bf8ee5cd6109cb89dc1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c10bb8129182bf8ee5cd6109cb89dc1 = MAKE_FUNCTION_FRAME(codeobj_4c10bb8129182bf8ee5cd6109cb89dc1, module_cmd2$history, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4c10bb8129182bf8ee5cd6109cb89dc1->m_type_description == NULL);
    frame_4c10bb8129182bf8ee5cd6109cb89dc1 = cache_frame_4c10bb8129182bf8ee5cd6109cb89dc1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4c10bb8129182bf8ee5cd6109cb89dc1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4c10bb8129182bf8ee5cd6109cb89dc1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[0]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4c10bb8129182bf8ee5cd6109cb89dc1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4c10bb8129182bf8ee5cd6109cb89dc1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4c10bb8129182bf8ee5cd6109cb89dc1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c10bb8129182bf8ee5cd6109cb89dc1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c10bb8129182bf8ee5cd6109cb89dc1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c10bb8129182bf8ee5cd6109cb89dc1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c10bb8129182bf8ee5cd6109cb89dc1,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4c10bb8129182bf8ee5cd6109cb89dc1 == cache_frame_4c10bb8129182bf8ee5cd6109cb89dc1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4c10bb8129182bf8ee5cd6109cb89dc1);
        cache_frame_4c10bb8129182bf8ee5cd6109cb89dc1 = NULL;
    }

    assertFrameObject(frame_4c10bb8129182bf8ee5cd6109cb89dc1);

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


static PyObject *impl_cmd2$history$$$function__3_expanded(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_471bb5179a5d83f72b03bb86a04ee4e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_471bb5179a5d83f72b03bb86a04ee4e0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_471bb5179a5d83f72b03bb86a04ee4e0)) {
        Py_XDECREF(cache_frame_471bb5179a5d83f72b03bb86a04ee4e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_471bb5179a5d83f72b03bb86a04ee4e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_471bb5179a5d83f72b03bb86a04ee4e0 = MAKE_FUNCTION_FRAME(codeobj_471bb5179a5d83f72b03bb86a04ee4e0, module_cmd2$history, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_471bb5179a5d83f72b03bb86a04ee4e0->m_type_description == NULL);
    frame_471bb5179a5d83f72b03bb86a04ee4e0 = cache_frame_471bb5179a5d83f72b03bb86a04ee4e0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_471bb5179a5d83f72b03bb86a04ee4e0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_471bb5179a5d83f72b03bb86a04ee4e0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[0]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[4]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_471bb5179a5d83f72b03bb86a04ee4e0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_471bb5179a5d83f72b03bb86a04ee4e0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_471bb5179a5d83f72b03bb86a04ee4e0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_471bb5179a5d83f72b03bb86a04ee4e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_471bb5179a5d83f72b03bb86a04ee4e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_471bb5179a5d83f72b03bb86a04ee4e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_471bb5179a5d83f72b03bb86a04ee4e0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_471bb5179a5d83f72b03bb86a04ee4e0 == cache_frame_471bb5179a5d83f72b03bb86a04ee4e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_471bb5179a5d83f72b03bb86a04ee4e0);
        cache_frame_471bb5179a5d83f72b03bb86a04ee4e0 = NULL;
    }

    assertFrameObject(frame_471bb5179a5d83f72b03bb86a04ee4e0);

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


static PyObject *impl_cmd2$history$$$function__4_pr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_script = python_pars[1];
    PyObject *par_expanded = python_pars[2];
    PyObject *par_verbose = python_pars[3];
    PyObject *var_raw = NULL;
    PyObject *var_ret_str = NULL;
    struct Nuitka_FrameObject *frame_3b2e39db880bff12842ae616a25441ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3b2e39db880bff12842ae616a25441ac = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3b2e39db880bff12842ae616a25441ac)) {
        Py_XDECREF(cache_frame_3b2e39db880bff12842ae616a25441ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3b2e39db880bff12842ae616a25441ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3b2e39db880bff12842ae616a25441ac = MAKE_FUNCTION_FRAME(codeobj_3b2e39db880bff12842ae616a25441ac, module_cmd2$history, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3b2e39db880bff12842ae616a25441ac->m_type_description == NULL);
    frame_3b2e39db880bff12842ae616a25441ac = cache_frame_3b2e39db880bff12842ae616a25441ac;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3b2e39db880bff12842ae616a25441ac);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3b2e39db880bff12842ae616a25441ac) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_verbose);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_verbose);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_3b2e39db880bff12842ae616a25441ac->m_frame.f_lineno = 60;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[6]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_raw == NULL);
        var_raw = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 61;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[8]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_expanded;
            assert(old != NULL);
            par_expanded = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[9]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[11]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_raw);
        tmp_args_element_name_2 = var_raw;
        frame_3b2e39db880bff12842ae616a25441ac->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ret_str == NULL);
        var_ret_str = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if (var_raw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = var_raw;
        CHECK_OBJECT(par_expanded);
        tmp_compexpr_right_1 = par_expanded;
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_ret_str);
        tmp_left_name_1 = var_ret_str;
        tmp_left_name_2 = mod_consts[12];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_self;
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[13]);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[10]);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[11]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expanded);
        tmp_args_element_name_4 = par_expanded;
        frame_3b2e39db880bff12842ae616a25441ac->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_left_name_1;
        var_ret_str = tmp_assign_source_4;

    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_expanded);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_expanded);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_name_9;
        CHECK_OBJECT(par_self);
        tmp_expression_name_9 = par_self;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[8]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ret_str == NULL);
        var_ret_str = tmp_assign_source_5;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_10;
        CHECK_OBJECT(par_self);
        tmp_expression_name_10 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[1]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_3b2e39db880bff12842ae616a25441ac->m_frame.f_lineno = 70;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[6]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ret_str == NULL);
        var_ret_str = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_12 = par_self;
        tmp_expression_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[0]);
        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[14]);
        Py_DECREF(tmp_expression_name_11);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 73;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_ret_str);
        tmp_called_instance_3 = var_ret_str;
        frame_3b2e39db880bff12842ae616a25441ac->m_frame.f_lineno = 78;
        tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_3,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret_str;
            var_ret_str = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    branch_end_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_script);
        tmp_operand_name_1 = par_script;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_args_element_name_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_14 = par_self;
        tmp_expression_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[9]);
        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[10]);
        Py_DECREF(tmp_expression_name_13);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_15 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[11]);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 82;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_ret_str == NULL) {
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = var_ret_str;
        frame_3b2e39db880bff12842ae616a25441ac->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ret_str;
            var_ret_str = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    branch_no_5:;
    branch_end_1:;
    if (var_ret_str == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 84;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_ret_str;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3b2e39db880bff12842ae616a25441ac);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3b2e39db880bff12842ae616a25441ac);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3b2e39db880bff12842ae616a25441ac);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3b2e39db880bff12842ae616a25441ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3b2e39db880bff12842ae616a25441ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3b2e39db880bff12842ae616a25441ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3b2e39db880bff12842ae616a25441ac,
        type_description_1,
        par_self,
        par_script,
        par_expanded,
        par_verbose,
        var_raw,
        var_ret_str
    );


    // Release cached frame if used for exception.
    if (frame_3b2e39db880bff12842ae616a25441ac == cache_frame_3b2e39db880bff12842ae616a25441ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3b2e39db880bff12842ae616a25441ac);
        cache_frame_3b2e39db880bff12842ae616a25441ac = NULL;
    }

    assertFrameObject(frame_3b2e39db880bff12842ae616a25441ac);

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
    CHECK_OBJECT(par_script);
    Py_DECREF(par_script);
    par_script = NULL;
    Py_XDECREF(par_expanded);
    par_expanded = NULL;
    CHECK_OBJECT(par_verbose);
    Py_DECREF(par_verbose);
    par_verbose = NULL;
    Py_XDECREF(var_raw);
    var_raw = NULL;
    Py_XDECREF(var_ret_str);
    var_ret_str = NULL;
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
    CHECK_OBJECT(par_script);
    Py_DECREF(par_script);
    par_script = NULL;
    Py_XDECREF(par_expanded);
    par_expanded = NULL;
    CHECK_OBJECT(par_verbose);
    Py_DECREF(par_verbose);
    par_verbose = NULL;
    Py_XDECREF(var_raw);
    var_raw = NULL;
    Py_XDECREF(var_ret_str);
    var_ret_str = NULL;
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


static PyObject *impl_cmd2$history$$$function__5___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_seq = python_pars[1];
    struct Nuitka_FrameObject *frame_dcc111e237a686706a67df21c8395f51;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_dcc111e237a686706a67df21c8395f51 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dcc111e237a686706a67df21c8395f51)) {
        Py_XDECREF(cache_frame_dcc111e237a686706a67df21c8395f51);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dcc111e237a686706a67df21c8395f51 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dcc111e237a686706a67df21c8395f51 = MAKE_FUNCTION_FRAME(codeobj_dcc111e237a686706a67df21c8395f51, module_cmd2$history, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dcc111e237a686706a67df21c8395f51->m_type_description == NULL);
    frame_dcc111e237a686706a67df21c8395f51 = cache_frame_dcc111e237a686706a67df21c8395f51;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dcc111e237a686706a67df21c8395f51);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dcc111e237a686706a67df21c8395f51) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_name_1;
        PyObject *tmp_object_arg_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 101;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_name_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tmp_type_arg_name_1, tmp_object_arg_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_seq);
        tmp_args_element_name_1 = par_seq;
        frame_dcc111e237a686706a67df21c8395f51->m_frame.f_lineno = 101;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[20], tmp_args_element_name_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[21];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[22], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dcc111e237a686706a67df21c8395f51);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dcc111e237a686706a67df21c8395f51);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dcc111e237a686706a67df21c8395f51, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dcc111e237a686706a67df21c8395f51->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dcc111e237a686706a67df21c8395f51, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dcc111e237a686706a67df21c8395f51,
        type_description_1,
        par_self,
        par_seq,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_dcc111e237a686706a67df21c8395f51 == cache_frame_dcc111e237a686706a67df21c8395f51) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_dcc111e237a686706a67df21c8395f51);
        cache_frame_dcc111e237a686706a67df21c8395f51 = NULL;
    }

    assertFrameObject(frame_dcc111e237a686706a67df21c8395f51);

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
    Py_XDECREF(par_seq);
    par_seq = NULL;
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
    Py_XDECREF(par_seq);
    par_seq = NULL;
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


static PyObject *impl_cmd2$history$$$function__6_start_session(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6d33dc71c2786f4ec5426ff30370ccac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6d33dc71c2786f4ec5426ff30370ccac = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6d33dc71c2786f4ec5426ff30370ccac)) {
        Py_XDECREF(cache_frame_6d33dc71c2786f4ec5426ff30370ccac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6d33dc71c2786f4ec5426ff30370ccac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6d33dc71c2786f4ec5426ff30370ccac = MAKE_FUNCTION_FRAME(codeobj_6d33dc71c2786f4ec5426ff30370ccac, module_cmd2$history, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6d33dc71c2786f4ec5426ff30370ccac->m_type_description == NULL);
    frame_6d33dc71c2786f4ec5426ff30370ccac = cache_frame_6d33dc71c2786f4ec5426ff30370ccac;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6d33dc71c2786f4ec5426ff30370ccac);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6d33dc71c2786f4ec5426ff30370ccac) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_len_arg_1 = par_self;
        tmp_assattr_name_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 106;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[22], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6d33dc71c2786f4ec5426ff30370ccac);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6d33dc71c2786f4ec5426ff30370ccac);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6d33dc71c2786f4ec5426ff30370ccac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6d33dc71c2786f4ec5426ff30370ccac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6d33dc71c2786f4ec5426ff30370ccac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6d33dc71c2786f4ec5426ff30370ccac,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6d33dc71c2786f4ec5426ff30370ccac == cache_frame_6d33dc71c2786f4ec5426ff30370ccac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6d33dc71c2786f4ec5426ff30370ccac);
        cache_frame_6d33dc71c2786f4ec5426ff30370ccac = NULL;
    }

    assertFrameObject(frame_6d33dc71c2786f4ec5426ff30370ccac);

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


static PyObject *impl_cmd2$history$$$function__7__zero_based_index(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_onebased = python_pars[1];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_35afb1e8b3e36cf120f017ea9393d273;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_35afb1e8b3e36cf120f017ea9393d273 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_35afb1e8b3e36cf120f017ea9393d273)) {
        Py_XDECREF(cache_frame_35afb1e8b3e36cf120f017ea9393d273);

#if _DEBUG_REFCOUNTS
        if (cache_frame_35afb1e8b3e36cf120f017ea9393d273 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_35afb1e8b3e36cf120f017ea9393d273 = MAKE_FUNCTION_FRAME(codeobj_35afb1e8b3e36cf120f017ea9393d273, module_cmd2$history, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_35afb1e8b3e36cf120f017ea9393d273->m_type_description == NULL);
    frame_35afb1e8b3e36cf120f017ea9393d273 = cache_frame_35afb1e8b3e36cf120f017ea9393d273;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_35afb1e8b3e36cf120f017ea9393d273);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_35afb1e8b3e36cf120f017ea9393d273) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(par_onebased);
        tmp_int_arg_1 = par_onebased;
        tmp_assign_source_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_result);
        tmp_compexpr_left_1 = var_result;
        tmp_compexpr_right_1 = mod_consts[21];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 112;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(var_result);
        tmp_left_name_1 = var_result;
        tmp_right_name_1 = mod_consts[24];
        tmp_result = BINARY_OPERATION_SUB_OBJECT_LONG_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_left_name_1;
        var_result = tmp_assign_source_2;

    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_35afb1e8b3e36cf120f017ea9393d273);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_35afb1e8b3e36cf120f017ea9393d273);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_35afb1e8b3e36cf120f017ea9393d273, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_35afb1e8b3e36cf120f017ea9393d273->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_35afb1e8b3e36cf120f017ea9393d273, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_35afb1e8b3e36cf120f017ea9393d273,
        type_description_1,
        par_self,
        par_onebased,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_35afb1e8b3e36cf120f017ea9393d273 == cache_frame_35afb1e8b3e36cf120f017ea9393d273) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_35afb1e8b3e36cf120f017ea9393d273);
        cache_frame_35afb1e8b3e36cf120f017ea9393d273 = NULL;
    }

    assertFrameObject(frame_35afb1e8b3e36cf120f017ea9393d273);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_onebased);
    par_onebased = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
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
    Py_XDECREF(par_onebased);
    par_onebased = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
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


static PyObject *impl_cmd2$history$$$function__8_append(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_new = python_pars[1];
    PyObject *var_history_item = NULL;
    struct Nuitka_FrameObject *frame_bafffb009d91900526ca9f19a4aa77ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_bafffb009d91900526ca9f19a4aa77ca = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bafffb009d91900526ca9f19a4aa77ca)) {
        Py_XDECREF(cache_frame_bafffb009d91900526ca9f19a4aa77ca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bafffb009d91900526ca9f19a4aa77ca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bafffb009d91900526ca9f19a4aa77ca = MAKE_FUNCTION_FRAME(codeobj_bafffb009d91900526ca9f19a4aa77ca, module_cmd2$history, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bafffb009d91900526ca9f19a4aa77ca->m_type_description == NULL);
    frame_bafffb009d91900526ca9f19a4aa77ca = cache_frame_bafffb009d91900526ca9f19a4aa77ca;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bafffb009d91900526ca9f19a4aa77ca);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bafffb009d91900526ca9f19a4aa77ca) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_new);
        tmp_args_element_name_1 = par_new;
        CHECK_OBJECT(par_self);
        tmp_len_arg_1 = par_self;
        tmp_left_name_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[24];
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        assert(!(tmp_args_element_name_2 == NULL));
        frame_bafffb009d91900526ca9f19a4aa77ca->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_history_item == NULL);
        var_history_item = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_name_1;
        PyObject *tmp_object_arg_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_name_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_object_arg_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tmp_type_arg_name_1, tmp_object_arg_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_history_item);
        tmp_args_element_name_3 = var_history_item;
        frame_bafffb009d91900526ca9f19a4aa77ca->m_frame.f_lineno = 123;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[27], tmp_args_element_name_3);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bafffb009d91900526ca9f19a4aa77ca);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bafffb009d91900526ca9f19a4aa77ca);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bafffb009d91900526ca9f19a4aa77ca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bafffb009d91900526ca9f19a4aa77ca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bafffb009d91900526ca9f19a4aa77ca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bafffb009d91900526ca9f19a4aa77ca,
        type_description_1,
        par_self,
        par_new,
        var_history_item,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_bafffb009d91900526ca9f19a4aa77ca == cache_frame_bafffb009d91900526ca9f19a4aa77ca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bafffb009d91900526ca9f19a4aa77ca);
        cache_frame_bafffb009d91900526ca9f19a4aa77ca = NULL;
    }

    assertFrameObject(frame_bafffb009d91900526ca9f19a4aa77ca);

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
    CHECK_OBJECT(par_new);
    Py_DECREF(par_new);
    par_new = NULL;
    Py_XDECREF(var_history_item);
    var_history_item = NULL;
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
    CHECK_OBJECT(par_new);
    Py_DECREF(par_new);
    par_new = NULL;
    Py_XDECREF(var_history_item);
    var_history_item = NULL;
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


static PyObject *impl_cmd2$history$$$function__9_clear(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_acc1a59cf4e2325447bb43a0d8c8d015;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_acc1a59cf4e2325447bb43a0d8c8d015 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_acc1a59cf4e2325447bb43a0d8c8d015)) {
        Py_XDECREF(cache_frame_acc1a59cf4e2325447bb43a0d8c8d015);

#if _DEBUG_REFCOUNTS
        if (cache_frame_acc1a59cf4e2325447bb43a0d8c8d015 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_acc1a59cf4e2325447bb43a0d8c8d015 = MAKE_FUNCTION_FRAME(codeobj_acc1a59cf4e2325447bb43a0d8c8d015, module_cmd2$history, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_acc1a59cf4e2325447bb43a0d8c8d015->m_type_description == NULL);
    frame_acc1a59cf4e2325447bb43a0d8c8d015 = cache_frame_acc1a59cf4e2325447bb43a0d8c8d015;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_acc1a59cf4e2325447bb43a0d8c8d015);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_acc1a59cf4e2325447bb43a0d8c8d015) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_name_1;
        PyObject *tmp_object_arg_name_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 127;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_name_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tmp_type_arg_name_1, tmp_object_arg_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_acc1a59cf4e2325447bb43a0d8c8d015->m_frame.f_lineno = 127;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[29]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_acc1a59cf4e2325447bb43a0d8c8d015->m_frame.f_lineno = 128;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[30]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_acc1a59cf4e2325447bb43a0d8c8d015);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_acc1a59cf4e2325447bb43a0d8c8d015);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_acc1a59cf4e2325447bb43a0d8c8d015, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_acc1a59cf4e2325447bb43a0d8c8d015->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_acc1a59cf4e2325447bb43a0d8c8d015, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_acc1a59cf4e2325447bb43a0d8c8d015,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_acc1a59cf4e2325447bb43a0d8c8d015 == cache_frame_acc1a59cf4e2325447bb43a0d8c8d015) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_acc1a59cf4e2325447bb43a0d8c8d015);
        cache_frame_acc1a59cf4e2325447bb43a0d8c8d015 = NULL;
    }

    assertFrameObject(frame_acc1a59cf4e2325447bb43a0d8c8d015);

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


static PyObject *impl_cmd2$history$$$function__10_get(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    struct Nuitka_FrameObject *frame_902375a385b40565a03f655eea3082d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_902375a385b40565a03f655eea3082d3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_902375a385b40565a03f655eea3082d3)) {
        Py_XDECREF(cache_frame_902375a385b40565a03f655eea3082d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_902375a385b40565a03f655eea3082d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_902375a385b40565a03f655eea3082d3 = MAKE_FUNCTION_FRAME(codeobj_902375a385b40565a03f655eea3082d3, module_cmd2$history, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_902375a385b40565a03f655eea3082d3->m_type_description == NULL);
    frame_902375a385b40565a03f655eea3082d3 = cache_frame_902375a385b40565a03f655eea3082d3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_902375a385b40565a03f655eea3082d3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_902375a385b40565a03f655eea3082d3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(par_index);
        tmp_int_arg_1 = par_index;
        tmp_assign_source_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_index;
            par_index = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_index);
        tmp_compexpr_left_1 = par_index;
        tmp_compexpr_right_1 = mod_consts[21];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 137;
            type_description_1 = "oo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[32];
        frame_902375a385b40565a03f655eea3082d3->m_frame.f_lineno = 138;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_IndexError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 138;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_index);
        tmp_compexpr_left_2 = par_index;
        tmp_compexpr_right_2 = mod_consts[21];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 139;
            type_description_1 = "oo";
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
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        CHECK_OBJECT(par_index);
        tmp_subscript_name_1 = par_index;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        CHECK_OBJECT(par_index);
        tmp_left_name_1 = par_index;
        tmp_right_name_1 = mod_consts[24];
        tmp_subscript_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_subscript_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        Py_DECREF(tmp_subscript_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_902375a385b40565a03f655eea3082d3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_902375a385b40565a03f655eea3082d3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_902375a385b40565a03f655eea3082d3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_902375a385b40565a03f655eea3082d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_902375a385b40565a03f655eea3082d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_902375a385b40565a03f655eea3082d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_902375a385b40565a03f655eea3082d3,
        type_description_1,
        par_self,
        par_index
    );


    // Release cached frame if used for exception.
    if (frame_902375a385b40565a03f655eea3082d3 == cache_frame_902375a385b40565a03f655eea3082d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_902375a385b40565a03f655eea3082d3);
        cache_frame_902375a385b40565a03f655eea3082d3 = NULL;
    }

    assertFrameObject(frame_902375a385b40565a03f655eea3082d3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_index);
    par_index = NULL;
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
    Py_XDECREF(par_index);
    par_index = NULL;
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


static PyObject *impl_cmd2$history$$$function__11_span(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_span = python_pars[1];
    PyObject *par_include_persisted = python_pars[2];
    PyObject *var_results = NULL;
    PyObject *var_sep = NULL;
    PyObject *var_start = NULL;
    PyObject *var_end = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_3929ce6cd715bdb8cd50b6ddbfdefa78;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3929ce6cd715bdb8cd50b6ddbfdefa78 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3929ce6cd715bdb8cd50b6ddbfdefa78)) {
        Py_XDECREF(cache_frame_3929ce6cd715bdb8cd50b6ddbfdefa78);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3929ce6cd715bdb8cd50b6ddbfdefa78 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3929ce6cd715bdb8cd50b6ddbfdefa78 = MAKE_FUNCTION_FRAME(codeobj_3929ce6cd715bdb8cd50b6ddbfdefa78, module_cmd2$history, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3929ce6cd715bdb8cd50b6ddbfdefa78->m_type_description == NULL);
    frame_3929ce6cd715bdb8cd50b6ddbfdefa78 = cache_frame_3929ce6cd715bdb8cd50b6ddbfdefa78;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3929ce6cd715bdb8cd50b6ddbfdefa78);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3929ce6cd715bdb8cd50b6ddbfdefa78) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_span);
        tmp_called_instance_1 = par_span;
        frame_3929ce6cd715bdb8cd50b6ddbfdefa78->m_frame.f_lineno = 198;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[34]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[35];
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[36];
        {
            PyObject *old = par_span;
            par_span = tmp_assign_source_1;
            Py_INCREF(par_span);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[37]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[38]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_span == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 200;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = par_span;
        frame_3929ce6cd715bdb8cd50b6ddbfdefa78->m_frame.f_lineno = 200;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_results == NULL);
        var_results = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_results);
        tmp_operand_name_1 = var_results;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[40];
        frame_3929ce6cd715bdb8cd50b6ddbfdefa78->m_frame.f_lineno = 203;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 203;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_results);
        tmp_called_instance_2 = var_results;
        frame_3929ce6cd715bdb8cd50b6ddbfdefa78->m_frame.f_lineno = 205;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[41],
            &PyTuple_GET_ITEM(mod_consts[42], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sep == NULL);
        var_sep = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        if (var_results == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_results;
        frame_3929ce6cd715bdb8cd50b6ddbfdefa78->m_frame.f_lineno = 206;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[41],
            &PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_start == NULL);
        var_start = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_start);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_start);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_start);
        tmp_args_element_name_2 = var_start;
        frame_3929ce6cd715bdb8cd50b6ddbfdefa78->m_frame.f_lineno = 208;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[45], tmp_args_element_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_start;
            var_start = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_5;
        if (var_results == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 209;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = var_results;
        frame_3929ce6cd715bdb8cd50b6ddbfdefa78->m_frame.f_lineno = 209;
        tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_5,
            mod_consts[41],
            &PyTuple_GET_ITEM(mod_consts[46], 0)
        );

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_end == NULL);
        var_end = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_end);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_end);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(var_end);
        tmp_int_arg_1 = var_end;
        tmp_assign_source_7 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_end;
            var_end = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_5_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_end);
        tmp_compexpr_left_2 = var_end;
        tmp_compexpr_right_2 = mod_consts[47];
        tmp_tmp_condition_result_5_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_5_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_5_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_5_object_1);

            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_5_object_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_None;
        {
            PyObject *old = var_end;
            assert(old != NULL);
            var_end = tmp_assign_source_8;
            Py_INCREF(var_end);
            Py_DECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_condition_result_6_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_end);
        tmp_compexpr_left_3 = var_end;
        tmp_compexpr_right_3 = mod_consts[47];
        tmp_tmp_condition_result_6_object_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_condition_result_6_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_6_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_6_object_1);

            exception_lineno = 218;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_6_object_1);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(var_end);
        tmp_left_name_1 = var_end;
        tmp_right_name_1 = mod_consts[24];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = tmp_left_name_1;
        var_end = tmp_assign_source_9;

    }
    branch_no_6:;
    branch_end_5:;
    branch_no_4:;
    {
        bool tmp_condition_result_7;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(var_start);
        tmp_compexpr_left_4 = var_start;
        tmp_compexpr_right_4 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_4 != tmp_compexpr_right_4) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (var_end == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 223;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_5 = var_end;
        tmp_compexpr_right_5 = Py_None;
        tmp_and_right_value_1 = (tmp_compexpr_left_5 != tmp_compexpr_right_5) ? true : false;
        tmp_condition_result_7 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_7 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 225;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        CHECK_OBJECT(var_start);
        tmp_start_name_1 = var_start;
        if (var_end == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 225;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_stop_name_1 = var_end;
        tmp_subscript_name_1 = MAKE_SLICEOBJ2(tmp_start_name_1, tmp_stop_name_1);
        assert(!(tmp_subscript_name_1 == NULL));
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_10;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        bool tmp_condition_result_8;
        int tmp_and_left_truth_2;
        bool tmp_and_left_value_2;
        bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT(var_start);
        tmp_compexpr_left_6 = var_start;
        tmp_compexpr_right_6 = Py_None;
        tmp_and_left_value_2 = (tmp_compexpr_left_6 != tmp_compexpr_right_6) ? true : false;
        tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_sep);
        tmp_compexpr_left_7 = var_sep;
        tmp_compexpr_right_7 = Py_None;
        tmp_and_right_value_2 = (tmp_compexpr_left_7 != tmp_compexpr_right_7) ? true : false;
        tmp_condition_result_8 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_8 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 228;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        CHECK_OBJECT(var_start);
        tmp_start_name_2 = var_start;
        tmp_stop_name_2 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ2(tmp_start_name_2, tmp_stop_name_2);
        assert(!(tmp_subscript_name_2 == NULL));
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_2);
        Py_DECREF(tmp_subscript_name_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_11;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        bool tmp_condition_result_9;
        int tmp_and_left_truth_3;
        bool tmp_and_left_value_3;
        bool tmp_and_right_value_3;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        if (var_end == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 229;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_8 = var_end;
        tmp_compexpr_right_8 = Py_None;
        tmp_and_left_value_3 = (tmp_compexpr_left_8 != tmp_compexpr_right_8) ? true : false;
        tmp_and_left_truth_3 = tmp_and_left_value_3 != false ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_sep);
        tmp_compexpr_left_9 = var_sep;
        tmp_compexpr_right_9 = Py_None;
        tmp_and_right_value_3 = (tmp_compexpr_left_9 != tmp_compexpr_right_9) ? true : false;
        tmp_condition_result_9 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_9 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_5;
        CHECK_OBJECT(par_include_persisted);
        tmp_truth_name_5 = CHECK_IF_TRUE(par_include_persisted);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_stop_name_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 231;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        if (var_end == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 231;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_stop_name_3 = var_end;
        tmp_subscript_name_3 = MAKE_SLICEOBJ1(tmp_stop_name_3);
        assert(!(tmp_subscript_name_3 == NULL));
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_3);
        Py_DECREF(tmp_subscript_name_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_12;
    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_start_name_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_stop_name_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 233;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 233;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_self;
        tmp_start_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[22]);
        if (tmp_start_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_end == NULL) {
            Py_DECREF(tmp_start_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 233;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_stop_name_4 = var_end;
        tmp_subscript_name_4 = MAKE_SLICEOBJ2(tmp_start_name_3, tmp_stop_name_4);
        Py_DECREF(tmp_start_name_3);
        assert(!(tmp_subscript_name_4 == NULL));
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_4);
        Py_DECREF(tmp_subscript_name_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_13;
    }
    branch_end_10:;
    goto branch_end_9;
    branch_no_9:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        CHECK_OBJECT(var_start);
        tmp_compexpr_left_10 = var_start;
        tmp_compexpr_right_10 = Py_None;
        tmp_condition_result_11 = (tmp_compexpr_left_10 != tmp_compexpr_right_10) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_subscript_name_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 236;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        CHECK_OBJECT(var_start);
        tmp_subscript_name_5 = var_start;
        tmp_list_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_8, tmp_subscript_name_5);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = PyList_New(1);
        PyList_SET_ITEM(tmp_assign_source_14, 0, tmp_list_element_1);
        assert(var_result == NULL);
        var_result = tmp_assign_source_14;
    }
    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_6;
        CHECK_OBJECT(par_include_persisted);
        tmp_truth_name_6 = CHECK_IF_TRUE(par_include_persisted);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_subscript_name_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 240;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = par_self;
        tmp_subscript_name_6 = mod_consts[49];
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_name_9, tmp_subscript_name_6);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_15;
    }
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_start_name_4;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_stop_name_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 242;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = par_self;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 242;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_11 = par_self;
        tmp_start_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[22]);
        if (tmp_start_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_5 = Py_None;
        tmp_subscript_name_7 = MAKE_SLICEOBJ2(tmp_start_name_4, tmp_stop_name_5);
        Py_DECREF(tmp_start_name_4);
        assert(!(tmp_subscript_name_7 == NULL));
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tmp_expression_name_10, tmp_subscript_name_7);
        Py_DECREF(tmp_subscript_name_7);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_16;
    }
    branch_end_12:;
    branch_end_11:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    if (var_result == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 243;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3929ce6cd715bdb8cd50b6ddbfdefa78);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3929ce6cd715bdb8cd50b6ddbfdefa78);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3929ce6cd715bdb8cd50b6ddbfdefa78);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3929ce6cd715bdb8cd50b6ddbfdefa78, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3929ce6cd715bdb8cd50b6ddbfdefa78->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3929ce6cd715bdb8cd50b6ddbfdefa78, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3929ce6cd715bdb8cd50b6ddbfdefa78,
        type_description_1,
        par_self,
        par_span,
        par_include_persisted,
        var_results,
        var_sep,
        var_start,
        var_end,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_3929ce6cd715bdb8cd50b6ddbfdefa78 == cache_frame_3929ce6cd715bdb8cd50b6ddbfdefa78) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3929ce6cd715bdb8cd50b6ddbfdefa78);
        cache_frame_3929ce6cd715bdb8cd50b6ddbfdefa78 = NULL;
    }

    assertFrameObject(frame_3929ce6cd715bdb8cd50b6ddbfdefa78);

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
    Py_XDECREF(par_span);
    par_span = NULL;
    CHECK_OBJECT(par_include_persisted);
    Py_DECREF(par_include_persisted);
    par_include_persisted = NULL;
    Py_XDECREF(var_results);
    var_results = NULL;
    CHECK_OBJECT(var_sep);
    Py_DECREF(var_sep);
    var_sep = NULL;
    CHECK_OBJECT(var_start);
    Py_DECREF(var_start);
    var_start = NULL;
    Py_XDECREF(var_end);
    var_end = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
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
    Py_XDECREF(par_span);
    par_span = NULL;
    CHECK_OBJECT(par_include_persisted);
    Py_DECREF(par_include_persisted);
    par_include_persisted = NULL;
    Py_XDECREF(var_results);
    var_results = NULL;
    Py_XDECREF(var_sep);
    var_sep = NULL;
    Py_XDECREF(var_start);
    var_start = NULL;
    Py_XDECREF(var_end);
    var_end = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
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


static PyObject *impl_cmd2$history$$$function__12_str_search(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_CellObject *par_search = Nuitka_Cell_New1(python_pars[1]);
    PyObject *par_include_persisted = python_pars[2];
    PyObject *var_isin = NULL;
    PyObject *var_search_list = NULL;
    PyObject *outline_0_var_item = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_ce0af8c1262f4da3de606c1d226620d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_e319c63649c0fbb042f148a9dc2e12e8_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_e319c63649c0fbb042f148a9dc2e12e8_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_ce0af8c1262f4da3de606c1d226620d4 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_search;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_cmd2$history$$$function__12_str_search$$$function__1_isin(tmp_closure_1);

        assert(var_isin == NULL);
        var_isin = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_ce0af8c1262f4da3de606c1d226620d4)) {
        Py_XDECREF(cache_frame_ce0af8c1262f4da3de606c1d226620d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ce0af8c1262f4da3de606c1d226620d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ce0af8c1262f4da3de606c1d226620d4 = MAKE_FUNCTION_FRAME(codeobj_ce0af8c1262f4da3de606c1d226620d4, module_cmd2$history, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ce0af8c1262f4da3de606c1d226620d4->m_type_description == NULL);
    frame_ce0af8c1262f4da3de606c1d226620d4 = cache_frame_ce0af8c1262f4da3de606c1d226620d4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ce0af8c1262f4da3de606c1d226620d4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ce0af8c1262f4da3de606c1d226620d4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_stop_name_1;
        CHECK_OBJECT(par_include_persisted);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_include_persisted);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_self);
        tmp_assign_source_2 = par_self;
        Py_INCREF(tmp_assign_source_2);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_start_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[22]);
        if (tmp_start_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ2(tmp_start_name_1, tmp_stop_name_1);
        Py_DECREF(tmp_start_name_1);
        assert(!(tmp_subscript_name_1 == NULL));
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ocooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_search_list == NULL);
        var_search_list = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_search_list);
        tmp_iter_arg_1 = var_search_list;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ocooo";
            goto try_except_handler_2;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyList_New(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_4;
    }
    if (isFrameUnusable(cache_frame_e319c63649c0fbb042f148a9dc2e12e8_2)) {
        Py_XDECREF(cache_frame_e319c63649c0fbb042f148a9dc2e12e8_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e319c63649c0fbb042f148a9dc2e12e8_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e319c63649c0fbb042f148a9dc2e12e8_2 = MAKE_FUNCTION_FRAME(codeobj_e319c63649c0fbb042f148a9dc2e12e8, module_cmd2$history, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e319c63649c0fbb042f148a9dc2e12e8_2->m_type_description == NULL);
    frame_e319c63649c0fbb042f148a9dc2e12e8_2 = cache_frame_e319c63649c0fbb042f148a9dc2e12e8_2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e319c63649c0fbb042f148a9dc2e12e8_2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e319c63649c0fbb042f148a9dc2e12e8_2) == 2); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "oo";
                exception_lineno = 260;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_item;
            outline_0_var_item = tmp_assign_source_6;
            Py_INCREF(outline_0_var_item);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_2;
        if (var_isin == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 260;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }

        tmp_called_name_1 = var_isin;
        CHECK_OBJECT(outline_0_var_item);
        tmp_args_element_name_1 = outline_0_var_item;
        frame_e319c63649c0fbb042f148a9dc2e12e8_2->m_frame.f_lineno = 260;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 260;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_item);
        tmp_append_value_1 = outline_0_var_item;
        assert(PyList_Check(tmp_append_list_1));
        tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 260;
        type_description_2 = "oo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    goto frame_return_exit_2;
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

    Py_XDECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e319c63649c0fbb042f148a9dc2e12e8_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e319c63649c0fbb042f148a9dc2e12e8_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e319c63649c0fbb042f148a9dc2e12e8_2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e319c63649c0fbb042f148a9dc2e12e8_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e319c63649c0fbb042f148a9dc2e12e8_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e319c63649c0fbb042f148a9dc2e12e8_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e319c63649c0fbb042f148a9dc2e12e8_2,
        type_description_2,
        outline_0_var_item,
        var_isin
    );


    // Release cached frame if used for exception.
    if (frame_e319c63649c0fbb042f148a9dc2e12e8_2 == cache_frame_e319c63649c0fbb042f148a9dc2e12e8_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e319c63649c0fbb042f148a9dc2e12e8_2);
        cache_frame_e319c63649c0fbb042f148a9dc2e12e8_2 = NULL;
    }

    assertFrameObject(frame_e319c63649c0fbb042f148a9dc2e12e8_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "ocooo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF(outline_0_var_item);
    outline_0_var_item = NULL;
    goto outline_result_1;
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

    Py_XDECREF(outline_0_var_item);
    outline_0_var_item = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 260;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ce0af8c1262f4da3de606c1d226620d4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ce0af8c1262f4da3de606c1d226620d4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ce0af8c1262f4da3de606c1d226620d4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ce0af8c1262f4da3de606c1d226620d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ce0af8c1262f4da3de606c1d226620d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ce0af8c1262f4da3de606c1d226620d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ce0af8c1262f4da3de606c1d226620d4,
        type_description_1,
        par_self,
        par_search,
        par_include_persisted,
        var_isin,
        var_search_list
    );


    // Release cached frame if used for exception.
    if (frame_ce0af8c1262f4da3de606c1d226620d4 == cache_frame_ce0af8c1262f4da3de606c1d226620d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ce0af8c1262f4da3de606c1d226620d4);
        cache_frame_ce0af8c1262f4da3de606c1d226620d4 = NULL;
    }

    assertFrameObject(frame_ce0af8c1262f4da3de606c1d226620d4);

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
    CHECK_OBJECT(par_search);
    Py_DECREF(par_search);
    par_search = NULL;
    CHECK_OBJECT(par_include_persisted);
    Py_DECREF(par_include_persisted);
    par_include_persisted = NULL;
    Py_XDECREF(var_isin);
    var_isin = NULL;
    Py_XDECREF(var_search_list);
    var_search_list = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_search);
    Py_DECREF(par_search);
    par_search = NULL;
    CHECK_OBJECT(par_include_persisted);
    Py_DECREF(par_include_persisted);
    par_include_persisted = NULL;
    Py_XDECREF(var_isin);
    var_isin = NULL;
    Py_XDECREF(var_search_list);
    var_search_list = NULL;
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


static PyObject *impl_cmd2$history$$$function__12_str_search$$$function__1_isin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_history_item = python_pars[0];
    PyObject *var_sloppy = NULL;
    PyObject *var_inraw = NULL;
    PyObject *var_inexpanded = NULL;
    struct Nuitka_FrameObject *frame_d7c938279ea93ca16ed1d7884adf8e16;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d7c938279ea93ca16ed1d7884adf8e16 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d7c938279ea93ca16ed1d7884adf8e16)) {
        Py_XDECREF(cache_frame_d7c938279ea93ca16ed1d7884adf8e16);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7c938279ea93ca16ed1d7884adf8e16 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7c938279ea93ca16ed1d7884adf8e16 = MAKE_FUNCTION_FRAME(codeobj_d7c938279ea93ca16ed1d7884adf8e16, module_cmd2$history, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d7c938279ea93ca16ed1d7884adf8e16->m_type_description == NULL);
    frame_d7c938279ea93ca16ed1d7884adf8e16 = cache_frame_d7c938279ea93ca16ed1d7884adf8e16;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d7c938279ea93ca16ed1d7884adf8e16);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d7c938279ea93ca16ed1d7884adf8e16) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[57]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 254;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_d7c938279ea93ca16ed1d7884adf8e16->m_frame.f_lineno = 254;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_sloppy == NULL);
        var_sloppy = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(var_sloppy);
        tmp_compexpr_left_1 = var_sloppy;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[57]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_history_item);
        tmp_expression_name_3 = par_history_item;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[1]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 255;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_d7c938279ea93ca16ed1d7884adf8e16->m_frame.f_lineno = 255;
        tmp_compexpr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = (tmp_res == 1) ? Py_True : Py_False;
        assert(var_inraw == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_inraw = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_5;
        CHECK_OBJECT(var_sloppy);
        tmp_compexpr_left_2 = var_sloppy;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[57]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (par_history_item == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_history_item;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[8]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 256;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_d7c938279ea93ca16ed1d7884adf8e16->m_frame.f_lineno = 256;
        tmp_compexpr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = (tmp_res == 1) ? Py_True : Py_False;
        assert(var_inexpanded == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_inexpanded = tmp_assign_source_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d7c938279ea93ca16ed1d7884adf8e16);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d7c938279ea93ca16ed1d7884adf8e16);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d7c938279ea93ca16ed1d7884adf8e16, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7c938279ea93ca16ed1d7884adf8e16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7c938279ea93ca16ed1d7884adf8e16, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7c938279ea93ca16ed1d7884adf8e16,
        type_description_1,
        par_history_item,
        var_sloppy,
        var_inraw,
        var_inexpanded,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_d7c938279ea93ca16ed1d7884adf8e16 == cache_frame_d7c938279ea93ca16ed1d7884adf8e16) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d7c938279ea93ca16ed1d7884adf8e16);
        cache_frame_d7c938279ea93ca16ed1d7884adf8e16 = NULL;
    }

    assertFrameObject(frame_d7c938279ea93ca16ed1d7884adf8e16);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        CHECK_OBJECT(var_inraw);
        tmp_or_left_value_1 = var_inraw;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_inexpanded);
        tmp_or_right_value_1 = var_inexpanded;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        Py_INCREF(tmp_return_value);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_history_item);
    par_history_item = NULL;
    CHECK_OBJECT(var_sloppy);
    Py_DECREF(var_sloppy);
    var_sloppy = NULL;
    CHECK_OBJECT(var_inraw);
    Py_DECREF(var_inraw);
    var_inraw = NULL;
    CHECK_OBJECT(var_inexpanded);
    Py_DECREF(var_inexpanded);
    var_inexpanded = NULL;
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

    Py_XDECREF(par_history_item);
    par_history_item = NULL;
    Py_XDECREF(var_sloppy);
    var_sloppy = NULL;
    Py_XDECREF(var_inraw);
    var_inraw = NULL;
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


static PyObject *impl_cmd2$history$$$function__13_regex_search(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_regex = python_pars[1];
    PyObject *par_include_persisted = python_pars[2];
    struct Nuitka_CellObject *var_finder = Nuitka_Cell_Empty();
    PyObject *var_isin = NULL;
    PyObject *var_search_list = NULL;
    PyObject *outline_0_var_itm = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_f926fefba287fd7b5e0e4699dfca24b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_a62d85748ccc480823b4be9dc72ff0ff_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a62d85748ccc480823b4be9dc72ff0ff_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_f926fefba287fd7b5e0e4699dfca24b9 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f926fefba287fd7b5e0e4699dfca24b9)) {
        Py_XDECREF(cache_frame_f926fefba287fd7b5e0e4699dfca24b9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f926fefba287fd7b5e0e4699dfca24b9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f926fefba287fd7b5e0e4699dfca24b9 = MAKE_FUNCTION_FRAME(codeobj_f926fefba287fd7b5e0e4699dfca24b9, module_cmd2$history, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f926fefba287fd7b5e0e4699dfca24b9->m_type_description == NULL);
    frame_f926fefba287fd7b5e0e4699dfca24b9 = cache_frame_f926fefba287fd7b5e0e4699dfca24b9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f926fefba287fd7b5e0e4699dfca24b9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f926fefba287fd7b5e0e4699dfca24b9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_regex);
        tmp_called_instance_1 = par_regex;
        frame_f926fefba287fd7b5e0e4699dfca24b9->m_frame.f_lineno = 269;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[59]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_regex;
            par_regex = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_regex);
        tmp_called_instance_2 = par_regex;
        frame_f926fefba287fd7b5e0e4699dfca24b9->m_frame.f_lineno = 270;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[60],
            &PyTuple_GET_ITEM(mod_consts[61], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 270;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (par_regex == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 270;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_regex;
        frame_f926fefba287fd7b5e0e4699dfca24b9->m_frame.f_lineno = 270;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[63],
            &PyTuple_GET_ITEM(mod_consts[61], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 270;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        if (par_regex == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 271;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_regex;
        tmp_subscript_name_1 = mod_consts[64];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_regex;
            par_regex = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_4;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[66]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        if (par_regex == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 272;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = par_regex;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 272;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[67]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 272;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 272;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[68]);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 272;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 272;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        frame_f926fefba287fd7b5e0e4699dfca24b9->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_finder) == NULL);
        PyCell_SET(var_finder, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_finder;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_4 = MAKE_FUNCTION_cmd2$history$$$function__13_regex_search$$$function__1_isin(tmp_closure_1);

        assert(var_isin == NULL);
        var_isin = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_stop_name_1;
        CHECK_OBJECT(par_include_persisted);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_include_persisted);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_self);
        tmp_assign_source_5 = par_self;
        Py_INCREF(tmp_assign_source_5);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_name_5 = par_self;
        CHECK_OBJECT(par_self);
        tmp_expression_name_6 = par_self;
        tmp_start_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[22]);
        if (tmp_start_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_1 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ2(tmp_start_name_1, tmp_stop_name_1);
        Py_DECREF(tmp_start_name_1);
        assert(!(tmp_subscript_name_2 == NULL));
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_2);
        Py_DECREF(tmp_subscript_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooocoo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_search_list == NULL);
        var_search_list = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_search_list);
        tmp_iter_arg_1 = var_search_list;
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooocoo";
            goto try_except_handler_2;
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
    if (isFrameUnusable(cache_frame_a62d85748ccc480823b4be9dc72ff0ff_2)) {
        Py_XDECREF(cache_frame_a62d85748ccc480823b4be9dc72ff0ff_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a62d85748ccc480823b4be9dc72ff0ff_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a62d85748ccc480823b4be9dc72ff0ff_2 = MAKE_FUNCTION_FRAME(codeobj_a62d85748ccc480823b4be9dc72ff0ff, module_cmd2$history, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a62d85748ccc480823b4be9dc72ff0ff_2->m_type_description == NULL);
    frame_a62d85748ccc480823b4be9dc72ff0ff_2 = cache_frame_a62d85748ccc480823b4be9dc72ff0ff_2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a62d85748ccc480823b4be9dc72ff0ff_2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a62d85748ccc480823b4be9dc72ff0ff_2) == 2); // Frame stack

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
                exception_lineno = 279;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_9 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_itm;
            outline_0_var_itm = tmp_assign_source_9;
            Py_INCREF(outline_0_var_itm);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        int tmp_truth_name_4;
        if (var_isin == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }

        tmp_called_name_2 = var_isin;
        CHECK_OBJECT(outline_0_var_itm);
        tmp_args_element_name_3 = outline_0_var_itm;
        frame_a62d85748ccc480823b4be9dc72ff0ff_2->m_frame.f_lineno = 279;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 279;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        tmp_condition_result_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_itm);
        tmp_append_value_1 = outline_0_var_itm;
        assert(PyList_Check(tmp_append_list_1));
        tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
    }
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 279;
        type_description_2 = "oo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    goto frame_return_exit_2;
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

    Py_XDECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a62d85748ccc480823b4be9dc72ff0ff_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a62d85748ccc480823b4be9dc72ff0ff_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a62d85748ccc480823b4be9dc72ff0ff_2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a62d85748ccc480823b4be9dc72ff0ff_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a62d85748ccc480823b4be9dc72ff0ff_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a62d85748ccc480823b4be9dc72ff0ff_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a62d85748ccc480823b4be9dc72ff0ff_2,
        type_description_2,
        outline_0_var_itm,
        var_isin
    );


    // Release cached frame if used for exception.
    if (frame_a62d85748ccc480823b4be9dc72ff0ff_2 == cache_frame_a62d85748ccc480823b4be9dc72ff0ff_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a62d85748ccc480823b4be9dc72ff0ff_2);
        cache_frame_a62d85748ccc480823b4be9dc72ff0ff_2 = NULL;
    }

    assertFrameObject(frame_a62d85748ccc480823b4be9dc72ff0ff_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "ooocoo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF(outline_0_var_itm);
    outline_0_var_itm = NULL;
    goto outline_result_1;
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

    Py_XDECREF(outline_0_var_itm);
    outline_0_var_itm = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 279;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f926fefba287fd7b5e0e4699dfca24b9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f926fefba287fd7b5e0e4699dfca24b9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f926fefba287fd7b5e0e4699dfca24b9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f926fefba287fd7b5e0e4699dfca24b9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f926fefba287fd7b5e0e4699dfca24b9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f926fefba287fd7b5e0e4699dfca24b9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f926fefba287fd7b5e0e4699dfca24b9,
        type_description_1,
        par_self,
        par_regex,
        par_include_persisted,
        var_finder,
        var_isin,
        var_search_list
    );


    // Release cached frame if used for exception.
    if (frame_f926fefba287fd7b5e0e4699dfca24b9 == cache_frame_f926fefba287fd7b5e0e4699dfca24b9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f926fefba287fd7b5e0e4699dfca24b9);
        cache_frame_f926fefba287fd7b5e0e4699dfca24b9 = NULL;
    }

    assertFrameObject(frame_f926fefba287fd7b5e0e4699dfca24b9);

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
    Py_XDECREF(par_regex);
    par_regex = NULL;
    CHECK_OBJECT(par_include_persisted);
    Py_DECREF(par_include_persisted);
    par_include_persisted = NULL;
    CHECK_OBJECT(var_finder);
    Py_DECREF(var_finder);
    var_finder = NULL;
    Py_XDECREF(var_isin);
    var_isin = NULL;
    Py_XDECREF(var_search_list);
    var_search_list = NULL;
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

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_regex);
    par_regex = NULL;
    CHECK_OBJECT(par_include_persisted);
    Py_DECREF(par_include_persisted);
    par_include_persisted = NULL;
    CHECK_OBJECT(var_finder);
    Py_DECREF(var_finder);
    var_finder = NULL;
    Py_XDECREF(var_isin);
    var_isin = NULL;
    Py_XDECREF(var_search_list);
    var_search_list = NULL;
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


static PyObject *impl_cmd2$history$$$function__13_regex_search$$$function__1_isin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_hi = python_pars[0];
    struct Nuitka_FrameObject *frame_289e27240090e9a4ae5c07d301d088cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_289e27240090e9a4ae5c07d301d088cb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_289e27240090e9a4ae5c07d301d088cb)) {
        Py_XDECREF(cache_frame_289e27240090e9a4ae5c07d301d088cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_289e27240090e9a4ae5c07d301d088cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_289e27240090e9a4ae5c07d301d088cb = MAKE_FUNCTION_FRAME(codeobj_289e27240090e9a4ae5c07d301d088cb, module_cmd2$history, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_289e27240090e9a4ae5c07d301d088cb->m_type_description == NULL);
    frame_289e27240090e9a4ae5c07d301d088cb = cache_frame_289e27240090e9a4ae5c07d301d088cb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_289e27240090e9a4ae5c07d301d088cb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_289e27240090e9a4ae5c07d301d088cb) == 2); // Frame stack

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 276;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[38]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hi);
        tmp_expression_name_2 = par_hi;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[1]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 276;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_289e27240090e9a4ae5c07d301d088cb->m_frame.f_lineno = 276;
        tmp_or_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 276;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 276;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[38]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (par_hi == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 276;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_hi;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[8]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 276;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_289e27240090e9a4ae5c07d301d088cb->m_frame.f_lineno = 276;
        tmp_or_right_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_289e27240090e9a4ae5c07d301d088cb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_289e27240090e9a4ae5c07d301d088cb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_289e27240090e9a4ae5c07d301d088cb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_289e27240090e9a4ae5c07d301d088cb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_289e27240090e9a4ae5c07d301d088cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_289e27240090e9a4ae5c07d301d088cb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_289e27240090e9a4ae5c07d301d088cb,
        type_description_1,
        par_hi,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_289e27240090e9a4ae5c07d301d088cb == cache_frame_289e27240090e9a4ae5c07d301d088cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_289e27240090e9a4ae5c07d301d088cb);
        cache_frame_289e27240090e9a4ae5c07d301d088cb = NULL;
    }

    assertFrameObject(frame_289e27240090e9a4ae5c07d301d088cb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_hi);
    par_hi = NULL;
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

    Py_XDECREF(par_hi);
    par_hi = NULL;
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


static PyObject *impl_cmd2$history$$$function__14_truncate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_max_length = python_pars[1];
    PyObject *var_last_element = NULL;
    struct Nuitka_FrameObject *frame_df4e7ee023bc6e0117b807c1f3b78a44;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_df4e7ee023bc6e0117b807c1f3b78a44 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_df4e7ee023bc6e0117b807c1f3b78a44)) {
        Py_XDECREF(cache_frame_df4e7ee023bc6e0117b807c1f3b78a44);

#if _DEBUG_REFCOUNTS
        if (cache_frame_df4e7ee023bc6e0117b807c1f3b78a44 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_df4e7ee023bc6e0117b807c1f3b78a44 = MAKE_FUNCTION_FRAME(codeobj_df4e7ee023bc6e0117b807c1f3b78a44, module_cmd2$history, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_df4e7ee023bc6e0117b807c1f3b78a44->m_type_description == NULL);
    frame_df4e7ee023bc6e0117b807c1f3b78a44 = cache_frame_df4e7ee023bc6e0117b807c1f3b78a44;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_df4e7ee023bc6e0117b807c1f3b78a44);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_df4e7ee023bc6e0117b807c1f3b78a44) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_max_length);
        tmp_compexpr_left_1 = par_max_length;
        tmp_compexpr_right_1 = mod_consts[21];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 288;
            type_description_1 = "ooo";
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
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_delsubscr_target_1 = par_self;
        tmp_delsubscr_subscript_1 = mod_consts[49];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_len_arg_1 = par_self;
        tmp_compexpr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_max_length);
        tmp_compexpr_right_2 = par_max_length;
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 291;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_right_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 292;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_2 = par_self;
        tmp_left_name_1 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_max_length);
        tmp_right_name_1 = par_max_length;
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_last_element == NULL);
        var_last_element = tmp_assign_source_1;
    }
    {
        PyObject *tmp_delsubscr_target_2;
        PyObject *tmp_delsubscr_subscript_2;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_delsubscr_target_2 = par_self;
        tmp_start_name_1 = mod_consts[21];
        CHECK_OBJECT(var_last_element);
        tmp_stop_name_1 = var_last_element;
        tmp_delsubscr_subscript_2 = MAKE_SLICEOBJ2(tmp_start_name_1, tmp_stop_name_1);
        assert(!(tmp_delsubscr_subscript_2 == NULL));
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_2, tmp_delsubscr_subscript_2);
        Py_DECREF(tmp_delsubscr_subscript_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_df4e7ee023bc6e0117b807c1f3b78a44);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_df4e7ee023bc6e0117b807c1f3b78a44);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_df4e7ee023bc6e0117b807c1f3b78a44, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_df4e7ee023bc6e0117b807c1f3b78a44->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_df4e7ee023bc6e0117b807c1f3b78a44, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_df4e7ee023bc6e0117b807c1f3b78a44,
        type_description_1,
        par_self,
        par_max_length,
        var_last_element
    );


    // Release cached frame if used for exception.
    if (frame_df4e7ee023bc6e0117b807c1f3b78a44 == cache_frame_df4e7ee023bc6e0117b807c1f3b78a44) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_df4e7ee023bc6e0117b807c1f3b78a44);
        cache_frame_df4e7ee023bc6e0117b807c1f3b78a44 = NULL;
    }

    assertFrameObject(frame_df4e7ee023bc6e0117b807c1f3b78a44);

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
    Py_XDECREF(par_max_length);
    par_max_length = NULL;
    Py_XDECREF(var_last_element);
    var_last_element = NULL;
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
    Py_XDECREF(par_max_length);
    par_max_length = NULL;
    Py_XDECREF(var_last_element);
    var_last_element = NULL;
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



static PyObject *MAKE_FUNCTION_cmd2$history$$$function__10_get(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$history$$$function__10_get,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_902375a385b40565a03f655eea3082d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$history,
        mod_consts[33],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$history$$$function__11_span(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$history$$$function__11_span,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_3929ce6cd715bdb8cd50b6ddbfdefa78,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$history,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$history$$$function__12_str_search(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$history$$$function__12_str_search,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_ce0af8c1262f4da3de606c1d226620d4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$history,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$history$$$function__12_str_search$$$function__1_isin(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$history$$$function__12_str_search$$$function__1_isin,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[54],
#endif
        codeobj_d7c938279ea93ca16ed1d7884adf8e16,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cmd2$history,
        mod_consts[52],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$history$$$function__13_regex_search(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$history$$$function__13_regex_search,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_f926fefba287fd7b5e0e4699dfca24b9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$history,
        mod_consts[71],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$history$$$function__13_regex_search$$$function__1_isin(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$history$$$function__13_regex_search$$$function__1_isin,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_289e27240090e9a4ae5c07d301d088cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cmd2$history,
        mod_consts[69],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$history$$$function__14_truncate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$history$$$function__14_truncate,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_df4e7ee023bc6e0117b807c1f3b78a44,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$history,
        mod_consts[74],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$history$$$function__1___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$history$$$function__1___str__,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_8565d1d3fd01e1f90081e938c4f97595,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cmd2$history,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$history$$$function__2_raw(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$history$$$function__2_raw,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_4c10bb8129182bf8ee5cd6109cb89dc1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$history,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$history$$$function__3_expanded(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$history$$$function__3_expanded,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_471bb5179a5d83f72b03bb86a04ee4e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$history,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$history$$$function__4_pr(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$history$$$function__4_pr,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_3b2e39db880bff12842ae616a25441ac,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$history,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$history$$$function__5___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$history$$$function__5___init__,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_dcc111e237a686706a67df21c8395f51,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$history,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$history$$$function__6_start_session(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$history$$$function__6_start_session,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_6d33dc71c2786f4ec5426ff30370ccac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$history,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$history$$$function__7__zero_based_index(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$history$$$function__7__zero_based_index,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_35afb1e8b3e36cf120f017ea9393d273,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$history,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$history$$$function__8_append(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$history$$$function__8_append,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_bafffb009d91900526ca9f19a4aa77ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$history,
        mod_consts[28],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$history$$$function__9_clear(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$history$$$function__9_clear,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_acc1a59cf4e2325447bb43a0d8c8d015,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$history,
        mod_consts[31],
        closure,
        1
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

function_impl_code functable_cmd2$history[] = {
    impl_cmd2$history$$$function__12_str_search$$$function__1_isin,
    impl_cmd2$history$$$function__13_regex_search$$$function__1_isin,
    impl_cmd2$history$$$function__1___str__,
    impl_cmd2$history$$$function__2_raw,
    impl_cmd2$history$$$function__3_expanded,
    impl_cmd2$history$$$function__4_pr,
    impl_cmd2$history$$$function__5___init__,
    impl_cmd2$history$$$function__6_start_session,
    impl_cmd2$history$$$function__7__zero_based_index,
    impl_cmd2$history$$$function__8_append,
    impl_cmd2$history$$$function__9_clear,
    impl_cmd2$history$$$function__10_get,
    impl_cmd2$history$$$function__11_span,
    impl_cmd2$history$$$function__12_str_search,
    impl_cmd2$history$$$function__13_regex_search,
    impl_cmd2$history$$$function__14_truncate,
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

    function_impl_code *current = functable_cmd2$history;
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

    if (offset > sizeof(functable_cmd2$history) || offset < 0) {
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
        functable_cmd2$history[offset],
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
        module_cmd2$history,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "cmd2.history";

// Internal entry point for module code.
PyObject *modulecode_cmd2$history(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_cmd2$history = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("cmd2.history: Skipping module init, already done.\n");
#endif

        return module_cmd2$history;
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
    PRINT_STRING("cmd2.history: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cmd2.history: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cmd2.history: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcmd2$history\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_cmd2$history = MODULE_DICT(module_cmd2$history);

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
        moduledict_cmd2$history,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cmd2$history,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cmd2$history,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cmd2$history,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cmd2$history,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cmd2$history);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cmd2$history, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_cmd2$history, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cmd2$history, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_cmd2$history);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_cmd2$history, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    struct Nuitka_CellObject *outline_1_var___class__ = Nuitka_Cell_Empty();
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_4799afc4bc062e58ea547e396abc96c8;
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
    PyObject *locals_cmd2$history$$$class__1_HistoryItem_23 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_4ad543c402c0e32b0e2926f2426e7193_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4ad543c402c0e32b0e2926f2426e7193_2 = NULL;
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
    PyObject *locals_cmd2$history$$$class__2_History_87 = NULL;
    struct Nuitka_FrameObject *frame_c4c5db956ebb8324f9912b71c0005485_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c4c5db956ebb8324f9912b71c0005485_3 = NULL;
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
        tmp_assign_source_1 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_4799afc4bc062e58ea547e396abc96c8 = MAKE_MODULE_FRAME(codeobj_4799afc4bc062e58ea547e396abc96c8, module_cmd2$history);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_4799afc4bc062e58ea547e396abc96c8);
    assert(Py_REFCNT(frame_4799afc4bc062e58ea547e396abc96c8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[77];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[80], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[81], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[65];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_cmd2$history;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[21];
        frame_4799afc4bc062e58ea547e396abc96c8->m_frame.f_lineno = 6;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[83];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_cmd2$history;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[84];
        tmp_level_name_2 = mod_consts[21];
        frame_4799afc4bc062e58ea547e396abc96c8->m_frame.f_lineno = 7;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_cmd2$history,
                mod_consts[85],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[85]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_cmd2$history,
                mod_consts[86],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[86]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_7);
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
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[87];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_cmd2$history;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = mod_consts[21];
        frame_4799afc4bc062e58ea547e396abc96c8->m_frame.f_lineno = 12;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[88];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_cmd2$history;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[89];
        tmp_level_name_4 = mod_consts[24];
        frame_4799afc4bc062e58ea547e396abc96c8->m_frame.f_lineno = 14;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_cmd2$history,
                mod_consts[56],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[90];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_cmd2$history;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[91];
        tmp_level_name_5 = mod_consts[24];
        frame_4799afc4bc062e58ea547e396abc96c8->m_frame.f_lineno = 17;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_cmd2$history,
                mod_consts[92],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[92]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[93];
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
        tmp_key_name_2 = mod_consts[93];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_1:;
        tmp_bases_name_1 = mod_consts[94];
        tmp_assign_source_12 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[93];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[93];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 23;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_1 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_1, mod_consts[95]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[95]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        tmp_args_name_1 = mod_consts[96];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_4799afc4bc062e58ea547e396abc96c8->m_frame.f_lineno = 23;
        tmp_assign_source_13 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_3 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_3, mod_consts[97]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
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
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[98];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[99];
        tmp_getattr_default_1 = mod_consts[100];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_4;
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_1 = tmp_class_creation_1__prepared;
            tmp_expression_name_4 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_name_4 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[99]);
            Py_DECREF(tmp_expression_name_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
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


            exception_lineno = 23;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 23;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_14;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_args_element_name_1;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[101]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_kwargs_name_2 = PyDict_Copy(mod_consts[102]);
        frame_4799afc4bc062e58ea547e396abc96c8->m_frame.f_lineno = 22;
        tmp_called_name_2 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_3, tmp_kwargs_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_cmd2$history$$$class__1_HistoryItem_23 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[105];
        tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[26];
        tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[106], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_4ad543c402c0e32b0e2926f2426e7193_2)) {
            Py_XDECREF(cache_frame_4ad543c402c0e32b0e2926f2426e7193_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_4ad543c402c0e32b0e2926f2426e7193_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_4ad543c402c0e32b0e2926f2426e7193_2 = MAKE_FUNCTION_FRAME(codeobj_4ad543c402c0e32b0e2926f2426e7193, module_cmd2$history, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_4ad543c402c0e32b0e2926f2426e7193_2->m_type_description == NULL);
        frame_4ad543c402c0e32b0e2926f2426e7193_2 = cache_frame_4ad543c402c0e32b0e2926f2426e7193_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_4ad543c402c0e32b0e2926f2426e7193_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_4ad543c402c0e32b0e2926f2426e7193_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[9], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[108];
        tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[13], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_expression_name_6;
            PyObject *tmp_kwargs_name_3;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_expression_name_6 = PyObject_GetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[87]);

            if (tmp_expression_name_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_expression_name_6 == NULL)) {
                        tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_expression_name_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_name_6);
                }
            }

            tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[109]);
            Py_DECREF(tmp_expression_name_6);
            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_1 = mod_consts[110];
            tmp_dict_value_1 = Py_None;
            tmp_kwargs_name_3 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_name_5;
                PyObject *tmp_expression_name_7;
                PyObject *tmp_expression_name_8;
                PyObject *tmp_args_element_name_2;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[111];
                tmp_expression_name_8 = PyObject_GetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[87]);

                if (tmp_expression_name_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[87]);

                        if (unlikely(tmp_expression_name_8 == NULL)) {
                            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                        }

                        if (tmp_expression_name_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 28;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_name_8);
                    }
                }

                tmp_expression_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[112]);
                Py_DECREF(tmp_expression_name_8);
                if (tmp_expression_name_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[113]);
                Py_DECREF(tmp_expression_name_7);
                if (tmp_called_name_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_args_element_name_2 = PyObject_GetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[92]);

                if (tmp_args_element_name_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_name_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[92]);

                        if (unlikely(tmp_args_element_name_2 == NULL)) {
                            tmp_args_element_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
                        }

                        if (tmp_args_element_name_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_5);

                            exception_lineno = 28;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_args_element_name_2);
                    }
                }

                frame_4ad543c402c0e32b0e2926f2426e7193_2->m_frame.f_lineno = 28;
                tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_2);
                Py_DECREF(tmp_called_name_5);
                Py_DECREF(tmp_args_element_name_2);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_kwargs_name_3);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            frame_4ad543c402c0e32b0e2926f2426e7193_2->m_frame.f_lineno = 28;
            tmp_dictset_value = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_4, tmp_kwargs_name_3);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_kwargs_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[0], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_expression_name_9;
            PyObject *tmp_kwargs_name_4;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_expression_name_9 = PyObject_GetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[87]);

            if (tmp_expression_name_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_expression_name_9 == NULL)) {
                        tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                    }

                    if (tmp_expression_name_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 29;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_name_9);
                }
            }

            tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[109]);
            Py_DECREF(tmp_expression_name_9);
            if (tmp_called_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = mod_consts[110];
            tmp_dict_value_2 = Py_None;
            tmp_kwargs_name_4 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_called_name_7;
                PyObject *tmp_expression_name_10;
                PyObject *tmp_expression_name_11;
                PyObject *tmp_args_element_name_3;
                tmp_res = PyDict_SetItem(tmp_kwargs_name_4, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[111];
                tmp_expression_name_11 = PyObject_GetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[87]);

                if (tmp_expression_name_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[87]);

                        if (unlikely(tmp_expression_name_11 == NULL)) {
                            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
                        }

                        if (tmp_expression_name_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 29;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_name_11);
                    }
                }

                tmp_expression_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[112]);
                Py_DECREF(tmp_expression_name_11);
                if (tmp_expression_name_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 29;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[113]);
                Py_DECREF(tmp_expression_name_10);
                if (tmp_called_name_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 29;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_args_element_name_3 = PyObject_GetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[114]);

                if (tmp_args_element_name_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_args_element_name_3 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_args_element_name_3);
                    }
                }

                frame_4ad543c402c0e32b0e2926f2426e7193_2->m_frame.f_lineno = 29;
                tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_3);
                Py_DECREF(tmp_called_name_7);
                Py_DECREF(tmp_args_element_name_3);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 29;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_kwargs_name_4, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_kwargs_name_4);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            frame_4ad543c402c0e32b0e2926f2426e7193_2->m_frame.f_lineno = 29;
            tmp_dictset_value = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_6, tmp_kwargs_name_4);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_kwargs_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_cmd2$history$$$function__1___str__();

        tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[115], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_res = MAPPING_HAS_ITEM(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_name_8 = PyObject_GetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[117]);

            if (unlikely(tmp_called_name_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_3 = mod_consts[118];
            tmp_dict_value_3 = PyObject_GetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[119]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_3);
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_name_4 = MAKE_FUNCTION_cmd2$history$$$function__2_raw(tmp_annotations_1);

            frame_4ad543c402c0e32b0e2926f2426e7193_2->m_frame.f_lineno = 35;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_4);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_name_9 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_4 = mod_consts[118];
            tmp_dict_value_4 = PyObject_GetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[119]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_4);
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_name_5 = MAKE_FUNCTION_cmd2$history$$$function__2_raw(tmp_annotations_2);

            frame_4ad543c402c0e32b0e2926f2426e7193_2->m_frame.f_lineno = 35;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_5);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_res = MAPPING_HAS_ITEM(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[117]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
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
            tmp_called_name_10 = PyObject_GetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[117]);

            if (unlikely(tmp_called_name_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[117]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[118];
            tmp_dict_value_5 = PyObject_GetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[119]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_5);
                }
            }

            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_name_6 = MAKE_FUNCTION_cmd2$history$$$function__3_expanded(tmp_annotations_3);

            frame_4ad543c402c0e32b0e2926f2426e7193_2->m_frame.f_lineno = 43;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_6);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_name_11 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[118];
            tmp_dict_value_6 = PyObject_GetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[119]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_6);
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_name_7 = MAKE_FUNCTION_cmd2$history$$$function__3_expanded(tmp_annotations_4);

            frame_4ad543c402c0e32b0e2926f2426e7193_2->m_frame.f_lineno = 43;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_7);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_defaults_1 = mod_consts[122];
            tmp_dict_key_7 = mod_consts[118];
            tmp_dict_value_7 = PyObject_GetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[119]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_7);
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_cmd2$history$$$function__4_pr(tmp_defaults_1, tmp_annotations_5);

            tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__1_HistoryItem_23, mod_consts[123], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_4ad543c402c0e32b0e2926f2426e7193_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_4ad543c402c0e32b0e2926f2426e7193_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4ad543c402c0e32b0e2926f2426e7193_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4ad543c402c0e32b0e2926f2426e7193_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4ad543c402c0e32b0e2926f2426e7193_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4ad543c402c0e32b0e2926f2426e7193_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_4ad543c402c0e32b0e2926f2426e7193_2 == cache_frame_4ad543c402c0e32b0e2926f2426e7193_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_4ad543c402c0e32b0e2926f2426e7193_2);
            cache_frame_4ad543c402c0e32b0e2926f2426e7193_2 = NULL;
        }

        assertFrameObject(frame_4ad543c402c0e32b0e2926f2426e7193_2);

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
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_name_5;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_12 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = mod_consts[26];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[94];
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_cmd2$history$$$class__1_HistoryItem_23;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_5 = tmp_class_creation_1__class_decl_dict;
            frame_4799afc4bc062e58ea547e396abc96c8->m_frame.f_lineno = 23;
            tmp_assign_source_16 = CALL_FUNCTION(tmp_called_name_12, tmp_args_name_2, tmp_kwargs_name_5);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_args_element_name_1 = outline_0_var___class__;
        Py_INCREF(tmp_args_element_name_1);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_cmd2$history$$$class__1_HistoryItem_23);
        locals_cmd2$history$$$class__1_HistoryItem_23 = NULL;
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

        Py_DECREF(locals_cmd2$history$$$class__1_HistoryItem_23);
        locals_cmd2$history$$$class__1_HistoryItem_23 = NULL;
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
        exception_lineno = 23;
        goto try_except_handler_2;
        outline_result_1:;
        frame_4799afc4bc062e58ea547e396abc96c8->m_frame.f_lineno = 22;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_15);
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
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[125];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_17 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_arg_name_4;
        PyObject *tmp_dict_arg_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_2;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = mod_consts[93];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_4, tmp_key_name_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = mod_consts[93];
        tmp_metaclass_name_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_5;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_5;
        }
        tmp_condition_result_8 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_name_12 = tmp_class_creation_2__bases;
        tmp_subscript_name_1 = mod_consts[21];
        tmp_type_arg_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_12, tmp_subscript_name_1, 0);
        if (tmp_type_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_2);
        Py_DECREF(tmp_type_arg_2);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_5;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_5:;
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_19 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_arg_name_6;
        tmp_key_name_6 = mod_consts[93];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_6, tmp_key_name_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[93];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 87;

        goto try_except_handler_5;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_name_13;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_13 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_13, mod_consts[95]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_name_6;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_14 = tmp_class_creation_2__metaclass;
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[95]);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_5;
        }
        tmp_tuple_element_3 = mod_consts[126];
        tmp_args_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_3 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_name_3, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_name_6 = tmp_class_creation_2__class_decl_dict;
        frame_4799afc4bc062e58ea547e396abc96c8->m_frame.f_lineno = 87;
        tmp_assign_source_20 = CALL_FUNCTION(tmp_called_name_13, tmp_args_name_3, tmp_kwargs_name_6);
        Py_DECREF(tmp_called_name_13);
        Py_DECREF(tmp_args_name_3);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_15;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_15 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_15, mod_consts[97]);
        tmp_operand_name_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_5;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_name_2 = mod_consts[98];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[99];
        tmp_getattr_default_2 = mod_consts[100];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_5;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_16;
            PyObject *tmp_type_arg_3;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_3 = tmp_class_creation_2__prepared;
            tmp_expression_name_16 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_expression_name_16 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[99]);
            Py_DECREF(tmp_expression_name_16);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_4);
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


            exception_lineno = 87;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 87;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_21;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_cmd2$history$$$class__2_History_87 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[104], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[127];
        tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[126];
        tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[106], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_7;
        }
        if (isFrameUnusable(cache_frame_c4c5db956ebb8324f9912b71c0005485_3)) {
            Py_XDECREF(cache_frame_c4c5db956ebb8324f9912b71c0005485_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c4c5db956ebb8324f9912b71c0005485_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c4c5db956ebb8324f9912b71c0005485_3 = MAKE_FUNCTION_FRAME(codeobj_c4c5db956ebb8324f9912b71c0005485, module_cmd2$history, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c4c5db956ebb8324f9912b71c0005485_3->m_type_description == NULL);
        frame_c4c5db956ebb8324f9912b71c0005485_3 = cache_frame_c4c5db956ebb8324f9912b71c0005485_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c4c5db956ebb8324f9912b71c0005485_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c4c5db956ebb8324f9912b71c0005485_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_6;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_2 = mod_consts[128];
            tmp_annotations_6 = PyDict_Copy(mod_consts[129]);
            Py_INCREF(tmp_defaults_2);

            tmp_closure_1[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_cmd2$history$$$function__5___init__(tmp_defaults_2, tmp_annotations_6, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_7;
            tmp_annotations_7 = PyDict_Copy(mod_consts[129]);


            tmp_dictset_value = MAKE_FUNCTION_cmd2$history$$$function__6_start_session(tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[30], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_name_17;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_tuple_element_5;
            tmp_dict_key_8 = mod_consts[132];
            tmp_expression_name_17 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[86]);

            if (tmp_expression_name_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[86]);

                    if (unlikely(tmp_expression_name_17 == NULL)) {
                        tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
                    }

                    if (tmp_expression_name_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 109;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_name_17);
                }
            }

            tmp_tuple_element_5 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[114]);

            if (tmp_tuple_element_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_5 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_tuple_element_5);
                }
            }

            tmp_subscript_name_2 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_subscript_name_2, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[119]);

            if (tmp_tuple_element_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_5 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_tuple_element_5);
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_name_2, 1, tmp_tuple_element_5);
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_17, tmp_subscript_name_2);
            Py_DECREF(tmp_expression_name_17);
            Py_DECREF(tmp_subscript_name_2);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[118];
            tmp_dict_value_8 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[114]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_8);
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_cmd2$history$$$function__7__zero_based_index(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_dict_key_9 = mod_consts[134];
            tmp_dict_value_9 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[92]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[92]);

                    if (unlikely(tmp_dict_value_9 == NULL)) {
                        tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
                    }

                    if (tmp_dict_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 116;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_9);
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[118];
            tmp_dict_value_9 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));

            tmp_closure_2[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_cmd2$history$$$function__8_append(tmp_annotations_9, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[27], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_10;
            struct Nuitka_CellObject *tmp_closure_3[1];
            tmp_annotations_10 = PyDict_Copy(mod_consts[129]);

            tmp_closure_3[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_dictset_value = MAKE_FUNCTION_cmd2$history$$$function__9_clear(tmp_annotations_10, tmp_closure_3);

            tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[29], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_name_18;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_tuple_element_6;
            tmp_dict_key_10 = mod_consts[137];
            tmp_expression_name_18 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[86]);

            if (tmp_expression_name_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_name_18 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[86]);

                    if (unlikely(tmp_expression_name_18 == NULL)) {
                        tmp_expression_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
                    }

                    if (tmp_expression_name_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 130;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_name_18);
                }
            }

            tmp_tuple_element_6 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[114]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_6 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_tuple_element_6);
                }
            }

            tmp_subscript_name_3 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_subscript_name_3, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[119]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_tuple_element_6);
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_name_3, 1, tmp_tuple_element_6);
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_name_18, tmp_subscript_name_3);
            Py_DECREF(tmp_expression_name_18);
            Py_DECREF(tmp_subscript_name_3);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[118];
            tmp_dict_value_10 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[26]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_dict_value_10 == NULL)) {
                        tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_dict_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 130;
                        type_description_2 = "c";
                        goto dict_build_exception_3;
                    }
                    Py_INCREF(tmp_dict_value_10);
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_11);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_cmd2$history$$$function__10_get(tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[138], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            tmp_called_instance_1 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[65]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[65]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 169;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_1);
                }
            }

            frame_c4c5db956ebb8324f9912b71c0005485_3->m_frame.f_lineno = 169;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1(
                tmp_called_instance_1,
                mod_consts[66],
                &PyTuple_GET_ITEM(mod_consts[140], 0)
            );

            Py_DECREF(tmp_called_instance_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_defaults_3 = mod_consts[141];
            tmp_dict_key_11 = mod_consts[39];
            tmp_dict_value_11 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[119]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_11);
                }
            }

            tmp_annotations_12 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_name_19;
                PyObject *tmp_subscript_name_4;
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[142];
                tmp_dict_value_11 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[143]);

                if (tmp_dict_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_11 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_11);
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[118];
                tmp_expression_name_19 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[85]);

                if (tmp_expression_name_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_name_19 == NULL)) {
                            tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_name_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 171;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_name_19);
                    }
                }

                tmp_subscript_name_4 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[26]);

                if (tmp_subscript_name_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_name_4 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_subscript_name_4 == NULL)) {
                            tmp_subscript_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_subscript_name_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_name_19);

                            exception_lineno = 171;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_subscript_name_4);
                    }
                }

                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_name_19, tmp_subscript_name_4);
                Py_DECREF(tmp_expression_name_19);
                Py_DECREF(tmp_subscript_name_4);
                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_12);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_cmd2$history$$$function__11_span(tmp_defaults_3, tmp_annotations_12);

            tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_defaults_4 = mod_consts[141];
            tmp_dict_key_12 = mod_consts[38];
            tmp_dict_value_12 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[119]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_12);
                }
            }

            tmp_annotations_13 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_name_20;
                PyObject *tmp_subscript_name_5;
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[142];
                tmp_dict_value_12 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[143]);

                if (tmp_dict_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_12 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_12);
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[118];
                tmp_expression_name_20 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[85]);

                if (tmp_expression_name_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_name_20 == NULL)) {
                            tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_name_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 245;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_name_20);
                    }
                }

                tmp_subscript_name_5 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[26]);

                if (tmp_subscript_name_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_name_5 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_subscript_name_5 == NULL)) {
                            tmp_subscript_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_subscript_name_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_name_20);

                            exception_lineno = 245;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_subscript_name_5);
                    }
                }

                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_name_20, tmp_subscript_name_5);
                Py_DECREF(tmp_expression_name_20);
                Py_DECREF(tmp_subscript_name_5);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 245;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_13);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_cmd2$history$$$function__12_str_search(tmp_defaults_4, tmp_annotations_13);

            tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[145], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_5;
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_defaults_5 = mod_consts[141];
            tmp_dict_key_13 = mod_consts[62];
            tmp_dict_value_13 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[119]);

            if (tmp_dict_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_13 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_13);
                }
            }

            tmp_annotations_14 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_name_21;
                PyObject *tmp_subscript_name_6;
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[142];
                tmp_dict_value_13 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[143]);

                if (tmp_dict_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_13 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_13);
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[118];
                tmp_expression_name_21 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[85]);

                if (tmp_expression_name_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[85]);

                        if (unlikely(tmp_expression_name_21 == NULL)) {
                            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
                        }

                        if (tmp_expression_name_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 262;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_name_21);
                    }
                }

                tmp_subscript_name_6 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[26]);

                if (tmp_subscript_name_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_name_6 = GET_STRING_DICT_VALUE(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_subscript_name_6 == NULL)) {
                            tmp_subscript_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_subscript_name_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_name_21);

                            exception_lineno = 262;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_subscript_name_6);
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_name_21, tmp_subscript_name_6);
                Py_DECREF(tmp_expression_name_21);
                Py_DECREF(tmp_subscript_name_6);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_14);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_cmd2$history$$$function__13_regex_search(tmp_defaults_5, tmp_annotations_14);

            tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[147], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            tmp_dict_key_14 = mod_consts[149];
            tmp_dict_value_14 = PyObject_GetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[114]);

            if (tmp_dict_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_14 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_14);
                }
            }

            tmp_annotations_15 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[118];
            tmp_dict_value_14 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_cmd2$history$$$function__14_truncate(tmp_annotations_15);

            tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[150], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c4c5db956ebb8324f9912b71c0005485_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c4c5db956ebb8324f9912b71c0005485_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c4c5db956ebb8324f9912b71c0005485_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c4c5db956ebb8324f9912b71c0005485_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c4c5db956ebb8324f9912b71c0005485_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c4c5db956ebb8324f9912b71c0005485_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c4c5db956ebb8324f9912b71c0005485_3 == cache_frame_c4c5db956ebb8324f9912b71c0005485_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c4c5db956ebb8324f9912b71c0005485_3);
            cache_frame_c4c5db956ebb8324f9912b71c0005485_3 = NULL;
        }

        assertFrameObject(frame_c4c5db956ebb8324f9912b71c0005485_3);

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
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_1 = tmp_class_creation_2__bases;
            tmp_compexpr_right_1 = mod_consts[125];
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
            assert(tmp_condition_result_12 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_7:;
        tmp_dictset_value = mod_consts[125];
        tmp_res = PyObject_SetItem(locals_cmd2$history$$$class__2_History_87, mod_consts[152], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_7;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_name_7;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_14 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[126];
            tmp_args_name_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_name_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_cmd2$history$$$class__2_History_87;
            PyTuple_SET_ITEM0(tmp_args_name_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_name_7 = tmp_class_creation_2__class_decl_dict;
            frame_4799afc4bc062e58ea547e396abc96c8->m_frame.f_lineno = 87;
            tmp_assign_source_23 = CALL_FUNCTION(tmp_called_name_14, tmp_args_name_4, tmp_kwargs_name_7);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto try_except_handler_7;
            }
            {
                PyObject *old = Nuitka_Cell_GET(outline_1_var___class__);
                PyCell_SET(outline_1_var___class__, tmp_assign_source_23);
                Py_XDECREF(old);
            }

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_22 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_cmd2$history$$$class__2_History_87);
        locals_cmd2$history$$$class__2_History_87 = NULL;
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

        Py_DECREF(locals_cmd2$history$$$class__2_History_87);
        locals_cmd2$history$$$class__2_History_87 = NULL;
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

        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
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
        exception_lineno = 87;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_cmd2$history, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_22);
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
    RESTORE_FRAME_EXCEPTION(frame_4799afc4bc062e58ea547e396abc96c8);
#endif
    popFrameStack();

    assertFrameObject(frame_4799afc4bc062e58ea547e396abc96c8);

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4799afc4bc062e58ea547e396abc96c8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4799afc4bc062e58ea547e396abc96c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4799afc4bc062e58ea547e396abc96c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4799afc4bc062e58ea547e396abc96c8, exception_lineno);
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

    return module_cmd2$history;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

