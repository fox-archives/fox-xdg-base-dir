
#include <cstdlib>
#include <filesystem>
#include <string>



auto xdgApply(std::string envVar, std::string defaultPath) -> std::string {
  auto value = std::string(std::getenv(envVar.c_str()));
  if (value.size() > 0 && value.at(0) == '/') {
    return value;
  } else {
    return defaultPath;
  }
}

auto xdgConfigHome() -> std::string {
	return xdgApply("XDG_CONFIG_HOME", std::filesystem::path(std::getenv("HOME")) / ".config");
}

auto xdgCacheHome() -> std::string {
	return xdgApply("XDG_CACHE_HOME", std::filesystem::path(std::getenv("HOME")) / ".cache");
}

auto xdgDataHome() -> std::string {
	return xdgApply("XDG_DATA_HOME", std::filesystem::path(std::getenv("HOME")) / ".local" / "share");
}

auto xdgStateHome() -> std::string {
	return xdgApply("XDG_STATE_HOME", std::filesystem::path(std::getenv("HOME")) / ".local" / "state");
}


