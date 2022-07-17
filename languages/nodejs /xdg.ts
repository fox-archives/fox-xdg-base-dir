
import * as path from 'node:path'



function xdgApply(envVar: string, defaultPath: string): string {
	const value = process.env.envVar || ''
	if (value[0] === '/') {
		return value
	} else {
		return defaultPath
	}
}

export function xdgConfigHome(): string {
	return xdgApply('XDG_CONFIG_HOME', path.join(process.env.HOME, '.config'))
}

export function xdgCacheHome(): string {
	return xdgApply('XDG_CACHE_HOME', path.join(process.env.HOME, '.cache'))
}

export function xdgDataHome(): string {
	return xdgApply('XDG_DATA_HOME', path.join(process.env.HOME, '.local', 'share'))
}

export function xdgStateHome(): string {
	return xdgApply('XDG_STATE_HOME', path.join(process.env.HOME, '.local', 'state'))
}


