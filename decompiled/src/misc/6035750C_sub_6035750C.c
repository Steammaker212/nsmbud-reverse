/* sub_6035750C
 * address: 0x6035750C   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x2_t *__fastcall sub_6035750C(int a1, float32x2_t *a2)
{
  _DWORD **v4; // r7
  int v5; // r0
  int (__fastcall *v6)(int, float32x2_t *); // r2
  unsigned __int8 v7; // r0
  float v8; // s30
  float v9; // s26
  float v10; // s24
  float v11; // s18
  float v12; // s16
  float v13; // s22
  float v14; // s20
  float v15; // s28
  float v16; // s17
  float v17; // s2
  float v18; // s0
  float v19; // s0
  float v20; // s0
  float v21; // s0
  float v22; // s0
  float v23; // s2
  float v24; // s4
  unsigned __int64 v25; // d17
  float32x2_t *result; // r0
  float32x2_t *v27; // r4
  unsigned __int64 v28; // d17
  unsigned __int64 v29; // d17
  float32x2_t v30; // [sp+0h] [bp-88h] BYREF
  unsigned __int64 v31; // [sp+8h] [bp-80h]
  unsigned __int64 v32; // [sp+10h] [bp-78h]
  unsigned __int64 v33; // [sp+18h] [bp-70h]
  unsigned __int64 v34; // [sp+20h] [bp-68h]
  unsigned __int64 v35; // [sp+28h] [bp-60h]

  v4 = (_DWORD **)(a1 + 6332);
  v5 = **(_DWORD **)(a1 + 6332);
  v6 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v5 + 84);
  v30.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v30.n64_u32[1] = (unsigned __int32)"loc_donguri";
  v7 = v6(v5, &v30);
  (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *))(*(_DWORD *)**v4 + 108))(**v4, v7, &v30);
  v8 = v30.n64_f32[1];
  v9 = v30.n64_f32[0];
  v10 = *(float *)&v31;
  LODWORD(v11) = v32;
  v12 = *(float *)&v35;
  v13 = *((float *)&v34 + 1);
  LODWORD(v14) = v34;
  v15 = *(float *)&v33;
  v16 = *((float *)&v32 + 1);
  v17 = sqrtf((float)((float)(v8 * v8) + (float)(v9 * v9)) + (float)(v10 * v10));
  if ( v17 > 0.0 )
  {
    v10 = *(float *)&v31 * (float)(1.0 / v17);
    v8 = v30.n64_f32[1] * (float)(1.0 / v17);
    v9 = v30.n64_f32[0] * (float)(1.0 / v17);
  }
  v18 = sqrtf(
          (float)((float)(*((float *)&v32 + 1) * *((float *)&v32 + 1)) + (float)(*(float *)&v32 * *(float *)&v32))
        + (float)(*(float *)&v33 * *(float *)&v33));
  if ( v18 > 0.0 )
  {
    v19 = 1.0 / v18;
    v15 = *(float *)&v33 * v19;
    v16 = *((float *)&v32 + 1) * v19;
    v11 = *(float *)&v32 * v19;
  }
  v20 = sqrtf(
          (float)((float)(*((float *)&v34 + 1) * *((float *)&v34 + 1)) + (float)(*(float *)&v34 * *(float *)&v34))
        + (float)(*(float *)&v35 * *(float *)&v35));
  if ( v20 > 0.0 )
  {
    v21 = 1.0 / v20;
    v12 = *(float *)&v35 * v21;
    v13 = *((float *)&v34 + 1) * v21;
    v14 = *(float *)&v34 * v21;
  }
  v30.n64_u64[0] = __PAIR64__(LODWORD(v8), LODWORD(v9));
  *(float *)&v31 = v10;
  v32 = __PAIR64__(LODWORD(v16), LODWORD(v11));
  *(float *)&v33 = v15;
  v34 = __PAIR64__(LODWORD(v13), LODWORD(v14));
  *(float *)&v35 = v12;
  v22 = FIELD_F32(a1, 6452);
  v23 = FIELD_F32(a1, 6448);
  v24 = FIELD_F32(a1, 6456);
  *((float *)&v31 + 1) = *((float *)&v31 + 1)
                       + (float)((float)((float)(v22 * v8) + (float)(v23 * v9)) + (float)(v24 * v10));
  *((float *)&v33 + 1) = *((float *)&v33 + 1)
                       + (float)((float)((float)(v22 * v16) + (float)(v23 * v11)) + (float)(v24 * v15));
  *((float *)&v35 + 1) = *((float *)&v35 + 1)
                       + (float)((float)((float)(v22 * v13) + (float)(v23 * v14)) + (float)(v24 * v12));
  Mtx34_rotateY(&v30, (unsigned int *)(a1 + 6440));
  Mtx34_rotateX(&v30, (unsigned int *)(a1 + 6436));
  Mtx34_rotateZ(&v30, (unsigned int *)(a1 + 6444));
  v25 = v31;
  result = a2 + 4;
  FIELD_U64(a2, 0x0)[0] = v30.n64_u64[0];
  a2[1].n64_u64[0] = v25;
  v27 = a2 + 2;
  v28 = v33;
  FIELD_U64(v27, 0x0)[0] = v32;
  v27[1].n64_u64[0] = v28;
  v29 = v35;
  FIELD_U64(result, 0x0)[0] = v34;
  result[1].n64_u64[0] = v29;
  return result;
}
