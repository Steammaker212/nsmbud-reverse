/* SE_BOSS_ROY_STEP_ref
 * address: 0x6010D204   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_ROY_STEP_ref(int a1)
{
  _DWORD *v2; // r0
  int **v3; // r5
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int result; // r0
  int v8; // r0
  int (__fastcall *v9)(int, _DWORD *); // r2
  int v10; // r0
  _DWORD v11[12]; // [sp+4h] [bp-4Ch] BYREF
  Vec3 v12; // [sp+34h] [bp-1Ch] BYREF

  KoopalingBase__vf5A4(a1);
  v3 = (int **)(a1 + 7096);
  v2 = *(_DWORD **)(a1 + 7096);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  result = sub_60418548(*v4 + 4);
  if ( result == 1 )
  {
    sub_608134CC(a1 + 6332, "SE_BOSS_ROY_STEP", FIELD_S16(a1, 6640), 0);
    v8 = **v3;
    v9 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v8 + 84);
    v11[0] = &sead__SafeStringBase__vtable;
    v11[1] = "ankle_r1";
    v10 = v9(v8, v11);
    (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v3 + 108))(**v3, v10, v11);
    LODWORD(v12.x) = v11[3];
    v12.y = FIELD_F32(a1, 112);
    v12.z = 4500.0;
    return EffectData_create(1028, &v12, 0, 0);
  }
  return result;
}
