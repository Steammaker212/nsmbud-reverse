/* sub_6010A1A4
 * address: 0x6010A1A4   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6010A1A4(int a1)
{
  int v2; // r5
  float v3; // r1
  int v4; // r0
  int (__fastcall *v5)(int, Vec3 *); // r2
  int v6; // r0
  int v7; // r0
  int (__fastcall *v8)(int, Vec3 *); // r2
  int v9; // r0
  float v10; // s0
  Vec3 v12[6]; // [sp+0h] [bp-48h] BYREF

  v2 = KoopalingBase__onExecute(a1);
  if ( FIELD_U8(a1, 8572) )
    (*(void (__fastcall **)(int, const char *, _DWORD))(*(_DWORD *)dword_60C7F538 + 44))(
      dword_60C7F538,
      "SE_AMB_BROOM_W7",
      0);
  if ( sub_60235E50(a1 + 8508) == 1 )
  {
    v3 = FIELD_F32(a1, 112);
    v12[0].x = FIELD_F32(a1, 108);
    v12[0].y = v3;
    v12[0].z = 4500.0;
    EffectData_update((EffectData *)(a1 + 8508), v12, 0, 0);
  }
  if ( sub_60235E50(a1 + 8380) == 1 )
  {
    v4 = **(_DWORD **)(a1 + 7096);
    v5 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v4 + 84);
    LODWORD(v12[0].x) = &sead__SafeStringBase__vtable;
    LODWORD(v12[0].y) = "ef_cannon_front";
    v6 = v5(v4, v12);
    (*(void (__fastcall **)(_DWORD, int, Vec3 *))(***(_DWORD ***)(a1 + 7096) + 108))(**(_DWORD **)(a1 + 7096), v6, v12);
    sub_60236A80(a1 + 8380, v12, 0);
  }
  if ( sub_60235E50(a1 + 8444) == 1 )
  {
    v7 = **(_DWORD **)(a1 + 7096);
    v8 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v7 + 84);
    LODWORD(v12[0].x) = &sead__SafeStringBase__vtable;
    LODWORD(v12[0].y) = "ef_cannon_rear";
    v9 = v8(v7, v12);
    (*(void (__fastcall **)(_DWORD, int, Vec3 *))(***(_DWORD ***)(a1 + 7096) + 108))(**(_DWORD **)(a1 + 7096), v9, v12);
    sub_60236A80(a1 + 8444, v12, 0);
  }
  if ( FIELD_S32(a1, 6300) >= 1 && !FIELD_U8(a1, 6313) )
  {
    v10 = FIELD_F32(a1, 112);
    if ( v10 < (float)(FIELD_F32(dword_60CC6484, 132) + -64.0) )
      FIELD_F32(a1, 112) = v10 + (float)(FIELD_F32(dword_60CC6484, 108) + 64.0);
  }
  return v2;
}
