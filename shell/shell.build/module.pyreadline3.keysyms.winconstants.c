/* Generated code for Python module 'pyreadline3.keysyms.winconstants'
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

/* The "module_pyreadline3$keysyms$winconstants" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyreadline3$keysyms$winconstants;
PyDictObject *moduledict_pyreadline3$keysyms$winconstants;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[323];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "pyreadline3.keysyms.winconstants");

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
void checkModuleConstants_pyreadline3$keysyms$winconstants(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "pyreadline3.keysyms.winconstants");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_4dca26bf0d116a3ab3c26adc18678198;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[1]; CHECK_OBJECT(module_filename_obj);
    codeobj_4dca26bf0d116a3ab3c26adc18678198 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[322], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_pyreadline3$keysyms$winconstants[] = {

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

    function_impl_code *current = functable_pyreadline3$keysyms$winconstants;
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

    if (offset > sizeof(functable_pyreadline3$keysyms$winconstants) || offset < 0) {
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
        functable_pyreadline3$keysyms$winconstants[offset],
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
        module_pyreadline3$keysyms$winconstants,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "pyreadline3.keysyms.winconstants";

// Internal entry point for module code.
PyObject *modulecode_pyreadline3$keysyms$winconstants(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_pyreadline3$keysyms$winconstants = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyreadline3.keysyms.winconstants: Skipping module init, already done.\n");
#endif

        return module_pyreadline3$keysyms$winconstants;
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
    PRINT_STRING("pyreadline3.keysyms.winconstants: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pyreadline3.keysyms.winconstants: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pyreadline3.keysyms.winconstants: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initpyreadline3$keysyms$winconstants\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_pyreadline3$keysyms$winconstants = MODULE_DICT(module_pyreadline3$keysyms$winconstants);

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
        moduledict_pyreadline3$keysyms$winconstants,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyreadline3$keysyms$winconstants,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyreadline3$keysyms$winconstants,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyreadline3$keysyms$winconstants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyreadline3$keysyms$winconstants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyreadline3$keysyms$winconstants);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pyreadline3$keysyms$winconstants);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_4dca26bf0d116a3ab3c26adc18678198;
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
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[1];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_4dca26bf0d116a3ab3c26adc18678198 = MAKE_MODULE_FRAME(codeobj_4dca26bf0d116a3ab3c26adc18678198, module_pyreadline3$keysyms$winconstants);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_4dca26bf0d116a3ab3c26adc18678198);
    assert(Py_REFCNT(frame_4dca26bf0d116a3ab3c26adc18678198) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[1];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[5], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        frame_4dca26bf0d116a3ab3c26adc18678198->m_frame.f_lineno = 3;
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
                (PyObject *)moduledict_pyreadline3$keysyms$winconstants,
                mod_consts[7],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[7]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyreadline3$keysyms$winconstants,
                mod_consts[9],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[9]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyreadline3$keysyms$winconstants,
                mod_consts[10],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[10]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_7);
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4dca26bf0d116a3ab3c26adc18678198);
#endif
    popFrameStack();

    assertFrameObject(frame_4dca26bf0d116a3ab3c26adc18678198);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4dca26bf0d116a3ab3c26adc18678198);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4dca26bf0d116a3ab3c26adc18678198, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4dca26bf0d116a3ab3c26adc18678198->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4dca26bf0d116a3ab3c26adc18678198, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[112];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[114];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[118];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[128];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[130];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[132];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[136];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[138];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[140];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[142];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[144];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[146];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[148];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[150];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[152];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[154];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[156];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[158];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[160];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[162];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[164];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[166];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[168];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[170];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[172];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[174];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[176];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[178];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[180];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[182];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[190];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[196];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[198];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[200];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[202];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[204];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[206];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[208];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[210];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[212];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[214];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[216];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[218];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[220];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[222];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[224];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[226];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[228];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[230];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[232];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[234];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[236];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[244];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[246];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[248];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[250];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[252];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[254];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[256];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[258];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[260];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[262];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[264];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[266];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[268];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[270];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[272];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[274];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[276];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[278];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[280];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[288];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[292];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[294];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[298];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[300];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[166];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[168];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[170];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[172];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = mod_consts[308];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[310];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[312];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[314];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[316];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[318];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[320];
        UPDATE_STRING_DICT0(moduledict_pyreadline3$keysyms$winconstants, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_172);
    }

    return module_pyreadline3$keysyms$winconstants;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

