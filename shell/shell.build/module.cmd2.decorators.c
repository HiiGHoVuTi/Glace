/* Generated code for Python module 'cmd2.decorators'
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

/* The "module_cmd2$decorators" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cmd2$decorators;
PyDictObject *moduledict_cmd2$decorators;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[158];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "cmd2.decorators");

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
void checkModuleConstants_cmd2$decorators(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "cmd2.decorators");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f28ccd0ee533f33552a72925204275cd;
static PyCodeObject *codeobj_54e3eb68535f7e3db255f44ccba068ef;
static PyCodeObject *codeobj_a480dd04145bfe0e07fbd8c282adec5d;
static PyCodeObject *codeobj_f8d48f805e4342bfcfb2138c31500c04;
static PyCodeObject *codeobj_9eb7f3ddce79ac917871a0dfcf34f2a3;
static PyCodeObject *codeobj_92e451075ec9ee996ae14131a2dc8571;
static PyCodeObject *codeobj_7f3dfe2e53567ef6114322cf09af9390;
static PyCodeObject *codeobj_7819348de88c037c4c98d479cb8614a8;
static PyCodeObject *codeobj_a9d7b5de4fbd7ebceba042eb22169041;
static PyCodeObject *codeobj_94219bae9ebcc24627f8ec92411ed817;
static PyCodeObject *codeobj_a92082cc84c88aea08c7317ee5d7e379;
static PyCodeObject *codeobj_e781099307d771a3979caa0d9edd56ea;
static PyCodeObject *codeobj_627ca34c19e3ffb30853691dcbd8a684;
static PyCodeObject *codeobj_d623ca5695d1db1a24d76a7eaf33e66e;
static PyCodeObject *codeobj_61eb42543bc5297752c1b04b945aca93;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[103]; CHECK_OBJECT(module_filename_obj);
    codeobj_f28ccd0ee533f33552a72925204275cd = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[137], NULL, NULL, 0, 0, 0);
    codeobj_54e3eb68535f7e3db255f44ccba068ef = MAKE_CODEOBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[48], mod_consts[138], NULL, 2, 0, 0);
    codeobj_a480dd04145bfe0e07fbd8c282adec5d = MAKE_CODEOBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], mod_consts[139], NULL, 1, 0, 0);
    codeobj_f8d48f805e4342bfcfb2138c31500c04 = MAKE_CODEOBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[140], NULL, 2, 0, 0);
    codeobj_9eb7f3ddce79ac917871a0dfcf34f2a3 = MAKE_CODEOBJECT(module_filename_obj, 377, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[26], mod_consts[141], mod_consts[142], 1, 0, 0);
    codeobj_92e451075ec9ee996ae14131a2dc8571 = MAKE_CODEOBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[26], mod_consts[143], mod_consts[144], 1, 0, 0);
    codeobj_7f3dfe2e53567ef6114322cf09af9390 = MAKE_CODEOBJECT(module_filename_obj, 283, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[26], mod_consts[145], mod_consts[146], 1, 0, 0);
    codeobj_7819348de88c037c4c98d479cb8614a8 = MAKE_CODEOBJECT(module_filename_obj, 359, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[136], mod_consts[147], NULL, 3, 2, 0);
    codeobj_a9d7b5de4fbd7ebceba042eb22169041 = MAKE_CODEOBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[0], mod_consts[148], mod_consts[149], 1, 0, 0);
    codeobj_94219bae9ebcc24627f8ec92411ed817 = MAKE_CODEOBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[37], mod_consts[150], mod_consts[151], 0, 0, 0);
    codeobj_a92082cc84c88aea08c7317ee5d7e379 = MAKE_CODEOBJECT(module_filename_obj, 285, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[37], mod_consts[152], mod_consts[153], 0, 0, 0);
    codeobj_e781099307d771a3979caa0d9edd56ea = MAKE_CODEOBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[154], NULL, 1, 3, 0);
    codeobj_627ca34c19e3ffb30853691dcbd8a684 = MAKE_CODEOBJECT(module_filename_obj, 191, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[133], mod_consts[155], NULL, 1, 2, 0);
    codeobj_d623ca5695d1db1a24d76a7eaf33e66e = MAKE_CODEOBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[129], mod_consts[156], NULL, 0, 1, 0);
    codeobj_61eb42543bc5297752c1b04b945aca93 = MAKE_CODEOBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[124], mod_consts[157], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__9_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__1_with_category(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__1_with_category$$$function__1_cat_decorator(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__2__parse_positionals(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__3__arg_swap(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__4_with_argument_list(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__4_with_argument_list$$$function__1_arg_decorator(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__4_with_argument_list$$$function__1_arg_decorator$$$function__1_cmd_wrapper(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__5__set_parser_prog(PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__6_with_argparser_and_unknown_args(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__7_with_argparser(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__7_with_argparser$$$function__1_arg_decorator(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__7_with_argparser$$$function__1_arg_decorator$$$function__1_cmd_wrapper(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__8_as_subcommand_to(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__8_as_subcommand_to$$$function__1_arg_decorator(PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_cmd2$decorators$$$function__1_with_category(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_category = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_cat_decorator = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_category;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_cmd2$decorators$$$function__1_with_category$$$function__1_cat_decorator(tmp_closure_1);

        assert(var_cat_decorator == NULL);
        var_cat_decorator = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_cat_decorator);
    tmp_return_value = var_cat_decorator;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_category);
    Py_DECREF(par_category);
    par_category = NULL;
    CHECK_OBJECT(var_cat_decorator);
    Py_DECREF(var_cat_decorator);
    var_cat_decorator = NULL;
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


static PyObject *impl_cmd2$decorators$$$function__1_with_category$$$function__1_cat_decorator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *var_categorize = NULL;
    struct Nuitka_FrameObject *frame_a9d7b5de4fbd7ebceba042eb22169041;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a9d7b5de4fbd7ebceba042eb22169041 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a9d7b5de4fbd7ebceba042eb22169041)) {
        Py_XDECREF(cache_frame_a9d7b5de4fbd7ebceba042eb22169041);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a9d7b5de4fbd7ebceba042eb22169041 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a9d7b5de4fbd7ebceba042eb22169041 = MAKE_FUNCTION_FRAME(codeobj_a9d7b5de4fbd7ebceba042eb22169041, module_cmd2$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a9d7b5de4fbd7ebceba042eb22169041->m_type_description == NULL);
    frame_a9d7b5de4fbd7ebceba042eb22169041 = cache_frame_a9d7b5de4fbd7ebceba042eb22169041;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a9d7b5de4fbd7ebceba042eb22169041);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a9d7b5de4fbd7ebceba042eb22169041) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[3];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_cmd2$decorators;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[4];
        tmp_level_name_1 = mod_consts[5];
        frame_a9d7b5de4fbd7ebceba042eb22169041->m_frame.f_lineno = 50;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_cmd2$decorators,
                mod_consts[6],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(var_categorize == NULL);
        var_categorize = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(var_categorize);
        tmp_called_name_1 = var_categorize;
        CHECK_OBJECT(par_func);
        tmp_args_element_name_1 = par_func;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_a9d7b5de4fbd7ebceba042eb22169041->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a9d7b5de4fbd7ebceba042eb22169041);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a9d7b5de4fbd7ebceba042eb22169041);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a9d7b5de4fbd7ebceba042eb22169041, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a9d7b5de4fbd7ebceba042eb22169041->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a9d7b5de4fbd7ebceba042eb22169041, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a9d7b5de4fbd7ebceba042eb22169041,
        type_description_1,
        par_func,
        var_categorize,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_a9d7b5de4fbd7ebceba042eb22169041 == cache_frame_a9d7b5de4fbd7ebceba042eb22169041) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a9d7b5de4fbd7ebceba042eb22169041);
        cache_frame_a9d7b5de4fbd7ebceba042eb22169041 = NULL;
    }

    assertFrameObject(frame_a9d7b5de4fbd7ebceba042eb22169041);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(par_func);
    tmp_return_value = par_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    par_func = NULL;
    CHECK_OBJECT(var_categorize);
    Py_DECREF(var_categorize);
    var_categorize = NULL;
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

    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    par_func = NULL;
    Py_XDECREF(var_categorize);
    var_categorize = NULL;
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


static PyObject *impl_cmd2$decorators$$$function__2__parse_positionals(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *var_pos = NULL;
    PyObject *var_arg = NULL;
    PyObject *var_Cmd = NULL;
    PyObject *var_CommandSet = NULL;
    PyObject *var_next_arg = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a480dd04145bfe0e07fbd8c282adec5d;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_a480dd04145bfe0e07fbd8c282adec5d = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a480dd04145bfe0e07fbd8c282adec5d)) {
        Py_XDECREF(cache_frame_a480dd04145bfe0e07fbd8c282adec5d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a480dd04145bfe0e07fbd8c282adec5d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a480dd04145bfe0e07fbd8c282adec5d = MAKE_FUNCTION_FRAME(codeobj_a480dd04145bfe0e07fbd8c282adec5d, module_cmd2$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a480dd04145bfe0e07fbd8c282adec5d->m_type_description == NULL);
    frame_a480dd04145bfe0e07fbd8c282adec5d = cache_frame_a480dd04145bfe0e07fbd8c282adec5d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a480dd04145bfe0e07fbd8c282adec5d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a480dd04145bfe0e07fbd8c282adec5d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_args);
        tmp_args_element_name_1 = par_args;
        frame_a480dd04145bfe0e07fbd8c282adec5d->m_frame.f_lineno = 69;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 69;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 69;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 69;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 69;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 69;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
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

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_pos;
            var_pos = tmp_assign_source_6;
            Py_INCREF(var_pos);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_arg;
            var_arg = tmp_assign_source_7;
            Py_INCREF(var_arg);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[9];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_cmd2$decorators;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[10];
        tmp_level_name_1 = mod_consts[11];
        frame_a480dd04145bfe0e07fbd8c282adec5d->m_frame.f_lineno = 70;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_import_from_1__module;
            tmp_import_from_1__module = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_cmd2$decorators,
                mod_consts[12],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[12]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_Cmd;
            var_Cmd = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_cmd2$decorators,
                mod_consts[13],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[13]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_CommandSet;
            var_CommandSet = tmp_assign_source_10;
            Py_XDECREF(old);
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_and_right_value_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_arg);
        tmp_isinstance_inst_1 = var_arg;
        CHECK_OBJECT(var_Cmd);
        tmp_isinstance_cls_1 = var_Cmd;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_arg);
        tmp_isinstance_inst_2 = var_arg;
        CHECK_OBJECT(var_CommandSet);
        tmp_isinstance_cls_2 = var_CommandSet;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_left_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (par_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_len_arg_1 = par_args;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_pos);
        tmp_compexpr_right_1 = var_pos;
        tmp_tmp_and_right_value_1_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_and_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_and_right_value_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_1_object_1);

            exception_lineno = 71;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_right_value_1_object_1);
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(var_arg);
        tmp_isinstance_inst_3 = var_arg;
        CHECK_OBJECT(var_CommandSet);
        tmp_isinstance_cls_3 = var_CommandSet;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(var_arg);
        tmp_expression_name_1 = var_arg;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[15]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_arg;
            var_arg = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if (par_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_2 = par_args;
        CHECK_OBJECT(var_pos);
        tmp_left_name_1 = var_pos;
        tmp_right_name_1 = mod_consts[5];
        tmp_subscript_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_next_arg;
            var_next_arg = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_next_arg);
        tmp_isinstance_inst_4 = var_next_arg;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_4 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_4, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
        PyTuple_SET_ITEM0(tmp_isinstance_cls_4, 1, tmp_tuple_element_1);
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        Py_DECREF(tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_arg);
        tmp_tuple_element_2 = var_arg;
        tmp_return_value = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_3;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
            if (par_args == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 76;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_3 = par_args;
            if (var_pos == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 76;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }

            tmp_left_name_2 = var_pos;
            tmp_right_name_2 = mod_consts[5];
            tmp_subscript_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_2);
            if (tmp_subscript_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_2);
            Py_DECREF(tmp_subscript_name_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto try_return_handler_2;
    }
    branch_no_3:;
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 69;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto frame_return_exit_1;
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
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[18];
        frame_a480dd04145bfe0e07fbd8c282adec5d->m_frame.f_lineno = 80;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 80;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a480dd04145bfe0e07fbd8c282adec5d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a480dd04145bfe0e07fbd8c282adec5d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a480dd04145bfe0e07fbd8c282adec5d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a480dd04145bfe0e07fbd8c282adec5d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a480dd04145bfe0e07fbd8c282adec5d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a480dd04145bfe0e07fbd8c282adec5d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a480dd04145bfe0e07fbd8c282adec5d,
        type_description_1,
        par_args,
        var_pos,
        var_arg,
        var_Cmd,
        var_CommandSet,
        var_next_arg
    );


    // Release cached frame if used for exception.
    if (frame_a480dd04145bfe0e07fbd8c282adec5d == cache_frame_a480dd04145bfe0e07fbd8c282adec5d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a480dd04145bfe0e07fbd8c282adec5d);
        cache_frame_a480dd04145bfe0e07fbd8c282adec5d = NULL;
    }

    assertFrameObject(frame_a480dd04145bfe0e07fbd8c282adec5d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_args);
    par_args = NULL;
    Py_XDECREF(var_pos);
    var_pos = NULL;
    CHECK_OBJECT(var_arg);
    Py_DECREF(var_arg);
    var_arg = NULL;
    CHECK_OBJECT(var_Cmd);
    Py_DECREF(var_Cmd);
    var_Cmd = NULL;
    CHECK_OBJECT(var_CommandSet);
    Py_DECREF(var_CommandSet);
    var_CommandSet = NULL;
    CHECK_OBJECT(var_next_arg);
    Py_DECREF(var_next_arg);
    var_next_arg = NULL;
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

    Py_XDECREF(par_args);
    par_args = NULL;
    Py_XDECREF(var_pos);
    var_pos = NULL;
    Py_XDECREF(var_arg);
    var_arg = NULL;
    Py_XDECREF(var_Cmd);
    var_Cmd = NULL;
    Py_XDECREF(var_CommandSet);
    var_CommandSet = NULL;
    Py_XDECREF(var_next_arg);
    var_next_arg = NULL;
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


static PyObject *impl_cmd2$decorators$$$function__3__arg_swap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_search_arg = python_pars[1];
    PyObject *par_replace_arg = python_pars[2];
    PyObject *var_index = NULL;
    PyObject *var_args_list = NULL;
    struct Nuitka_FrameObject *frame_54e3eb68535f7e3db255f44ccba068ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_54e3eb68535f7e3db255f44ccba068ef = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_54e3eb68535f7e3db255f44ccba068ef)) {
        Py_XDECREF(cache_frame_54e3eb68535f7e3db255f44ccba068ef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_54e3eb68535f7e3db255f44ccba068ef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_54e3eb68535f7e3db255f44ccba068ef = MAKE_FUNCTION_FRAME(codeobj_54e3eb68535f7e3db255f44ccba068ef, module_cmd2$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_54e3eb68535f7e3db255f44ccba068ef->m_type_description == NULL);
    frame_54e3eb68535f7e3db255f44ccba068ef = cache_frame_54e3eb68535f7e3db255f44ccba068ef;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_54e3eb68535f7e3db255f44ccba068ef);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_54e3eb68535f7e3db255f44ccba068ef) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_args);
        tmp_called_instance_1 = par_args;
        CHECK_OBJECT(par_search_arg);
        tmp_args_element_name_1 = par_search_arg;
        frame_54e3eb68535f7e3db255f44ccba068ef->m_frame.f_lineno = 91;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[20], tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_index == NULL);
        var_index = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_arg_1;
        if (par_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_1 = par_args;
        tmp_assign_source_2 = PySequence_List(tmp_list_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_args_list == NULL);
        var_args_list = tmp_assign_source_2;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_replace_arg);
        tmp_ass_subvalue_1 = par_replace_arg;
        CHECK_OBJECT(var_args_list);
        tmp_ass_subscribed_1 = var_args_list;
        CHECK_OBJECT(var_index);
        tmp_start_name_1 = var_index;
        CHECK_OBJECT(var_index);
        tmp_left_name_1 = var_index;
        tmp_right_name_1 = mod_consts[5];
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_stop_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = MAKE_SLICEOBJ2(tmp_start_name_1, tmp_stop_name_1);
        Py_DECREF(tmp_stop_name_1);
        assert(!(tmp_ass_subscript_1 == NULL));
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    if (var_args_list == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_args_list;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_54e3eb68535f7e3db255f44ccba068ef);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_54e3eb68535f7e3db255f44ccba068ef);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_54e3eb68535f7e3db255f44ccba068ef);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_54e3eb68535f7e3db255f44ccba068ef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_54e3eb68535f7e3db255f44ccba068ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_54e3eb68535f7e3db255f44ccba068ef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_54e3eb68535f7e3db255f44ccba068ef,
        type_description_1,
        par_args,
        par_search_arg,
        par_replace_arg,
        var_index,
        var_args_list
    );


    // Release cached frame if used for exception.
    if (frame_54e3eb68535f7e3db255f44ccba068ef == cache_frame_54e3eb68535f7e3db255f44ccba068ef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_54e3eb68535f7e3db255f44ccba068ef);
        cache_frame_54e3eb68535f7e3db255f44ccba068ef = NULL;
    }

    assertFrameObject(frame_54e3eb68535f7e3db255f44ccba068ef);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_args);
    par_args = NULL;
    Py_XDECREF(par_search_arg);
    par_search_arg = NULL;
    CHECK_OBJECT(par_replace_arg);
    Py_DECREF(par_replace_arg);
    par_replace_arg = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_args_list);
    var_args_list = NULL;
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

    Py_XDECREF(par_args);
    par_args = NULL;
    Py_XDECREF(par_search_arg);
    par_search_arg = NULL;
    CHECK_OBJECT(par_replace_arg);
    Py_DECREF(par_replace_arg);
    par_replace_arg = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_args_list);
    var_args_list = NULL;
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


static PyObject *impl_cmd2$decorators$$$function__4_with_argument_list(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_preserve_quotes = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_args = python_pars[1];
    struct Nuitka_CellObject *var_functools = Nuitka_Cell_Empty();
    PyObject *var_arg_decorator = NULL;
    struct Nuitka_FrameObject *frame_d623ca5695d1db1a24d76a7eaf33e66e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d623ca5695d1db1a24d76a7eaf33e66e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d623ca5695d1db1a24d76a7eaf33e66e)) {
        Py_XDECREF(cache_frame_d623ca5695d1db1a24d76a7eaf33e66e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d623ca5695d1db1a24d76a7eaf33e66e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d623ca5695d1db1a24d76a7eaf33e66e = MAKE_FUNCTION_FRAME(codeobj_d623ca5695d1db1a24d76a7eaf33e66e, module_cmd2$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d623ca5695d1db1a24d76a7eaf33e66e->m_type_description == NULL);
    frame_d623ca5695d1db1a24d76a7eaf33e66e = cache_frame_d623ca5695d1db1a24d76a7eaf33e66e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d623ca5695d1db1a24d76a7eaf33e66e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d623ca5695d1db1a24d76a7eaf33e66e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[23];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_cmd2$decorators;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[11];
        frame_d623ca5695d1db1a24d76a7eaf33e66e->m_frame.f_lineno = 115;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "coco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_functools) == NULL);
        PyCell_SET(var_functools, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_dict_key_1 = mod_consts[24];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "coco";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));

        tmp_closure_1[0] = var_functools;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_preserve_quotes;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_2 = MAKE_FUNCTION_cmd2$decorators$$$function__4_with_argument_list$$$function__1_arg_decorator(tmp_annotations_1, tmp_closure_1);

        assert(var_arg_decorator == NULL);
        var_arg_decorator = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_and_left_value_1_object_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_args);
        tmp_len_arg_1 = par_args;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "coco";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[5];
        tmp_tmp_and_left_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        assert(!(tmp_tmp_and_left_value_1_object_1 == NULL));
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_and_left_value_1_object_1);
        assert(!(tmp_truth_name_1 == -1));
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_left_value_1_object_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_name_1 = LOOKUP_BUILTIN(mod_consts[28]);
        assert(tmp_called_name_1 != NULL);
        if (par_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 140;
            type_description_1 = "coco";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_args;
        tmp_subscript_name_1 = mod_consts[11];
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "coco";
            goto frame_exception_exit_1;
        }
        frame_d623ca5695d1db1a24d76a7eaf33e66e->m_frame.f_lineno = 140;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "coco";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 140;
            type_description_1 = "coco";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
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
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(var_arg_decorator);
        tmp_called_name_2 = var_arg_decorator;
        if (par_args == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 142;
            type_description_1 = "coco";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_args;
        tmp_subscript_name_2 = mod_consts[11];
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_2, 0);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "coco";
            goto frame_exception_exit_1;
        }
        frame_d623ca5695d1db1a24d76a7eaf33e66e->m_frame.f_lineno = 142;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "coco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    CHECK_OBJECT(var_arg_decorator);
    tmp_return_value = var_arg_decorator;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d623ca5695d1db1a24d76a7eaf33e66e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d623ca5695d1db1a24d76a7eaf33e66e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d623ca5695d1db1a24d76a7eaf33e66e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d623ca5695d1db1a24d76a7eaf33e66e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d623ca5695d1db1a24d76a7eaf33e66e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d623ca5695d1db1a24d76a7eaf33e66e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d623ca5695d1db1a24d76a7eaf33e66e,
        type_description_1,
        par_preserve_quotes,
        par_args,
        var_functools,
        var_arg_decorator
    );


    // Release cached frame if used for exception.
    if (frame_d623ca5695d1db1a24d76a7eaf33e66e == cache_frame_d623ca5695d1db1a24d76a7eaf33e66e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d623ca5695d1db1a24d76a7eaf33e66e);
        cache_frame_d623ca5695d1db1a24d76a7eaf33e66e = NULL;
    }

    assertFrameObject(frame_d623ca5695d1db1a24d76a7eaf33e66e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_preserve_quotes);
    Py_DECREF(par_preserve_quotes);
    par_preserve_quotes = NULL;
    Py_XDECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(var_functools);
    Py_DECREF(var_functools);
    var_functools = NULL;
    CHECK_OBJECT(var_arg_decorator);
    Py_DECREF(var_arg_decorator);
    var_arg_decorator = NULL;
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

    CHECK_OBJECT(par_preserve_quotes);
    Py_DECREF(par_preserve_quotes);
    par_preserve_quotes = NULL;
    Py_XDECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(var_functools);
    Py_DECREF(var_functools);
    var_functools = NULL;
    Py_XDECREF(var_arg_decorator);
    var_arg_decorator = NULL;
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


static PyObject *impl_cmd2$decorators$$$function__4_with_argument_list$$$function__1_arg_decorator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_cmd_wrapper = NULL;
    struct Nuitka_CellObject *var_command_name = Nuitka_Cell_Empty();
    struct Nuitka_FrameObject *frame_92e451075ec9ee996ae14131a2dc8571;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_92e451075ec9ee996ae14131a2dc8571 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_92e451075ec9ee996ae14131a2dc8571)) {
        Py_XDECREF(cache_frame_92e451075ec9ee996ae14131a2dc8571);

#if _DEBUG_REFCOUNTS
        if (cache_frame_92e451075ec9ee996ae14131a2dc8571 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_92e451075ec9ee996ae14131a2dc8571 = MAKE_FUNCTION_FRAME(codeobj_92e451075ec9ee996ae14131a2dc8571, module_cmd2$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_92e451075ec9ee996ae14131a2dc8571->m_type_description == NULL);
    frame_92e451075ec9ee996ae14131a2dc8571 = cache_frame_92e451075ec9ee996ae14131a2dc8571;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_92e451075ec9ee996ae14131a2dc8571);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_92e451075ec9ee996ae14131a2dc8571) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tuple_element_1;
        struct Nuitka_CellObject *tmp_closure_1[3];
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[30]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_func) == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = Nuitka_Cell_GET(par_func);
        frame_92e451075ec9ee996ae14131a2dc8571->m_frame.f_lineno = 118;
        tmp_called_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_2);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[31];
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 119;
            type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "cocc";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_subscript_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_subscript_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 119;
            type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_name_3;
            PyObject *tmp_subscript_name_2;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[34];
            tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_expression_name_3 == NULL)) {
                tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
            }

            if (tmp_expression_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "cocc";
                goto dict_build_exception_1;
            }
            tmp_subscript_name_2 = (PyObject *)&PyBool_Type;
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "cocc";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;

        tmp_closure_1[0] = var_command_name;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_func;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = self->m_closure[1];
        Py_INCREF(tmp_closure_1[2]);

        tmp_args_element_name_2 = MAKE_FUNCTION_cmd2$decorators$$$function__4_with_argument_list$$$function__1_arg_decorator$$$function__1_cmd_wrapper(tmp_annotations_1, tmp_closure_1);

        frame_92e451075ec9ee996ae14131a2dc8571->m_frame.f_lineno = 118;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }
        assert(var_cmd_wrapper == NULL);
        var_cmd_wrapper = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_start_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_stop_name_1;
        if (Nuitka_Cell_GET(par_func) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = Nuitka_Cell_GET(par_func);
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[39]);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_4);

            exception_lineno = 136;
            type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[41]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_4);

            exception_lineno = 136;
            type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }
        tmp_start_name_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_start_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_4);

            exception_lineno = 136;
            type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_1 = Py_None;
        tmp_subscript_name_3 = MAKE_SLICEOBJ2(tmp_start_name_1, tmp_stop_name_1);
        Py_DECREF(tmp_start_name_1);
        assert(!(tmp_subscript_name_3 == NULL));
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_3);
        Py_DECREF(tmp_expression_name_4);
        Py_DECREF(tmp_subscript_name_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_command_name);
            PyCell_SET(var_command_name, tmp_assign_source_2);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(par_func) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = Nuitka_Cell_GET(par_func);
        tmp_assattr_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[42]);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cmd_wrapper);
        tmp_assattr_target_1 = var_cmd_wrapper;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[42], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "cocc";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_92e451075ec9ee996ae14131a2dc8571);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_92e451075ec9ee996ae14131a2dc8571);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_92e451075ec9ee996ae14131a2dc8571, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_92e451075ec9ee996ae14131a2dc8571->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_92e451075ec9ee996ae14131a2dc8571, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_92e451075ec9ee996ae14131a2dc8571,
        type_description_1,
        par_func,
        var_cmd_wrapper,
        var_command_name,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_92e451075ec9ee996ae14131a2dc8571 == cache_frame_92e451075ec9ee996ae14131a2dc8571) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_92e451075ec9ee996ae14131a2dc8571);
        cache_frame_92e451075ec9ee996ae14131a2dc8571 = NULL;
    }

    assertFrameObject(frame_92e451075ec9ee996ae14131a2dc8571);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_cmd_wrapper);
    tmp_return_value = var_cmd_wrapper;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    par_func = NULL;
    CHECK_OBJECT(var_cmd_wrapper);
    Py_DECREF(var_cmd_wrapper);
    var_cmd_wrapper = NULL;
    CHECK_OBJECT(var_command_name);
    Py_DECREF(var_command_name);
    var_command_name = NULL;
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

    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    par_func = NULL;
    Py_XDECREF(var_cmd_wrapper);
    var_cmd_wrapper = NULL;
    CHECK_OBJECT(var_command_name);
    Py_DECREF(var_command_name);
    var_command_name = NULL;
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


static PyObject *impl_cmd2$decorators$$$function__4_with_argument_list$$$function__1_arg_decorator$$$function__1_cmd_wrapper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_cmd2_app = NULL;
    PyObject *var_statement = NULL;
    PyObject *var__ = NULL;
    PyObject *var_parsed_arglist = NULL;
    PyObject *var_args_list = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_94219bae9ebcc24627f8ec92411ed817;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_94219bae9ebcc24627f8ec92411ed817 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_94219bae9ebcc24627f8ec92411ed817)) {
        Py_XDECREF(cache_frame_94219bae9ebcc24627f8ec92411ed817);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94219bae9ebcc24627f8ec92411ed817 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94219bae9ebcc24627f8ec92411ed817 = MAKE_FUNCTION_FRAME(codeobj_94219bae9ebcc24627f8ec92411ed817, module_cmd2$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_94219bae9ebcc24627f8ec92411ed817->m_type_description == NULL);
    frame_94219bae9ebcc24627f8ec92411ed817 = cache_frame_94219bae9ebcc24627f8ec92411ed817;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_94219bae9ebcc24627f8ec92411ed817);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_94219bae9ebcc24627f8ec92411ed817) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_args);
        tmp_args_element_name_1 = par_args;
        frame_94219bae9ebcc24627f8ec92411ed817->m_frame.f_lineno = 129;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooccc";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooccc";
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


            type_description_1 = "oooooooccc";
            exception_lineno = 129;
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


            type_description_1 = "oooooooccc";
            exception_lineno = 129;
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

                    type_description_1 = "oooooooccc";
                    exception_lineno = 129;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooccc";
            exception_lineno = 129;
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
        assert(var_cmd2_app == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_cmd2_app = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_statement == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_statement = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_cmd2_app);
        tmp_expression_name_2 = var_cmd2_app;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[44]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooccc";
            goto try_except_handler_4;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[45]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooccc";
            goto try_except_handler_4;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "oooooooccc";
            goto try_except_handler_4;
        }

        tmp_args_element_name_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_statement);
        tmp_args_element_name_3 = var_statement;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "oooooooccc";
            goto try_except_handler_4;
        }

        tmp_args_element_name_4 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_94219bae9ebcc24627f8ec92411ed817->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooccc";
            goto try_except_handler_4;
        }
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooccc";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooccc";
            exception_lineno = 130;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooccc";
            exception_lineno = 130;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
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

                    type_description_1 = "oooooooccc";
                    exception_lineno = 130;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooccc";
            exception_lineno = 130;
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

    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_9);
        var__ = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
        assert(var_parsed_arglist == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_parsed_arglist = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_args_element_name_5 = par_args;
        if (var_statement == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "oooooooccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = var_statement;
        CHECK_OBJECT(var_parsed_arglist);
        tmp_args_element_name_7 = var_parsed_arglist;
        frame_94219bae9ebcc24627f8ec92411ed817->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_args_list == NULL);
        var_args_list = tmp_assign_source_11;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "oooooooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(var_args_list);
        tmp_dircall_arg2_1 = var_args_list;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_94219bae9ebcc24627f8ec92411ed817);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_94219bae9ebcc24627f8ec92411ed817);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_94219bae9ebcc24627f8ec92411ed817);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_94219bae9ebcc24627f8ec92411ed817, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94219bae9ebcc24627f8ec92411ed817->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94219bae9ebcc24627f8ec92411ed817, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94219bae9ebcc24627f8ec92411ed817,
        type_description_1,
        par_args,
        par_kwargs,
        var_cmd2_app,
        var_statement,
        var__,
        var_parsed_arglist,
        var_args_list,
        self->m_closure[0],
        self->m_closure[2],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_94219bae9ebcc24627f8ec92411ed817 == cache_frame_94219bae9ebcc24627f8ec92411ed817) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_94219bae9ebcc24627f8ec92411ed817);
        cache_frame_94219bae9ebcc24627f8ec92411ed817 = NULL;
    }

    assertFrameObject(frame_94219bae9ebcc24627f8ec92411ed817);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_cmd2_app);
    var_cmd2_app = NULL;
    Py_XDECREF(var_statement);
    var_statement = NULL;
    CHECK_OBJECT(var__);
    Py_DECREF(var__);
    var__ = NULL;
    CHECK_OBJECT(var_parsed_arglist);
    Py_DECREF(var_parsed_arglist);
    var_parsed_arglist = NULL;
    CHECK_OBJECT(var_args_list);
    Py_DECREF(var_args_list);
    var_args_list = NULL;
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

    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_cmd2_app);
    var_cmd2_app = NULL;
    Py_XDECREF(var_statement);
    var_statement = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_parsed_arglist);
    var_parsed_arglist = NULL;
    Py_XDECREF(var_args_list);
    var_args_list = NULL;
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


static PyObject *impl_cmd2$decorators$$$function__5__set_parser_prog(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_parser = python_pars[0];
    PyObject *par_prog = python_pars[1];
    PyObject *var_action = NULL;
    PyObject *var_processed_parsers = NULL;
    PyObject *var_subcmd_name = NULL;
    PyObject *var_subcmd_parser = NULL;
    PyObject *var_subcmd_prog = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f8d48f805e4342bfcfb2138c31500c04;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_f8d48f805e4342bfcfb2138c31500c04 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f8d48f805e4342bfcfb2138c31500c04)) {
        Py_XDECREF(cache_frame_f8d48f805e4342bfcfb2138c31500c04);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f8d48f805e4342bfcfb2138c31500c04 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f8d48f805e4342bfcfb2138c31500c04 = MAKE_FUNCTION_FRAME(codeobj_f8d48f805e4342bfcfb2138c31500c04, module_cmd2$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f8d48f805e4342bfcfb2138c31500c04->m_type_description == NULL);
    frame_f8d48f805e4342bfcfb2138c31500c04 = cache_frame_f8d48f805e4342bfcfb2138c31500c04;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f8d48f805e4342bfcfb2138c31500c04);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f8d48f805e4342bfcfb2138c31500c04) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_prog);
        tmp_assattr_name_1 = par_prog;
        CHECK_OBJECT(par_parser);
        tmp_assattr_target_1 = par_parser;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[50], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_parser);
        tmp_expression_name_1 = par_parser;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[51]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 161;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_action;
            var_action = tmp_assign_source_3;
            Py_INCREF(var_action);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(var_action);
        tmp_isinstance_inst_1 = var_action;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[53]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_assattr_target_2;
        if (par_parser == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_3 = par_parser;
        tmp_assattr_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[50]);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_action);
        tmp_assattr_target_2 = var_action;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[55], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyList_New(0);
        {
            PyObject *old = var_processed_parsers;
            var_processed_parsers = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(var_action);
        tmp_expression_name_4 = var_action;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[56]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_f8d48f805e4342bfcfb2138c31500c04->m_frame.f_lineno = 178;
        tmp_iter_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[57]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 178;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 178;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 178;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 178;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 178;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_subcmd_name;
            var_subcmd_name = tmp_assign_source_10;
            Py_INCREF(var_subcmd_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_subcmd_parser;
            var_subcmd_parser = tmp_assign_source_11;
            Py_INCREF(var_subcmd_parser);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_subcmd_parser);
        tmp_compexpr_left_1 = var_subcmd_parser;
        if (var_processed_parsers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_compexpr_right_1 = var_processed_parsers;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_start_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        if (par_parser == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 183;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_5 = par_parser;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[50]);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_1 = mod_consts[59];
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_1);
        Py_DECREF(tmp_left_name_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_subcmd_name);
        tmp_right_name_2 = var_subcmd_name;
        tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_subcmd_prog;
            var_subcmd_prog = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_subcmd_parser);
        tmp_args_element_name_1 = var_subcmd_parser;
        CHECK_OBJECT(var_subcmd_prog);
        tmp_args_element_name_2 = var_subcmd_prog;
        frame_f8d48f805e4342bfcfb2138c31500c04->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        if (var_processed_parsers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_2 = var_processed_parsers;
        CHECK_OBJECT(var_subcmd_parser);
        tmp_args_element_name_3 = var_subcmd_parser;
        frame_f8d48f805e4342bfcfb2138c31500c04->m_frame.f_lineno = 185;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[61], tmp_args_element_name_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 178;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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
    try_end_3:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    goto loop_end_1;
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 161;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
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
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f8d48f805e4342bfcfb2138c31500c04);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f8d48f805e4342bfcfb2138c31500c04);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f8d48f805e4342bfcfb2138c31500c04, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f8d48f805e4342bfcfb2138c31500c04->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f8d48f805e4342bfcfb2138c31500c04, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f8d48f805e4342bfcfb2138c31500c04,
        type_description_1,
        par_parser,
        par_prog,
        var_action,
        var_processed_parsers,
        var_subcmd_name,
        var_subcmd_parser,
        var_subcmd_prog
    );


    // Release cached frame if used for exception.
    if (frame_f8d48f805e4342bfcfb2138c31500c04 == cache_frame_f8d48f805e4342bfcfb2138c31500c04) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f8d48f805e4342bfcfb2138c31500c04);
        cache_frame_f8d48f805e4342bfcfb2138c31500c04 = NULL;
    }

    assertFrameObject(frame_f8d48f805e4342bfcfb2138c31500c04);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_parser);
    par_parser = NULL;
    CHECK_OBJECT(par_prog);
    Py_DECREF(par_prog);
    par_prog = NULL;
    Py_XDECREF(var_action);
    var_action = NULL;
    Py_XDECREF(var_processed_parsers);
    var_processed_parsers = NULL;
    Py_XDECREF(var_subcmd_name);
    var_subcmd_name = NULL;
    Py_XDECREF(var_subcmd_parser);
    var_subcmd_parser = NULL;
    Py_XDECREF(var_subcmd_prog);
    var_subcmd_prog = NULL;
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

    Py_XDECREF(par_parser);
    par_parser = NULL;
    CHECK_OBJECT(par_prog);
    Py_DECREF(par_prog);
    par_prog = NULL;
    Py_XDECREF(var_action);
    var_action = NULL;
    Py_XDECREF(var_processed_parsers);
    var_processed_parsers = NULL;
    Py_XDECREF(var_subcmd_name);
    var_subcmd_name = NULL;
    Py_XDECREF(var_subcmd_parser);
    var_subcmd_parser = NULL;
    Py_XDECREF(var_subcmd_prog);
    var_subcmd_prog = NULL;
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


static PyObject *impl_cmd2$decorators$$$function__6_with_argparser_and_unknown_args(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_parser = python_pars[0];
    PyObject *par_ns_provider = python_pars[1];
    PyObject *par_preserve_quotes = python_pars[2];
    PyObject *var_warnings = NULL;
    struct Nuitka_FrameObject *frame_627ca34c19e3ffb30853691dcbd8a684;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_627ca34c19e3ffb30853691dcbd8a684 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_627ca34c19e3ffb30853691dcbd8a684)) {
        Py_XDECREF(cache_frame_627ca34c19e3ffb30853691dcbd8a684);

#if _DEBUG_REFCOUNTS
        if (cache_frame_627ca34c19e3ffb30853691dcbd8a684 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_627ca34c19e3ffb30853691dcbd8a684 = MAKE_FUNCTION_FRAME(codeobj_627ca34c19e3ffb30853691dcbd8a684, module_cmd2$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_627ca34c19e3ffb30853691dcbd8a684->m_type_description == NULL);
    frame_627ca34c19e3ffb30853691dcbd8a684 = cache_frame_627ca34c19e3ffb30853691dcbd8a684;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_627ca34c19e3ffb30853691dcbd8a684);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_627ca34c19e3ffb30853691dcbd8a684) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[63];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_cmd2$decorators;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[11];
        frame_627ca34c19e3ffb30853691dcbd8a684->m_frame.f_lineno = 227;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_warnings == NULL);
        var_warnings = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(var_warnings);
        tmp_expression_name_1 = var_warnings;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[64]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[65];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[67]);
        frame_627ca34c19e3ffb30853691dcbd8a684->m_frame.f_lineno = 228;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parser);
        tmp_tuple_element_2 = par_parser;
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_dict_key_1 = mod_consts[69];
        CHECK_OBJECT(par_ns_provider);
        tmp_dict_value_1 = par_ns_provider;
        tmp_kwargs_name_2 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[47];
        CHECK_OBJECT(par_preserve_quotes);
        tmp_dict_value_1 = par_preserve_quotes;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[70];
        tmp_dict_value_1 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_627ca34c19e3ffb30853691dcbd8a684->m_frame.f_lineno = 231;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_627ca34c19e3ffb30853691dcbd8a684);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_627ca34c19e3ffb30853691dcbd8a684);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_627ca34c19e3ffb30853691dcbd8a684);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_627ca34c19e3ffb30853691dcbd8a684, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_627ca34c19e3ffb30853691dcbd8a684->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_627ca34c19e3ffb30853691dcbd8a684, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_627ca34c19e3ffb30853691dcbd8a684,
        type_description_1,
        par_parser,
        par_ns_provider,
        par_preserve_quotes,
        var_warnings
    );


    // Release cached frame if used for exception.
    if (frame_627ca34c19e3ffb30853691dcbd8a684 == cache_frame_627ca34c19e3ffb30853691dcbd8a684) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_627ca34c19e3ffb30853691dcbd8a684);
        cache_frame_627ca34c19e3ffb30853691dcbd8a684 = NULL;
    }

    assertFrameObject(frame_627ca34c19e3ffb30853691dcbd8a684);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_parser);
    Py_DECREF(par_parser);
    par_parser = NULL;
    CHECK_OBJECT(par_ns_provider);
    Py_DECREF(par_ns_provider);
    par_ns_provider = NULL;
    CHECK_OBJECT(par_preserve_quotes);
    Py_DECREF(par_preserve_quotes);
    par_preserve_quotes = NULL;
    Py_XDECREF(var_warnings);
    var_warnings = NULL;
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

    CHECK_OBJECT(par_parser);
    Py_DECREF(par_parser);
    par_parser = NULL;
    CHECK_OBJECT(par_ns_provider);
    Py_DECREF(par_ns_provider);
    par_ns_provider = NULL;
    CHECK_OBJECT(par_preserve_quotes);
    Py_DECREF(par_preserve_quotes);
    par_preserve_quotes = NULL;
    Py_XDECREF(var_warnings);
    var_warnings = NULL;
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


static PyObject *impl_cmd2$decorators$$$function__7_with_argparser(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_parser = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_ns_provider = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_preserve_quotes = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_with_unknown_args = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *var_functools = Nuitka_Cell_Empty();
    PyObject *var_arg_decorator = NULL;
    struct Nuitka_FrameObject *frame_e781099307d771a3979caa0d9edd56ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e781099307d771a3979caa0d9edd56ea = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e781099307d771a3979caa0d9edd56ea)) {
        Py_XDECREF(cache_frame_e781099307d771a3979caa0d9edd56ea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e781099307d771a3979caa0d9edd56ea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e781099307d771a3979caa0d9edd56ea = MAKE_FUNCTION_FRAME(codeobj_e781099307d771a3979caa0d9edd56ea, module_cmd2$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e781099307d771a3979caa0d9edd56ea->m_type_description == NULL);
    frame_e781099307d771a3979caa0d9edd56ea = cache_frame_e781099307d771a3979caa0d9edd56ea;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e781099307d771a3979caa0d9edd56ea);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e781099307d771a3979caa0d9edd56ea) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[23];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_cmd2$decorators;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[11];
        frame_e781099307d771a3979caa0d9edd56ea->m_frame.f_lineno = 281;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ccccco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_functools) == NULL);
        PyCell_SET(var_functools, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[5];
        tmp_dict_key_1 = mod_consts[24];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ccccco";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));

        tmp_closure_1[0] = var_functools;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_ns_provider;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_parser;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_preserve_quotes;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_with_unknown_args;
        Py_INCREF(tmp_closure_1[4]);

        tmp_assign_source_2 = MAKE_FUNCTION_cmd2$decorators$$$function__7_with_argparser$$$function__1_arg_decorator(tmp_annotations_1, tmp_closure_1);

        assert(var_arg_decorator == NULL);
        var_arg_decorator = tmp_assign_source_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e781099307d771a3979caa0d9edd56ea);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e781099307d771a3979caa0d9edd56ea);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e781099307d771a3979caa0d9edd56ea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e781099307d771a3979caa0d9edd56ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e781099307d771a3979caa0d9edd56ea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e781099307d771a3979caa0d9edd56ea,
        type_description_1,
        par_parser,
        par_ns_provider,
        par_preserve_quotes,
        par_with_unknown_args,
        var_functools,
        var_arg_decorator
    );


    // Release cached frame if used for exception.
    if (frame_e781099307d771a3979caa0d9edd56ea == cache_frame_e781099307d771a3979caa0d9edd56ea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e781099307d771a3979caa0d9edd56ea);
        cache_frame_e781099307d771a3979caa0d9edd56ea = NULL;
    }

    assertFrameObject(frame_e781099307d771a3979caa0d9edd56ea);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_arg_decorator);
    tmp_return_value = var_arg_decorator;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_parser);
    Py_DECREF(par_parser);
    par_parser = NULL;
    CHECK_OBJECT(par_ns_provider);
    Py_DECREF(par_ns_provider);
    par_ns_provider = NULL;
    CHECK_OBJECT(par_preserve_quotes);
    Py_DECREF(par_preserve_quotes);
    par_preserve_quotes = NULL;
    CHECK_OBJECT(par_with_unknown_args);
    Py_DECREF(par_with_unknown_args);
    par_with_unknown_args = NULL;
    CHECK_OBJECT(var_functools);
    Py_DECREF(var_functools);
    var_functools = NULL;
    CHECK_OBJECT(var_arg_decorator);
    Py_DECREF(var_arg_decorator);
    var_arg_decorator = NULL;
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

    CHECK_OBJECT(par_parser);
    Py_DECREF(par_parser);
    par_parser = NULL;
    CHECK_OBJECT(par_ns_provider);
    Py_DECREF(par_ns_provider);
    par_ns_provider = NULL;
    CHECK_OBJECT(par_preserve_quotes);
    Py_DECREF(par_preserve_quotes);
    par_preserve_quotes = NULL;
    CHECK_OBJECT(par_with_unknown_args);
    Py_DECREF(par_with_unknown_args);
    par_with_unknown_args = NULL;
    CHECK_OBJECT(var_functools);
    Py_DECREF(var_functools);
    var_functools = NULL;
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


static PyObject *impl_cmd2$decorators$$$function__7_with_argparser$$$function__1_arg_decorator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_cmd_wrapper = NULL;
    struct Nuitka_CellObject *var_command_name = Nuitka_Cell_Empty();
    struct Nuitka_FrameObject *frame_7f3dfe2e53567ef6114322cf09af9390;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7f3dfe2e53567ef6114322cf09af9390 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7f3dfe2e53567ef6114322cf09af9390)) {
        Py_XDECREF(cache_frame_7f3dfe2e53567ef6114322cf09af9390);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f3dfe2e53567ef6114322cf09af9390 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f3dfe2e53567ef6114322cf09af9390 = MAKE_FUNCTION_FRAME(codeobj_7f3dfe2e53567ef6114322cf09af9390, module_cmd2$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7f3dfe2e53567ef6114322cf09af9390->m_type_description == NULL);
    frame_7f3dfe2e53567ef6114322cf09af9390 = cache_frame_7f3dfe2e53567ef6114322cf09af9390;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7f3dfe2e53567ef6114322cf09af9390);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7f3dfe2e53567ef6114322cf09af9390) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[6];
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 284;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[30]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_func) == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 284;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = Nuitka_Cell_GET(par_func);
        frame_7f3dfe2e53567ef6114322cf09af9390->m_frame.f_lineno = 284;
        tmp_called_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_2);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[14];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 285;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_name_2;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_expression_name_3;
            PyObject *tmp_subscript_name_2;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[31];
            tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_expression_name_2 == NULL)) {
                tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_expression_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_1 = "cocccc";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_name_1 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_subscript_name_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_1 = "cocccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_subscript_name_1, 1, tmp_tuple_element_1);
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_subscript_name_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
            Py_DECREF(tmp_subscript_name_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_1 = "cocccc";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[34];
            tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_expression_name_3 == NULL)) {
                tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
            }

            if (tmp_expression_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_1 = "cocccc";
                goto dict_build_exception_1;
            }
            tmp_subscript_name_2 = (PyObject *)&PyBool_Type;
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_1 = "cocccc";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;

        tmp_closure_1[0] = var_command_name;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_func;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = self->m_closure[1];
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = self->m_closure[2];
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = self->m_closure[3];
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = self->m_closure[4];
        Py_INCREF(tmp_closure_1[5]);

        tmp_args_element_name_2 = MAKE_FUNCTION_cmd2$decorators$$$function__7_with_argparser$$$function__1_arg_decorator$$$function__1_cmd_wrapper(tmp_annotations_1, tmp_closure_1);

        frame_7f3dfe2e53567ef6114322cf09af9390->m_frame.f_lineno = 284;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        assert(var_cmd_wrapper == NULL);
        var_cmd_wrapper = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_start_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_stop_name_1;
        if (Nuitka_Cell_GET(par_func) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 339;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = Nuitka_Cell_GET(par_func);
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[39]);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_4);

            exception_lineno = 339;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[41]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_4);

            exception_lineno = 339;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        tmp_start_name_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_start_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_4);

            exception_lineno = 339;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_1 = Py_None;
        tmp_subscript_name_3 = MAKE_SLICEOBJ2(tmp_start_name_1, tmp_stop_name_1);
        Py_DECREF(tmp_start_name_1);
        assert(!(tmp_subscript_name_3 == NULL));
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_3);
        Py_DECREF(tmp_expression_name_4);
        Py_DECREF(tmp_subscript_name_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_command_name);
            PyCell_SET(var_command_name, tmp_assign_source_2);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 340;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(Nuitka_Cell_GET(var_command_name));
        tmp_args_element_name_4 = Nuitka_Cell_GET(var_command_name);
        frame_7f3dfe2e53567ef6114322cf09af9390->m_frame.f_lineno = 340;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 343;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[76]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (Nuitka_Cell_GET(par_func) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 343;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = Nuitka_Cell_GET(par_func);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[42]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 343;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
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
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(par_func) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = Nuitka_Cell_GET(par_func);
        tmp_assattr_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[42]);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[76], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_assattr_target_2;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 347;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_assattr_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[76]);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cmd_wrapper);
        tmp_assattr_target_2 = var_cmd_wrapper;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[42], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(var_cmd_wrapper);
        tmp_setattr_target_1 = var_cmd_wrapper;
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        tmp_setattr_attr_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[77]);
        if (tmp_setattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_setattr_attr_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 350;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }

        tmp_setattr_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_capi_result_1 = BUILTIN_SETATTR(tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1);
        Py_DECREF(tmp_setattr_attr_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_setattr_target_2;
        PyObject *tmp_setattr_attr_2;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_setattr_value_2;
        PyObject *tmp_capi_result_2;
        CHECK_OBJECT(var_cmd_wrapper);
        tmp_setattr_target_2 = var_cmd_wrapper;
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        tmp_setattr_attr_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[78]);
        if (tmp_setattr_attr_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_setattr_attr_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 351;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }

        tmp_setattr_value_2 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_capi_result_2 = BUILTIN_SETATTR(tmp_setattr_target_2, tmp_setattr_attr_2, tmp_setattr_value_2);
        Py_DECREF(tmp_setattr_attr_2);
        if (tmp_capi_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "cocccc";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f3dfe2e53567ef6114322cf09af9390);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f3dfe2e53567ef6114322cf09af9390);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f3dfe2e53567ef6114322cf09af9390, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f3dfe2e53567ef6114322cf09af9390->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f3dfe2e53567ef6114322cf09af9390, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f3dfe2e53567ef6114322cf09af9390,
        type_description_1,
        par_func,
        var_cmd_wrapper,
        var_command_name,
        self->m_closure[0],
        self->m_closure[2],
        self->m_closure[3]
    );


    // Release cached frame if used for exception.
    if (frame_7f3dfe2e53567ef6114322cf09af9390 == cache_frame_7f3dfe2e53567ef6114322cf09af9390) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7f3dfe2e53567ef6114322cf09af9390);
        cache_frame_7f3dfe2e53567ef6114322cf09af9390 = NULL;
    }

    assertFrameObject(frame_7f3dfe2e53567ef6114322cf09af9390);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_cmd_wrapper);
    tmp_return_value = var_cmd_wrapper;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    par_func = NULL;
    CHECK_OBJECT(var_cmd_wrapper);
    Py_DECREF(var_cmd_wrapper);
    var_cmd_wrapper = NULL;
    CHECK_OBJECT(var_command_name);
    Py_DECREF(var_command_name);
    var_command_name = NULL;
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

    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    par_func = NULL;
    Py_XDECREF(var_cmd_wrapper);
    var_cmd_wrapper = NULL;
    CHECK_OBJECT(var_command_name);
    Py_DECREF(var_command_name);
    var_command_name = NULL;
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


static PyObject *impl_cmd2$decorators$$$function__7_with_argparser$$$function__1_arg_decorator$$$function__1_cmd_wrapper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_cmd2_app = NULL;
    PyObject *var_statement_arg = NULL;
    PyObject *var_statement = NULL;
    PyObject *var_parsed_arglist = NULL;
    PyObject *var_namespace = NULL;
    PyObject *var_provider_self = NULL;
    PyObject *var_new_args = NULL;
    PyObject *var_ns = NULL;
    PyObject *var_handler = NULL;
    PyObject *var_args_list = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a92082cc84c88aea08c7317ee5d7e379;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a92082cc84c88aea08c7317ee5d7e379 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a92082cc84c88aea08c7317ee5d7e379)) {
        Py_XDECREF(cache_frame_a92082cc84c88aea08c7317ee5d7e379);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a92082cc84c88aea08c7317ee5d7e379 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a92082cc84c88aea08c7317ee5d7e379 = MAKE_FUNCTION_FRAME(codeobj_a92082cc84c88aea08c7317ee5d7e379, module_cmd2$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a92082cc84c88aea08c7317ee5d7e379->m_type_description == NULL);
    frame_a92082cc84c88aea08c7317ee5d7e379 = cache_frame_a92082cc84c88aea08c7317ee5d7e379;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a92082cc84c88aea08c7317ee5d7e379);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a92082cc84c88aea08c7317ee5d7e379) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooooooocccccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_args);
        tmp_args_element_name_1 = par_args;
        frame_a92082cc84c88aea08c7317ee5d7e379->m_frame.f_lineno = 297;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooooooocccccc";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooooooocccccc";
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


            type_description_1 = "oooooooooooocccccc";
            exception_lineno = 297;
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


            type_description_1 = "oooooooooooocccccc";
            exception_lineno = 297;
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

                    type_description_1 = "oooooooooooocccccc";
                    exception_lineno = 297;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooocccccc";
            exception_lineno = 297;
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
        assert(var_cmd2_app == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_cmd2_app = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_statement_arg == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_statement_arg = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_cmd2_app);
        tmp_expression_name_2 = var_cmd2_app;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[44]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooocccccc";
            goto try_except_handler_4;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[45]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooocccccc";
            goto try_except_handler_4;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 298;
            type_description_1 = "oooooooooooocccccc";
            goto try_except_handler_4;
        }

        tmp_args_element_name_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_statement_arg);
        tmp_args_element_name_3 = var_statement_arg;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 300;
            type_description_1 = "oooooooooooocccccc";
            goto try_except_handler_4;
        }

        tmp_args_element_name_4 = Nuitka_Cell_GET(self->m_closure[4]);
        frame_a92082cc84c88aea08c7317ee5d7e379->m_frame.f_lineno = 298;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooocccccc";
            goto try_except_handler_4;
        }
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooocccccc";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooocccccc";
            exception_lineno = 298;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooocccccc";
            exception_lineno = 298;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
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

                    type_description_1 = "oooooooooooocccccc";
                    exception_lineno = 298;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooocccccc";
            exception_lineno = 298;
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

    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
        assert(var_statement == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_statement = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
        assert(var_parsed_arglist == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_parsed_arglist = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 302;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = Nuitka_Cell_GET(self->m_closure[2]);
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
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_None;
        assert(var_namespace == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_namespace = tmp_assign_source_11;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_1;
        if (var_cmd2_app == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 308;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = var_cmd2_app;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[80]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 308;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(par_args);
        tmp_expression_name_4 = par_args;
        tmp_subscript_name_1 = mod_consts[11];
        tmp_args_element_name_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_4, tmp_subscript_name_1, 0);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 308;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        frame_a92082cc84c88aea08c7317ee5d7e379->m_frame.f_lineno = 308;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        assert(var_provider_self == NULL);
        var_provider_self = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_7;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 309;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(var_provider_self);
        tmp_args_element_name_7 = var_provider_self;
        frame_a92082cc84c88aea08c7317ee5d7e379->m_frame.f_lineno = 309;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        assert(var_namespace == NULL);
        var_namespace = tmp_assign_source_13;
    }
    branch_end_1:;
    {
        nuitka_bool tmp_assign_source_14;
        tmp_assign_source_14 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_14;
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 312;
            type_description_1 = "oooooooooooocccccc";
            goto try_except_handler_6;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[5]));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooooooooocccccc";
            goto try_except_handler_6;
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 313;
            type_description_1 = "oooooooooooocccccc";
            goto try_except_handler_6;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[3]);
        CHECK_OBJECT(var_parsed_arglist);
        tmp_args_element_name_8 = var_parsed_arglist;
        CHECK_OBJECT(var_namespace);
        tmp_args_element_name_9 = var_namespace;
        frame_a92082cc84c88aea08c7317ee5d7e379->m_frame.f_lineno = 313;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_assign_source_15 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[81],
                call_args
            );
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooooooooooocccccc";
            goto try_except_handler_6;
        }
        assert(var_new_args == NULL);
        var_new_args = tmp_assign_source_15;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 315;
            type_description_1 = "oooooooooooocccccc";
            goto try_except_handler_6;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[3]);
        CHECK_OBJECT(var_parsed_arglist);
        tmp_args_element_name_10 = var_parsed_arglist;
        CHECK_OBJECT(var_namespace);
        tmp_args_element_name_11 = var_namespace;
        frame_a92082cc84c88aea08c7317ee5d7e379->m_frame.f_lineno = 315;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[82],
                call_args
            );
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooooooocccccc";
            goto try_except_handler_6;
        }
        tmp_assign_source_16 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_16, 0, tmp_tuple_element_1);
        assert(var_new_args == NULL);
        var_new_args = tmp_assign_source_16;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(var_new_args);
        tmp_expression_name_5 = var_new_args;
        tmp_subscript_name_2 = mod_consts[11];
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_5, tmp_subscript_name_2, 0);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooooooooocccccc";
            goto try_except_handler_6;
        }
        assert(var_ns == NULL);
        var_ns = tmp_assign_source_17;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_assign_source_18;
        tmp_assign_source_18 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_18;
    }
    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_a92082cc84c88aea08c7317ee5d7e379, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_a92082cc84c88aea08c7317ee5d7e379, exception_keeper_lineno_5);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_5, exception_keeper_tb_5);
    PUBLISH_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_SystemExit;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_raise_type_1 == NULL)) {
            tmp_raise_type_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooooooocccccc";
            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 318;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooocccccc";
        goto try_except_handler_7;
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 311;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a92082cc84c88aea08c7317ee5d7e379->m_frame) frame_a92082cc84c88aea08c7317ee5d7e379->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooocccccc";
    goto try_except_handler_7;
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_5:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_try_except_1__unhandled_indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(var_ns);
        tmp_setattr_target_1 = var_ns;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_setattr_attr_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[84]);
        if (tmp_setattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_statement);
        tmp_setattr_value_1 = var_statement;
        tmp_capi_result_1 = BUILTIN_SETATTR(tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1);
        Py_DECREF(tmp_setattr_attr_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_setattr_target_2;
        PyObject *tmp_setattr_attr_2;
        PyObject *tmp_setattr_value_2;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_capi_result_2;
        CHECK_OBJECT(var_ns);
        tmp_setattr_target_2 = var_ns;
        tmp_setattr_attr_2 = mod_consts[85];
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_statement);
        tmp_args_element_name_12 = var_statement;
        frame_a92082cc84c88aea08c7317ee5d7e379->m_frame.f_lineno = 324;
        tmp_setattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_12);
        if (tmp_setattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_capi_result_2 = BUILTIN_SETATTR(tmp_setattr_target_2, tmp_setattr_attr_2, tmp_setattr_value_2);
        Py_DECREF(tmp_setattr_value_2);
        if (tmp_capi_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(var_ns);
        tmp_getattr_target_1 = var_ns;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_getattr_attr_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[87]);
        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_19 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        Py_DECREF(tmp_getattr_attr_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        assert(var_handler == NULL);
        var_handler = tmp_assign_source_19;
    }
    {
        PyObject *tmp_setattr_target_3;
        PyObject *tmp_setattr_attr_3;
        PyObject *tmp_setattr_value_3;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_capi_result_3;
        CHECK_OBJECT(var_ns);
        tmp_setattr_target_3 = var_ns;
        tmp_setattr_attr_3 = mod_consts[88];
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handler);
        tmp_args_element_name_13 = var_handler;
        frame_a92082cc84c88aea08c7317ee5d7e379->m_frame.f_lineno = 328;
        tmp_setattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_13);
        if (tmp_setattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_capi_result_3 = BUILTIN_SETATTR(tmp_setattr_target_3, tmp_setattr_attr_3, tmp_setattr_value_3);
        Py_DECREF(tmp_setattr_value_3);
        if (tmp_capi_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_attribute_name_1;
        PyObject *tmp_expression_name_9;
        CHECK_OBJECT(var_ns);
        tmp_expression_name_8 = var_ns;
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_attribute_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[87]);
        if (tmp_attribute_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_8, tmp_attribute_name_1);
        Py_DECREF(tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_expression_name_10;
        tmp_called_name_7 = LOOKUP_BUILTIN(mod_consts[89]);
        assert(tmp_called_name_7 != NULL);
        CHECK_OBJECT(var_ns);
        tmp_args_element_name_14 = var_ns;
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[87]);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        frame_a92082cc84c88aea08c7317ee5d7e379->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = {tmp_args_element_name_14, tmp_args_element_name_15};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
        }

        Py_DECREF(tmp_args_element_name_15);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_tuple_element_2 = par_args;
        tmp_dircall_arg2_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
        if (var_statement_arg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 335;
            type_description_1 = "oooooooooooocccccc";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_2 = var_statement_arg;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        CHECK_OBJECT(var_new_args);
        tmp_dircall_arg3_1 = var_new_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_20 = impl___main__$$$function__9_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        assert(var_args_list == NULL);
        var_args_list = tmp_assign_source_20;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_dircall_arg3_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 336;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_2 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(var_args_list);
        tmp_dircall_arg2_2 = var_args_list;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg2_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_4:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a92082cc84c88aea08c7317ee5d7e379);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a92082cc84c88aea08c7317ee5d7e379);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a92082cc84c88aea08c7317ee5d7e379);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a92082cc84c88aea08c7317ee5d7e379, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a92082cc84c88aea08c7317ee5d7e379->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a92082cc84c88aea08c7317ee5d7e379, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a92082cc84c88aea08c7317ee5d7e379,
        type_description_1,
        par_args,
        par_kwargs,
        var_cmd2_app,
        var_statement_arg,
        var_statement,
        var_parsed_arglist,
        var_namespace,
        var_provider_self,
        var_new_args,
        var_ns,
        var_handler,
        var_args_list,
        self->m_closure[0],
        self->m_closure[4],
        self->m_closure[2],
        self->m_closure[5],
        self->m_closure[3],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_a92082cc84c88aea08c7317ee5d7e379 == cache_frame_a92082cc84c88aea08c7317ee5d7e379) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a92082cc84c88aea08c7317ee5d7e379);
        cache_frame_a92082cc84c88aea08c7317ee5d7e379 = NULL;
    }

    assertFrameObject(frame_a92082cc84c88aea08c7317ee5d7e379);

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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_cmd2_app);
    var_cmd2_app = NULL;
    Py_XDECREF(var_statement_arg);
    var_statement_arg = NULL;
    CHECK_OBJECT(var_statement);
    Py_DECREF(var_statement);
    var_statement = NULL;
    Py_XDECREF(var_parsed_arglist);
    var_parsed_arglist = NULL;
    Py_XDECREF(var_namespace);
    var_namespace = NULL;
    Py_XDECREF(var_provider_self);
    var_provider_self = NULL;
    CHECK_OBJECT(var_new_args);
    Py_DECREF(var_new_args);
    var_new_args = NULL;
    CHECK_OBJECT(var_ns);
    Py_DECREF(var_ns);
    var_ns = NULL;
    Py_XDECREF(var_handler);
    var_handler = NULL;
    Py_XDECREF(var_args_list);
    var_args_list = NULL;
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

    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_cmd2_app);
    var_cmd2_app = NULL;
    Py_XDECREF(var_statement_arg);
    var_statement_arg = NULL;
    Py_XDECREF(var_statement);
    var_statement = NULL;
    Py_XDECREF(var_parsed_arglist);
    var_parsed_arglist = NULL;
    Py_XDECREF(var_namespace);
    var_namespace = NULL;
    Py_XDECREF(var_provider_self);
    var_provider_self = NULL;
    Py_XDECREF(var_new_args);
    var_new_args = NULL;
    Py_XDECREF(var_ns);
    var_ns = NULL;
    Py_XDECREF(var_handler);
    var_handler = NULL;
    Py_XDECREF(var_args_list);
    var_args_list = NULL;
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


static PyObject *impl_cmd2$decorators$$$function__8_as_subcommand_to(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_command = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_subcommand = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_parser = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_help = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_aliases = Nuitka_Cell_New1(python_pars[4]);
    PyObject *var_arg_decorator = NULL;
    struct Nuitka_FrameObject *frame_7819348de88c037c4c98d479cb8614a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7819348de88c037c4c98d479cb8614a8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7819348de88c037c4c98d479cb8614a8)) {
        Py_XDECREF(cache_frame_7819348de88c037c4c98d479cb8614a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7819348de88c037c4c98d479cb8614a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7819348de88c037c4c98d479cb8614a8 = MAKE_FUNCTION_FRAME(codeobj_7819348de88c037c4c98d479cb8614a8, module_cmd2$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7819348de88c037c4c98d479cb8614a8->m_type_description == NULL);
    frame_7819348de88c037c4c98d479cb8614a8 = cache_frame_7819348de88c037c4c98d479cb8614a8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7819348de88c037c4c98d479cb8614a8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7819348de88c037c4c98d479cb8614a8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[5];
        tmp_dict_key_1 = mod_consts[24];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ccccco";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));

        tmp_closure_1[0] = par_aliases;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_command;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_help;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_parser;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_subcommand;
        Py_INCREF(tmp_closure_1[4]);

        tmp_assign_source_1 = MAKE_FUNCTION_cmd2$decorators$$$function__8_as_subcommand_to$$$function__1_arg_decorator(tmp_annotations_1, tmp_closure_1);

        assert(var_arg_decorator == NULL);
        var_arg_decorator = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7819348de88c037c4c98d479cb8614a8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7819348de88c037c4c98d479cb8614a8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7819348de88c037c4c98d479cb8614a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7819348de88c037c4c98d479cb8614a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7819348de88c037c4c98d479cb8614a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7819348de88c037c4c98d479cb8614a8,
        type_description_1,
        par_command,
        par_subcommand,
        par_parser,
        par_help,
        par_aliases,
        var_arg_decorator
    );


    // Release cached frame if used for exception.
    if (frame_7819348de88c037c4c98d479cb8614a8 == cache_frame_7819348de88c037c4c98d479cb8614a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7819348de88c037c4c98d479cb8614a8);
        cache_frame_7819348de88c037c4c98d479cb8614a8 = NULL;
    }

    assertFrameObject(frame_7819348de88c037c4c98d479cb8614a8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_arg_decorator);
    tmp_return_value = var_arg_decorator;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    par_command = NULL;
    CHECK_OBJECT(par_subcommand);
    Py_DECREF(par_subcommand);
    par_subcommand = NULL;
    CHECK_OBJECT(par_parser);
    Py_DECREF(par_parser);
    par_parser = NULL;
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    par_help = NULL;
    CHECK_OBJECT(par_aliases);
    Py_DECREF(par_aliases);
    par_aliases = NULL;
    CHECK_OBJECT(var_arg_decorator);
    Py_DECREF(var_arg_decorator);
    var_arg_decorator = NULL;
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

    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    par_command = NULL;
    CHECK_OBJECT(par_subcommand);
    Py_DECREF(par_subcommand);
    par_subcommand = NULL;
    CHECK_OBJECT(par_parser);
    Py_DECREF(par_parser);
    par_parser = NULL;
    CHECK_OBJECT(par_help);
    Py_DECREF(par_help);
    par_help = NULL;
    CHECK_OBJECT(par_aliases);
    Py_DECREF(par_aliases);
    par_aliases = NULL;
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


static PyObject *impl_cmd2$decorators$$$function__8_as_subcommand_to$$$function__1_arg_decorator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *var_add_parser_kwargs = NULL;
    struct Nuitka_FrameObject *frame_9eb7f3ddce79ac917871a0dfcf34f2a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9eb7f3ddce79ac917871a0dfcf34f2a3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9eb7f3ddce79ac917871a0dfcf34f2a3)) {
        Py_XDECREF(cache_frame_9eb7f3ddce79ac917871a0dfcf34f2a3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9eb7f3ddce79ac917871a0dfcf34f2a3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9eb7f3ddce79ac917871a0dfcf34f2a3 = MAKE_FUNCTION_FRAME(codeobj_9eb7f3ddce79ac917871a0dfcf34f2a3, module_cmd2$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9eb7f3ddce79ac917871a0dfcf34f2a3->m_type_description == NULL);
    frame_9eb7f3ddce79ac917871a0dfcf34f2a3 = cache_frame_9eb7f3ddce79ac917871a0dfcf34f2a3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9eb7f3ddce79ac917871a0dfcf34f2a3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9eb7f3ddce79ac917871a0dfcf34f2a3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 378;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = Nuitka_Cell_GET(self->m_closure[3]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 378;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_right_name_1 = mod_consts[59];
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {
            Py_DECREF(tmp_left_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 378;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = Nuitka_Cell_GET(self->m_closure[4]);
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        frame_9eb7f3ddce79ac917871a0dfcf34f2a3->m_frame.f_lineno = 378;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 381;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[76]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_func);
        tmp_expression_name_2 = par_func;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[42]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 381;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
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
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_assattr_target_1;
        if (par_func == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 382;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_func;
        tmp_assattr_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[42]);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 382;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[76], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_capi_result_1;
        if (par_func == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 385;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_setattr_target_1 = par_func;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        tmp_setattr_attr_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[95]);
        if (tmp_setattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_setattr_attr_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 385;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_setattr_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_capi_result_1 = BUILTIN_SETATTR(tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1);
        Py_DECREF(tmp_setattr_attr_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_setattr_target_2;
        PyObject *tmp_setattr_attr_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_setattr_value_2;
        PyObject *tmp_capi_result_2;
        if (par_func == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 386;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_setattr_target_2 = par_func;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        tmp_setattr_attr_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[77]);
        if (tmp_setattr_attr_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_setattr_attr_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 386;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_setattr_value_2 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_capi_result_2 = BUILTIN_SETATTR(tmp_setattr_target_2, tmp_setattr_attr_2, tmp_setattr_value_2);
        Py_DECREF(tmp_setattr_attr_2);
        if (tmp_capi_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_setattr_target_3;
        PyObject *tmp_setattr_attr_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_setattr_value_3;
        PyObject *tmp_capi_result_3;
        if (par_func == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 387;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_setattr_target_3 = par_func;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        tmp_setattr_attr_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[96]);
        if (tmp_setattr_attr_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {
            Py_DECREF(tmp_setattr_attr_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 387;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_setattr_value_3 = Nuitka_Cell_GET(self->m_closure[4]);
        tmp_capi_result_3 = BUILTIN_SETATTR(tmp_setattr_target_3, tmp_setattr_attr_3, tmp_setattr_value_3);
        Py_DECREF(tmp_setattr_attr_3);
        if (tmp_capi_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert(var_add_parser_kwargs == NULL);
        var_add_parser_kwargs = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 391;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

        FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[97]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 392;
        type_description_1 = "ooccccc";
        goto frame_exception_exit_1;
    }

    tmp_dictset_value = Nuitka_Cell_GET(self->m_closure[2]);
    CHECK_OBJECT(var_add_parser_kwargs);
    tmp_dictset_dict = var_add_parser_kwargs;
    tmp_dictset_key = mod_consts[97];
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
    assert(!(tmp_res != 0));
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 393;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_subscript_name_1 = mod_consts[99];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        if (var_add_parser_kwargs == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = var_add_parser_kwargs;
        tmp_ass_subscript_1 = mod_consts[98];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    {
        PyObject *tmp_setattr_target_4;
        PyObject *tmp_setattr_attr_4;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_setattr_value_4;
        PyObject *tmp_capi_result_4;
        if (par_func == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 396;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_setattr_target_4 = par_func;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        tmp_setattr_attr_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[101]);
        if (tmp_setattr_attr_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
        if (var_add_parser_kwargs == NULL) {
            Py_DECREF(tmp_setattr_attr_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 396;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }

        tmp_setattr_value_4 = var_add_parser_kwargs;
        tmp_capi_result_4 = BUILTIN_SETATTR(tmp_setattr_target_4, tmp_setattr_attr_4, tmp_setattr_value_4);
        Py_DECREF(tmp_setattr_attr_4);
        if (tmp_capi_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ooccccc";
            goto frame_exception_exit_1;
        }
    }
    if (par_func == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 398;
        type_description_1 = "ooccccc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_func;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9eb7f3ddce79ac917871a0dfcf34f2a3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9eb7f3ddce79ac917871a0dfcf34f2a3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9eb7f3ddce79ac917871a0dfcf34f2a3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9eb7f3ddce79ac917871a0dfcf34f2a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9eb7f3ddce79ac917871a0dfcf34f2a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9eb7f3ddce79ac917871a0dfcf34f2a3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9eb7f3ddce79ac917871a0dfcf34f2a3,
        type_description_1,
        par_func,
        var_add_parser_kwargs,
        self->m_closure[3],
        self->m_closure[1],
        self->m_closure[4],
        self->m_closure[2],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9eb7f3ddce79ac917871a0dfcf34f2a3 == cache_frame_9eb7f3ddce79ac917871a0dfcf34f2a3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9eb7f3ddce79ac917871a0dfcf34f2a3);
        cache_frame_9eb7f3ddce79ac917871a0dfcf34f2a3 = NULL;
    }

    assertFrameObject(frame_9eb7f3ddce79ac917871a0dfcf34f2a3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_func);
    par_func = NULL;
    Py_XDECREF(var_add_parser_kwargs);
    var_add_parser_kwargs = NULL;
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

    Py_XDECREF(par_func);
    par_func = NULL;
    Py_XDECREF(var_add_parser_kwargs);
    var_add_parser_kwargs = NULL;
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



static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__1_with_category(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$decorators$$$function__1_with_category,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_61eb42543bc5297752c1b04b945aca93,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$decorators,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__1_with_category$$$function__1_cat_decorator(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$decorators$$$function__1_with_category$$$function__1_cat_decorator,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[1],
#endif
        codeobj_a9d7b5de4fbd7ebceba042eb22169041,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cmd2$decorators,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__2__parse_positionals(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$decorators$$$function__2__parse_positionals,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a480dd04145bfe0e07fbd8c282adec5d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$decorators,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__3__arg_swap(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$decorators$$$function__3__arg_swap,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_54e3eb68535f7e3db255f44ccba068ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$decorators,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__4_with_argument_list(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$decorators$$$function__4_with_argument_list,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d623ca5695d1db1a24d76a7eaf33e66e,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_cmd2$decorators,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__4_with_argument_list$$$function__1_arg_decorator(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$decorators$$$function__4_with_argument_list$$$function__1_arg_decorator,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[27],
#endif
        codeobj_92e451075ec9ee996ae14131a2dc8571,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$decorators,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__4_with_argument_list$$$function__1_arg_decorator$$$function__1_cmd_wrapper(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$decorators$$$function__4_with_argument_list$$$function__1_arg_decorator$$$function__1_cmd_wrapper,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[38],
#endif
        codeobj_94219bae9ebcc24627f8ec92411ed817,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$decorators,
        mod_consts[36],
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__5__set_parser_prog(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$decorators$$$function__5__set_parser_prog,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f8d48f805e4342bfcfb2138c31500c04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$decorators,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__6_with_argparser_and_unknown_args(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$decorators$$$function__6_with_argparser_and_unknown_args,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_627ca34c19e3ffb30853691dcbd8a684,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_cmd2$decorators,
        mod_consts[71],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__7_with_argparser(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$decorators$$$function__7_with_argparser,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e781099307d771a3979caa0d9edd56ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_cmd2$decorators,
        mod_consts[73],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__7_with_argparser$$$function__1_arg_decorator(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$decorators$$$function__7_with_argparser$$$function__1_arg_decorator,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        codeobj_7f3dfe2e53567ef6114322cf09af9390,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$decorators,
        NULL,
        closure,
        5
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__7_with_argparser$$$function__1_arg_decorator$$$function__1_cmd_wrapper(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$decorators$$$function__7_with_argparser$$$function__1_arg_decorator$$$function__1_cmd_wrapper,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_a92082cc84c88aea08c7317ee5d7e379,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$decorators,
        mod_consts[74],
        closure,
        6
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__8_as_subcommand_to(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$decorators$$$function__8_as_subcommand_to,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7819348de88c037c4c98d479cb8614a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_cmd2$decorators,
        mod_consts[92],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cmd2$decorators$$$function__8_as_subcommand_to$$$function__1_arg_decorator(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cmd2$decorators$$$function__8_as_subcommand_to$$$function__1_arg_decorator,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_9eb7f3ddce79ac917871a0dfcf34f2a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cmd2$decorators,
        NULL,
        closure,
        5
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

function_impl_code functable_cmd2$decorators[] = {
    impl_cmd2$decorators$$$function__1_with_category$$$function__1_cat_decorator,
    impl_cmd2$decorators$$$function__4_with_argument_list$$$function__1_arg_decorator,
    impl_cmd2$decorators$$$function__4_with_argument_list$$$function__1_arg_decorator$$$function__1_cmd_wrapper,
    impl_cmd2$decorators$$$function__7_with_argparser$$$function__1_arg_decorator,
    impl_cmd2$decorators$$$function__7_with_argparser$$$function__1_arg_decorator$$$function__1_cmd_wrapper,
    impl_cmd2$decorators$$$function__8_as_subcommand_to$$$function__1_arg_decorator,
    impl_cmd2$decorators$$$function__1_with_category,
    impl_cmd2$decorators$$$function__2__parse_positionals,
    impl_cmd2$decorators$$$function__3__arg_swap,
    impl_cmd2$decorators$$$function__4_with_argument_list,
    impl_cmd2$decorators$$$function__5__set_parser_prog,
    impl_cmd2$decorators$$$function__6_with_argparser_and_unknown_args,
    impl_cmd2$decorators$$$function__7_with_argparser,
    impl_cmd2$decorators$$$function__8_as_subcommand_to,
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

    function_impl_code *current = functable_cmd2$decorators;
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

    if (offset > sizeof(functable_cmd2$decorators) || offset < 0) {
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
        functable_cmd2$decorators[offset],
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
        module_cmd2$decorators,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "cmd2.decorators";

// Internal entry point for module code.
PyObject *modulecode_cmd2$decorators(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_cmd2$decorators = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("cmd2.decorators: Skipping module init, already done.\n");
#endif

        return module_cmd2$decorators;
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
    PRINT_STRING("cmd2.decorators: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cmd2.decorators: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cmd2.decorators: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcmd2$decorators\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_cmd2$decorators = MODULE_DICT(module_cmd2$decorators);

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
        moduledict_cmd2$decorators,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cmd2$decorators,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cmd2$decorators,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cmd2$decorators,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cmd2$decorators,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cmd2$decorators);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cmd2$decorators, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_cmd2$decorators, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cmd2$decorators, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_cmd2$decorators);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_f28ccd0ee533f33552a72925204275cd;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[103];
        UPDATE_STRING_DICT0(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_f28ccd0ee533f33552a72925204275cd = MAKE_MODULE_FRAME(codeobj_f28ccd0ee533f33552a72925204275cd, module_cmd2$decorators);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_f28ccd0ee533f33552a72925204275cd);
    assert(Py_REFCNT(frame_f28ccd0ee533f33552a72925204275cd) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[103];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[106], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[107], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[52];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_cmd2$decorators;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[11];
        frame_f28ccd0ee533f33552a72925204275cd->m_frame.f_lineno = 3;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[109];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_cmd2$decorators;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[110];
        tmp_level_name_2 = mod_consts[11];
        frame_f28ccd0ee533f33552a72925204275cd->m_frame.f_lineno = 4;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

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
                (PyObject *)moduledict_cmd2$decorators,
                mod_consts[111],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[111]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_cmd2$decorators,
                mod_consts[33],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[33]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_cmd2$decorators,
                mod_consts[25],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[25]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_cmd2$decorators,
                mod_consts[32],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[32]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_cmd2$decorators,
                mod_consts[112],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[112]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_cmd2$decorators,
                mod_consts[113],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[113]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_cmd2$decorators,
                mod_consts[35],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[35]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_cmd2$decorators,
                mod_consts[114],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[114]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_cmd2$decorators,
                mod_consts[115],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[115]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_14);
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[116];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_cmd2$decorators;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[117];
        tmp_level_name_3 = mod_consts[5];
        frame_f28ccd0ee533f33552a72925204275cd->m_frame.f_lineno = 16;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_cmd2$decorators,
                mod_consts[40],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[40]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[118];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_cmd2$decorators;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[119];
        tmp_level_name_4 = mod_consts[5];
        frame_f28ccd0ee533f33552a72925204275cd->m_frame.f_lineno = 19;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_cmd2$decorators,
                mod_consts[86],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[86]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[120];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_cmd2$decorators;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[121];
        tmp_level_name_5 = mod_consts[5];
        frame_f28ccd0ee533f33552a72925204275cd->m_frame.f_lineno = 22;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_cmd2$decorators,
                mod_consts[83],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[83]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[122];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_cmd2$decorators;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[123];
        tmp_level_name_6 = mod_consts[5];
        frame_f28ccd0ee533f33552a72925204275cd->m_frame.f_lineno = 25;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_cmd2$decorators,
                mod_consts[16],
                mod_consts[5]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[16]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_18);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[9];
        tmp_globals_arg_name_7 = (PyObject *)moduledict_cmd2$decorators;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = Py_None;
        tmp_level_name_7 = mod_consts[11];
        frame_f28ccd0ee533f33552a72925204275cd->m_frame.f_lineno = 30;
        tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_arg_name_7, tmp_locals_arg_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_19);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[7];
        tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[34];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_20 = MAKE_FUNCTION_cmd2$decorators$$$function__1_with_category(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[14];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_expression_name_2;
            PyObject *tmp_subscript_name_2;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[34];
            tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_expression_name_1 == NULL)) {
                tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
            }

            if (tmp_expression_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_2;
            }
            tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_expression_name_2 == NULL)) {
                tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_expression_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_2;
            }
            tmp_subscript_name_2 = mod_consts[125];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_2;
            }
            tmp_subscript_name_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_name_3;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_tuple_element_2;
                PyTuple_SET_ITEM(tmp_subscript_name_1, 0, tmp_tuple_element_1);
                tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[115]);

                if (unlikely(tmp_expression_name_3 == NULL)) {
                    tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
                }

                if (tmp_expression_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 62;

                    goto tuple_build_exception_1;
                }
                tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_tuple_element_2 == NULL)) {
                    tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                }

                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 62;

                    goto tuple_build_exception_1;
                }
                tmp_subscript_name_3 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_subscript_name_3, 0, tmp_tuple_element_2);
                tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
                PyTuple_SET_ITEM0(tmp_subscript_name_3, 1, tmp_tuple_element_2);
                tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_3);
                Py_DECREF(tmp_subscript_name_3);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 62;

                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_subscript_name_1, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_subscript_name_1);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
            Py_DECREF(tmp_subscript_name_1);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_21 = MAKE_FUNCTION_cmd2$decorators$$$function__2__parse_positionals(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_5;
        tmp_dict_key_3 = mod_consts[14];
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_subscript_name_5 == NULL)) {
            tmp_subscript_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_subscript_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_5);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_6;
            PyObject *tmp_subscript_name_6;
            PyTuple_SET_ITEM(tmp_subscript_name_4, 0, tmp_tuple_element_3);
            tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_expression_name_6 == NULL)) {
                tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
            }

            if (tmp_expression_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto tuple_build_exception_2;
            }
            tmp_subscript_name_6 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_subscript_name_6 == NULL)) {
                tmp_subscript_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_subscript_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_4, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_name_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_4);
        Py_DECREF(tmp_subscript_name_4);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_name_7;
            PyObject *tmp_subscript_name_7;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[126];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[127];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[34];
            tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_expression_name_7 == NULL)) {
                tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
            }

            if (tmp_expression_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_3;
            }
            tmp_subscript_name_7 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_subscript_name_7 == NULL)) {
                tmp_subscript_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_subscript_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_7);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_22 = MAKE_FUNCTION_cmd2$decorators$$$function__3__arg_swap(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_kw_defaults_1;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_kw_defaults_1 = PyDict_Copy(mod_consts[128]);
        tmp_dict_key_4 = mod_consts[47];
        tmp_dict_value_4 = (PyObject *)&PyBool_Type;
        tmp_annotations_4 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_name_8;
            PyObject *tmp_subscript_name_8;
            PyObject *tmp_expression_name_9;
            PyObject *tmp_subscript_name_9;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_list_element_1;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[14];
            tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_expression_name_8 == NULL)) {
                tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
            }

            if (tmp_expression_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_4;
            }
            tmp_subscript_name_8 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_name_8 == NULL)) {
                tmp_subscript_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_8, tmp_subscript_name_8);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[34];
            tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_name_9 == NULL)) {
                tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_expression_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_4;
            }
            tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_list_element_1 == NULL)) {
                tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
            }

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_4 = PyList_New(1);
            PyList_SET_ITEM0(tmp_tuple_element_4, 0, tmp_list_element_1);
            tmp_subscript_name_9 = PyTuple_New(2);
            {
                PyObject *tmp_expression_name_10;
                PyObject *tmp_subscript_name_10;
                PyTuple_SET_ITEM(tmp_subscript_name_9, 0, tmp_tuple_element_4);
                tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[35]);

                if (unlikely(tmp_expression_name_10 == NULL)) {
                    tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                }

                if (tmp_expression_name_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;

                    goto tuple_build_exception_3;
                }
                tmp_subscript_name_10 = (PyObject *)&PyBool_Type;
                tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_10, tmp_subscript_name_10);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;

                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_subscript_name_9, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_subscript_name_9);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_9, tmp_subscript_name_9);
            Py_DECREF(tmp_subscript_name_9);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_kw_defaults_1);
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_assign_source_23 = MAKE_FUNCTION_cmd2$decorators$$$function__4_with_argument_list(tmp_kw_defaults_1, tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_name_11;
        tmp_dict_key_5 = mod_consts[54];
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[130]);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[50];
        tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));


        tmp_assign_source_24 = MAKE_FUNCTION_cmd2$decorators$$$function__5__set_parser_prog(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_kw_defaults_2;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_name_12;
        tmp_kw_defaults_2 = PyDict_Copy(mod_consts[131]);
        tmp_dict_key_6 = mod_consts[54];
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_2);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[130]);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_2);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_name_13;
            PyObject *tmp_subscript_name_11;
            PyObject *tmp_expression_name_14;
            PyObject *tmp_subscript_name_12;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_expression_name_16;
            PyObject *tmp_subscript_name_13;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_list_element_2;
            PyObject *tmp_expression_name_17;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[69];
            tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_expression_name_13 == NULL)) {
                tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
            }

            if (tmp_expression_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto dict_build_exception_5;
            }
            tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_name_14 == NULL)) {
                tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_expression_name_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto dict_build_exception_5;
            }
            tmp_tuple_element_5 = Py_Ellipsis;
            tmp_subscript_name_12 = PyTuple_New(2);
            {
                PyObject *tmp_expression_name_15;
                PyTuple_SET_ITEM0(tmp_subscript_name_12, 0, tmp_tuple_element_5);
                tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[52]);

                if (unlikely(tmp_expression_name_15 == NULL)) {
                    tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                }

                if (tmp_expression_name_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;

                    goto tuple_build_exception_4;
                }
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[132]);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_subscript_name_12, 1, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_subscript_name_12);
            goto dict_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_subscript_name_11 = LOOKUP_SUBSCRIPT(tmp_expression_name_14, tmp_subscript_name_12);
            Py_DECREF(tmp_subscript_name_12);
            if (tmp_subscript_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto dict_build_exception_5;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_13, tmp_subscript_name_11);
            Py_DECREF(tmp_subscript_name_11);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[47];
            tmp_dict_value_6 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[34];
            tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_name_16 == NULL)) {
                tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_expression_name_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_5;
            }
            tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_expression_name_17 == NULL)) {
                tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_expression_name_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_5;
            }
            tmp_list_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[132]);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_5;
            }
            tmp_tuple_element_6 = PyList_New(2);
            PyList_SET_ITEM(tmp_tuple_element_6, 0, tmp_list_element_2);
            tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_list_element_2 == NULL)) {
                tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
            }

            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM0(tmp_tuple_element_6, 1, tmp_list_element_2);
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_tuple_element_6);
            goto dict_build_exception_5;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_subscript_name_13 = PyTuple_New(2);
            {
                PyObject *tmp_expression_name_18;
                PyObject *tmp_subscript_name_14;
                PyTuple_SET_ITEM(tmp_subscript_name_13, 0, tmp_tuple_element_6);
                tmp_expression_name_18 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[35]);

                if (unlikely(tmp_expression_name_18 == NULL)) {
                    tmp_expression_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                }

                if (tmp_expression_name_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 194;

                    goto tuple_build_exception_5;
                }
                tmp_subscript_name_14 = (PyObject *)&PyBool_Type;
                tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_18, tmp_subscript_name_14);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 194;

                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_subscript_name_13, 1, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_subscript_name_13);
            goto dict_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_16, tmp_subscript_name_13);
            Py_DECREF(tmp_subscript_name_13);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_kw_defaults_2);
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;


        tmp_assign_source_25 = MAKE_FUNCTION_cmd2$decorators$$$function__6_with_argparser_and_unknown_args(tmp_kw_defaults_2, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_kw_defaults_3;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_name_19;
        tmp_kw_defaults_3 = PyDict_Copy(mod_consts[134]);
        tmp_dict_key_7 = mod_consts[54];
        tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_name_19 == NULL)) {
            tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_3);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[130]);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_3);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_name_20;
            PyObject *tmp_subscript_name_15;
            PyObject *tmp_expression_name_21;
            PyObject *tmp_subscript_name_16;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_expression_name_23;
            PyObject *tmp_subscript_name_17;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_list_element_3;
            PyObject *tmp_expression_name_24;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[69];
            tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_expression_name_20 == NULL)) {
                tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
            }

            if (tmp_expression_name_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto dict_build_exception_6;
            }
            tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_name_21 == NULL)) {
                tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_expression_name_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto dict_build_exception_6;
            }
            tmp_tuple_element_7 = Py_Ellipsis;
            tmp_subscript_name_16 = PyTuple_New(2);
            {
                PyObject *tmp_expression_name_22;
                PyTuple_SET_ITEM0(tmp_subscript_name_16, 0, tmp_tuple_element_7);
                tmp_expression_name_22 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[52]);

                if (unlikely(tmp_expression_name_22 == NULL)) {
                    tmp_expression_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                }

                if (tmp_expression_name_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 235;

                    goto tuple_build_exception_6;
                }
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[132]);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 235;

                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_subscript_name_16, 1, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_subscript_name_16);
            goto dict_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_subscript_name_15 = LOOKUP_SUBSCRIPT(tmp_expression_name_21, tmp_subscript_name_16);
            Py_DECREF(tmp_subscript_name_16);
            if (tmp_subscript_name_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto dict_build_exception_6;
            }
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_name_20, tmp_subscript_name_15);
            Py_DECREF(tmp_subscript_name_15);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[47];
            tmp_dict_value_7 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[70];
            tmp_dict_value_7 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[34];
            tmp_expression_name_23 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_name_23 == NULL)) {
                tmp_expression_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_expression_name_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto dict_build_exception_6;
            }
            tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_expression_name_24 == NULL)) {
                tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_expression_name_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto dict_build_exception_6;
            }
            tmp_list_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[132]);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto dict_build_exception_6;
            }
            tmp_tuple_element_8 = PyList_New(1);
            PyList_SET_ITEM(tmp_tuple_element_8, 0, tmp_list_element_3);
            tmp_subscript_name_17 = PyTuple_New(2);
            {
                PyObject *tmp_expression_name_25;
                PyObject *tmp_subscript_name_18;
                PyTuple_SET_ITEM(tmp_subscript_name_17, 0, tmp_tuple_element_8);
                tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[35]);

                if (unlikely(tmp_expression_name_25 == NULL)) {
                    tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                }

                if (tmp_expression_name_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 237;

                    goto tuple_build_exception_7;
                }
                tmp_subscript_name_18 = (PyObject *)&PyBool_Type;
                tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_25, tmp_subscript_name_18);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 237;

                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_subscript_name_17, 1, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_subscript_name_17);
            goto dict_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_name_23, tmp_subscript_name_17);
            Py_DECREF(tmp_subscript_name_17);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_kw_defaults_3);
        Py_DECREF(tmp_annotations_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;


        tmp_assign_source_26 = MAKE_FUNCTION_cmd2$decorators$$$function__7_with_argparser(tmp_kw_defaults_3, tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_kw_defaults_4;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_kw_defaults_4 = PyDict_Copy(mod_consts[135]);
        tmp_dict_key_8 = mod_consts[93];
        tmp_dict_value_8 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_8 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_name_26;
            PyObject *tmp_expression_name_27;
            PyObject *tmp_subscript_name_19;
            PyObject *tmp_expression_name_28;
            PyObject *tmp_subscript_name_20;
            PyObject *tmp_expression_name_29;
            PyObject *tmp_subscript_name_21;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_list_element_4;
            PyObject *tmp_expression_name_30;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[94];
            tmp_dict_value_8 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[54];
            tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_expression_name_26 == NULL)) {
                tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_expression_name_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;

                goto dict_build_exception_7;
            }
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[130]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[97];
            tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_expression_name_27 == NULL)) {
                tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
            }

            if (tmp_expression_name_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;

                goto dict_build_exception_7;
            }
            tmp_subscript_name_19 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_27, tmp_subscript_name_19);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[98];
            tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_expression_name_28 == NULL)) {
                tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
            }

            if (tmp_expression_name_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;

                goto dict_build_exception_7;
            }
            tmp_subscript_name_20 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_28, tmp_subscript_name_20);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[34];
            tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_name_29 == NULL)) {
                tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_expression_name_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;

                goto dict_build_exception_7;
            }
            tmp_expression_name_30 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_expression_name_30 == NULL)) {
                tmp_expression_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_expression_name_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;

                goto dict_build_exception_7;
            }
            tmp_list_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[132]);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;

                goto dict_build_exception_7;
            }
            tmp_tuple_element_9 = PyList_New(1);
            PyList_SET_ITEM(tmp_tuple_element_9, 0, tmp_list_element_4);
            tmp_subscript_name_21 = PyTuple_New(2);
            {
                PyObject *tmp_expression_name_31;
                PyObject *tmp_subscript_name_22;
                PyTuple_SET_ITEM(tmp_subscript_name_21, 0, tmp_tuple_element_9);
                tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[35]);

                if (unlikely(tmp_expression_name_31 == NULL)) {
                    tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                }

                if (tmp_expression_name_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 364;

                    goto tuple_build_exception_8;
                }
                tmp_subscript_name_22 = (PyObject *)&PyBool_Type;
                tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_name_31, tmp_subscript_name_22);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 364;

                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_subscript_name_21, 1, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_subscript_name_21);
            goto dict_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_29, tmp_subscript_name_21);
            Py_DECREF(tmp_subscript_name_21);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_kw_defaults_4);
        Py_DECREF(tmp_annotations_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;


        tmp_assign_source_27 = MAKE_FUNCTION_cmd2$decorators$$$function__8_as_subcommand_to(tmp_kw_defaults_4, tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_cmd2$decorators, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_27);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f28ccd0ee533f33552a72925204275cd);
#endif
    popFrameStack();

    assertFrameObject(frame_f28ccd0ee533f33552a72925204275cd);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f28ccd0ee533f33552a72925204275cd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f28ccd0ee533f33552a72925204275cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f28ccd0ee533f33552a72925204275cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f28ccd0ee533f33552a72925204275cd, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_cmd2$decorators;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

