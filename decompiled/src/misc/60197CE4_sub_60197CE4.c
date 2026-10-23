/* sub_60197CE4
 * address: 0x60197CE4   size: 932   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60197CE4(int a1)
{
  int result; // r0
  float v3; // r3
  float v4; // r7
  float v5; // r6
  float v6; // r0
  float v7; // r1
  float v8; // r2
  int v9; // r0
  int (__fastcall *v10)(int, float32x2_t *); // r2
  int v11; // r6
  int v12; // r0
  int (__fastcall *v13)(int, float32x2_t *); // r2
  int v14; // r0
  int v15; // r0
  float v16; // s0
  float v17; // s2
  int v18; // r0
  void (__fastcall *v19)(int, float *); // r2
  _DWORD v20[3]; // [sp+4h] [bp-9Ch] BYREF
  float32x2_t v21; // [sp+10h] [bp-90h] BYREF
  float v22; // [sp+18h] [bp-88h]
  float32x2_t v23; // [sp+40h] [bp-60h] BYREF
  float v24; // [sp+48h] [bp-58h]
  float v25; // [sp+4Ch] [bp-54h]
  float v26; // [sp+50h] [bp-50h]
  float v27; // [sp+54h] [bp-4Ch]
  float v28; // [sp+58h] [bp-48h]
  float v29; // [sp+5Ch] [bp-44h]
  float v30; // [sp+60h] [bp-40h]
  float v31; // [sp+64h] [bp-3Ch]
  float v32; // [sp+68h] [bp-38h]
  float v33; // [sp+6Ch] [bp-34h]
  float v34; // [sp+70h] [bp-30h] BYREF
  float v35; // [sp+74h] [bp-2Ch] BYREF
  float v36; // [sp+78h] [bp-28h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 300));
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 308));
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    v3 = FIELD_F32(a1, 176);
    v4 = FIELD_F32(a1, 180);
    v5 = FIELD_F32(a1, 184);
    v6 = FIELD_F32(a1, 84);
    v7 = FIELD_F32(a1, 88);
    v8 = FIELD_F32(a1, 80);
    v23.n64_u64[0] = 1065353216;
    v36 = v5;
    v35 = v4;
    v34 = v3;
    v24 = 0.0;
    v28 = 0.0;
    v30 = 0.0;
    v31 = 0.0;
    v32 = 1.0;
    v25 = v8;
    v26 = 0.0;
    v27 = 1.0;
    v29 = v6;
    v33 = v7;
    Mtx34_rotateX(&v23, (unsigned int *)&v34);
    Mtx34_rotateZ(&v23, (unsigned int *)&v36);
    Mtx34_rotateY(&v23, (unsigned int *)&v35);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 308) + 60))(**(_DWORD **)(a1 + 308), &v23);
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 308) + 68))(**(_DWORD **)(a1 + 308), a1 + 128);
    sub_604218E0(*(_DWORD **)(a1 + 308));
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 308) + 52))(**(_DWORD **)(a1 + 308));
    v20[0] = 1065353216;
    v20[1] = 1065353216;
    v20[2] = 1065353216;
    v9 = **(_DWORD **)(a1 + 308);
    v10 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v9 + 84);
    v21.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
    v21.n64_u32[1] = (unsigned __int32)"p_shaft_1";
    v11 = v10(v9, &v21);
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _DWORD *))(***(_DWORD ***)(a1 + 308) + 100))(
      **(_DWORD **)(a1 + 308),
      v11,
      &v21,
      v20);
    FIELD_U32(a1, 440) += 286331136;
    Mtx34_rotateX(&v21, (unsigned int *)(a1 + 440));
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _DWORD *))(***(_DWORD ***)(a1 + 308) + 96))(
      **(_DWORD **)(a1 + 308),
      v11,
      &v21,
      v20);
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 308) + 56))(**(_DWORD **)(a1 + 308));
    v21.n64_u64[0] = 0x3F8000003F800000LL;
    v22 = 1.0;
    v12 = **(_DWORD **)(a1 + 308);
    v13 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v12 + 84);
    v23.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
    v23.n64_u32[1] = (unsigned __int32)"skl_root";
    v14 = v13(v12, &v23);
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(***(_DWORD ***)(a1 + 308) + 108))(
      **(_DWORD **)(a1 + 308),
      v14,
      &v23);
    v34 = -2.0;
    Mtx34_rotateZ(&v23, (unsigned int *)&v34);
    v34 = 2.0;
    Mtx34_rotateY(&v23, (unsigned int *)&v34);
    v15 = FIELD_U32(a1, 316);
    v16 = FIELD_F32(a1, 524);
    v17 = *(float *)(**(_DWORD **)(v15 + 44) + 20);
    if ( FIELD_U8(a1, 528) )
    {
      if ( v17 <= v16 )
        goto LABEL_7;
    }
    else if ( v17 >= v16 )
    {
LABEL_7:
      (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 316) + 60))(**(_DWORD **)(a1 + 316), &v23);
      (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 316) + 68))(**(_DWORD **)(a1 + 316), &v21);
      ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 316));
      v25 = v25 + (float)((float)((float)(v23.n64_f32[1] * 1.75) + (float)(v23.n64_f32[0] * 0.0)) - (float)(v24 * 1.75));
      v29 = v29 + (float)((float)((float)(v27 * 1.75) + (float)(v26 * 0.0)) - (float)(v28 * 1.75));
      v33 = v33 + (float)((float)((float)(v31 * 1.75) + (float)(v30 * 0.0)) - (float)(v32 * 1.75));
      (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 300) + 60))(**(_DWORD **)(a1 + 300), &v23);
      v18 = **(_DWORD **)(a1 + 300);
      v19 = *(void (__fastcall **)(int, float *))(*(_DWORD *)v18 + 68);
      v34 = v21.n64_f32[0] * 1.2;
      v35 = v21.n64_f32[1] * 1.2;
      v36 = v22 * 1.2;
      v19(v18, &v34);
      return sub_60421880(FIELD_U32(a1, 300));
    }
    Animation_update(**(_DWORD **)(v15 + 28));
    Animation_update(**(_DWORD **)(FIELD_U32(a1, 316) + 44));
    goto LABEL_7;
  }
  return result;
}
