/* sub_601AA0A4
 * address: 0x601AA0A4   size: 1056   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601AA0A4(int a1)
{
  int result; // r0
  float v3; // r0
  float v4; // r1
  int v5; // r3
  int v6; // r7
  float v7; // s0
  StateBase *CurrentState; // r0
  int v9; // r6
  int v10; // r0
  int (__fastcall *v11)(int, _DWORD *); // r2
  int v12; // r7
  float v13; // s2
  int v14; // r0
  int (__fastcall *v15)(int, _DWORD *); // r2
  int v16; // r5
  float v17; // s2
  int v18; // r0
  int (__fastcall *v19)(int, _DWORD *); // r2
  int v20; // r5
  float v21; // s2
  StateBase *v22; // r0
  int v23; // r5
  StateBase *v24; // r0
  int v25; // r5
  _DWORD v26[3]; // [sp+4h] [bp-10Ch] BYREF
  float v27; // [sp+10h] [bp-100h]
  float v28; // [sp+20h] [bp-F0h]
  float v29; // [sp+30h] [bp-E0h]
  _DWORD v30[3]; // [sp+34h] [bp-DCh] BYREF
  float v31; // [sp+40h] [bp-D0h]
  float v32; // [sp+50h] [bp-C0h]
  float v33; // [sp+60h] [bp-B0h]
  _BYTE v34[12]; // [sp+64h] [bp-ACh] BYREF
  _DWORD v35[3]; // [sp+70h] [bp-A0h] BYREF
  float v36; // [sp+7Ch] [bp-94h]
  float v37; // [sp+8Ch] [bp-84h]
  float v38; // [sp+9Ch] [bp-74h]
  float32x2_t v39; // [sp+A0h] [bp-70h] BYREF
  float v40; // [sp+A8h] [bp-68h]
  float v41; // [sp+ACh] [bp-64h]
  float v42; // [sp+B0h] [bp-60h]
  float v43; // [sp+B4h] [bp-5Ch]
  float v44; // [sp+B8h] [bp-58h]
  float v45; // [sp+BCh] [bp-54h]
  float v46; // [sp+C0h] [bp-50h]
  float v47; // [sp+C4h] [bp-4Ch]
  float v48; // [sp+C8h] [bp-48h]
  float v49; // [sp+CCh] [bp-44h]
  _DWORD v50[16]; // [sp+D0h] [bp-40h] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 372));
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    v3 = FIELD_F32(a1, 88);
    v4 = FIELD_F32(a1, 80);
    v5 = FIELD_U32(a1, 132);
    v6 = FIELD_U32(a1, 136);
    v7 = FIELD_F32(a1, 84) + 30.0;
    v50[0] = FIELD_U32(a1, 128);
    v50[1] = v5;
    v50[2] = v6;
    v39.n64_u64[0] = 1065353216;
    v40 = 0.0;
    v42 = 0.0;
    v43 = 1.0;
    v44 = 0.0;
    v46 = 0.0;
    v47 = 0.0;
    v48 = 1.0;
    v41 = v4;
    v45 = v7;
    v49 = v3;
    Mtx34_rotateY(&v39, (unsigned int *)(a1 + 180));
    Mtx34_rotateX(&v39, (unsigned int *)(a1 + 176));
    Mtx34_rotateZ(&v39, (unsigned int *)(a1 + 184));
    v41 = v41 + (float)((float)((float)(v39.n64_f32[0] * 0.0) - (float)(v39.n64_f32[1] * 30.0)) + (float)(v40 * 0.0));
    v45 = v45 + (float)((float)((float)(v42 * 0.0) - (float)(v43 * 30.0)) + (float)(v44 * 0.0));
    v49 = v49 + (float)((float)((float)(v46 * 0.0) - (float)(v47 * 30.0)) + (float)(v48 * 0.0));
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 372) + 60))(**(_DWORD **)(a1 + 372), &v39);
    (*(void (__fastcall **)(_DWORD, _DWORD *))(***(_DWORD ***)(a1 + 372) + 68))(**(_DWORD **)(a1 + 372), v50);
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 372) + 52))(**(_DWORD **)(a1 + 372));
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v9 == (*(int (**)(void))(dword_60C8A4AC + 8))() )
    {
      v10 = **(_DWORD **)(a1 + 372);
      v11 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v10 + 84);
      v35[0] = &sead__SafeStringBase__vtable;
      v35[1] = "neck_01";
      v12 = v11(v10, v35);
      (*(void (__fastcall **)(_DWORD, int, _DWORD *, _BYTE *))(***(_DWORD ***)(a1 + 372) + 100))(
        **(_DWORD **)(a1 + 372),
        v12,
        v35,
        v34);
      v13 = FIELD_F32(a1, 392);
      v36 = v36 + 0.0;
      v37 = v13 + v37;
      v38 = v38 + 0.0;
      (*(void (__fastcall **)(_DWORD, int, _DWORD *, _BYTE *))(***(_DWORD ***)(a1 + 372) + 96))(
        **(_DWORD **)(a1 + 372),
        v12,
        v35,
        v34);
      v14 = **(_DWORD **)(a1 + 372);
      v15 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v14 + 84);
      v30[0] = &sead__SafeStringBase__vtable;
      v30[1] = "hand_L";
      v16 = v15(v14, v30);
      (*(void (__fastcall **)(_DWORD, int, _DWORD *, _BYTE *))(***(_DWORD ***)(a1 + 372) + 100))(
        **(_DWORD **)(a1 + 372),
        v16,
        v30,
        v34);
      v17 = FIELD_F32(a1, 392);
      v31 = v31 + 0.0;
      v32 = v17 + v32;
      v33 = v33 + 0.0;
      (*(void (__fastcall **)(_DWORD, int, _DWORD *, _BYTE *))(***(_DWORD ***)(a1 + 372) + 96))(
        **(_DWORD **)(a1 + 372),
        v16,
        v30,
        v34);
      v18 = **(_DWORD **)(a1 + 372);
      v19 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v18 + 84);
      v26[0] = &sead__SafeStringBase__vtable;
      v26[1] = "hand_R";
      v20 = v19(v18, v26);
      (*(void (__fastcall **)(_DWORD, int, _DWORD *, _BYTE *))(***(_DWORD ***)(a1 + 372) + 100))(
        **(_DWORD **)(a1 + 372),
        v20,
        v26,
        v34);
      v21 = FIELD_F32(a1, 392);
      v27 = v27 + 0.0;
      v28 = v21 + v28;
      v29 = v29 + 0.0;
      (*(void (__fastcall **)(_DWORD, int, _DWORD *, _BYTE *))(***(_DWORD ***)(a1 + 372) + 96))(
        **(_DWORD **)(a1 + 372),
        v20,
        v26,
        v34);
    }
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 372) + 56))(**(_DWORD **)(a1 + 372));
    result = sub_60190968(dword_60C8996C);
    if ( !result )
    {
      v22 = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
      v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v22, 0x0) + 2))(v22);
      result = (*(int (**)(void))(dword_60C8A4CC + 8))();
      if ( v23 != result )
      {
        v24 = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
        v25 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v24, 0x0) + 2))(v24);
        result = (*(int (**)(void))(dword_60C8A46C + 8))();
        if ( v25 != result )
          return (int)sub_60177448((_DWORD *)dword_60C88E60, a1 + 324);
      }
    }
  }
  return result;
}
