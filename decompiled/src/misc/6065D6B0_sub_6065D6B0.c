/* sub_6065D6B0
 * address: 0x6065D6B0   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065D6B0(int a1)
{
  int v2; // r0
  float v3; // s18
  float v4; // s18
  float v5; // s0
  float v6; // s0
  float v7; // s4
  int v8; // r1
  int v9; // r2
  float v11[4]; // [sp+8h] [bp-68h] BYREF
  SolidOnTopColliderInfo info; // [sp+18h] [bp-58h] BYREF
  int v13; // [sp+30h] [bp-40h]
  int v14; // [sp+34h] [bp-3Ch]

  FIELD_U32(a1, 164) = 0;
  FIELD_U8(a1, 6969) = 0;
  FIELD_U8(a1, 6968) = 0;
  FIELD_U8(a1, 6971) = 0;
  FIELD_U8(a1, 6970) = 0;
  v2 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 6917) = (v2 & 0x10) != 0;
  v3 = (float)(v2 & 0xF);
  FIELD_U8(a1, 6918) = BYTE1(v2) & 1;
  FIELD_F32(a1, 6904) = v3 * 16.0;
  FIELD_U32(a1, 6324) = v2 & 0xF;
  FIELD_U32(a1, 6264) = 0;
  FIELD_U32(a1, 6268) = 0;
  FIELD_U32(a1, 6272) = 0;
  FIELD_U32(a1, 6328) = (v2 << 19 >> 31) & 7;
  FIELD_U32(a1, 6300) = 0;
  FIELD_U32(a1, 6304) = 0;
  FIELD_U32(a1, 6308) = 0;
  ((void (*)(void))loc_60645374)();
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  v4 = v3 * 8.0;
  FIELD_F32(a1, 6908) = v4 + 4.0;
  FIELD_U32(a1, 6592) = a1 + 86;
  info.field_0 = 0.0;
  info.field_4 = 0;
  info.field_8 = 0x40000000;
  info.field_C = 0.0;
  v11[0] = -(float)(v4 + 4.0);
  v11[1] = 8.0;
  v11[2] = v4 + 4.0;
  v11[3] = 8.0;
  info.points = (Vec2 *)v11;
  info.rotation = FIELD_U32(a1, 164);
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6432), (StageActor *)a1, &info);
  FIELD_U32(a1, 6796) = 1090519040;
  v5 = (float)(v4 + v4) + 16.0;
  FIELD_F32(a1, 500) = v5;
  FIELD_F32(a1, 504) = v5;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 7028), (StateBase *)&dword_60CB67D0);
  StateMgr__changeState((StateMgr *)(a1 + 6992), (StateBase *)&dword_60CB6770);
  info.field_0 = 0.0;
  info.field_4 = 0;
  info.field_8 = 32;
  LODWORD(info.field_C) = 0x20000;
  info.points = (Vec2 *)0x8000000;
  info.rotation = 0x80000;
  v13 = 0x800000;
  v14 = 0x400000;
  sub_608337BC(a1 + 6360, &info);
  FIELD_U32(a1, 6360) = 0;
  FIELD_U32(a1, 6364) = 0;
  info.field_0 = 0.0;
  info.field_4 = 0;
  info.field_8 = 32;
  LODWORD(info.field_C) = 0x20000;
  info.points = (Vec2 *)0x8000000;
  info.rotation = 0x80000;
  v13 = 0x800000;
  v14 = 0x400000;
  sub_608337BC(a1 + 6396, &info);
  FIELD_U32(a1, 6396) = 0;
  FIELD_U32(a1, 6400) = 0;
  v6 = FIELD_F32(a1, 6904);
  v7 = (float)(v6 * -0.5) + 2.0;
  FIELD_F32(a1, 6900) = v7;
  v8 = FIELD_U32(a1, 112);
  v9 = FIELD_U32(a1, 116);
  info.field_0 = FIELD_F32(a1, 108);
  info.field_4 = v8;
  info.field_8 = v9;
  info.field_0 = v7 + info.field_0;
  sub_60645448(a1 + 6104, (int)&info, v6);
  FIELD_U8(a1, 6056) = 1;
  return 1;
}
