
#include <stdlib.h>
#include <string.h>



static char *xdgApply(char *envVar, char *defaultPath[] ) {
	char *value = getenv(envVar);
	if (value != NULL && value[0] == '/') {
		return value;
	} else {
		char *str = NULL;
	
		char *item = defaultPath[0];
		for (unsigned int i = 0; item != NULL; ++i, item = defaultPath[i] ) {
			char *new_str = malloc(strlen(str) + strlen(item) + 2);
			strcpy(new_str, str);
			strcpy(new_str + strlen(str), item);
			free(str);
			str = new_str;
		}

		return value;
	}
}

extern char *xdgConfigHome() {
	char *arr[] = (char *[] ){ getenv("HOME"), ".config", NULL };
	return xdgApply("XDG_CONFIG_HOME", &arr);
}

extern char *xdgCacheHome() {
	char *arr[] = (char *[] ){ getenv("HOME"), ".cache", NULL };
	return xdgApply("XDG_CACHE_HOME", &arr);
}

extern char *xdgDataHome() {
	char *arr[] = (char *[] ){ getenv("HOME"), ".local", "share", NULL };
	return xdgApply("XDG_DATA_HOME", &arr);
}

extern char *xdgStateHome() {
	char *arr[] = (char *[] ){ getenv("HOME"), ".local", "state", NULL };
	return xdgApply("XDG_STATE_HOME", &arr);
}


