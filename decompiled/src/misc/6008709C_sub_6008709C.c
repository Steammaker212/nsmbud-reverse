/* sub_6008709C
 * address: 0x6008709C   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008709C(int a1)
{
  int v2; // r0
  _BYTE *v3; // r5
  const char *v4; // r1
  _DWORD *v5; // r0
  int v6; // r1
  CollisionMgr_Sensor v8[3]; // [sp+0h] [bp-28h] BYREF

  v3 = (_BYTE *)(a1 + 7100);
  v2 = FIELD_U32(a1, 7100);
  if ( v3[148] )
  {
    LODWORD(v8[0].a) = &sead__SafeStringBase__vtable;
    v4 = "lkp_damage";
  }
  else
  {
    LODWORD(v8[0].a) = &sead__SafeStringBase__vtable;
    v4 = "lkpjc_damage";
  }
  LODWORD(v8[0].b) = v4;
  sub_60421AE4(v2, v8, 1);
  v5 = **(_DWORD ***)(*(_DWORD *)v3 + 28);
  FIELD_U32(a1, 7104) = v5;
  v6 = FIELD_U32(a1, 7096);
  LODWORD(v8[0].a) = &sead__SafeStringBase__vtable;
  LODWORD(v8[0].b) = "damage_s";
  ShuAnim_play(v5, v6, (int)v8);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 7104) + 4), 1);
  *(_DWORD *)(FIELD_U32(a1, 7104) + 24) = 1065353216;
  sub_60813430(a1 + 6332, "SE_VOC_JR_ANGRY", 0);
  sub_600CEBC0(a1);
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 7616) = FIELD_U32(a1, 7616) & 0xFFFFFFFC | 1;
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1096810496;
  FIELD_U32(a1, 312) = 1097859072;
  FIELD_U32(a1, 316) = 1096810496;
  FIELD_U32(a1, 320) = 0;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1101004800;
  FIELD_U32(a1, 6844) = 1099956224;
  FIELD_U32(a1, 6848) = 1101004800;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF5588, 2);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF5594, 0);
  v8[0].b = 12.0;
  v8[0].a = 12.0;
  v8[0].c = -12.0;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), v8, 1);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF557C, 3);
  FIELD_U32(a1, 100) = -1102263091;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1084227584;
  FIELD_U32(a1, 128) = 0;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
}
