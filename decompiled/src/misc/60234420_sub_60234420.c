/* sub_60234420
 * address: 0x60234420   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60234420(int result)
{
  _DWORD *v1; // r4
  int v2; // r5
  int i; // r6
  int v4; // r1
  int v5; // r2

  v1 = (_DWORD *)result;
  v2 = FIELD_U32(result, 124);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = v1[29];
      v5 = v1[30];
      if ( i + v5 >= v4 )
        v5 -= v4;
      result = sub_602350B0(v1[28] + 72 * (i + v5));
    }
  }
  return result;
}
