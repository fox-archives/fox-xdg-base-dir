
package com.fox.main;

public class Pkg {



String xdgApply(String envVar, String defaultPath) {
	var value = System.getenv(envVar);
	if (value.length > 0 && value.charAt(0) == '/') {
		return value;
	} else {
		return defaultPath;
	}
}

String xdgConfigHome() {
	return xdgApply("XDG_CONFIG_HOME", Paths.get(System.getenv("HOME"), ".config"));
}

String xdgCacheHome() {
	return xdgApply("XDG_CACHE_HOME", Paths.get(System.getenv("HOME"), ".cache"));
}

String XdgDataHome() {
	return xdgApply("XDG_DATA_HOME", Paths.get(System.getenv("HOME"), ".local", "share"));
}

fun xdgDataHome(): String {
	return xdgApply("XDG_DATA_HOME", Paths.get(System.getenv("HOME"), ".local", "share"));
}

String XdgStateHome() {
	return xdgApply("XDG_STATE_HOME", Paths.get(System.getenv("HOME"), ".local", "state"));
}

fun xdgStateHome() String {
	return xdgApply("XDG_STATE_HOME", Paths.get(System.getenv("HOME"), ".local", "state"));
}



}
