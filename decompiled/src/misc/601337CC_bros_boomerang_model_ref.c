/* bros_boomerang_model_ref
 * address: 0x601337CC   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall bros_boomerang_model_ref(int a1)
{
  unsigned int *v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, float32x2_t *); // r2
  int v5; // r0
  float32x2_t v7; // [sp+4h] [bp-4Ch] BYREF
  float v8; // [sp+Ch] [bp-44h]
  float v9; // [sp+10h] [bp-40h]
  float v10; // [sp+14h] [bp-3Ch]
  float v11; // [sp+18h] [bp-38h]
  float v12; // [sp+1Ch] [bp-34h]
  float v13; // [sp+20h] [bp-30h]
  float v14; // [sp+24h] [bp-2Ch]
  float v15; // [sp+28h] [bp-28h]
  float v16; // [sp+2Ch] [bp-24h]
  float v17; // [sp+30h] [bp-20h]
  Vec3 v18; // [sp+34h] [bp-1Ch] BYREF

  v2 = *(int **)(a1 + 6472);
  v1 = (unsigned int *)(a1 + 6472);
  v3 = *v2;
  v4 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)*v2 + 84);
  v7.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v7.n64_u32[1] = (unsigned __int32)"bros_boomerang_model";
  v5 = v4(v3, &v7);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(**(_DWORD **)*v1 + 108))(*(_DWORD *)*v1, v5, &v7);
  v9 = v9
     + (float)((float)((float)(v7.n64_f32[1] * *(float *)&dword_60C876A0)
                     + (float)(v7.n64_f32[0] * *(float *)&dword_60C8769C))
             + (float)(v8 * *(float *)&dword_60C876A4));
  v13 = v13
      + (float)((float)((float)(v11 * *(float *)&dword_60C876A0) + (float)(v10 * *(float *)&dword_60C8769C))
              + (float)(v12 * *(float *)&dword_60C876A4));
  v17 = v17
      + (float)((float)((float)(v15 * *(float *)&dword_60C876A0) + (float)(v14 * *(float *)&dword_60C8769C))
              + (float)(v16 * *(float *)&dword_60C876A4));
  Mtx34_rotateX(&v7, v1 - 1579);
  Mtx34_rotateY(&v7, v1 - 1578);
  Mtx34_rotateZ(&v7, v1 - 1577);
  v18.x = v9;
  v18.y = v13;
  v18.z = v17;
  return EffectData_create(531, &v18, 0, 0);
}
