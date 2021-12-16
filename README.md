# hello-wing
this is a demo `hello world` program to demonstrate the [wing](https://github.com/s-viour/wing) build system!

# building
1. get wing from its [releases](https://github.com/s-viour/wing/releases) page and install it
2. enter the directory and run `wing init-vcpkg` to initialize a local copy of vcpkg
3. run `wing install` to install all the project's dependencies
4. run `wing build` to build the project!

steps 2 and 3 need only be done once. after that, the project is set up completely, only requiring `wing build` to rebuild any changes you've made.
