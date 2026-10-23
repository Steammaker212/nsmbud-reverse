/* mouth_lower_ref_2
 * address: 0x6023CD4C   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall mouth_lower_ref_2(int a1)
{
  int **v1; // r4
  float v2; // s0
  float v3; // s8
  int *v4; // t1
  int v5; // r0
  int (__fastcall *v6)(int, int (***)()); // r2
  int v7; // r0
  int v8; // r0
  int (__fastcall *v9)(int, int (***)()); // r2
  int v10; // r0
  int *result; // r0
  int (**v12)(); // [sp+0h] [bp-78h] BYREF
  const char *v13; // [sp+4h] [bp-74h]
  int *v14; // [sp+Ch] [bp-6Ch]
  int *v15; // [sp+1Ch] [bp-5Ch]
  int *v16; // [sp+2Ch] [bp-4Ch]
  float32x2_t v17; // [sp+30h] [bp-48h] BYREF
  float v18; // [sp+38h] [bp-40h]
  float v19; // [sp+3Ch] [bp-3Ch]
  float v20; // [sp+40h] [bp-38h]
  float v21; // [sp+44h] [bp-34h]
  float v22; // [sp+48h] [bp-30h]
  float v23; // [sp+4Ch] [bp-2Ch]
  float v24; // [sp+50h] [bp-28h]
  float v25; // [sp+54h] [bp-24h]
  float v26; // [sp+58h] [bp-20h]
  float v27; // [sp+5Ch] [bp-1Ch]

  v1 = (int **)a1;
  v17.n64_u64[0] = 1065353216;
  v18 = 0.0;
  v20 = 0.0;
  v21 = 1.0;
  v22 = 0.0;
  v24 = 0.0;
  v25 = 0.0;
  v26 = 1.0;
  v19 = FIELD_F32(a1, 108);
  v23 = FIELD_F32(a1, 112);
  v27 = FIELD_F32(a1, 116);
  Mtx34_rotateY(&v17, (unsigned int *)(a1 + 160));
  v2 = *((float *)v1 + 3015);
  v19 = v19 + (float)((float)((float)(v2 * v17.n64_f32[1]) + (float)(v17.n64_f32[0] * 0.0)) + (float)(v18 * 0.0));
  v23 = v23 + (float)((float)((float)(v2 * v21) + (float)(v20 * 0.0)) + (float)(v22 * 0.0));
  v27 = v27 + (float)((float)((float)(v2 * v25) + (float)(v24 * 0.0)) + (float)(v26 * 0.0));
  Mtx34_rotateX(&v17, (unsigned int *)v1 + 39);
  v3 = *((float *)v1 + 3015);
  v19 = v19 + (float)((float)((float)(v17.n64_f32[0] * 0.0) - (float)(v17.n64_f32[1] * v3)) + (float)(v18 * 0.0));
  v23 = v23 + (float)((float)((float)(v20 * 0.0) - (float)(v21 * v3)) + (float)(v22 * 0.0));
  v27 = v27 + (float)((float)((float)(v24 * 0.0) - (float)(v25 * v3)) + (float)(v26 * 0.0));
  Mtx34_rotateZ(&v17, (unsigned int *)v1 + 41);
  v4 = v1[1651];
  v1 += 1651;
  (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)*v4 + 60))(*v4, &v17);
  (*(void (__fastcall **)(int, int **))(*(_DWORD *)**v1 + 68))(**v1, v1 + 1429);
  Animation_update((int)v1[1]);
  sub_604218E0(*v1);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v1 + 52))(**v1);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v1 + 56))(**v1);
  v5 = **v1;
  v6 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v5 + 84);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "skl_root";
  v7 = v6(v5, &v12);
  (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v1 + 108))(**v1, v7, &v12);
  v1[1344] = v14;
  v1[1345] = v15;
  v1[1346] = v16;
  v8 = **v1;
  v9 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v8 + 84);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "mouth_lower";
  v10 = v9(v8, &v12);
  (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v1 + 108))(**v1, v10, &v12);
  v1[1347] = v14;
  v1[1348] = v15;
  result = v16;
  v1[1349] = v16;
  return result;
}
