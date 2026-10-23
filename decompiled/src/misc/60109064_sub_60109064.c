/* sub_60109064
 * address: 0x60109064   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60109064(int a1)
{
  int v2; // r0
  int **v3; // r7
  float v4; // r1
  int v5; // r0
  int (__fastcall *v6)(int, Vec3 *); // r2
  int v7; // r0
  int v8; // r0
  int (__fastcall *v9)(int, Vec3 *); // r2
  int v10; // r0
  int v11; // r0
  Vec3 v13[6]; // [sp+8h] [bp-48h] BYREF

  v3 = (int **)(a1 + 7096);
  v2 = FIELD_U32(a1, 7096);
  LODWORD(v13[0].x) = &sead__SafeStringBase__vtable;
  LODWORD(v13[0].y) = "jump_quake_ed";
  sub_60421AD4(v2);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 1, 0, 0);
  v4 = FIELD_F32(a1, 112);
  v13[0].x = FIELD_F32(a1, 108);
  v13[0].y = v4;
  v13[0].z = 4500.0;
  sub_602375C4((EffectData *)(a1 + 8508), 1026, v13, 0, 0);
  sub_60813430(a1 + 6332, "SE_BOSS_CMN_FAT_LAND_QUAKE", 0);
  sub_60813430(a1 + 6332, "SE_VOC_ROY_QUAKE", 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
  sub_6010BB78(a1, 11, 0);
  sub_6010BB78(a1, 27, 1);
  sub_608134CC(a1 + 6332, "SE_EMY_KILLER_SHOT", FIELD_S16(a1, 6640), 0);
  v5 = **v3;
  v6 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v5 + 84);
  LODWORD(v13[0].x) = &sead__SafeStringBase__vtable;
  LODWORD(v13[0].y) = "ef_cannon_front";
  v7 = v6(v5, v13);
  (*(void (__fastcall **)(int, int, Vec3 *))(*(_DWORD *)**v3 + 108))(**v3, v7, v13);
  sub_60237610((EffectData *)(a1 + 8380), 1036, v13, 0);
  v8 = **v3;
  v9 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v8 + 84);
  LODWORD(v13[0].x) = &sead__SafeStringBase__vtable;
  LODWORD(v13[0].y) = "ef_cannon_rear";
  v10 = v9(v8, v13);
  (*(void (__fastcall **)(int, int, Vec3 *))(*(_DWORD *)**v3 + 108))(**v3, v10, v13);
  sub_60237610((EffectData *)(a1 + 8444), 1036, v13, 0);
  if ( FIELD_U8(a1, 8168) )
  {
    sub_6010C6F0();
    v11 = SE_BOSS_ROY_LIFT_APPEAR_ref(a1);
    sub_6010C51C(v11);
    FIELD_U8(a1, 8168) = 0;
  }
  FIELD_U16(a1, 6276) = 60;
  return 6276;
}
