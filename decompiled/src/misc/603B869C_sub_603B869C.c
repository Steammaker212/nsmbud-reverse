/* sub_603B869C
 * address: 0x603B869C   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B869C(float *a1)
{
  float *v1; // r4
  unsigned int v2; // r3
  unsigned int v3; // r6
  unsigned int v4; // r5
  float v5; // r0
  float v6; // r1
  float v7; // r2
  _DWORD *v8; // t1
  unsigned int v10; // [sp+4h] [bp-64h] BYREF
  float32x2_t v11; // [sp+8h] [bp-60h] BYREF
  float v12; // [sp+10h] [bp-58h]
  float v13; // [sp+14h] [bp-54h]
  float v14; // [sp+18h] [bp-50h]
  float v15; // [sp+1Ch] [bp-4Ch]
  float v16; // [sp+20h] [bp-48h]
  float v17; // [sp+24h] [bp-44h]
  float v18; // [sp+28h] [bp-40h]
  float v19; // [sp+2Ch] [bp-3Ch]
  float v20; // [sp+30h] [bp-38h]
  float v21; // [sp+34h] [bp-34h]
  unsigned int v22; // [sp+38h] [bp-30h] BYREF
  unsigned int v23; // [sp+3Ch] [bp-2Ch] BYREF
  unsigned int v24; // [sp+40h] [bp-28h] BYREF

  v1 = a1;
  v2 = *((_DWORD *)a1 + 39);
  v3 = *((_DWORD *)a1 + 40);
  v4 = *((_DWORD *)a1 + 41);
  v5 = a1[28];
  v6 = v1[29];
  v7 = v1[27];
  v24 = v4;
  v23 = v3;
  v22 = v2;
  v11.n64_u64[0] = 1065353216;
  v12 = 0.0;
  v14 = 0.0;
  v15 = 1.0;
  v16 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  v20 = 1.0;
  v13 = v7;
  v17 = v5;
  v21 = v6;
  Mtx34_rotateY(&v11, &v23);
  Mtx34_rotateX(&v11, &v22);
  v13 = v13 + (float)((float)((float)(v11.n64_f32[1] * 8.0) + (float)(v11.n64_f32[0] * 0.0)) + (float)(v12 * 0.0));
  v17 = v17 + (float)((float)((float)(v15 * 8.0) + (float)(v14 * 0.0)) + (float)(v16 * 0.0));
  v21 = v21 + (float)((float)((float)(v19 * 8.0) + (float)(v18 * 0.0)) + (float)(v20 * 0.0));
  v10 = *((_DWORD *)v1 + 1608);
  Mtx34_rotateX(&v11, &v10);
  v13 = v13 + (float)((float)((float)(v11.n64_f32[0] * 0.0) - (float)(v11.n64_f32[1] * 8.0)) + (float)(v12 * 0.0));
  v17 = v17 + (float)((float)((float)(v14 * 0.0) - (float)(v15 * 8.0)) + (float)(v16 * 0.0));
  v21 = v21 + (float)((float)((float)(v18 * 0.0) - (float)(v19 * 8.0)) + (float)(v20 * 0.0));
  Mtx34_rotateZ(&v11, &v24);
  v8 = *((_DWORD **)v1 + 1576);
  v1 += 1576;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v8 + 60))(*v8, &v11);
  (*(void (__fastcall **)(_DWORD, _DWORD *))(***((_DWORD ***)v1 - 1) + 68))(**((_DWORD **)v1 - 1), (_DWORD *)v1 + 4197);
  return ModelWrapper_updateModel(*(ModelWrapper **)v1);
}
