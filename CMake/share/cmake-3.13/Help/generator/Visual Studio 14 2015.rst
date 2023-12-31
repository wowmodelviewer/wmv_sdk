Visual Studio 14 2015
---------------------

Generates Visual Studio 14 (VS 2015) project files.

Project Types
^^^^^^^^^^^^^

Only Visual C++ and C# projects may be generated.  Other types of
projects (JavaScript, Powershell, Python, etc.) are not supported.

Platform Selection
^^^^^^^^^^^^^^^^^^

The :variable:`CMAKE_GENERATOR_PLATFORM` variable may be set, perhaps
via the :manual:`cmake(1)` ``-A`` option, to specify a target platform
name (architecture).  For example:

* ``cmake -G "Visual Studio 14 2015" -A Win32``
* ``cmake -G "Visual Studio 14 2015" -A x64``
* ``cmake -G "Visual Studio 14 2015" -A ARM``

For compatibility with CMake versions prior to 3.1, one may specify
a target platform name optionally at the end of the generator name.
This is supported only for:

``Visual Studio 14 2015 Win64``
  Specify target platform ``x64``.

``Visual Studio 14 2015 ARM``
  Specify target platform ``ARM``.

Toolset Selection
^^^^^^^^^^^^^^^^^

The ``v140`` toolset that comes with Visual Studio 14 2015 is selected by
default.  The :variable:`CMAKE_GENERATOR_TOOLSET` option may be set, perhaps
via the :manual:`cmake(1)` ``-T`` option, to specify another toolset.

.. include:: VS_TOOLSET_HOST_ARCH.txt
