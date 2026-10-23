/* sub_60652298
 * address: 0x60652298   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60652298(int a1)
{
  float v2; // r0
  unsigned int v3; // r2
  int v4; // r1
  float result; // s0
  float v6; // [sp+0h] [bp-40h] BYREF
  unsigned int v7; // [sp+4h] [bp-3Ch] BYREF
  SolidOnTopColliderInfo info; // [sp+8h] [bp-38h] BYREF
  float v9[8]; // [sp+20h] [bp-20h] BYREF

  v7 = 0;
  v6 = 0.0;
  sub_606530C4(a1, &v7, &v6);
  v2 = v6;
  FIELD_F32(a1, 6836) = v6;
  v3 = v7;
  FIELD_F32(a1, 6832) = (float)v7 * 16.0;
  v4 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 6796) = v3;
  FIELD_U32(a1, 6736) = LODWORD(v2) ^ 0x80000000;
  FIELD_U32(a1, 6740) = 0;
  FIELD_U32(a1, 6744) = 0;
  FIELD_U32(a1, 6800) = (v4 & 0xF000) == 4096;
  FIELD_U32(a1, 6772) = 0;
  FIELD_U32(a1, 6776) = 0;
  FIELD_U32(a1, 6780) = 0;
  ((void (__fastcall *)(int))loc_60645374)(a1 + 6576);
  memset(&info, 0, 16);
  v9[0] = -(float)(v6 + 4.0);
  v9[1] = 8.0;
  v9[2] = v6 + 4.0;
  v9[3] = 8.0;
  info.points = (Vec2 *)v9;
  info.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6104), (StageActor *)a1, &info);
  if ( (FIELD_U8(a1, 22) & 7) == 0 )
    FIELD_U32(a1, 6428) = sub_606530F4;
  FIELD_U32(a1, 6328) = 4;
  result = (float)v7 * 0.5;
  FIELD_F32(a1, 144) = result;
  return result;
}
