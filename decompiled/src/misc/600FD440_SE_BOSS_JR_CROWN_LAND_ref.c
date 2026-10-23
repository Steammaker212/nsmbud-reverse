/* SE_BOSS_JR_CROWN_LAND_ref
 * address: 0x600FD440   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CROWN_LAND_ref(int a1)
{
  int v2; // r0
  int v3; // r5
  char v4; // r12
  float v5; // s2
  float v6; // s16
  float v7; // r6
  float v8; // s0
  int result; // r0
  Vec3 v10[3]; // [sp+4h] [bp-24h] BYREF

  v2 = FIELD_U32(a1, 6304);
  LODWORD(v10[0].x) = &sead__SafeStringBase__vtable;
  LODWORD(v10[0].y) = "jc_quake_ed";
  sub_60421AE4(v2, v10, 0);
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  if ( ((unsigned int)dword_60C81768 & ~(1611650220 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C81768) )
  {
    dword_60C81764 = (int)&off_60BC2CB4;
    _cxa_guard_release(dword_60C81768);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C81764) == 1 )
    sub_60421AD4(FIELD_U32(v3, 7100));
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 9356) = 0;
  FIELD_U32(a1, 9352) = 0;
  v5 = FIELD_F32(a1, 112);
  v10[0].x = FIELD_F32(a1, 108);
  v10[0].y = v5 + -16.5;
  sub_60716054(TileMgr_instance, v10, 3);
  v6 = FIELD_F32(a1, 112);
  v7 = FIELD_F32(a1, 108);
  v8 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 668))(a1);
  v10[0].x = v7;
  v10[0].y = v6 - v8;
  v10[0].z = 4500.0;
  EffectData_create(1067, v10, 0, 0);
  FIELD_U16(a1, 6278) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 936))(a1);
  AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 1, 0, 0);
  LODWORD(v10[0].x) = 15;
  LODWORD(v10[0].y) = unk_60C263B0;
  LOBYTE(v10[0].z) = 0;
  sub_60813430(a1 + 9476, "SE_BOSS_JR_CROWN_LAND", v10);
  result = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 240))(result);
  return result;
}
