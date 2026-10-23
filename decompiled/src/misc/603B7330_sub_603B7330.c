/* sub_603B7330
 * address: 0x603B7330   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B7330(int a1)
{
  int v2; // r5
  float v3; // r0
  float *v4; // r6
  float *v5; // r0
  float v6; // r2
  float v7; // s0
  float v8; // s2
  Vec2 positionOffset; // [sp+8h] [bp-70h] BYREF
  Vec2 a3; // [sp+10h] [bp-68h] BYREF
  TileCheck_Result v12; // [sp+18h] [bp-60h] BYREF
  _DWORD v13[14]; // [sp+40h] [bp-38h] BYREF

  v2 = 0;
  v13[0] = 0;
  v13[1] = -1023410176;
  v13[2] = 1124073472;
  v13[3] = 0;
  v13[4] = 0;
  v13[5] = 1124073472;
  v13[6] = -1023410176;
  v13[7] = 0;
  sub_6014F61C(a1 + 648);
  v12.field_C = 0;
  v12.field_10 = 0;
  v4 = (float *)(a1 + 112);
  v3 = FIELD_F32(a1, 112);
  a3.x = FIELD_F32(a1, 108);
  a3.y = v3;
  v5 = (float *)&v13[2 * FIELD_U32(a1, 22544)];
  positionOffset.x = *v5 + a3.x;
  positionOffset.y = v5[1] + a3.y;
  if ( TileCheck_check((TileCheck *)(a1 + 652), &v12, &a3, &positionOffset, 15) == 1 )
  {
    v6 = v12.field_8;
    FIELD_F32(a1, 108) = v12.field_4;
    FIELD_F32(a1, 112) = v6;
    v7 = -0.25;
    v8 = 7.0;
    switch ( FIELD_U32(a1, 22544) )
    {
      case 0:
        goto LABEL_6;
      case 1:
        v7 = 0.25;
        v8 = -7.0;
        goto LABEL_4;
      case 2:
        v7 = 0.25;
        v8 = -7.0;
        goto LABEL_6;
      case 3:
LABEL_4:
        v4 = (float *)(a1 + 108);
LABEL_6:
        *v4 = v7 + (float)(v8 + *v4);
        break;
      default:
        break;
    }
    v2 = 1;
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 128) = 0;
  }
  return v2;
}
