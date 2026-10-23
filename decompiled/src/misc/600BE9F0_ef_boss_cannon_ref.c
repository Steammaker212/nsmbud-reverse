/* ef_boss_cannon_ref
 * address: 0x600BE9F0   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ef_boss_cannon_ref(float *a1)
{
  int v2; // r0
  float v3; // s0
  _DWORD *v4; // t1
  int v5; // r0
  int (__fastcall *v6)(int, _DWORD *, float); // r2
  int v7; // r0
  _DWORD v9[3]; // [sp+0h] [bp-58h] BYREF
  _DWORD v10[12]; // [sp+Ch] [bp-4Ch] BYREF
  Vec3 v11; // [sp+3Ch] [bp-1Ch] BYREF

  boss_cannon_gun_ref_C0040();
  *((_DWORD *)a1 + 1856) = 5;
  a1[1861] = 0.0;
  *((_DWORD *)a1 + 1854) = 120;
  v2 = dword_60CC6484;
  LODWORD(v3) = (int)(float)((float)(FIELD_F32(dword_60CC6484, 124) - a1[28]) / 10.0);
  *((_DWORD *)a1 + 1855) = LODWORD(v3) + 5;
  a1[1874] = FIELD_F32(v2, 248);
  v4 = *((_DWORD **)a1 + 1525);
  a1 += 1525;
  v5 = *v4;
  v6 = *(int (__fastcall **)(int, _DWORD *, float))(*(_DWORD *)*v4 + 84);
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "ef_boss_cannon";
  v7 = v6(v5, v10, v3);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)a1 + 108))(**(_DWORD **)a1, v7, v10);
  v9[0] = 0;
  LODWORD(v11.x) = v10[3];
  LODWORD(v11.y) = v10[7];
  LODWORD(v11.z) = v10[11];
  *(float *)&v9[1] = a1[333];
  *(float *)&v9[2] = a1[332];
  return EffectData_create(948, &v11, (int)v9, 0);
}
