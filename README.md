CoderNight-BlueHawaii
=====================

My submission for June 2013's Coder Night.

This month I'm continuing to learn C++, and exploring setting up a cross-platform build setup with CMake and third-party dependencies.

    git submodule update --init

    mkdir build
    cd build

Now generate the project for your compiler. Default for the platform like:

    cmake ..

Or, specify a specific project type:

    cmake .. -G Xcode

Now you can run `make`, open the IDE project, or use cmake to build:

    `cmake --build .`
