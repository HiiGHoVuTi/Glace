/* Generated code for Python module 'colorama.win32'
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

/* The "module_colorama$win32" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_colorama$win32;
PyDictObject *moduledict_colorama$win32;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[106];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "colorama.win32");

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
void checkModuleConstants_colorama$win32(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "colorama.win32");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_2785564bb31bcc4513e22ba5020ac642;
static PyCodeObject *codeobj_af19dc711db59011c6da20c48587ed4f;
static PyCodeObject *codeobj_044fbffd99bf86d13a5cd8a5fc07f767;
static PyCodeObject *codeobj_0d8e7fb1f8be264a61d8fed451ca264b;
static PyCodeObject *codeobj_aec052d7b0d1fd144fa1cb3a397bc7b9;
static PyCodeObject *codeobj_3447c975519079ce2ab29d897b9d9832;
static PyCodeObject *codeobj_550fdc12c280509674f71bda38b0175a;
static PyCodeObject *codeobj_c62542c5278409e9d0f135b7b951d25a;
static PyCodeObject *codeobj_9d0b43a04977f3dafea48d026b58047f;
static PyCodeObject *codeobj_587db3cd53081dbbb4d0c57026cfecb5;
static PyCodeObject *codeobj_0a4c84e8cdfd4b05e2863831aabd7044;
static PyCodeObject *codeobj_8a5c00842c38d371e71d5a0461241171;
static PyCodeObject *codeobj_e3eb4c9c796f4cd0d6bfe34f72b4adb0;
static PyCodeObject *codeobj_182af3d987288c1b9cdf9502b66c859f;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[43]; CHECK_OBJECT(module_filename_obj);
    codeobj_2785564bb31bcc4513e22ba5020ac642 = MAKE_CODEOBJECT(module_filename_obj, 99, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[94], NULL, 1, 0, 0);
    codeobj_af19dc711db59011c6da20c48587ed4f = MAKE_CODEOBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[58], mod_consts[95], NULL, 0, 0, 0);
    codeobj_044fbffd99bf86d13a5cd8a5fc07f767 = MAKE_CODEOBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[58], mod_consts[95], NULL, 0, 0, 0);
    codeobj_0d8e7fb1f8be264a61d8fed451ca264b = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[96], NULL, NULL, 0, 0, 0);
    codeobj_aec052d7b0d1fd144fa1cb3a397bc7b9 = MAKE_CODEOBJECT(module_filename_obj, 21, CO_NOFREE, mod_consts[13], mod_consts[97], NULL, 0, 0, 0);
    codeobj_3447c975519079ce2ab29d897b9d9832 = MAKE_CODEOBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[98], NULL, 4, 0, 0);
    codeobj_550fdc12c280509674f71bda38b0175a = MAKE_CODEOBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[99], NULL, 4, 0, 0);
    codeobj_c62542c5278409e9d0f135b7b951d25a = MAKE_CODEOBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[100], NULL, 1, 0, 0);
    codeobj_9d0b43a04977f3dafea48d026b58047f = MAKE_CODEOBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[101], NULL, 3, 0, 0);
    codeobj_587db3cd53081dbbb4d0c57026cfecb5 = MAKE_CODEOBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[102], NULL, 2, 0, 0);
    codeobj_0a4c84e8cdfd4b05e2863831aabd7044 = MAKE_CODEOBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[103], NULL, 1, 0, 0);
    codeobj_8a5c00842c38d371e71d5a0461241171 = MAKE_CODEOBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[104], NULL, 1, 0, 0);
    codeobj_e3eb4c9c796f4cd0d6bfe34f72b4adb0 = MAKE_CODEOBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[105], NULL, 1, 0, 0);
    codeobj_182af3d987288c1b9cdf9502b66c859f = MAKE_CODEOBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__10_FillConsoleOutputAttribute();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__11_SetConsoleTitle();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__2_lambda();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__3___str__();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__4__winapi_test();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__5_winapi_test();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__6_GetConsoleScreenBufferInfo(PyObject *defaults);


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__7_SetConsoleTextAttribute();


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__8_SetConsoleCursorPosition(PyObject *defaults);


static PyObject *MAKE_FUNCTION_colorama$win32$$$function__9_FillConsoleOutputCharacter();


// The module function definitions.
static PyObject *impl_colorama$win32$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par__ = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par__);
    Py_DECREF(par__);
    par__ = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par__);
    Py_DECREF(par__);
    par__ = NULL;

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


static PyObject *impl_colorama$win32$$$function__2_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par__ = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par__);
    Py_DECREF(par__);
    par__ = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par__);
    Py_DECREF(par__);
    par__ = NULL;

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


static PyObject *impl_colorama$win32$$$function__3___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8a5c00842c38d371e71d5a0461241171;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8a5c00842c38d371e71d5a0461241171 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8a5c00842c38d371e71d5a0461241171)) {
        Py_XDECREF(cache_frame_8a5c00842c38d371e71d5a0461241171);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8a5c00842c38d371e71d5a0461241171 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8a5c00842c38d371e71d5a0461241171 = MAKE_FUNCTION_FRAME(codeobj_8a5c00842c38d371e71d5a0461241171, module_colorama$win32, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8a5c00842c38d371e71d5a0461241171->m_type_description == NULL);
    frame_8a5c00842c38d371e71d5a0461241171 = cache_frame_8a5c00842c38d371e71d5a0461241171;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8a5c00842c38d371e71d5a0461241171);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8a5c00842c38d371e71d5a0461241171) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        tmp_left_name_1 = mod_consts[0];
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[1]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[2]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyTuple_New(11);
        {
            PyObject *tmp_expression_name_3;
            PyObject *tmp_expression_name_4;
            PyObject *tmp_expression_name_5;
            PyObject *tmp_expression_name_6;
            PyObject *tmp_expression_name_7;
            PyObject *tmp_expression_name_8;
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
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 32;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_4 = par_self;
            tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[1]);
            if (tmp_expression_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[4]);
            Py_DECREF(tmp_expression_name_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 33;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_6 = par_self;
            tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[5]);
            if (tmp_expression_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[2]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 2, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 33;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_8 = par_self;
            tmp_expression_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[5]);
            if (tmp_expression_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[4]);
            Py_DECREF(tmp_expression_name_7);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 3, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 34;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_9 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[6]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 4, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_11 = par_self;
            tmp_expression_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[7]);
            if (tmp_expression_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[8]);
            Py_DECREF(tmp_expression_name_10);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 5, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_13 = par_self;
            tmp_expression_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[7]);
            if (tmp_expression_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[9]);
            Py_DECREF(tmp_expression_name_12);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 6, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_15 = par_self;
            tmp_expression_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[7]);
            if (tmp_expression_name_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[10]);
            Py_DECREF(tmp_expression_name_14);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 7, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_17 = par_self;
            tmp_expression_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[7]);
            if (tmp_expression_name_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[11]);
            Py_DECREF(tmp_expression_name_16);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 8, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 36;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_19 = par_self;
            tmp_expression_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[12]);
            if (tmp_expression_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[2]);
            Py_DECREF(tmp_expression_name_18);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 9, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 36;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_21 = par_self;
            tmp_expression_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[12]);
            if (tmp_expression_name_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[4]);
            Py_DECREF(tmp_expression_name_20);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 10, tmp_tuple_element_1);
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


            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8a5c00842c38d371e71d5a0461241171);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8a5c00842c38d371e71d5a0461241171);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8a5c00842c38d371e71d5a0461241171);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8a5c00842c38d371e71d5a0461241171, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8a5c00842c38d371e71d5a0461241171->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a5c00842c38d371e71d5a0461241171, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8a5c00842c38d371e71d5a0461241171,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8a5c00842c38d371e71d5a0461241171 == cache_frame_8a5c00842c38d371e71d5a0461241171) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8a5c00842c38d371e71d5a0461241171);
        cache_frame_8a5c00842c38d371e71d5a0461241171 = NULL;
    }

    assertFrameObject(frame_8a5c00842c38d371e71d5a0461241171);

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


static PyObject *impl_colorama$win32$$$function__4__winapi_test(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_handle = python_pars[0];
    PyObject *var_csbi = NULL;
    PyObject *var_success = NULL;
    struct Nuitka_FrameObject *frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0)) {
        Py_XDECREF(cache_frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0 = MAKE_FUNCTION_FRAME(codeobj_e3eb4c9c796f4cd0d6bfe34f72b4adb0, module_colorama$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0->m_type_description == NULL);
    frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0 = cache_frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0->m_frame.f_lineno = 93;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_csbi == NULL);
        var_csbi = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_handle);
        tmp_args_element_name_1 = par_handle;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_csbi);
        tmp_args_element_name_3 = var_csbi;
        frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0->m_frame.f_lineno = 95;
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_success == NULL);
        var_success = tmp_assign_source_2;
    }
    {
        PyObject *tmp_value_name_1;
        CHECK_OBJECT(var_success);
        tmp_value_name_1 = var_success;
        tmp_res = CHECK_IF_TRUE(tmp_value_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0,
        type_description_1,
        par_handle,
        var_csbi,
        var_success
    );


    // Release cached frame if used for exception.
    if (frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0 == cache_frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0);
        cache_frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0 = NULL;
    }

    assertFrameObject(frame_e3eb4c9c796f4cd0d6bfe34f72b4adb0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);
    par_handle = NULL;
    CHECK_OBJECT(var_csbi);
    Py_DECREF(var_csbi);
    var_csbi = NULL;
    CHECK_OBJECT(var_success);
    Py_DECREF(var_success);
    var_success = NULL;
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

    CHECK_OBJECT(par_handle);
    Py_DECREF(par_handle);
    par_handle = NULL;
    Py_XDECREF(var_csbi);
    var_csbi = NULL;
    Py_XDECREF(var_success);
    var_success = NULL;
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


static PyObject *impl_colorama$win32$$$function__5_winapi_test(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_182af3d987288c1b9cdf9502b66c859f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_182af3d987288c1b9cdf9502b66c859f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_182af3d987288c1b9cdf9502b66c859f)) {
        Py_XDECREF(cache_frame_182af3d987288c1b9cdf9502b66c859f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_182af3d987288c1b9cdf9502b66c859f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_182af3d987288c1b9cdf9502b66c859f = MAKE_FUNCTION_FRAME(codeobj_182af3d987288c1b9cdf9502b66c859f, module_colorama$win32, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_182af3d987288c1b9cdf9502b66c859f->m_type_description == NULL);
    frame_182af3d987288c1b9cdf9502b66c859f = cache_frame_182af3d987288c1b9cdf9502b66c859f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_182af3d987288c1b9cdf9502b66c859f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_182af3d987288c1b9cdf9502b66c859f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_any_arg_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_called_name_1 == NULL)) {
                tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_name_1 == NULL)) {
                tmp_args_element_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto frame_exception_exit_1;
            }
            frame_182af3d987288c1b9cdf9502b66c859f->m_frame.f_lineno = 100;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto frame_exception_exit_1;
            }
            tmp_iter_arg_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_name_2;
                PyObject *tmp_args_element_name_2;
                PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
                tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[16]);

                if (unlikely(tmp_called_name_2 == NULL)) {
                    tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                }

                if (tmp_called_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 100;

                    goto tuple_build_exception_1;
                }
                tmp_args_element_name_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[18]);

                if (unlikely(tmp_args_element_name_2 == NULL)) {
                    tmp_args_element_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
                }

                if (tmp_args_element_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 100;

                    goto tuple_build_exception_1;
                }
                frame_182af3d987288c1b9cdf9502b66c859f->m_frame.f_lineno = 100;
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 100;

                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_iter_arg_1);
            goto frame_exception_exit_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            assert(!(tmp_assign_source_1 == NULL));
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_any_arg_1 = MAKE_GENERATOR_colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_182af3d987288c1b9cdf9502b66c859f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_182af3d987288c1b9cdf9502b66c859f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_182af3d987288c1b9cdf9502b66c859f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_182af3d987288c1b9cdf9502b66c859f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_182af3d987288c1b9cdf9502b66c859f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_182af3d987288c1b9cdf9502b66c859f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_182af3d987288c1b9cdf9502b66c859f,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_182af3d987288c1b9cdf9502b66c859f == cache_frame_182af3d987288c1b9cdf9502b66c859f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_182af3d987288c1b9cdf9502b66c859f);
        cache_frame_182af3d987288c1b9cdf9502b66c859f = NULL;
    }

    assertFrameObject(frame_182af3d987288c1b9cdf9502b66c859f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

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



struct colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr_locals {
    PyObject *var_h;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr_locals *generator_heap = (struct colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_h = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_2785564bb31bcc4513e22ba5020ac642, module_colorama$win32, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 99;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_h;
            generator_heap->var_h = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_h);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 99;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_h);
        tmp_args_element_name_1 = generator_heap->var_h;
        generator->m_frame->m_frame.f_lineno = 99;
        tmp_expression_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 99;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 99;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 99;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_h
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_h);
    generator_heap->var_h = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_h);
    generator_heap->var_h = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr_context,
        module_colorama$win32,
        mod_consts[20],
#if PYTHON_VERSION >= 0x350
        mod_consts[21],
#endif
        codeobj_2785564bb31bcc4513e22ba5020ac642,
        closure,
        1,
        sizeof(struct colorama$win32$$$function__5_winapi_test$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_colorama$win32$$$function__6_GetConsoleScreenBufferInfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream_id = python_pars[0];
    PyObject *var_handle = NULL;
    PyObject *var_csbi = NULL;
    PyObject *var_success = NULL;
    struct Nuitka_FrameObject *frame_c62542c5278409e9d0f135b7b951d25a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c62542c5278409e9d0f135b7b951d25a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c62542c5278409e9d0f135b7b951d25a)) {
        Py_XDECREF(cache_frame_c62542c5278409e9d0f135b7b951d25a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c62542c5278409e9d0f135b7b951d25a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c62542c5278409e9d0f135b7b951d25a = MAKE_FUNCTION_FRAME(codeobj_c62542c5278409e9d0f135b7b951d25a, module_colorama$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c62542c5278409e9d0f135b7b951d25a->m_type_description == NULL);
    frame_c62542c5278409e9d0f135b7b951d25a = cache_frame_c62542c5278409e9d0f135b7b951d25a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c62542c5278409e9d0f135b7b951d25a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c62542c5278409e9d0f135b7b951d25a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream_id);
        tmp_args_element_name_1 = par_stream_id;
        frame_c62542c5278409e9d0f135b7b951d25a->m_frame.f_lineno = 103;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_handle == NULL);
        var_handle = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c62542c5278409e9d0f135b7b951d25a->m_frame.f_lineno = 104;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_csbi == NULL);
        var_csbi = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_args_element_name_2 = var_handle;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_csbi);
        tmp_args_element_name_4 = var_csbi;
        frame_c62542c5278409e9d0f135b7b951d25a->m_frame.f_lineno = 106;
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c62542c5278409e9d0f135b7b951d25a->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_success == NULL);
        var_success = tmp_assign_source_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c62542c5278409e9d0f135b7b951d25a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c62542c5278409e9d0f135b7b951d25a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c62542c5278409e9d0f135b7b951d25a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c62542c5278409e9d0f135b7b951d25a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c62542c5278409e9d0f135b7b951d25a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c62542c5278409e9d0f135b7b951d25a,
        type_description_1,
        par_stream_id,
        var_handle,
        var_csbi,
        var_success
    );


    // Release cached frame if used for exception.
    if (frame_c62542c5278409e9d0f135b7b951d25a == cache_frame_c62542c5278409e9d0f135b7b951d25a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c62542c5278409e9d0f135b7b951d25a);
        cache_frame_c62542c5278409e9d0f135b7b951d25a = NULL;
    }

    assertFrameObject(frame_c62542c5278409e9d0f135b7b951d25a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_csbi);
    tmp_return_value = var_csbi;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    par_stream_id = NULL;
    CHECK_OBJECT(var_handle);
    Py_DECREF(var_handle);
    var_handle = NULL;
    CHECK_OBJECT(var_csbi);
    Py_DECREF(var_csbi);
    var_csbi = NULL;
    CHECK_OBJECT(var_success);
    Py_DECREF(var_success);
    var_success = NULL;
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

    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    par_stream_id = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
    Py_XDECREF(var_csbi);
    var_csbi = NULL;
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


static PyObject *impl_colorama$win32$$$function__7_SetConsoleTextAttribute(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream_id = python_pars[0];
    PyObject *par_attrs = python_pars[1];
    PyObject *var_handle = NULL;
    struct Nuitka_FrameObject *frame_587db3cd53081dbbb4d0c57026cfecb5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_587db3cd53081dbbb4d0c57026cfecb5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_587db3cd53081dbbb4d0c57026cfecb5)) {
        Py_XDECREF(cache_frame_587db3cd53081dbbb4d0c57026cfecb5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_587db3cd53081dbbb4d0c57026cfecb5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_587db3cd53081dbbb4d0c57026cfecb5 = MAKE_FUNCTION_FRAME(codeobj_587db3cd53081dbbb4d0c57026cfecb5, module_colorama$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_587db3cd53081dbbb4d0c57026cfecb5->m_type_description == NULL);
    frame_587db3cd53081dbbb4d0c57026cfecb5 = cache_frame_587db3cd53081dbbb4d0c57026cfecb5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_587db3cd53081dbbb4d0c57026cfecb5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_587db3cd53081dbbb4d0c57026cfecb5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream_id);
        tmp_args_element_name_1 = par_stream_id;
        frame_587db3cd53081dbbb4d0c57026cfecb5->m_frame.f_lineno = 110;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_handle == NULL);
        var_handle = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_args_element_name_2 = var_handle;
        CHECK_OBJECT(par_attrs);
        tmp_args_element_name_3 = par_attrs;
        frame_587db3cd53081dbbb4d0c57026cfecb5->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_587db3cd53081dbbb4d0c57026cfecb5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_587db3cd53081dbbb4d0c57026cfecb5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_587db3cd53081dbbb4d0c57026cfecb5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_587db3cd53081dbbb4d0c57026cfecb5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_587db3cd53081dbbb4d0c57026cfecb5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_587db3cd53081dbbb4d0c57026cfecb5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_587db3cd53081dbbb4d0c57026cfecb5,
        type_description_1,
        par_stream_id,
        par_attrs,
        var_handle
    );


    // Release cached frame if used for exception.
    if (frame_587db3cd53081dbbb4d0c57026cfecb5 == cache_frame_587db3cd53081dbbb4d0c57026cfecb5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_587db3cd53081dbbb4d0c57026cfecb5);
        cache_frame_587db3cd53081dbbb4d0c57026cfecb5 = NULL;
    }

    assertFrameObject(frame_587db3cd53081dbbb4d0c57026cfecb5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    par_stream_id = NULL;
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);
    par_attrs = NULL;
    CHECK_OBJECT(var_handle);
    Py_DECREF(var_handle);
    var_handle = NULL;
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

    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    par_stream_id = NULL;
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);
    par_attrs = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
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


static PyObject *impl_colorama$win32$$$function__8_SetConsoleCursorPosition(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream_id = python_pars[0];
    PyObject *par_position = python_pars[1];
    PyObject *par_adjust = python_pars[2];
    PyObject *var_adjusted_position = NULL;
    PyObject *var_sr = NULL;
    PyObject *var_handle = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_inplace_assign_2__value = NULL;
    struct Nuitka_FrameObject *frame_9d0b43a04977f3dafea48d026b58047f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_9d0b43a04977f3dafea48d026b58047f = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9d0b43a04977f3dafea48d026b58047f)) {
        Py_XDECREF(cache_frame_9d0b43a04977f3dafea48d026b58047f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d0b43a04977f3dafea48d026b58047f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d0b43a04977f3dafea48d026b58047f = MAKE_FUNCTION_FRAME(codeobj_9d0b43a04977f3dafea48d026b58047f, module_colorama$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9d0b43a04977f3dafea48d026b58047f->m_type_description == NULL);
    frame_9d0b43a04977f3dafea48d026b58047f = cache_frame_9d0b43a04977f3dafea48d026b58047f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9d0b43a04977f3dafea48d026b58047f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9d0b43a04977f3dafea48d026b58047f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_position);
        tmp_dircall_arg2_1 = par_position;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___main__$$$function__10_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_position;
            assert(old != NULL);
            par_position = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tmp_or_left_value_1_object_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_tmp_or_right_value_1_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_position);
        tmp_expression_name_1 = par_position;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[2]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[24];
        tmp_tmp_or_left_value_1_object_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_or_left_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_or_left_value_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_left_value_1_object_1);

            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_left_value_1_object_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (par_position == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_position;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[4]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[24];
        tmp_tmp_or_right_value_1_object_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_tmp_or_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_or_right_value_1_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_right_value_1_object_1);

            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_right_value_1_object_1);
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_right_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_position == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_position;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[2]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[26];
        tmp_args_element_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_position == NULL) {
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_position;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[4]);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[26];
        tmp_args_element_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_9d0b43a04977f3dafea48d026b58047f->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_adjusted_position == NULL);
        var_adjusted_position = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_adjust);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_adjust);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_args_element_name_3 == NULL)) {
            tmp_args_element_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_9d0b43a04977f3dafea48d026b58047f->m_frame.f_lineno = 124;
        tmp_expression_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[7]);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sr == NULL);
        var_sr = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_6;
        CHECK_OBJECT(var_adjusted_position);
        tmp_expression_name_6 = var_adjusted_position;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[2]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_left_name_3 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_sr);
        tmp_expression_name_7 = var_sr;
        tmp_right_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[8]);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = tmp_left_name_3;
        tmp_inplace_assign_1__value = tmp_assign_source_5;

    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_name_1 = tmp_inplace_assign_1__value;
        if (var_adjusted_position == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 125;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_1 = var_adjusted_position;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_name_8;
        if (var_adjusted_position == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 126;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = var_adjusted_position;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[4]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_2__value == NULL);
        tmp_inplace_assign_2__value = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_expression_name_9;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_left_name_4 = tmp_inplace_assign_2__value;
        if (var_sr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 126;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_9 = var_sr;
        tmp_right_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[9]);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_7 = tmp_left_name_4;
        tmp_inplace_assign_2__value = tmp_assign_source_7;

    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_assattr_name_2 = tmp_inplace_assign_2__value;
        if (var_adjusted_position == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 126;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }

        tmp_assattr_target_2 = var_adjusted_position;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
    }
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

    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream_id);
        tmp_args_element_name_4 = par_stream_id;
        frame_9d0b43a04977f3dafea48d026b58047f->m_frame.f_lineno = 128;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_handle == NULL);
        var_handle = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_args_element_name_5 = var_handle;
        if (var_adjusted_position == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = var_adjusted_position;
        frame_9d0b43a04977f3dafea48d026b58047f->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d0b43a04977f3dafea48d026b58047f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d0b43a04977f3dafea48d026b58047f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d0b43a04977f3dafea48d026b58047f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9d0b43a04977f3dafea48d026b58047f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d0b43a04977f3dafea48d026b58047f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d0b43a04977f3dafea48d026b58047f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d0b43a04977f3dafea48d026b58047f,
        type_description_1,
        par_stream_id,
        par_position,
        par_adjust,
        var_adjusted_position,
        var_sr,
        var_handle
    );


    // Release cached frame if used for exception.
    if (frame_9d0b43a04977f3dafea48d026b58047f == cache_frame_9d0b43a04977f3dafea48d026b58047f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9d0b43a04977f3dafea48d026b58047f);
        cache_frame_9d0b43a04977f3dafea48d026b58047f = NULL;
    }

    assertFrameObject(frame_9d0b43a04977f3dafea48d026b58047f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    par_stream_id = NULL;
    Py_XDECREF(par_position);
    par_position = NULL;
    CHECK_OBJECT(par_adjust);
    Py_DECREF(par_adjust);
    par_adjust = NULL;
    Py_XDECREF(var_adjusted_position);
    var_adjusted_position = NULL;
    Py_XDECREF(var_sr);
    var_sr = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
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

    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    par_stream_id = NULL;
    Py_XDECREF(par_position);
    par_position = NULL;
    CHECK_OBJECT(par_adjust);
    Py_DECREF(par_adjust);
    par_adjust = NULL;
    Py_XDECREF(var_adjusted_position);
    var_adjusted_position = NULL;
    Py_XDECREF(var_sr);
    var_sr = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
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


static PyObject *impl_colorama$win32$$$function__9_FillConsoleOutputCharacter(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream_id = python_pars[0];
    PyObject *par_char = python_pars[1];
    PyObject *par_length = python_pars[2];
    PyObject *par_start = python_pars[3];
    PyObject *var_handle = NULL;
    PyObject *var_num_written = NULL;
    PyObject *var_success = NULL;
    struct Nuitka_FrameObject *frame_550fdc12c280509674f71bda38b0175a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_550fdc12c280509674f71bda38b0175a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_550fdc12c280509674f71bda38b0175a)) {
        Py_XDECREF(cache_frame_550fdc12c280509674f71bda38b0175a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_550fdc12c280509674f71bda38b0175a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_550fdc12c280509674f71bda38b0175a = MAKE_FUNCTION_FRAME(codeobj_550fdc12c280509674f71bda38b0175a, module_colorama$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_550fdc12c280509674f71bda38b0175a->m_type_description == NULL);
    frame_550fdc12c280509674f71bda38b0175a = cache_frame_550fdc12c280509674f71bda38b0175a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_550fdc12c280509674f71bda38b0175a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_550fdc12c280509674f71bda38b0175a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream_id);
        tmp_args_element_name_1 = par_stream_id;
        frame_550fdc12c280509674f71bda38b0175a->m_frame.f_lineno = 132;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_handle == NULL);
        var_handle = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_char);
        tmp_called_instance_1 = par_char;
        frame_550fdc12c280509674f71bda38b0175a->m_frame.f_lineno = 133;
        tmp_args_element_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_550fdc12c280509674f71bda38b0175a->m_frame.f_lineno = 133;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_char;
            par_char = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_length);
        tmp_args_element_name_3 = par_length;
        frame_550fdc12c280509674f71bda38b0175a->m_frame.f_lineno = 134;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[34], tmp_args_element_name_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_length;
            par_length = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_550fdc12c280509674f71bda38b0175a->m_frame.f_lineno = 135;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[34],
            &PyTuple_GET_ITEM(mod_consts[35], 0)
        );

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_num_written == NULL);
        var_num_written = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_9;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_args_element_name_4 = var_handle;
        CHECK_OBJECT(par_char);
        tmp_args_element_name_5 = par_char;
        CHECK_OBJECT(par_length);
        tmp_args_element_name_6 = par_length;
        CHECK_OBJECT(par_start);
        tmp_args_element_name_7 = par_start;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_num_written);
        tmp_args_element_name_9 = var_num_written;
        frame_550fdc12c280509674f71bda38b0175a->m_frame.f_lineno = 138;
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_9);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_550fdc12c280509674f71bda38b0175a->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_args_element_name_8);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_success == NULL);
        var_success = tmp_assign_source_5;
    }
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(var_num_written);
        tmp_expression_name_1 = var_num_written;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[37]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_550fdc12c280509674f71bda38b0175a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_550fdc12c280509674f71bda38b0175a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_550fdc12c280509674f71bda38b0175a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_550fdc12c280509674f71bda38b0175a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_550fdc12c280509674f71bda38b0175a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_550fdc12c280509674f71bda38b0175a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_550fdc12c280509674f71bda38b0175a,
        type_description_1,
        par_stream_id,
        par_char,
        par_length,
        par_start,
        var_handle,
        var_num_written,
        var_success
    );


    // Release cached frame if used for exception.
    if (frame_550fdc12c280509674f71bda38b0175a == cache_frame_550fdc12c280509674f71bda38b0175a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_550fdc12c280509674f71bda38b0175a);
        cache_frame_550fdc12c280509674f71bda38b0175a = NULL;
    }

    assertFrameObject(frame_550fdc12c280509674f71bda38b0175a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    par_stream_id = NULL;
    CHECK_OBJECT(par_char);
    Py_DECREF(par_char);
    par_char = NULL;
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    par_length = NULL;
    CHECK_OBJECT(par_start);
    Py_DECREF(par_start);
    par_start = NULL;
    CHECK_OBJECT(var_handle);
    Py_DECREF(var_handle);
    var_handle = NULL;
    Py_XDECREF(var_num_written);
    var_num_written = NULL;
    CHECK_OBJECT(var_success);
    Py_DECREF(var_success);
    var_success = NULL;
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

    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    par_stream_id = NULL;
    Py_XDECREF(par_char);
    par_char = NULL;
    Py_XDECREF(par_length);
    par_length = NULL;
    CHECK_OBJECT(par_start);
    Py_DECREF(par_start);
    par_start = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
    Py_XDECREF(var_num_written);
    var_num_written = NULL;
    Py_XDECREF(var_success);
    var_success = NULL;
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


static PyObject *impl_colorama$win32$$$function__10_FillConsoleOutputAttribute(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream_id = python_pars[0];
    PyObject *par_attr = python_pars[1];
    PyObject *par_length = python_pars[2];
    PyObject *par_start = python_pars[3];
    PyObject *var_handle = NULL;
    PyObject *var_attribute = NULL;
    PyObject *var_num_written = NULL;
    struct Nuitka_FrameObject *frame_3447c975519079ce2ab29d897b9d9832;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3447c975519079ce2ab29d897b9d9832 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3447c975519079ce2ab29d897b9d9832)) {
        Py_XDECREF(cache_frame_3447c975519079ce2ab29d897b9d9832);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3447c975519079ce2ab29d897b9d9832 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3447c975519079ce2ab29d897b9d9832 = MAKE_FUNCTION_FRAME(codeobj_3447c975519079ce2ab29d897b9d9832, module_colorama$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3447c975519079ce2ab29d897b9d9832->m_type_description == NULL);
    frame_3447c975519079ce2ab29d897b9d9832 = cache_frame_3447c975519079ce2ab29d897b9d9832;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3447c975519079ce2ab29d897b9d9832);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3447c975519079ce2ab29d897b9d9832) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream_id);
        tmp_args_element_name_1 = par_stream_id;
        frame_3447c975519079ce2ab29d897b9d9832->m_frame.f_lineno = 143;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_handle == NULL);
        var_handle = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_attr);
        tmp_args_element_name_2 = par_attr;
        frame_3447c975519079ce2ab29d897b9d9832->m_frame.f_lineno = 144;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[38], tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_attribute == NULL);
        var_attribute = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_length);
        tmp_args_element_name_3 = par_length;
        frame_3447c975519079ce2ab29d897b9d9832->m_frame.f_lineno = 145;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[34], tmp_args_element_name_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_length;
            par_length = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_3447c975519079ce2ab29d897b9d9832->m_frame.f_lineno = 146;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[34],
            &PyTuple_GET_ITEM(mod_consts[35], 0)
        );

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_num_written == NULL);
        var_num_written = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_9;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_args_element_name_4 = var_handle;
        CHECK_OBJECT(var_attribute);
        tmp_args_element_name_5 = var_attribute;
        CHECK_OBJECT(par_length);
        tmp_args_element_name_6 = par_length;
        CHECK_OBJECT(par_start);
        tmp_args_element_name_7 = par_start;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_num_written);
        tmp_args_element_name_9 = var_num_written;
        frame_3447c975519079ce2ab29d897b9d9832->m_frame.f_lineno = 149;
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_9);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_3447c975519079ce2ab29d897b9d9832->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_8);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3447c975519079ce2ab29d897b9d9832);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3447c975519079ce2ab29d897b9d9832);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3447c975519079ce2ab29d897b9d9832);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3447c975519079ce2ab29d897b9d9832, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3447c975519079ce2ab29d897b9d9832->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3447c975519079ce2ab29d897b9d9832, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3447c975519079ce2ab29d897b9d9832,
        type_description_1,
        par_stream_id,
        par_attr,
        par_length,
        par_start,
        var_handle,
        var_attribute,
        var_num_written
    );


    // Release cached frame if used for exception.
    if (frame_3447c975519079ce2ab29d897b9d9832 == cache_frame_3447c975519079ce2ab29d897b9d9832) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3447c975519079ce2ab29d897b9d9832);
        cache_frame_3447c975519079ce2ab29d897b9d9832 = NULL;
    }

    assertFrameObject(frame_3447c975519079ce2ab29d897b9d9832);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    par_stream_id = NULL;
    Py_XDECREF(par_attr);
    par_attr = NULL;
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    par_length = NULL;
    CHECK_OBJECT(par_start);
    Py_DECREF(par_start);
    par_start = NULL;
    CHECK_OBJECT(var_handle);
    Py_DECREF(var_handle);
    var_handle = NULL;
    CHECK_OBJECT(var_attribute);
    Py_DECREF(var_attribute);
    var_attribute = NULL;
    CHECK_OBJECT(var_num_written);
    Py_DECREF(var_num_written);
    var_num_written = NULL;
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

    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    par_stream_id = NULL;
    Py_XDECREF(par_attr);
    par_attr = NULL;
    Py_XDECREF(par_length);
    par_length = NULL;
    CHECK_OBJECT(par_start);
    Py_DECREF(par_start);
    par_start = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
    Py_XDECREF(var_attribute);
    var_attribute = NULL;
    Py_XDECREF(var_num_written);
    var_num_written = NULL;
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


static PyObject *impl_colorama$win32$$$function__11_SetConsoleTitle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_title = python_pars[0];
    struct Nuitka_FrameObject *frame_0a4c84e8cdfd4b05e2863831aabd7044;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0a4c84e8cdfd4b05e2863831aabd7044 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0a4c84e8cdfd4b05e2863831aabd7044)) {
        Py_XDECREF(cache_frame_0a4c84e8cdfd4b05e2863831aabd7044);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a4c84e8cdfd4b05e2863831aabd7044 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a4c84e8cdfd4b05e2863831aabd7044 = MAKE_FUNCTION_FRAME(codeobj_0a4c84e8cdfd4b05e2863831aabd7044, module_colorama$win32, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0a4c84e8cdfd4b05e2863831aabd7044->m_type_description == NULL);
    frame_0a4c84e8cdfd4b05e2863831aabd7044 = cache_frame_0a4c84e8cdfd4b05e2863831aabd7044;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0a4c84e8cdfd4b05e2863831aabd7044);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0a4c84e8cdfd4b05e2863831aabd7044) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_title);
        tmp_args_element_name_1 = par_title;
        frame_0a4c84e8cdfd4b05e2863831aabd7044->m_frame.f_lineno = 152;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a4c84e8cdfd4b05e2863831aabd7044);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a4c84e8cdfd4b05e2863831aabd7044);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a4c84e8cdfd4b05e2863831aabd7044);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0a4c84e8cdfd4b05e2863831aabd7044, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a4c84e8cdfd4b05e2863831aabd7044->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a4c84e8cdfd4b05e2863831aabd7044, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a4c84e8cdfd4b05e2863831aabd7044,
        type_description_1,
        par_title
    );


    // Release cached frame if used for exception.
    if (frame_0a4c84e8cdfd4b05e2863831aabd7044 == cache_frame_0a4c84e8cdfd4b05e2863831aabd7044) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0a4c84e8cdfd4b05e2863831aabd7044);
        cache_frame_0a4c84e8cdfd4b05e2863831aabd7044 = NULL;
    }

    assertFrameObject(frame_0a4c84e8cdfd4b05e2863831aabd7044);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    par_title = NULL;
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

    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    par_title = NULL;
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



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__10_FillConsoleOutputAttribute() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__10_FillConsoleOutputAttribute,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3447c975519079ce2ab29d897b9d9832,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__11_SetConsoleTitle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__11_SetConsoleTitle,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0a4c84e8cdfd4b05e2863831aabd7044,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__1_lambda,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_af19dc711db59011c6da20c48587ed4f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__2_lambda,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_044fbffd99bf86d13a5cd8a5fc07f767,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__3___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__3___str__,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_8a5c00842c38d371e71d5a0461241171,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__4__winapi_test() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__4__winapi_test,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e3eb4c9c796f4cd0d6bfe34f72b4adb0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__5_winapi_test() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__5_winapi_test,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_182af3d987288c1b9cdf9502b66c859f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__6_GetConsoleScreenBufferInfo(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__6_GetConsoleScreenBufferInfo,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c62542c5278409e9d0f135b7b951d25a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__7_SetConsoleTextAttribute() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__7_SetConsoleTextAttribute,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_587db3cd53081dbbb4d0c57026cfecb5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__8_SetConsoleCursorPosition(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__8_SetConsoleCursorPosition,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9d0b43a04977f3dafea48d026b58047f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$win32$$$function__9_FillConsoleOutputCharacter() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$win32$$$function__9_FillConsoleOutputCharacter,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_550fdc12c280509674f71bda38b0175a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$win32,
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

function_impl_code functable_colorama$win32[] = {
    impl_colorama$win32$$$function__1_lambda,
    impl_colorama$win32$$$function__2_lambda,
    impl_colorama$win32$$$function__3___str__,
    impl_colorama$win32$$$function__4__winapi_test,
    impl_colorama$win32$$$function__5_winapi_test,
    impl_colorama$win32$$$function__6_GetConsoleScreenBufferInfo,
    impl_colorama$win32$$$function__7_SetConsoleTextAttribute,
    impl_colorama$win32$$$function__8_SetConsoleCursorPosition,
    impl_colorama$win32$$$function__9_FillConsoleOutputCharacter,
    impl_colorama$win32$$$function__10_FillConsoleOutputAttribute,
    impl_colorama$win32$$$function__11_SetConsoleTitle,
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

    function_impl_code *current = functable_colorama$win32;
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

    if (offset > sizeof(functable_colorama$win32) || offset < 0) {
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
        functable_colorama$win32[offset],
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
        module_colorama$win32,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "colorama.win32";

// Internal entry point for module code.
PyObject *modulecode_colorama$win32(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_colorama$win32 = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("colorama.win32: Skipping module init, already done.\n");
#endif

        return module_colorama$win32;
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
    PRINT_STRING("colorama.win32: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("colorama.win32: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("colorama.win32: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcolorama$win32\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_colorama$win32 = MODULE_DICT(module_colorama$win32);

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
        moduledict_colorama$win32,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_colorama$win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_colorama$win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_colorama$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_colorama$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_colorama$win32);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_colorama$win32);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_0d8e7fb1f8be264a61d8fed451ca264b;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_0d8e7fb1f8be264a61d8fed451ca264b = MAKE_MODULE_FRAME(codeobj_0d8e7fb1f8be264a61d8fed451ca264b, module_colorama$win32);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_0d8e7fb1f8be264a61d8fed451ca264b);
    assert(Py_REFCNT(frame_0d8e7fb1f8be264a61d8fed451ca264b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[43];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[46], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[47], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_5);
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[51];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_colorama$win32;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[24];
        frame_0d8e7fb1f8be264a61d8fed451ca264b->m_frame.f_lineno = 8;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[51];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_colorama$win32;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[52];
        tmp_level_name_2 = mod_consts[24];
        frame_0d8e7fb1f8be264a61d8fed451ca264b->m_frame.f_lineno = 9;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_colorama$win32,
                mod_consts[53],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[53]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_called_name_1 == NULL));
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[54]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        frame_0d8e7fb1f8be264a61d8fed451ca264b->m_frame.f_lineno = 10;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[51];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_colorama$win32;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[56];
        tmp_level_name_3 = mod_consts[24];
        frame_0d8e7fb1f8be264a61d8fed451ca264b->m_frame.f_lineno = 11;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_colorama$win32,
                mod_consts[33],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[33]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_10);
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

    {
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_11;
    }
    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_0d8e7fb1f8be264a61d8fed451ca264b, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_0d8e7fb1f8be264a61d8fed451ca264b, exception_keeper_lineno_1);
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
        tmp_compexpr_right_1 = mod_consts[57];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = Py_None;
        UPDATE_STRING_DICT0(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_colorama$win32$$$function__1_lambda();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_colorama$win32$$$function__2_lambda();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_14);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 7;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0d8e7fb1f8be264a61d8fed451ca264b->m_frame) frame_0d8e7fb1f8be264a61d8fed451ca264b->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
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
    {
        bool tmp_condition_result_2;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_try_except_1__unhandled_indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[51];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_colorama$win32;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[61];
        tmp_level_name_4 = mod_consts[24];
        frame_0d8e7fb1f8be264a61d8fed451ca264b->m_frame.f_lineno = 17;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_colorama$win32,
                mod_consts[15],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[15]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_colorama$win32,
                mod_consts[62],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[62]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_colorama$win32,
                mod_consts[31],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[31]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_colorama$win32,
                mod_consts[63],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[63]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_19);
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_name_2;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[64]);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_20);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_assign_source_21 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_22 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[65];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_3 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = mod_consts[24];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[65];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[65];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 21;

        goto try_except_handler_4;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_4 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[66]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_5 = tmp_class_creation_1__metaclass;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[66]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[13];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_0d8e7fb1f8be264a61d8fed451ca264b->m_frame.f_lineno = 21;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_6;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_6 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_6, mod_consts[67]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[68];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[69];
        tmp_getattr_default_1 = mod_consts[70];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_name_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[69]);
            Py_DECREF(tmp_expression_name_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 21;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[13];
        tmp_res = PyObject_SetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        if (isFrameUnusable(cache_frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2)) {
            Py_XDECREF(cache_frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2 = MAKE_FUNCTION_FRAME(codeobj_aec052d7b0d1fd144fa1cb3a397bc7b9, module_colorama$win32, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2->m_type_description == NULL);
        frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2 = cache_frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[1];
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = PyObject_GetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21, mod_consts[23]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[23]);

                    if (unlikely(tmp_tuple_element_4 == NULL)) {
                        tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                    }

                    if (tmp_tuple_element_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 24;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }
                    Py_INCREF(tmp_tuple_element_4);
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dictset_value = PyList_New(5);
            {
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_tuple_element_8;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_5 = mod_consts[5];
                tmp_list_element_1 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21, mod_consts[23]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 25;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
                tmp_tuple_element_6 = mod_consts[6];
                tmp_list_element_1 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_name_8;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
                    tmp_expression_name_8 = PyObject_GetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21, mod_consts[33]);

                    if (tmp_expression_name_8 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

                            if (unlikely(tmp_expression_name_8 == NULL)) {
                                tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
                            }

                            if (tmp_expression_name_8 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 26;
                                type_description_2 = "o";
                                goto tuple_build_exception_4;
                            }
                            Py_INCREF(tmp_expression_name_8);
                        }
                    }

                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[38]);
                    Py_DECREF(tmp_expression_name_8);
                    if (tmp_tuple_element_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 26;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
                tmp_tuple_element_7 = mod_consts[7];
                tmp_list_element_1 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_name_9;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
                    tmp_expression_name_9 = PyObject_GetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21, mod_consts[33]);

                    if (tmp_expression_name_9 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

                            if (unlikely(tmp_expression_name_9 == NULL)) {
                                tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
                            }

                            if (tmp_expression_name_9 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 27;
                                type_description_2 = "o";
                                goto tuple_build_exception_5;
                            }
                            Py_INCREF(tmp_expression_name_9);
                        }
                    }

                    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[75]);
                    Py_DECREF(tmp_expression_name_9);
                    if (tmp_tuple_element_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 27;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_7);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_1);
                tmp_tuple_element_8 = mod_consts[12];
                tmp_list_element_1 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21, mod_consts[23]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 28;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_8);
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21, mod_consts[76], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_colorama$win32$$$function__3___str__();

        tmp_res = PyObject_SetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21, mod_consts[77], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2 == cache_frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2);
            cache_frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2 = NULL;
        }

        assertFrameObject(frame_aec052d7b0d1fd144fa1cb3a397bc7b9_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_3 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_compexpr_right_3 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
            assert(tmp_condition_result_8 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21, mod_consts[79], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_9 = mod_consts[13];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_9 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_0d8e7fb1f8be264a61d8fed451ca264b->m_frame.f_lineno = 21;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_27 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21);
        locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21 = NULL;
        goto try_return_handler_5;
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

        Py_DECREF(locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21);
        locals_colorama$win32$$$class__1_CONSOLE_SCREEN_BUFFER_INFO_21 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 21;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_27);
    }
    goto try_end_4;
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

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
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
        PyObject *tmp_assign_source_29;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_expression_name_11;
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[80]);
        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[81]);
        Py_DECREF(tmp_expression_name_10);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_list_element_2;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_assattr_target_3;
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_list_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[34]);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_3 = PyList_New(1);
        PyList_SET_ITEM(tmp_assattr_name_3, 0, tmp_list_element_2);
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_3);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[82], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_assattr_target_4;
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[83]);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_4);

            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[84], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_expression_name_15;
        tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_15 == NULL)) {
            tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[80]);
        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[27]);
        Py_DECREF(tmp_expression_name_14);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_list_element_3;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_assattr_target_5;
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_list_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[83]);
        if (tmp_list_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_5 = PyList_New(2);
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_2;
            PyList_SET_ITEM(tmp_assattr_name_5, 0, tmp_list_element_3);
            tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_called_name_4 == NULL)) {
                tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
            }

            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto list_build_exception_2;
            }
            tmp_args_element_name_2 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_args_element_name_2 == NULL)) {
                tmp_args_element_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_args_element_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto list_build_exception_2;
            }
            frame_0d8e7fb1f8be264a61d8fed451ca264b->m_frame.f_lineno = 48;
            tmp_list_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_2);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assattr_name_5, 1, tmp_list_element_3);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assattr_name_5);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_5);

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[82], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_assattr_target_6;
        tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_name_17 == NULL)) {
            tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[85]);
        if (tmp_assattr_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_6);

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[84], tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_expression_name_19;
        tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_19 == NULL)) {
            tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[80]);
        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[59]);
        Py_DECREF(tmp_expression_name_18);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_list_element_4;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_assattr_target_7;
        tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_name_20 == NULL)) {
            tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_list_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[83]);
        if (tmp_list_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_7 = PyList_New(2);
        {
            PyObject *tmp_expression_name_21;
            PyList_SET_ITEM(tmp_assattr_name_7, 0, tmp_list_element_4);
            tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_name_21 == NULL)) {
                tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_name_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto list_build_exception_3;
            }
            tmp_list_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[38]);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_assattr_name_7, 1, tmp_list_element_4);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_assattr_name_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_assattr_target_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_7);

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[82], tmp_assattr_name_7);
        Py_DECREF(tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_assattr_target_8;
        tmp_expression_name_22 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_name_22 == NULL)) {
            tmp_expression_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[85]);
        if (tmp_assattr_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_assattr_target_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_8);

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[84], tmp_assattr_name_8);
        Py_DECREF(tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_expression_name_24;
        tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_24 == NULL)) {
            tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[80]);
        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[86]);
        Py_DECREF(tmp_expression_name_23);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_list_element_5;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_assattr_target_9;
        tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_name_25 == NULL)) {
            tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_list_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[83]);
        if (tmp_list_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_9 = PyList_New(2);
        PyList_SET_ITEM(tmp_assattr_name_9, 0, tmp_list_element_5);
        tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_list_element_5 == NULL)) {
            tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto list_build_exception_4;
        }
        PyList_SET_ITEM0(tmp_assattr_name_9, 1, tmp_list_element_5);
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_assattr_name_9);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_assattr_target_9 == NULL)) {
            tmp_assattr_target_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_assattr_target_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_9);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[82], tmp_assattr_name_9);
        Py_DECREF(tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_assattr_target_10;
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[85]);
        if (tmp_assattr_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_assattr_target_10 == NULL)) {
            tmp_assattr_target_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_assattr_target_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_10);

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[84], tmp_assattr_name_10);
        Py_DECREF(tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_expression_name_28;
        tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_28 == NULL)) {
            tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[80]);
        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[87]);
        Py_DECREF(tmp_expression_name_27);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_list_element_6;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_assattr_target_11;
        tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_name_29 == NULL)) {
            tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_list_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[83]);
        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_11 = PyList_New(5);
        {
            PyObject *tmp_expression_name_30;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_expression_name_31;
            PyList_SET_ITEM(tmp_assattr_name_11, 0, tmp_list_element_6);
            tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_list_element_6 == NULL)) {
                tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
            }

            if (tmp_list_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM0(tmp_assattr_name_11, 1, tmp_list_element_6);
            tmp_expression_name_30 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_name_30 == NULL)) {
                tmp_expression_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_name_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto list_build_exception_5;
            }
            tmp_list_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[34]);
            if (tmp_list_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_assattr_name_11, 2, tmp_list_element_6);
            tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_list_element_6 == NULL)) {
                tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
            }

            if (tmp_list_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM0(tmp_assattr_name_11, 3, tmp_list_element_6);
            tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_called_name_5 == NULL)) {
                tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
            }

            if (tmp_called_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto list_build_exception_5;
            }
            tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_name_31 == NULL)) {
                tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_name_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto list_build_exception_5;
            }
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[34]);
            if (tmp_args_element_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto list_build_exception_5;
            }
            frame_0d8e7fb1f8be264a61d8fed451ca264b->m_frame.f_lineno = 72;
            tmp_list_element_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_list_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_assattr_name_11, 4, tmp_list_element_6);
        }
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_assattr_name_11);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_assattr_target_11 == NULL)) {
            tmp_assattr_target_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_assattr_target_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_11);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[82], tmp_assattr_name_11);
        Py_DECREF(tmp_assattr_name_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_assattr_target_12;
        tmp_expression_name_32 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_name_32 == NULL)) {
            tmp_expression_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[85]);
        if (tmp_assattr_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_assattr_target_12 == NULL)) {
            tmp_assattr_target_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_assattr_target_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_12);

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[84], tmp_assattr_name_12);
        Py_DECREF(tmp_assattr_name_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_expression_name_34;
        tmp_expression_name_34 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_34 == NULL)) {
            tmp_expression_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[80]);
        if (tmp_expression_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[88]);
        Py_DECREF(tmp_expression_name_33);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_list_element_7;
        PyObject *tmp_expression_name_35;
        PyObject *tmp_assattr_target_13;
        tmp_expression_name_35 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_name_35 == NULL)) {
            tmp_expression_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_list_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[83]);
        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_13 = PyList_New(5);
        {
            PyObject *tmp_expression_name_36;
            PyObject *tmp_expression_name_37;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_expression_name_38;
            PyList_SET_ITEM(tmp_assattr_name_13, 0, tmp_list_element_7);
            tmp_expression_name_36 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_name_36 == NULL)) {
                tmp_expression_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_name_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto list_build_exception_6;
            }
            tmp_list_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[38]);
            if (tmp_list_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_assattr_name_13, 1, tmp_list_element_7);
            tmp_expression_name_37 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_name_37 == NULL)) {
                tmp_expression_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_name_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto list_build_exception_6;
            }
            tmp_list_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, mod_consts[34]);
            if (tmp_list_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_assattr_name_13, 2, tmp_list_element_7);
            tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_list_element_7 == NULL)) {
                tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
            }

            if (tmp_list_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM0(tmp_assattr_name_13, 3, tmp_list_element_7);
            tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_called_name_6 == NULL)) {
                tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
            }

            if (tmp_called_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto list_build_exception_6;
            }
            tmp_expression_name_38 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_name_38 == NULL)) {
                tmp_expression_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_name_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto list_build_exception_6;
            }
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[34]);
            if (tmp_args_element_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto list_build_exception_6;
            }
            frame_0d8e7fb1f8be264a61d8fed451ca264b->m_frame.f_lineno = 82;
            tmp_list_element_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_list_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_assattr_name_13, 4, tmp_list_element_7);
        }
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_assattr_name_13);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_assattr_target_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_13);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[82], tmp_assattr_name_13);
        Py_DECREF(tmp_assattr_name_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_assattr_target_14;
        tmp_expression_name_39 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_name_39 == NULL)) {
            tmp_expression_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[85]);
        if (tmp_assattr_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_assattr_target_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_14);

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[84], tmp_assattr_name_14);
        Py_DECREF(tmp_assattr_name_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_expression_name_40;
        PyObject *tmp_expression_name_41;
        tmp_expression_name_41 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_name_41 == NULL)) {
            tmp_expression_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_40 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[80]);
        if (tmp_expression_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_40, mod_consts[89]);
        Py_DECREF(tmp_expression_name_40);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_list_element_8;
        PyObject *tmp_expression_name_42;
        PyObject *tmp_assattr_target_15;
        tmp_expression_name_42 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_name_42 == NULL)) {
            tmp_expression_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_list_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_42, mod_consts[90]);
        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_15 = PyList_New(1);
        PyList_SET_ITEM(tmp_assattr_name_15, 0, tmp_list_element_8);
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_assattr_target_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_15);

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[82], tmp_assattr_name_15);
        Py_DECREF(tmp_assattr_name_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_16;
        PyObject *tmp_expression_name_43;
        PyObject *tmp_assattr_target_16;
        tmp_expression_name_43 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_name_43 == NULL)) {
            tmp_expression_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_assattr_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_43, mod_consts[85]);
        if (tmp_assattr_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_assattr_target_16 == NULL)) {
            tmp_assattr_target_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_assattr_target_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_16);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[84], tmp_assattr_name_16);
        Py_DECREF(tmp_assattr_name_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION_colorama$win32$$$function__4__winapi_test();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_colorama$win32$$$function__5_winapi_test();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_10;
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_10);


        tmp_assign_source_38 = MAKE_FUNCTION_colorama$win32$$$function__6_GetConsoleScreenBufferInfo(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;


        tmp_assign_source_39 = MAKE_FUNCTION_colorama$win32$$$function__7_SetConsoleTextAttribute();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[91];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_40 = MAKE_FUNCTION_colorama$win32$$$function__8_SetConsoleCursorPosition(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;


        tmp_assign_source_41 = MAKE_FUNCTION_colorama$win32$$$function__9_FillConsoleOutputCharacter();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;


        tmp_assign_source_42 = MAKE_FUNCTION_colorama$win32$$$function__10_FillConsoleOutputAttribute();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;


        tmp_assign_source_43 = MAKE_FUNCTION_colorama$win32$$$function__11_SetConsoleTitle();

        UPDATE_STRING_DICT1(moduledict_colorama$win32, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_43);
    }
    branch_no_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0d8e7fb1f8be264a61d8fed451ca264b);
#endif
    popFrameStack();

    assertFrameObject(frame_0d8e7fb1f8be264a61d8fed451ca264b);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0d8e7fb1f8be264a61d8fed451ca264b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d8e7fb1f8be264a61d8fed451ca264b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d8e7fb1f8be264a61d8fed451ca264b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d8e7fb1f8be264a61d8fed451ca264b, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;

    return module_colorama$win32;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

