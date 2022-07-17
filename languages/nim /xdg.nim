
import std/os
import strutils



proc xdgApply(envVar: string, defaultPath: string): string =
  var value = getEnv(envVar)
  if value and startsWith(value, '/'):
    return value
  else:
    return defaultPath

proc xdgConfigHome*(): string =
  return xdgApply("XDG_CONFIG_HOME", joinPath(os.getEnv("HOME"), ".config"))

proc xdgCacheHome*(): string =
  return xdgApply("XDG_CACHE_HOME", joinPath(os.getEnv("HOME"), ".cache"))

proc xdgDataHome*(): string =
  return xdgApply("XDG_DATA_HOME", joinPath(os.getEnv("HOME"), ".local", "share"))

proc xdgStateHome*(): string =
  return xdgApply("XDG_STATE_HOME", joinPath(os.getEnv("HOME"), ".local", "state"))


