
package com.fox.main;



fun xdgApply(envVar: String, defaultPath: string): String {
	val val = System.getenv(envVar)
	if (value.length > 0 && value.charAt(0) == '/') {
		return value
	} else {
		return defaultPath
	}
}

fun xdgConfigHome(): String {
	return xdgApply("XDG_CONFIG_HOME", Paths.get(System.getenv("HOME"), ".config"));
}

fun xdgCacheHome(): String {
	return xdgApply("XDG_CACHE_HOME", Paths.get(System.getenv("HOME"), ".cache"));
}


