/* SE_BOSS_JR_CROWN_LAND_ref_2
 * address: 0x600FE5EC   size: 820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CROWN_LAND_ref_2(StageActor *a1)
{
  float v2; // r0
  int v3; // r5
  char v4; // r12
  float y; // s2
  float v6; // r1
  float z; // r2
  float v8; // s16
  float v9; // s16
  float v10; // s18
  float v11; // s16
  float x; // r5
  float v13; // s0
  Vec2 a2; // [sp+4h] [bp-44h] BYREF
  int v16; // [sp+Ch] [bp-3Ch]
  _BYTE v17[4]; // [sp+10h] [bp-38h] BYREF
  float v18; // [sp+14h] [bp-34h] BYREF
  Vec3 v19[4]; // [sp+18h] [bp-30h] BYREF

  v2 = a1[9].field_1FC;
  LODWORD(v19[0].x) = &sead__SafeStringBase__vtable;
  LODWORD(v19[0].y) = "jc_quake_ed";
  sub_60421AE4(LODWORD(v2), v19, 0);
  v3 = (*(int (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0).vtable + 624))(a1);
  if ( ((unsigned int)dword_60C81768 & ~(1611654744 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C81768) )
  {
    dword_60C81764 = (int)&off_60BC2CB4;
    _cxa_guard_release(dword_60C81768);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C81764) == 1 )
    sub_60421AD4(FIELD_U32(v3, 7100));
  FIELD_U32(a1, 0x78).x = 0.0;
  FIELD_U32(a1, 0x78).y = 0.0;
  FIELD_F32(a1, 0x64) = -0.1875;
  FIELD_U32(a1, 0x84).y = -4.0;
  a1[14].aCollider.info.field_24 = 0;
  a1[14].aCollider.info.mask = 0;
  y = FIELD_U32(a1, 0x6C).y;
  v19[0].x = FIELD_U32(a1, 0x6C).x;
  v19[0].y = y + -16.5;
  sub_60716054(TileMgr_instance, v19, 3);
  LOWORD(a1[9].aCollider.field_124) = a1[14].aCollider.field_F8;
  a1[14].aCollider.field_F0 = a1[14].aCollider.field_F4 - 1;
  HIWORD(a1[9].aCollider.field_124) = (*(int (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0).vtable + 936))(a1);
  if ( !FIELD_U8(dword_60CC6D8C, 17) )
    goto LABEL_10;
  v6 = FIELD_U32(a1, 0x6C).y;
  z = FIELD_U32(a1, 0x6C).z;
  v19[0].x = FIELD_U32(a1, 0x6C).x;
  v19[0].y = v6;
  v19[0].z = z;
  v8 = FIELD_U32(a1, 0x6C).y;
  v18 = v8 - (*(float (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0).vtable + 668))(a1);
  v19[0].y = v18;
  ((void (__fastcall *)(_BYTE *, float *, Vec3 *, _DWORD))checkLiquidCollisions)(
    v17,
    &v18,
    v19,
    (unsigned __int8)FIELD_U8(a1, 0x56));
  v9 = FIELD_U32(a1, 0x6C).y;
  v10 = v18;
  if ( v10 > (float)(v9 - (*(float (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0).vtable + 668))(a1)) )
  {
    a2.x = FIELD_U32(a1, 0x6C).x;
    a2.y = v18;
    v16 = 1166843904;
    StageActor__createWaterSplash(a1, &a2, 1068, 14, "SE_PLY_SPLASH_LAVA");
    a2.x = FIELD_U32(a1, 0x6C).x;
    a2.y = v18;
    TileMgr_splashRelated(TileMgr_instance, &a2, 5);
  }
  else
  {
LABEL_10:
    v11 = FIELD_U32(a1, 0x6C).y;
    x = FIELD_U32(a1, 0x6C).x;
    v13 = (*(float (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0).vtable + 668))(a1);
    v19[0].x = x;
    v19[0].y = v11 - v13;
    v19[0].z = 4500.0;
    EffectData_create(1067, v19, 0, 0);
  }
  AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 1, 0, 0);
  LODWORD(v19[0].x) = 15;
  LODWORD(v19[0].y) = unk_60C263B0;
  LOBYTE(v19[0].z) = 0;
  return sub_60813430(&a1[14].aCollider.field_110, "SE_BOSS_JR_CROWN_LAND", v19);
}
