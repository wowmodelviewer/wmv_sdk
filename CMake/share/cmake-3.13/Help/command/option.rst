option
------

Provides an option that the user can optionally select.

::

  option(<option_variable> "help string describing option"
         [initial value])

Provide an option for the user to select as ``ON`` or ``OFF``.  If no
initial value is provided, ``OFF`` is used.  If the option is already
set as a normal variable then the command does nothing
(see policy :policy:`CMP0077`).

If you have options that depend on the values of other options, see
the module help for :module:`CMakeDependentOption`.
