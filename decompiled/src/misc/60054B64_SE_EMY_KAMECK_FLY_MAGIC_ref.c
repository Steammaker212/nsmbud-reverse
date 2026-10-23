/* SE_EMY_KAMECK_FLY_MAGIC_ref
 * address: 0x60054B64   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KAMECK_FLY_MAGIC_ref(int a1)
{
  int **v2; // r5
  float v3; // s0
  int v4; // r0
  int (__fastcall *v5)(int, _DWORD *, float); // r2
  int v6; // r0
  _DWORD *v7; // r5
  float v8; // s0
  int v9; // r0
  int result; // r0
  int v12; // r0
  int v13; // r1
  _DWORD v14[2]; // [sp+0h] [bp-48h] BYREF
  _DWORD v15[16]; // [sp+8h] [bp-40h] BYREF

  v2 = (int **)(a1 + 6300);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  FIELD_F32(a1, 124) = FIELD_F32(a1, 100) + FIELD_F32(a1, 124);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = **v2;
  v5 = *(int (__fastcall **)(int, _DWORD *, float))(*(_DWORD *)v4 + 84);
  v15[0] = &sead__SafeStringBase__vtable;
  v15[1] = "ef_wand";
  v6 = v5(v4, v15, v3);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v2 + 108))(**v2, v6, v15);
  sub_602372C0(a1 + 6320, 801, v15, 1);
  v7 = (_DWORD *)(a1 + 6316);
  if ( FIELD_U32(a1, 6316) == 2 )
  {
    v8 = FIELD_F32(dword_60CC6484, 112);
    if ( FIELD_F32(a1, 108) >= v8 && FIELD_F32(a1, 584) < v8 )
    {
      v9 = FIELD_U32(dword_60CC6484, 128);
      v14[0] = FIELD_U32(dword_60CC6484, 116);
      v14[1] = v9;
      (*(void (__fastcall **)(int, const char *, _DWORD *, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 36))(
        Global_BasicSoundActor1,
        "SE_EMY_KAMECK_FLY_MAGIC",
        v14,
        0);
    }
  }
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
  {
    if ( (*v7)-- < 2 )
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C80900);
    }
    else
    {
      FIELD_F32(a1, 108) = FIELD_F32(dword_60CC6484, 120) + 48.0;
      v12 = FIELD_U32(a1, 80);
      FIELD_U32(a1, 80) = v12 ^ 1;
      v13 = 0x20000000;
      if ( !v12 )
        v13 = -536870912;
      FIELD_U32(a1, 160) = v13;
      return fly_magic_ref(a1);
    }
  }
  return result;
}
