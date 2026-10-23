/* BoomBoomW1__vf4FC
 * address: 0x6004DF44   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
signed int __fastcall BoomBoomW1__vf4FC(int a1)
{
  int **v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r0
  int v6; // r0
  int (__fastcall *v7)(int, _DWORD *); // r2
  int v8; // r0
  Vec3 v10; // [sp+8h] [bp-88h] BYREF
  Vec3 v11; // [sp+14h] [bp-7Ch] BYREF
  _DWORD v12[12]; // [sp+20h] [bp-70h] BYREF
  _DWORD v13[16]; // [sp+50h] [bp-40h] BYREF

  v2 = *(int **)(a1 + 7204);
  v1 = (int **)(a1 + 7204);
  v3 = *v2;
  v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v2 + 84);
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = "arm_l1";
  v5 = v4(v3, v13);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v1 + 108))(**v1, v5, v13);
  sub_602372C0(v1 + 192, 386, v13, 1);
  v6 = **v1;
  v7 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v6 + 84);
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "arm_r1";
  v8 = v7(v6, v12);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v1 + 108))(**v1, v8, v12);
  sub_602372C0(v1 + 218, 387, v12, 1);
  LODWORD(v11.x) = v13[3];
  LODWORD(v11.y) = v13[7];
  LODWORD(v11.z) = v13[11];
  EffectWrapper_update((EffectWrapper *)(v1 + 244), 388, &v11, 0, 0);
  LODWORD(v10.x) = v12[3];
  LODWORD(v10.y) = v12[7];
  LODWORD(v10.z) = v12[11];
  return EffectWrapper_update((EffectWrapper *)(v1 + 270), 389, &v10, 0, 0);
}
