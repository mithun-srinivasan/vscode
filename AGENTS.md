# AGENTS.md

**This is NOT the VS Code editor source.** It is a personal learning sandbox (`mithun-srinivasan/vscode` on GitHub) with standalone programming exercises in multiple languages.

## Structure

- Flat root directory with loose `.java`, `.c`, `.cpp`, `.py` files, plus a `Hello World/` subdirectory (note: space in name — quote in shell) with examples in 10 languages (Java, C, C++, Python, Go, JS, Kotlin, PHP, Rust, C#).
- Python venvs at `.venv/` and `.venv-1/` (Jupyter, numpy, tensorboard, ipython).
- A `file.ipynb` Jupyter notebook and loose `.md` / `.jpg` files at root.
- No `src/`, `lib/`, `packages/`, or monorepo layout.

## Tooling

- **No build system**, **no package manager**, **no test framework**, **no CI**, **no linter**, **no formatter**, **no typechecker**.
- C/C++ toolchain is MinGW gcc at `C:/MinGW/bin/gcc.exe` (configured in `.vscode/settings.json`).
- Files are compiled/run ad-hoc per language:
  - Java: `javac File.java && java File`
  - C/C++: `gcc File.c -o File && ./File`
  - Python: `python File.py`
- Compiled artifacts (`.class`, `.exe`) are tracked in git — there is no `.gitignore`.

## Conventions

- No existing instruction files (no `opencode.json`, `.cursorrules`, `CLAUDE.md`, etc.).
- All commits go directly to `main` branch.
- No testing, linting, or verification expected — just standalone code.
