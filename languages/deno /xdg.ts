
import * as path from 'https://deno.land/std/path/mod.ts'



function xdgApply(envVar: string, defaultPath: string): string {
	const value = Deno.env.get(envVar) || ''
	if (value[0] === '/') {
		return value
	} else {
		return defaultPath
	}
}

export function xdgConfigHome(): string {
	return xdgApply('XDG_CONFIG_HOME', path.join(Deno.env.get('HOME'), '.config'))
}

export function xdgCacheHome(): string {
	return xdgApply('XDG_CACHE_HOME', path.join(Deno.env.get('HOME'), '.cache'))
}

export function xdgDataHome(): string {
	return xdgApply('XDG_DATA_HOME', path.join(Deno.env.get('HOME'), '.local', 'share'))
}

export function xdgStateHome(): string {
	return xdgApply('XDG_STATE_HOME', path.join(Deno.env.get('HOME'), '.local', 'state'))
}


