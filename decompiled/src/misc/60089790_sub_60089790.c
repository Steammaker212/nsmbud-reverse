/* sub_60089790
 * address: 0x60089790   size: 1216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60089790(int a1)
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
  float v12; // r4
  float v13; // r5
  float v14; // r6
  float v15; // r7
  float v16; // r4
  float v17; // r5
  float v18; // r6
  float v19; // r7
  _DWORD **v20; // r7
  _DWORD **v21; // r7
  StateBase *CurrentState; // r0
  int v23; // r5
  unsigned int v24; // [sp+4h] [bp-BCh] BYREF
  _BYTE v25[12]; // [sp+8h] [bp-B8h] BYREF
  float32x2_t v26[6]; // [sp+14h] [bp-ACh] BYREF
  float v27; // [sp+44h] [bp-7Ch] BYREF
  float v28; // [sp+48h] [bp-78h]
  float v29; // [sp+4Ch] [bp-74h]
  float32x2_t v30; // [sp+50h] [bp-70h] BYREF
  float v31; // [sp+58h] [bp-68h]
  float v32; // [sp+5Ch] [bp-64h]
  float v33; // [sp+60h] [bp-60h]
  float v34; // [sp+64h] [bp-5Ch]
  float v35; // [sp+68h] [bp-58h]
  float v36; // [sp+6Ch] [bp-54h]
  float v37; // [sp+70h] [bp-50h]
  float v38; // [sp+74h] [bp-4Ch]
  float v39; // [sp+78h] [bp-48h]
  float v40; // [sp+7Ch] [bp-44h]
  float v41; // [sp+80h] [bp-40h] BYREF
  float v42; // [sp+84h] [bp-3Ch]
  float v43; // [sp+88h] [bp-38h]

  result = FIELD_U8(a1, 6220);
  if ( !result )
  {
    result = FIELD_U32(a1, 6100);
    if ( !result )
    {
      v3 = FIELD_F32(a1, 148);
      v4 = FIELD_F32(a1, 152);
      v41 = FIELD_F32(a1, 144);
      v42 = v3;
      v43 = v4;
      v5 = FIELD_F32(a1, 6696) - FIELD_F32(a1, 148);
      v6 = FIELD_F32(a1, 6700) - FIELD_F32(a1, 152);
      v41 = v41 + (float)((float)(FIELD_F32(a1, 6692) - FIELD_F32(a1, 144)) * 0.7);
      v42 = v3 + (float)(v5 * 0.7);
      v43 = v4 + (float)(v6 * 0.7);
      v7 = FIELD_U8(a1, 7248);
      v8 = v7 == 0;
      if ( FIELD_U8(a1, 7248) )
      {
        v7 = FIELD_U32(a1, 7244);
        v8 = v7 == 0;
      }
      if ( v8 )
      {
        v30.n64_u64[0] = 1065353216;
        v31 = 0.0;
        v33 = 0.0;
        v34 = 1.0;
        v35 = 0.0;
        v37 = 0.0;
        v38 = 0.0;
        v39 = 1.0;
        v32 = FIELD_F32(a1, 108);
        v36 = FIELD_F32(a1, 112);
        v40 = FIELD_F32(a1, 116);
        Mtx34_rotateY(&v30, (unsigned int *)(a1 + 160));
        v32 = v32
            + (float)((float)((float)(v30.n64_f32[1] * 10.0) + (float)(v30.n64_f32[0] * 0.0)) + (float)(v31 * 0.0));
        v36 = v36 + (float)((float)((float)(v34 * 10.0) + (float)(v33 * 0.0)) + (float)(v35 * 0.0));
        v40 = v40 + (float)((float)((float)(v38 * 10.0) + (float)(v37 * 0.0)) + (float)(v39 * 0.0));
        Mtx34_rotateX(&v30, (unsigned int *)(a1 + 156));
        v32 = v32
            + (float)((float)((float)(v30.n64_f32[0] * 0.0) - (float)(v30.n64_f32[1] * 10.0)) + (float)(v31 * 0.0));
        v36 = v36 + (float)((float)((float)(v33 * 0.0) - (float)(v34 * 10.0)) + (float)(v35 * 0.0));
        v40 = v40 + (float)((float)((float)(v37 * 0.0) - (float)(v38 * 10.0)) + (float)(v39 * 0.0));
        Mtx34_rotateZ(&v30, (unsigned int *)(a1 + 164));
        v21 = (_DWORD **)(a1 + 7100);
        (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7100) + 60))(
          **(_DWORD **)(a1 + 7100),
          &v30);
        (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v21 + 68))(**v21, &v41);
        j_ModelWrapper_updateAnims(FIELD_U32(a1, 7100));
        sub_604218E0(*(_DWORD **)(a1 + 7100));
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v21 + 52))(**v21);
        CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v23 == (*(int (**)(void))(dword_60C81EAC + 8))() )
        {
          (*(void (__fastcall **)(_DWORD, int, float32x2_t *, float *))(*(_DWORD *)**v21 + 100))(**v21, 25, v26, &v27);
          Mtx34_rotateZ(v26, (unsigned int *)(a1 + 7116));
          (*(void (__fastcall **)(_DWORD, int, float32x2_t *, float *))(*(_DWORD *)**v21 + 96))(**v21, 25, v26, &v27);
        }
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v21 + 56))(**v21);
        return sub_600CEA24(a1);
      }
      else
      {
        v9 = FIELD_U32(v7, 160);
        v10 = sub_600D17D0();
        v11 = *(_QWORD *)v10;
        v12 = FIELD_F32(v10, 8);
        v13 = FIELD_F32(v10, 12);
        v14 = FIELD_F32(v10, 16);
        v15 = FIELD_F32(v10, 20);
        v10 += 24;
        v30.n64_u64[0] = v11;
        v31 = v12;
        v32 = v13;
        v33 = v14;
        v34 = v15;
        HIDWORD(v11) = FIELD_U32(v10, 4);
        v16 = FIELD_F32(v10, 8);
        v17 = FIELD_F32(v10, 12);
        v18 = FIELD_F32(v10, 16);
        v19 = FIELD_F32(v10, 20);
        v35 = *(float *)v10;
        v36 = *((float *)&v11 + 1);
        v37 = v16;
        v38 = v17;
        v39 = v18;
        v40 = v19;
        (*(void (__fastcall **)(int, float *))(*(_DWORD *)a1 + 1160))(a1, &v27);
        v32 = v32 + (float)((float)((float)(v30.n64_f32[1] * v28) + (float)(v30.n64_f32[0] * v27)) + (float)(v31 * v29));
        v36 = v36 + (float)((float)((float)(v34 * v28) + (float)(v33 * v27)) + (float)(v35 * v29));
        v40 = v40 + (float)((float)((float)(v38 * v28) + (float)(v37 * v27)) + (float)(v39 * v29));
        v20 = (_DWORD **)(a1 + 7100);
        (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7100) + 60))(
          **(_DWORD **)(a1 + 7100),
          &v30);
        (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v20 + 68))(**v20, &v41);
        j_ModelWrapper_updateAnims(FIELD_U32(a1, 7100));
        sub_604218E0(*(_DWORD **)(a1 + 7100));
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v20 + 52))(**v20);
        if ( FIELD_U8(a1, 7608) )
        {
          (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v20 + 100))(**v20, 25, v26, v25);
          v24 = FIELD_U32(a1, 7112) - v9;
          Mtx34_rotateY(v26, &v24);
          Mtx34_rotateZ(v26, (unsigned int *)(a1 + 7116));
          (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v20 + 96))(**v20, 25, v26, v25);
        }
        return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v20 + 56))(**v20);
      }
    }
  }
  return result;
}
