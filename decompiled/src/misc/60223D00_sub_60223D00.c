/* sub_60223D00
 * address: 0x60223D00   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60223D00(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r5
  int v4; // r6

  sub_60223D58();
  sub_602241C0(a1);
  sub_60224724(a1);
  result = a1[74];
  if ( result )
  {
    v3 = (_DWORD *)a1[76];
    v4 = 4 * result;
    do
    {
      if ( !*v3 )
        break;
      result = sub_60224A04(a1, a1[2]);
      v4 -= 4;
      ++v3;
    }
    while ( v4 );
  }
  return result;
}
