/* sub_600FB974
 * address: 0x600FB974   size: 1088   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600FB974(int a1)
{
  int result; // r0
  float v3; // r1
  float v4; // r2
  float v5; // s4
  float v6; // s2
  int v7; // r0
  bool v8; // zf
  int v9; // r8
  int v10; // r0
  unsigned __int64 v11; // r2
  __int64 v12; // r4
  __int64 v13; // r6
  __int64 v14; // r4
  __int64 v15; // r6
  __int64 v16; // d17
  __int64 v17; // d17
  __int64 v18; // d17
  _DWORD **v19; // r7
  unsigned int v20; // [sp+4h] [bp-BCh] BYREF
  _BYTE v21[12]; // [sp+8h] [bp-B8h] BYREF
  float32x2_t v22[6]; // [sp+14h] [bp-ACh] BYREF
  float v23; // [sp+44h] [bp-7Ch] BYREF
  float v24; // [sp+48h] [bp-78h]
  float v25; // [sp+4Ch] [bp-74h]
  float32x2_t v26; // [sp+50h] [bp-70h] BYREF
  __int64 v27; // [sp+58h] [bp-68h]
  __int64 v28; // [sp+60h] [bp-60h]
  __int64 v29; // [sp+68h] [bp-58h]
  __int64 v30; // [sp+70h] [bp-50h]
  __int64 v31; // [sp+78h] [bp-48h]
  float v32; // [sp+80h] [bp-40h] BYREF
  float v33; // [sp+84h] [bp-3Ch]
  float v34; // [sp+88h] [bp-38h]

  result = FIELD_U8(a1, 6220);
  if ( !result )
  {
    result = FIELD_U32(a1, 6100);
    if ( !result )
    {
      v3 = FIELD_F32(a1, 148);
      v4 = FIELD_F32(a1, 152);
      v32 = FIELD_F32(a1, 144);
      v33 = v3;
      v34 = v4;
      v5 = FIELD_F32(a1, 6696) - FIELD_F32(a1, 148);
      v6 = FIELD_F32(a1, 6700) - FIELD_F32(a1, 152);
      v32 = v32 + (float)((float)(FIELD_F32(a1, 6692) - FIELD_F32(a1, 144)) * 0.5);
      v33 = v3 + (float)(v5 * 0.5);
      v34 = v4 + (float)(v6 * 0.5);
      v7 = FIELD_U8(a1, 7248);
      v8 = v7 == 0;
      if ( FIELD_U8(a1, 7248) )
      {
        v7 = FIELD_U32(a1, 7244);
        v8 = v7 == 0;
      }
      if ( v8 )
      {
        v26.n64_u64[0] = 1065353216;
        LODWORD(v27) = 0;
        v28 = 0x3F80000000000000LL;
        LODWORD(v29) = 0;
        v30 = 0;
        LODWORD(v31) = 1065353216;
        HIDWORD(v27) = FIELD_U32(a1, 108);
        HIDWORD(v29) = FIELD_U32(a1, 112);
        HIDWORD(v31) = FIELD_U32(a1, 116);
        Mtx34_rotateY(&v26, (unsigned int *)(a1 + 160));
        *((float *)&v27 + 1) = *((float *)&v27 + 1)
                             + (float)((float)((float)(v26.n64_f32[1] * 10.0) + (float)(v26.n64_f32[0] * 0.0))
                                     + (float)(*(float *)&v27 * 0.0));
        *((float *)&v29 + 1) = *((float *)&v29 + 1)
                             + (float)((float)((float)(*((float *)&v28 + 1) * 10.0) + (float)(*(float *)&v28 * 0.0))
                                     + (float)(*(float *)&v29 * 0.0));
        *((float *)&v31 + 1) = *((float *)&v31 + 1)
                             + (float)((float)((float)(*((float *)&v30 + 1) * 10.0) + (float)(*(float *)&v30 * 0.0))
                                     + (float)(*(float *)&v31 * 0.0));
        Mtx34_rotateX(&v26, (unsigned int *)(a1 + 156));
        *((float *)&v27 + 1) = *((float *)&v27 + 1)
                             + (float)((float)((float)(v26.n64_f32[0] * 0.0) - (float)(v26.n64_f32[1] * 10.0))
                                     + (float)(*(float *)&v27 * 0.0));
        *((float *)&v29 + 1) = *((float *)&v29 + 1)
                             + (float)((float)((float)(*(float *)&v28 * 0.0) - (float)(*((float *)&v28 + 1) * 10.0))
                                     + (float)(*(float *)&v29 * 0.0));
        *((float *)&v31 + 1) = *((float *)&v31 + 1)
                             + (float)((float)((float)(*(float *)&v30 * 0.0) - (float)(*((float *)&v30 + 1) * 10.0))
                                     + (float)(*(float *)&v31 * 0.0));
        Mtx34_rotateZ(&v26, (unsigned int *)(a1 + 164));
        (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7100) + 60))(
          **(_DWORD **)(a1 + 7100),
          &v26);
        (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 7100) + 68))(**(_DWORD **)(a1 + 7100), &v32);
        j_ModelWrapper_updateAnims(FIELD_U32(a1, 7100));
        sub_60421880(FIELD_U32(a1, 7100));
        return sub_600CEA24(a1);
      }
      else
      {
        v9 = FIELD_U32(v7, 160);
        v10 = sub_600D17D0(v7);
        v11 = *(_QWORD *)v10;
        v12 = FIELD_U64(v10, 8);
        v13 = FIELD_U64(v10, 16);
        v10 += 24;
        v26.n64_u64[0] = v11;
        v27 = v12;
        v28 = v13;
        HIDWORD(v11) = FIELD_U32(v10, 4);
        v14 = FIELD_U64(v10, 8);
        v15 = FIELD_U64(v10, 16);
        LODWORD(v29) = *(_DWORD *)v10;
        HIDWORD(v29) = HIDWORD(v11);
        v30 = v14;
        v31 = v15;
        v16 = v27;
        *(float32x2_t *)(a1 + 7192) = v26;
        FIELD_U64(a1, 7200) = v16;
        v17 = v29;
        FIELD_U64(a1, 7208) = v28;
        FIELD_U64(a1, 7216) = v17;
        v18 = v31;
        FIELD_U64(a1, 7224) = v30;
        FIELD_U64(a1, 7232) = v18;
        (*(void (__fastcall **)(int, float *))(*(_DWORD *)a1 + 1160))(a1, &v23);
        *((float *)&v27 + 1) = *((float *)&v27 + 1)
                             + (float)((float)((float)(v26.n64_f32[1] * v24) + (float)(v26.n64_f32[0] * v23))
                                     + (float)(*(float *)&v27 * v25));
        *((float *)&v29 + 1) = *((float *)&v29 + 1)
                             + (float)((float)((float)(*((float *)&v28 + 1) * v24) + (float)(*(float *)&v28 * v23))
                                     + (float)(*(float *)&v29 * v25));
        *((float *)&v31 + 1) = *((float *)&v31 + 1)
                             + (float)((float)((float)(*((float *)&v30 + 1) * v24) + (float)(*(float *)&v30 * v23))
                                     + (float)(*(float *)&v31 * v25));
        v19 = (_DWORD **)(a1 + 7100);
        (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7100) + 60))(
          **(_DWORD **)(a1 + 7100),
          &v26);
        (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v19 + 68))(**v19, &v32);
        j_ModelWrapper_updateAnims(FIELD_U32(a1, 7100));
        sub_604218E0(*(_DWORD **)(a1 + 7100));
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v19 + 52))(**v19);
        if ( FIELD_U8(a1, 7608) )
        {
          (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v19 + 100))(**v19, 25, v22, v21);
          v20 = FIELD_U32(a1, 7112) - v9;
          Mtx34_rotateY(v22, &v20);
          Mtx34_rotateZ(v22, (unsigned int *)(a1 + 7116));
          (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v19 + 96))(**v19, 25, v22, v21);
        }
        return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v19 + 56))(**v19);
      }
    }
  }
  return result;
}
