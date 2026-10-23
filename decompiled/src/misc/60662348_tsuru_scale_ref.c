/* tsuru_scale_ref
 * address: 0x60662348   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall tsuru_scale_ref(_DWORD *a1)
{
  int **v1; // r4
  unsigned int v2; // r3
  unsigned int v3; // r7
  unsigned int v4; // r6
  float v5; // r0
  float v6; // r1
  float v7; // r2
  int *v8; // t1
  int v9; // r0
  int (__fastcall *v10)(int, float32x2_t *); // r2
  int v11; // r5
  float v12; // s0
  int v13; // r0
  int (__fastcall *v14)(int, float32x2_t *); // r2
  int v15; // r0
  int result; // r0
  int *v17; // [sp+0h] [bp-60h] BYREF
  unsigned int v18; // [sp+4h] [bp-5Ch] BYREF
  unsigned int v19; // [sp+8h] [bp-58h] BYREF
  float32x2_t v20; // [sp+10h] [bp-50h] BYREF
  int v21; // [sp+18h] [bp-48h]
  float v22; // [sp+1Ch] [bp-44h]
  int v23; // [sp+20h] [bp-40h]
  int v24; // [sp+24h] [bp-3Ch]
  int v25; // [sp+28h] [bp-38h]
  float v26; // [sp+2Ch] [bp-34h]
  int v27; // [sp+30h] [bp-30h]
  int v28; // [sp+34h] [bp-2Ch]
  int v29; // [sp+38h] [bp-28h]
  float v30; // [sp+3Ch] [bp-24h]

  v1 = (int **)a1;
  v2 = a1[39];
  v3 = a1[40];
  v4 = a1[41];
  v5 = *((float *)a1 + 28);
  v6 = *((float *)v1 + 29);
  v7 = *((float *)v1 + 27);
  v19 = v4;
  v17 = (int *)v2;
  v18 = v3;
  v20.n64_u64[0] = 1065353216;
  v21 = 0;
  v25 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 1065353216;
  v22 = v7;
  v23 = 0;
  v24 = 1065353216;
  v26 = v5;
  v30 = v6;
  Mtx34_rotateX(&v20, (unsigned int *)&v17);
  Mtx34_rotateY(&v20, &v18);
  Mtx34_rotateZ(&v20, &v19);
  v8 = v1[1526];
  v1 += 1526;
  (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)*v8 + 60))(*v8, &v20);
  (*(void (__fastcall **)(int, int **))(*(_DWORD *)**v1 + 68))(**v1, v1 - 1490);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v1 + 52))(**v1);
  v9 = **v1;
  v10 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v9 + 84);
  v20.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v20.n64_u32[1] = (unsigned __int32)"tsuru_scale";
  v11 = v10(v9, &v20);
  (*(void (__fastcall **)(int, int, float32x2_t *, int **))(*(_DWORD *)**v1 + 100))(**v1, v11, &v20, &v17);
  v17 = v1[262];
  v18 = 1065353216;
  v19 = 1065353216;
  Mtx34_rotateX(&v20, (unsigned int *)v1 + 273);
  v12 = (float)(int)v1[269];
  v22 = v22 + v12;
  v26 = v12 + v26;
  v30 = v30 + 0.0;
  (*(void (__fastcall **)(int, int, float32x2_t *, int **))(*(_DWORD *)**v1 + 96))(**v1, v11, &v20, &v17);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v1 + 56))(**v1);
  v13 = **v1;
  v14 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v13 + 84);
  v20.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v20.n64_u32[1] = (unsigned __int32)"uzu17";
  v15 = v14(v13, &v20);
  (*(void (__fastcall **)(int, int, float32x2_t *))(*(_DWORD *)**v1 + 108))(**v1, v15, &v20);
  *((float *)v1 + 276) = v22;
  *((float *)v1 + 277) = v26;
  result = LODWORD(v30);
  *((float *)v1 + 278) = v30;
  return result;
}
