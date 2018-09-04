#include <stdio.h>
#include "runtime/purescript.h"

PURS_FFI_FUNC_2(Effect_Console_log, x, _, {
	fprintf(stdout, "%s", purs_any_get_string(x)->data);
})

PURS_FFI_FUNC_2(Effect_Console_error, x, _, {
	fprintf(stderr, "%s", purs_any_get_string(x)->data);
})

PURS_FFI_FUNC_2(Effect_Console_warn, x, _, {
	fprintf(stderr, "%s", purs_any_get_string(x)->data);
})

PURS_FFI_FUNC_2(Effect_Console_info, x, _, {
	fprintf(stderr, "%s", purs_any_get_string(x)->data);
})
