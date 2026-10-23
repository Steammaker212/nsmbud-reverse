/* sub_607C13A8
 * address: 0x607C13A8   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C13A8(int a1)
{
  float v2; // r1
  float v3; // r2
  float v4; // s0
  int v5; // r0
  int v6; // r1
  TileCheck_Result v8; // [sp+0h] [bp-48h] BYREF
  float v9[8]; // [sp+28h] [bp-20h] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 116);
  v9[0] = FIELD_F32(a1, 108);
  v9[2] = v3;
  v8.field_C = 0;
  v8.field_10 = 0;
  v9[1] = v2 + (float)(sub_6079B2CC((_DWORD *)a1) + 8.0);
  if ( sub_601559B8(a1 + 1328, v9, &v8, 20.0) == 1 )
  {
    v4 = v8.field_8;
    if ( FIELD_F32(a1, 112) < v8.field_8 )
    {
      v5 = FIELD_U32(a1, 108);
      FIELD_F32(a1, 112) = v8.field_8;
      v6 = FIELD_U32(a1, 116);
      FIELD_U32(a1, 584) = v5;
      FIELD_F32(a1, 588) = v4;
      FIELD_U32(a1, 592) = v6;
      FIELD_U32(a1, 608) = v5;
      FIELD_F32(a1, 612) = v4;
      FIELD_U32(a1, 616) = v6;
    }
  }
  sub_6075F970(a1, 1);
  FIELD_U32(a1, 11480) = 10;
  FIELD_U32(a1, 9940) = 6;
  FIELD_U32(a1, 12832) = 0;
  sub_60794954(a1 + 11356, 66, 0.0, 0.0);
  sub_60773630(a1, 33, 0);
  FIELD_U32(a1, 1212) &= ~0x10000u;
  return sub_60154420(a1 + 1328, 0);
}
