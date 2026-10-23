/* sub_600E5824
 * address: 0x600E5824   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_600E5824(int a1)
{
  unsigned int *v1; // r4
  float v2; // s16
  float v3; // s0
  float v4; // s16
  float v5; // s0
  float v6; // s16
  float v7; // s0
  _DWORD *v8; // t1
  int v9; // r0
  int (__fastcall *v10)(int, _DWORD *); // r2
  int v11; // r0
  unsigned int result; // r0
  _DWORD v13[11]; // [sp+0h] [bp-90h] BYREF
  unsigned int v14; // [sp+2Ch] [bp-64h]
  float32x2_t v15; // [sp+30h] [bp-60h] BYREF
  float v16; // [sp+38h] [bp-58h]
  float v17; // [sp+3Ch] [bp-54h]
  float v18; // [sp+40h] [bp-50h]
  float v19; // [sp+44h] [bp-4Ch]
  float v20; // [sp+48h] [bp-48h]
  float v21; // [sp+4Ch] [bp-44h]
  float v22; // [sp+50h] [bp-40h]
  float v23; // [sp+54h] [bp-3Ch]
  float v24; // [sp+58h] [bp-38h]
  float v25; // [sp+5Ch] [bp-34h]

  v1 = (unsigned int *)a1;
  v15.n64_u64[0] = 1065353216;
  v16 = 0.0;
  v18 = 0.0;
  v19 = 1.0;
  v20 = 0.0;
  v22 = 0.0;
  v23 = 0.0;
  v24 = 1.0;
  v17 = FIELD_F32(a1, 108);
  v21 = FIELD_F32(a1, 112);
  v25 = FIELD_F32(a1, 116);
  Mtx34_rotateX(&v15, (unsigned int *)(a1 + 156));
  v2 = (*(float (__fastcall **)(unsigned int *))(*v1 + 200))(v1);
  v3 = (*(float (__fastcall **)(unsigned int *, float))(*v1 + 200))(v1, v2) * 4.9;
  v17 = v17
      + (float)((float)((float)(v3 * v15.n64_f32[1]) + (float)((float)(v2 * -2.2) * v15.n64_f32[0])) + (float)(v16 * 0.0));
  v21 = v21 + (float)((float)((float)(v3 * v19) + (float)((float)(v2 * -2.2) * v18)) + (float)(v20 * 0.0));
  v25 = v25 + (float)((float)((float)(v3 * v23) + (float)((float)(v2 * -2.2) * v22)) + (float)(v24 * 0.0));
  Mtx34_rotateZ(&v15, v1 + 41);
  v4 = (*(float (__fastcall **)(unsigned int *))(*v1 + 200))(v1);
  v5 = (*(float (__fastcall **)(unsigned int *, float))(*v1 + 200))(v1, v4) * -4.9;
  v17 = v17
      + (float)((float)((float)(v5 * v15.n64_f32[1]) + (float)((float)(v4 * 2.2) * v15.n64_f32[0])) + (float)(v16 * 0.0));
  v21 = v21 + (float)((float)((float)(v5 * v19) + (float)((float)(v4 * 2.2) * v18)) + (float)(v20 * 0.0));
  v25 = v25 + (float)((float)((float)(v5 * v23) + (float)((float)(v4 * 2.2) * v22)) + (float)(v24 * 0.0));
  Mtx34_rotateY(&v15, v1 + 40);
  v6 = (*(float (__fastcall **)(unsigned int *))(*v1 + 200))(v1);
  v7 = (*(float (__fastcall **)(unsigned int *, float))(*v1 + 200))(v1, v6);
  v17 = v17 + (float)(v6 * 2.2);
  v21 = v21 - (float)(v7 * 4.9);
  v25 = v25 + 0.0;
  v8 = (_DWORD *)v1[1525];
  v1 += 1525;
  (*(void (__fastcall **)(_DWORD, unsigned int *))(*(_DWORD *)*v8 + 68))(*v8, v1 - 1489);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(**(_DWORD **)*v1 + 60))(*(_DWORD *)*v1, &v15);
  sub_60421880(*v1);
  v9 = *(_DWORD *)*v1;
  v10 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v9 + 84);
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = "fuse";
  v11 = v10(v9, v13);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(**(_DWORD **)*v1 + 108))(*(_DWORD *)*v1, v11, v13);
  v1[120] = v13[3];
  v1[121] = v13[7];
  result = v14;
  v1[122] = v14;
  return result;
}
