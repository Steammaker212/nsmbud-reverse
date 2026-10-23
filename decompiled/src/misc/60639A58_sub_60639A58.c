/* sub_60639A58
 * address: 0x60639A58   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60639A58(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r1
  float v5; // s16
  SolidOnTopColliderInfo v7; // [sp+0h] [bp-48h] BYREF
  _DWORD v8[12]; // [sp+18h] [bp-30h] BYREF

  FIELD_U32(a1, 492) = 1128267776;
  FIELD_U32(a1, 496) = -1056964608;
  v2 = (FIELD_U32(a1, 24) >> 8) & 3;
  v3 = 8 * v2 + 8;
  v4 = 16 * v2 + 48;
  v5 = (float)(unsigned int)v4;
  FIELD_F32(a1, 7016) = (float)(unsigned int)v4;
  sub_60639BC0(a1, v4, v3, (float)(unsigned int)v3, 1.0);
  FIELD_U32(a1, 6204) = -1048576000;
  FIELD_F32(a1, 6316) = v5 * 4.0;
  FIELD_U32(a1, 6428) = -1048576000;
  FIELD_F32(a1, 6432) = v5 * 4.0;
  FIELD_U32(a1, 6436) = -1048576000;
  FIELD_F32(a1, 6540) = v5 * 4.0;
  FIELD_F32(a1, 6548) = v5 * 4.0;
  FIELD_U32(a1, 6552) = -1048576000;
  v8[0] = 0;
  v8[1] = 0;
  *(float *)&v8[2] = v5 * 4.0;
  v8[3] = 0;
  LODWORD(v7.field_0) = dword_60CB53C0;
  v7.field_4 = dword_60CB53C4;
  v7.field_8 = dword_60CB53C8;
  LODWORD(v7.field_C) = dword_60CB53CC;
  v7.rotation = dword_60CB53D4;
  v7.points = (Vec2 *)v8;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6568), (StageActor *)a1, &v7);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6568));
  FIELD_U8(a1, 7026) = FIELD_U16(a1, 26) & 1;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB5480);
  sub_60639D64(a1);
  return 1;
}
