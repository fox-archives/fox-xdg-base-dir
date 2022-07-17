# shellcheck shell=bash

task.run() {
	deno run --allow-read --allow-write ~/repos/Groups/fox-lang/fox_lang/main.ts xdg.fox
}