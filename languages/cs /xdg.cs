
package com.fox.main;

public class Pkg
{



	private String xdgApply()
	{

	}

	public String xdgConfigHome()
	{
		return xdgApply("XDG_CONFIG_HOME", Path.Combine(System.Environment.GetEnvironmentVariable("XDG_CONFIG_HOME"), ".config"));
	}

	public String xdgCacheHome()
	{
		return xdgApply("XDG_CACHE_HOME", Path.Combine(System.Environment.GetEnvironmentVariable("XDG_CACHE_HOME"), ".cache"));
	}

	public String xdgDataHome()
	{
		return xdgApply("XDG_DATA_HOME", Path.Combine(System.Environment.GetEnvironmentVariable("XDG_DATA_HOME"), ".local", "share"));
	}

	public String xdgStateHome()
	{
		return xdgApply("XDG_STATE_HOME", Path.Combine(System.Environment.GetEnvironmentVariable("XDG_STATE_HOME"), ".local", "state"));
	}



}
