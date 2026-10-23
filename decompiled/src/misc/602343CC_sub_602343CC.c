/* sub_602343CC
 * address: 0x602343CC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602343CC(int result, int a2)
{
  _DWORD *v2; // r5
  int v4; // r6
  int i; // r7
  int v6; // r1
  int v7; // r2

  v2 = (_DWORD *)result;
  v4 = FIELD_U32(result, 124);
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v6 = v2[29];
      v7 = v2[30];
      if ( i + v7 >= v6 )
        v7 -= v6;
      result = sub_60234FE0(v2[28] + 72 * (i + v7), a2);
    }
  }
  return result;
}
