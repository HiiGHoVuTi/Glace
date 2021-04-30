
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 0 > 0
static unsigned char *bytecode_data[0];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_funcs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_make(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_next_gen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$_version_info(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$converters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$setters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_attr$validators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$ansi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$argparse_completer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$argparse_custom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$clipboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$cmd2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$command_definition(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$decorators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$history(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$parsing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$plugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$py_bridge(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$rl_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$table_creator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$transcript(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cmd2$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$ansi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$ansitowin32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$initialise(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$win32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$winterm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_progressbar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_progressbar$__about__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_progressbar$bar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_progressbar$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_progressbar$shortcuts(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_progressbar$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_progressbar$widgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyperclip(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$clipboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$clipboard$ironpython_clipboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$clipboard$no_clipboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$clipboard$win32_clipboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$console(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$console$ansi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$console$console(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$console$event(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$console$ironpython_console(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$keysyms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$keysyms$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$keysyms$ironpython_keysyms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$keysyms$keysyms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$keysyms$winconstants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$lineeditor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$lineeditor$history(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$lineeditor$lineobj(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$lineeditor$wordmatcher(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$logger(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$modes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$modes$basemode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$modes$emacs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$modes$notemacs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$modes$vi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$py3k_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$release(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$rlmain(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline3$unicode_helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_python_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_python_utils$converters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_python_utils$terminal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_python_utils$time(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin32_bootstrap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_readline(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_wcwidth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_wcwidth$table_wide(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_wcwidth$table_zero(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_wcwidth$unicode_versions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_wcwidth$wcwidth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, },
    {"attr", modulecode_attr, 0, 0, NUITKA_PACKAGE_FLAG},
    {"attr._compat", modulecode_attr$_compat, 0, 0, },
    {"attr._config", modulecode_attr$_config, 0, 0, },
    {"attr._funcs", modulecode_attr$_funcs, 0, 0, },
    {"attr._make", modulecode_attr$_make, 0, 0, },
    {"attr._next_gen", modulecode_attr$_next_gen, 0, 0, },
    {"attr._version_info", modulecode_attr$_version_info, 0, 0, },
    {"attr.converters", modulecode_attr$converters, 0, 0, },
    {"attr.exceptions", modulecode_attr$exceptions, 0, 0, },
    {"attr.filters", modulecode_attr$filters, 0, 0, },
    {"attr.setters", modulecode_attr$setters, 0, 0, },
    {"attr.validators", modulecode_attr$validators, 0, 0, },
    {"cmd2", modulecode_cmd2, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cmd2.ansi", modulecode_cmd2$ansi, 0, 0, },
    {"cmd2.argparse_completer", modulecode_cmd2$argparse_completer, 0, 0, },
    {"cmd2.argparse_custom", modulecode_cmd2$argparse_custom, 0, 0, },
    {"cmd2.clipboard", modulecode_cmd2$clipboard, 0, 0, },
    {"cmd2.cmd2", modulecode_cmd2$cmd2, 0, 0, },
    {"cmd2.command_definition", modulecode_cmd2$command_definition, 0, 0, },
    {"cmd2.constants", modulecode_cmd2$constants, 0, 0, },
    {"cmd2.decorators", modulecode_cmd2$decorators, 0, 0, },
    {"cmd2.exceptions", modulecode_cmd2$exceptions, 0, 0, },
    {"cmd2.history", modulecode_cmd2$history, 0, 0, },
    {"cmd2.parsing", modulecode_cmd2$parsing, 0, 0, },
    {"cmd2.plugin", modulecode_cmd2$plugin, 0, 0, },
    {"cmd2.py_bridge", modulecode_cmd2$py_bridge, 0, 0, },
    {"cmd2.rl_utils", modulecode_cmd2$rl_utils, 0, 0, },
    {"cmd2.table_creator", modulecode_cmd2$table_creator, 0, 0, },
    {"cmd2.transcript", modulecode_cmd2$transcript, 0, 0, },
    {"cmd2.utils", modulecode_cmd2$utils, 0, 0, },
    {"colorama", modulecode_colorama, 0, 0, NUITKA_PACKAGE_FLAG},
    {"colorama.ansi", modulecode_colorama$ansi, 0, 0, },
    {"colorama.ansitowin32", modulecode_colorama$ansitowin32, 0, 0, },
    {"colorama.initialise", modulecode_colorama$initialise, 0, 0, },
    {"colorama.win32", modulecode_colorama$win32, 0, 0, },
    {"colorama.winterm", modulecode_colorama$winterm, 0, 0, },
    {"progressbar", modulecode_progressbar, 0, 0, NUITKA_PACKAGE_FLAG},
    {"progressbar.__about__", modulecode_progressbar$__about__, 0, 0, },
    {"progressbar.bar", modulecode_progressbar$bar, 0, 0, },
    {"progressbar.base", modulecode_progressbar$base, 0, 0, },
    {"progressbar.shortcuts", modulecode_progressbar$shortcuts, 0, 0, },
    {"progressbar.utils", modulecode_progressbar$utils, 0, 0, },
    {"progressbar.widgets", modulecode_progressbar$widgets, 0, 0, },
    {"pyperclip", modulecode_pyperclip, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pyreadline3", modulecode_pyreadline3, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pyreadline3.clipboard", modulecode_pyreadline3$clipboard, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pyreadline3.clipboard.ironpython_clipboard", modulecode_pyreadline3$clipboard$ironpython_clipboard, 0, 0, },
    {"pyreadline3.clipboard.no_clipboard", modulecode_pyreadline3$clipboard$no_clipboard, 0, 0, },
    {"pyreadline3.clipboard.win32_clipboard", modulecode_pyreadline3$clipboard$win32_clipboard, 0, 0, },
    {"pyreadline3.console", modulecode_pyreadline3$console, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pyreadline3.console.ansi", modulecode_pyreadline3$console$ansi, 0, 0, },
    {"pyreadline3.console.console", modulecode_pyreadline3$console$console, 0, 0, },
    {"pyreadline3.console.event", modulecode_pyreadline3$console$event, 0, 0, },
    {"pyreadline3.console.ironpython_console", modulecode_pyreadline3$console$ironpython_console, 0, 0, },
    {"pyreadline3.error", modulecode_pyreadline3$error, 0, 0, },
    {"pyreadline3.keysyms", modulecode_pyreadline3$keysyms, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pyreadline3.keysyms.common", modulecode_pyreadline3$keysyms$common, 0, 0, },
    {"pyreadline3.keysyms.ironpython_keysyms", modulecode_pyreadline3$keysyms$ironpython_keysyms, 0, 0, },
    {"pyreadline3.keysyms.keysyms", modulecode_pyreadline3$keysyms$keysyms, 0, 0, },
    {"pyreadline3.keysyms.winconstants", modulecode_pyreadline3$keysyms$winconstants, 0, 0, },
    {"pyreadline3.lineeditor", modulecode_pyreadline3$lineeditor, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pyreadline3.lineeditor.history", modulecode_pyreadline3$lineeditor$history, 0, 0, },
    {"pyreadline3.lineeditor.lineobj", modulecode_pyreadline3$lineeditor$lineobj, 0, 0, },
    {"pyreadline3.lineeditor.wordmatcher", modulecode_pyreadline3$lineeditor$wordmatcher, 0, 0, },
    {"pyreadline3.logger", modulecode_pyreadline3$logger, 0, 0, },
    {"pyreadline3.modes", modulecode_pyreadline3$modes, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pyreadline3.modes.basemode", modulecode_pyreadline3$modes$basemode, 0, 0, },
    {"pyreadline3.modes.emacs", modulecode_pyreadline3$modes$emacs, 0, 0, },
    {"pyreadline3.modes.notemacs", modulecode_pyreadline3$modes$notemacs, 0, 0, },
    {"pyreadline3.modes.vi", modulecode_pyreadline3$modes$vi, 0, 0, },
    {"pyreadline3.py3k_compat", modulecode_pyreadline3$py3k_compat, 0, 0, },
    {"pyreadline3.release", modulecode_pyreadline3$release, 0, 0, },
    {"pyreadline3.rlmain", modulecode_pyreadline3$rlmain, 0, 0, },
    {"pyreadline3.unicode_helper", modulecode_pyreadline3$unicode_helper, 0, 0, },
    {"python_utils", modulecode_python_utils, 0, 0, NUITKA_PACKAGE_FLAG},
    {"python_utils.converters", modulecode_python_utils$converters, 0, 0, },
    {"python_utils.terminal", modulecode_python_utils$terminal, 0, 0, },
    {"python_utils.time", modulecode_python_utils$time, 0, 0, },
    {"pywin32_bootstrap", modulecode_pywin32_bootstrap, 0, 0, },
    {"readline", modulecode_readline, 0, 0, },
    {"six", modulecode_six, 0, 0, },
    {"wcwidth", modulecode_wcwidth, 0, 0, NUITKA_PACKAGE_FLAG},
    {"wcwidth.table_wide", modulecode_wcwidth$table_wide, 0, 0, },
    {"wcwidth.table_zero", modulecode_wcwidth$table_zero, 0, 0, },
    {"wcwidth.unicode_versions", modulecode_wcwidth$unicode_versions, 0, 0, },
    {"wcwidth.wcwidth", modulecode_wcwidth$wcwidth, 0, 0, },
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob()
{
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }


}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}


