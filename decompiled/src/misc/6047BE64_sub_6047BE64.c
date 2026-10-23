/* sub_6047BE64
 * address: 0x6047BE64   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047BE64(_WORD *a1, int a2, int a3)
{
  int v6; // r0
  _WORD *v7; // r1

  if ( a3 > 9 )
  {
    v6 = sub_6047BE64(a1, a2, a3 / 0xAu);
    v7 = &a1[v6];
    *v7 = (a3 % 0xAu) | 0x30;
    return v6 + 1;
  }
  else
  {
    *a1 = a3 + 48;
    return 1;
  }
}
