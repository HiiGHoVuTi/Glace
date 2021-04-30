/* Generated code for Python module 'cmd2.constants'
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

/* The "module_cmd2$constants" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cmd2$constants;
PyDictObject *moduledict_cmd2$constants;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[59];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "cmd2.constants");

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
void checkModuleConstants_cmd2$constants(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "cmd2.constants");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0f9228318b98c00df9f2c3bc1d9028f6;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[2]; CHECK_OBJECT(module_filename_obj);
    codeobj_0f9228318b98c00df9f2c3bc1d9028f6 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[58], NULL, NULL, 0, 0, 0);
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

function_impl_code functable_cmd2$constants[] = {

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

    function_impl_code *current = functable_cmd2$constants;
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

    if (offset > sizeof(functable_cmd2$constants) || offset < 0) {
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
        functable_cmd2$constants[offset],
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
        module_cmd2$constants,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "cmd2.constants";

// Internal entry point for module code.
PyObject *modulecode_cmd2$constants(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_cmd2$constants = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("cmd2.constants: Skipping module init, already done.\n");
#endif

        return module_cmd2$constants;
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
    PRINT_STRING("cmd2.constants: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cmd2.constants: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cmd2.constants: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcmd2$constants\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_cmd2$constants = MODULE_DICT(module_cmd2$constants);

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
        moduledict_cmd2$constants,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cmd2$constants,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cmd2$constants, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cmd2$constants,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cmd2$constants, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cmd2$constants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cmd2$constants, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cmd2$constants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cmd2$constants);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cmd2$constants, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_cmd2$constants);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_cmd2$constants, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_0f9228318b98c00df9f2c3bc1d9028f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[2];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_0f9228318b98c00df9f2c3bc1d9028f6 = MAKE_MODULE_FRAME(codeobj_0f9228318b98c00df9f2c3bc1d9028f6, module_cmd2$constants);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_0f9228318b98c00df9f2c3bc1d9028f6);
    assert(Py_REFCNT(frame_0f9228318b98c00df9f2c3bc1d9028f6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[2];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[6], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0f9228318b98c00df9f2c3bc1d9028f6);
#endif
    popFrameStack();

    assertFrameObject(frame_0f9228318b98c00df9f2c3bc1d9028f6);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0f9228318b98c00df9f2c3bc1d9028f6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0f9228318b98c00df9f2c3bc1d9028f6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0f9228318b98c00df9f2c3bc1d9028f6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f9228318b98c00df9f2c3bc1d9028f6, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = LIST_COPY(mod_consts[10]);
        UPDATE_STRING_DICT1(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_list_element_1 == NULL));
        tmp_assign_source_9 = PyList_New(2);
        PyList_SET_ITEM0(tmp_assign_source_9, 0, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        assert(!(tmp_list_element_1 == NULL));
        PyList_SET_ITEM0(tmp_assign_source_9, 1, tmp_list_element_1);
        UPDATE_STRING_DICT1(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_list_element_2;
        tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_list_element_2 == NULL)) {
            tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_list_element_2 == NULL));
        tmp_assign_source_10 = PyList_New(3);
        PyList_SET_ITEM0(tmp_assign_source_10, 0, tmp_list_element_2);
        tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_list_element_2 == NULL)) {
            tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        assert(!(tmp_list_element_2 == NULL));
        PyList_SET_ITEM0(tmp_assign_source_10, 1, tmp_list_element_2);
        tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_list_element_2 == NULL)) {
            tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_list_element_2 == NULL));
        PyList_SET_ITEM0(tmp_assign_source_10, 2, tmp_list_element_2);
        UPDATE_STRING_DICT1(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = PyDict_Copy(mod_consts[28]);
        UPDATE_STRING_DICT1(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_cmd2$constants, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_29);
    }

    return module_cmd2$constants;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

