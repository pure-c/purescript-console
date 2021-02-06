#include <stdio.h>
#include <purescript.h>

PURS_FFI_FUNC_2(Effect_Console_log, x, _) {
	const purs_str_t *str = purs_any_force_string(x);
	fprintf(stdout, "%s\n", str->data);
	PURS_RC_RELEASE(str);
	return purs_any_null;
}

PURS_FFI_FUNC_2(Effect_Console_error, x, _) {
	const purs_str_t *str = purs_any_force_string(x);
	fprintf(stderr, "%s\n", str->data);
	PURS_RC_RELEASE(str);
	return purs_any_null;
}

PURS_FFI_FUNC_2(Effect_Console_warn, x, _) {
	const purs_str_t *str = purs_any_force_string(x);
	fprintf(stderr, "%s\n", str->data);
	PURS_RC_RELEASE(str);
	return purs_any_null;
}

PURS_FFI_FUNC_2(Effect_Console_info, x, _) {
	const purs_str_t *str = purs_any_force_string(x);
	fprintf(stderr, "%s\n", str->data);
	PURS_RC_RELEASE(str);
	return purs_any_null;
}
