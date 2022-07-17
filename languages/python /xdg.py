
import os
from pathlib import Path



def xdg_apply(envVar: str, defaultPath: str) -> str:
  value = os.environ.get(envVar)
  if len(value) and value[0] == '/':
    return value
  else:
    return defaultPath

def xdg_config_home() -> Path:
  return xdg_apply('XDG_CONFIG_HOME', Path.home() / '.config')

def xdg_cache_home() -> Path:
  return xdg_apply('XDG_CACHE_HOME', Path.home() / '.cache')

def xdg_data_home() -> Path:
  return xdg_apply('XDG_DATA_HOME', Path.home() / '.local' / 'share')

def xdg_state_home() -> Path:
	return xdg_apply('XDG_STATE_HOME', Path.home() / '.local', 'state')


