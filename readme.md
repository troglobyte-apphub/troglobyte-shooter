# Troglobyte Shooter

### status

[![Linux Users](https://github.com/troglobyte-apphub/troglobyte-shooter/actions/workflows/ci_runner_linux.yml/badge.svg)](https://github.com/troglobyte-apphub/troglobyte-shooter/actions/workflows/ci_runner_linux.yml) [![MacOSX Users](https://github.com/troglobyte-apphub/troglobyte-shooter/actions/workflows/ci_runner_macosx.yml/badge.svg)](https://github.com/troglobyte-apphub/troglobyte-shooter/actions/workflows/ci_runner_macosx.yml) [![Windows Users](https://github.com/troglobyte-apphub/troglobyte-shooter/actions/workflows/ci_runner_windows.yml/badge.svg)](https://github.com/troglobyte-apphub/troglobyte-shooter/actions/workflows/ci_runner_windows.yml)

## overview

* * *

Oh no! There's invadors from the Troglobyte system, help keep
humans safe from the those space invadors by shooting down
there spaceships.

## preview

* * *

Please add an image for the user to see.

## tooling

* * *

The targeted audience we are building for is **Windows 10**, **Mac OSX**, **ChromeOS**, and **Linux**
users. This project uses [Meson](https://mesonbuild.com/) `0.62.0` and newer.

This project is using *Meson build system*, so be sure to review
[The Absolute Beginner's Guide to Installing and Using Meson](https://mesonbuild.com/SimpleStart.html)
then see if you can build this project to prove that everything is all
setup and ready to go. :)

## Setup, Compile and Install

* * *

Firstly the users should set up a project build directory before
compiling:

```console
meson setup builddir
```

The next step should be to compile the target of a configured
Meson project:

```console
meson compile -C builddir
```

Then we install the application like so:

```console
meson install -C builddir
```

And finally we run this cool application:

```console
trog-shooter
```

## contact

* * *

If you want to contact me and have a few questions
regarding the solutions in the programming you can write
me a letter, my Gmail is <michaelbrockus@gmail.com>.

You may find that I have some social media platforms
in which you can follow me. [LinkedIn](https://www.linkedin.com/in/michael-brockus), [Facebook](https://facebook.com/michael.brockus.555), and [Instagram](https://instagram.com/troglobyte_coder/)
