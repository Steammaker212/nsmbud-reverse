/* PowBlock_vf64
 * address: 0x606BDB70   size: 916   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PowBlock_vf64(int a1)
{
  float v2; // r1
  int v3; // r2
  unsigned int v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r2
  float *v7; // r5
  float *v8; // r3
  float *v9; // r7
  float v10; // s6
  float v11; // s0
  float v12; // s2
  float v13; // s12
  float v14; // s5
  float v15; // s8
  float v16; // s1
  float v17; // s9
  float v18; // s13
  _DWORD **v19; // r6
  StateBase *CurrentState; // r0
  int v21; // r6
  int result; // r0
  int v23; // r7
  float v24; // s0
  ModelWrapper **v25; // r4
  ModelWrapper *v26; // t1
  void *model; // r7
  float v28; // s0
  float v29; // [sp+4h] [bp-9Ch] BYREF
  float v30; // [sp+8h] [bp-98h]
  int v31; // [sp+Ch] [bp-94h]
  _BYTE v32[12]; // [sp+10h] [bp-90h] BYREF
  int v33; // [sp+1Ch] [bp-84h]
  int v34; // [sp+2Ch] [bp-74h]
  int v35; // [sp+3Ch] [bp-64h]
  float v36; // [sp+40h] [bp-60h] BYREF
  float v37; // [sp+44h] [bp-5Ch]
  float v38; // [sp+48h] [bp-58h]
  float v39; // [sp+4Ch] [bp-54h]
  float v40; // [sp+50h] [bp-50h]
  float v41; // [sp+54h] [bp-4Ch]
  float v42; // [sp+58h] [bp-48h]
  float v43; // [sp+5Ch] [bp-44h]
  __int64 v44; // [sp+60h] [bp-40h]
  float v45; // [sp+68h] [bp-38h]
  int v46; // [sp+6Ch] [bp-34h]
  float v47; // [sp+70h] [bp-30h] BYREF
  float v48; // [sp+74h] [bp-2Ch]
  int v49; // [sp+78h] [bp-28h]

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v47 = FIELD_F32(a1, 108);
  v48 = v2;
  v49 = v3;
  if ( (FIELD_U8(a1, 6124) & 4) != 0 )
    sub_605CC78C(a1, &v47);
  v4 = FIELD_U32(a1, 156);
  v5 = FIELD_U32(a1, 160);
  v6 = FIELD_U32(a1, 164);
  v7 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v10 = (float)(v4 & 0xFFFFFF);
  v11 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v13 = v8[2] + (float)(v11 * v8[3]);
  v14 = v7[2] + (float)(v12 * v7[3]);
  v15 = *v8 + (float)(v11 * v8[1]);
  v16 = *v7 + (float)(v12 * v7[1]);
  v17 = *v9 + (float)((float)(v10 * 0.000000059605) * v9[1]);
  v18 = v9[2] + (float)((float)(v10 * 0.000000059605) * v9[3]);
  v36 = (float)(v14 * v13) + (float)(v17 * (float)(v16 * v15));
  v40 = v18 * v15;
  *(float *)&v44 = (float)(v17 * (float)(v14 * v15)) - (float)(v16 * v13);
  v37 = (float)(v17 * (float)(v16 * v13)) - (float)(v14 * v15);
  v41 = v18 * v13;
  *((float *)&v44 + 1) = (float)(v16 * v15) + (float)(v17 * (float)(v14 * v13));
  v38 = v18 * v16;
  v42 = -v17;
  v45 = v18 * v14;
  v39 = v47;
  v43 = v48;
  v46 = v49;
  v19 = (_DWORD **)(a1 + 6152);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6152) + 60))(**(_DWORD **)(a1 + 6152), &v36);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v19 + 68))(**v19, a1 + 144);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6152));
  (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(*(_DWORD *)**v19 + 108))(**v19, 0, v32);
  FIELD_U32(a1, 6836) = v33;
  FIELD_U32(a1, 6840) = v34;
  FIELD_U32(a1, 6844) = v35;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v21 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60CBA6CC + 8))();
  if ( v21 == result )
  {
    v47 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    v48 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    v49 = 1166843904;
    v37 = 0.0;
    v38 = 0.0;
    v40 = 0.0;
    v42 = 0.0;
    v44 = 0;
    v36 = 1.0;
    v41 = 1.0;
    v45 = 1.0;
    v39 = v47;
    v43 = v48;
    v46 = 1166843904;
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6156));
    v23 = **(_DWORD **)(a1 + 6156);
    (*(void (__fastcall **)(int, float *))(*(_DWORD *)v23 + 60))(v23, &v36);
    v24 = FIELD_F32(dword_60CC6484, 16);
    v29 = v24 * *(float *)&dword_60CBA790;
    v30 = v24 * *(float *)&dword_60CBA794;
    v31 = dword_60CBA798;
    (*(void (__fastcall **)(int, float *))(*(_DWORD *)v23 + 68))(v23, &v29);
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6156));
    v26 = *(ModelWrapper **)(a1 + 6160);
    v25 = (ModelWrapper **)(a1 + 6160);
    ModelWrapper_updateAnims(v26);
    model = (*v25)->model;
    (*(void (__fastcall **)(void *, float *))(*(_DWORD *)model + 60))(model, &v36);
    v28 = FIELD_F32(dword_60CC6484, 16);
    v29 = v28 * *(float *)&dword_60CBA790;
    v30 = v28 * *(float *)&dword_60CBA794;
    v31 = dword_60CBA798;
    (*(void (__fastcall **)(void *, float *))(*(_DWORD *)model + 68))(model, &v29);
    return ModelWrapper_updateModel(*v25);
  }
  return result;
}
