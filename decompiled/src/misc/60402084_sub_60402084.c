/* sub_60402084
 * address: 0x60402084   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60402084(int a1, unsigned int a2)
{
  int v2; // r4
  int v4; // r4

  if ( a2 <= 0x16 && ((1 << a2) & 0x780400) != 0 )
  {
    v2 = a1 + 3588 * a2 + 89816;
    sub_605434F4(v2);
    return sub_6054364C(v2);
  }
  else
  {
    if ( a2 >= 0x19 )
      a2 = 0;
    v4 = a1 + 3592 * a2 + 16;
    sub_60542F90(v4);
    return sub_605430C0(v4);
  }
}
