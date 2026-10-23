/* skl_root_ref_6ED2F0
 * address: 0x606ED2F0   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall skl_root_ref_6ED2F0(int **a1)
{
  float v2; // r1
  int v3; // r0
  int (__fastcall *v4)(int, Vec3 *); // r2
  char v5; // r0
  _DWORD *result; // r0
  Vec3 v7; // [sp+0h] [bp-40h] BYREF
  int *v8; // [sp+Ch] [bp-34h]
  int *v9; // [sp+1Ch] [bp-24h]
  _DWORD *v10; // [sp+2Ch] [bp-14h]

  wait_long_ref_2((int *)a1);
  if ( a1[22] != (int *)-1 && sub_60235E50((int)(a1 + 23)) == 1 )
  {
    v2 = *((float *)a1 + 18);
    LODWORD(v7.x) = a1[17];
    v7.y = v2;
    v7.z = 4500.0;
    EffectData_update((EffectData *)(a1 + 23), &v7, 0, 0);
  }
  (*(void (__fastcall **)(int, int **))(*(_DWORD *)**a1 + 60))(**a1, a1 + 2);
  (*(void (__fastcall **)(int, int **))(*(_DWORD *)**a1 + 68))(**a1, a1 + 14);
  ModelWrapper_updateAnims((ModelWrapper *)*a1);
  ModelWrapper_updateModel((ModelWrapper *)*a1);
  v3 = **a1;
  v4 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v3 + 84);
  LODWORD(v7.x) = &sead__SafeStringBase__vtable;
  LODWORD(v7.y) = "skl_root";
  v5 = v4(v3, &v7);
  (*(void (__fastcall **)(int, _DWORD, Vec3 *))(*(_DWORD *)**a1 + 108))(**a1, v5, &v7);
  a1[17] = v8;
  a1[18] = v9;
  result = v10;
  a1[19] = v10;
  return result;
}
