/* sub_607A2820
 * address: 0x607A2820   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A2820(int a1, int a2)
{
  int v2; // r2
  int v3; // r1
  bool v4; // zf
  float v5; // s0
  float v6; // r1
  float v8[5]; // [sp+4h] [bp-14h] BYREF

  v2 = 0;
  if ( a2 != 3 )
  {
    v3 = FIELD_U32(a1, 1320);
    v4 = v3 == 3;
    if ( v3 == 3 )
      v4 = (FIELD_U8(a1, 1219) & 2) == 0;
    if ( v4 )
    {
      v5 = FIELD_F32(a1, 112);
      v6 = FIELD_F32(a1, 116);
      v8[0] = FIELD_F32(a1, 108);
      v8[1] = v5 + 4.0;
      v8[2] = v6;
      return sub_60155C38(a1 + 1328, v8, 0, 0, 8.0);
    }
  }
  return v2;
}
