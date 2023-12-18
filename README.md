# linucxx - a C-with-classes-style library for everyday linux C++ programming
linucxx is a general-purpose, header-only alternative to the C++ standard template library (STL). Although the library is written in C++20, it is written in a 
no-nonsense C-style that aims to balance safety with simplicity and top-level clarity, something the STL is notoriously bad about. Note that this project is under 
semi-active development. I contribute to it whenever I have a need that is not implemented in the C-standard library (or its GNU extensions) or I dislike 
the C++ STL implementation (which I've found happening more and more frequently recently...).

This project is open-source under a [GPLv3](https://www.gnu.org/licenses/quick-guide-gplv3.html), a type of copyleft. That means that you are free
to use, modify, and share this code for any purpose on the condition that the code (including derived code) remains free and open source under the
same or a compatible license as defined within the license provided in this project.

# Installation
Follow the instructions below to install linucxx. After installation, the library will be installed a `/usr/include/linucxx`.
```bash
git clone https://github.com/EthanC2/linucxx
cd linucxx && sudo ./install.sh
```

# Uninstallation
To uninstall, just run: `rm -rf /usr/include/linucxx`.

# Contributing
This project is open-source. You are welcome and encouraged to report issues, create pull requests, and submit suggestions
via the discussions boards. You can contribute to the source code, documentation, or examples. If you do, I have provided 
convenience scripts in the `scripts` directory to make checking the syntax of examples and ensuring source file has 
documentation and an example simpler.
