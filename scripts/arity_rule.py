"""Shared rule: when may a prototype be relaxed to an old-style declaration?

A function is eligible only if

    some call site passes FEWER arguments than the definition declares, AND
    NO call site passes the full parameter count.

The second condition is what the first version of the relaxers missed. `__operator_new_array_al` is defined with
three parameters and is called BOTH ways in the corpus:

    libs.c:1262  int __fastcall __operator_new_array_al(unsigned int a1);      <- relaxed
    libs.c:6474  __operator_new_array_al(720, a2, 16)                          <- 3 arguments
    libs.c:7742  __operator_new_array_al(1056, a1, 8)                          <- 3 arguments

Relaxing it because one call site omitted arguments broke every three-argument call with "too many arguments".
A function that is ever called with its full parameter list must keep its prototype; only the genuinely
under-supplied ones become old-style.
"""


def np(params):
    """Count parameters / arguments in a comma-separated list."""
    return len([x for x in params.split(",") if x.strip()])


def relaxable(defs, least, most):
    """Names that are always called with fewer arguments than they are defined with."""
    return {n for n, k in least.items() if n in defs and k < defs[n] and most.get(n, 0) < defs[n]}
