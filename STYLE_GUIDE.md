# C Naming Conventions

Below are the naming conventions to be used for C/C++ in the framework.

This is based on the [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html#Naming).

## File Names

File names should be all lowercases and include underscores (_) to separate words. This holds true for directory names.

C++ files should have a `.cc` filename extension, C files should have a `.c` extension, and header files should have a `.h` extension. Files that rely on being textually included at specific points should end in `.inc`.

Python files should have a `.py` extension.

Do not use filenames that already exist in `/usr/include`, such as `db.h`

In general, make your filenames very specific. For example, use `http_server_logs.h` rather than `logs.h`.
