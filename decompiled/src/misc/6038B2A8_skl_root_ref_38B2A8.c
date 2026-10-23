/* skl_root_ref_38B2A8
 * address: 0x6038B2A8   size: 1284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_38B2A8(int a1)
{
  float v2; // r8
  float v3; // r12
  float v4; // lr
  unsigned int v5; // r3
  unsigned int v6; // r7
  unsigned int v7; // r6
  int v8; // r5
  float *v9; // r0
  float *v10; // r2
  float v11; // s0
  float v12; // s2
  float v13; // s4
  float v14; // s12
  float v15; // s5
  float v16; // s8
  float v17; // s1
  float v18; // s9
  float v19; // s13
  ModelWrapper **v20; // r5
  StateBase *CurrentState; // r0
  int v22; // r6
  void *model; // r0
  int (__fastcall *v24)(void *, float32x2_t *); // r2
  int v25; // r6
  StateBase *v26; // r0
  int v27; // r7
  StateBase *v28; // r0
  int v29; // r7
  int v30; // r0
  float v31; // s6
  float v32; // s10
  float v33; // s2
  float v34; // s8
  float v35; // s4
  float v36; // s12
  float v37; // s3
  float v38; // s14
  float v39; // s7
  float v40; // s9
  float v41; // s5
  float v42; // s1
  float v43; // s1
  float v44; // s14
  float v45; // s3
  float v46; // s5
  void *v47; // r0
  int (__fastcall *v48)(void *, float32x2_t *); // r2
  int v49; // r0
  int v51; // [sp+0h] [bp-88h] BYREF
  _BYTE v52[12]; // [sp+4h] [bp-84h] BYREF
  float32x2_t v53[6]; // [sp+10h] [bp-78h] BYREF
  float v54; // [sp+40h] [bp-48h] BYREF
  float v55; // [sp+44h] [bp-44h]
  float v56; // [sp+48h] [bp-40h]
  float v57; // [sp+4Ch] [bp-3Ch]
  float v58; // [sp+50h] [bp-38h]
  float v59; // [sp+54h] [bp-34h]
  float v60; // [sp+58h] [bp-30h]
  float v61; // [sp+5Ch] [bp-2Ch]
  float v62; // [sp+60h] [bp-28h]
  float v63; // [sp+64h] [bp-24h]
  float v64; // [sp+68h] [bp-20h]
  float v65; // [sp+6Ch] [bp-1Ch]

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_U32(a1, 156);
  v6 = FIELD_U32(a1, 160);
  v7 = FIELD_U32(a1, 164);
  v8 = (v7 >> 20) & 0xFF0;
  v9 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v11 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v14 = *(float *)((char *)&sinLutTable[2] + v8) + (float)(v11 * *(float *)((char *)&sinLutTable[3] + v8));
  v15 = v10[2] + (float)(v12 * v10[3]);
  v16 = *(float *)((char *)sinLutTable + v8) + (float)(v11 * *(float *)((char *)&sinLutTable[1] + v8));
  v17 = *v10 + (float)(v12 * v10[1]);
  v18 = *v9 + (float)(v13 * v9[1]);
  v19 = v9[2] + (float)(v13 * v9[3]);
  v54 = (float)(v15 * v14) + (float)(v18 * (float)(v17 * v16));
  v58 = v19 * v16;
  v62 = (float)(v18 * (float)(v15 * v16)) - (float)(v17 * v14);
  v55 = (float)(v18 * (float)(v17 * v14)) - (float)(v15 * v16);
  v59 = v19 * v14;
  v63 = (float)(v17 * v16) + (float)(v18 * (float)(v15 * v14));
  v56 = v19 * v17;
  v60 = -v18;
  v64 = v19 * v15;
  v57 = v2;
  v61 = v3;
  v65 = v4;
  v20 = (ModelWrapper **)(a1 + 6304);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6304) + 60))(**(_DWORD **)(a1 + 6304), &v54);
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)(*v20)->model + 68))((*v20)->model, a1 + 144);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v22 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    ModelWrapper_updateAnims(*v20);
  (*(void (__fastcall **)(void *))(*(_DWORD *)(*v20)->model + 52))((*v20)->model);
  model = (*v20)->model;
  v24 = *(int (__fastcall **)(void *, float32x2_t *))(*(_DWORD *)model + 84);
  v53[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v53[0].n64_u32[1] = (unsigned __int32)"screw";
  v25 = v24(model, v53);
  (*(void (__fastcall **)(void *, int, float32x2_t *, _BYTE *))(*(_DWORD *)(*v20)->model + 100))(
    (*v20)->model,
    v25,
    v53,
    v52);
  v26 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v27 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v26, 0x0) + 2))(v26);
  if ( v27 == (*(int (**)(void))(dword_60C96CEC + 8))()
    || (v28 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v29 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v28, 0x0) + 2))(v28),
        v29 == (*(int (**)(void))(dword_60C96DCC + 8))()) )
  {
    v30 = FIELD_U32(a1, 8252) - 477218560;
    FIELD_U32(a1, 8252) = v30;
    v51 = v30;
    Mtx34_rotateX(v53, (unsigned int *)&v51);
  }
  (*(void (__fastcall **)(void *, int, float32x2_t *, _BYTE *))(*(_DWORD *)(*v20)->model + 96))(
    (*v20)->model,
    v25,
    v53,
    v52);
  (*(void (__fastcall **)(void *))(*(_DWORD *)(*v20)->model + 56))((*v20)->model);
  v31 = v56;
  v32 = v60;
  v33 = v57;
  v34 = (float)(v55 * 0.0) + (float)(v54 * 0.0);
  v35 = (float)(v59 * 0.0) + (float)(v58 * 0.0);
  v36 = v61;
  v37 = FIELD_F32(a1, 108);
  v38 = FIELD_F32(a1, 112);
  v39 = (float)((float)(v57 + (float)((float)(v56 * 8.0) + v34)) - v37) + 0.0;
  v40 = (float)((float)(v61 + (float)((float)(v60 * 8.0) + v35)) - v38) + 0.0;
  v41 = (float)((float)(v57 + (float)(v34 - (float)(v56 * 8.0))) - v37) + 0.0;
  v42 = (float)((float)(v61 + (float)(v35 - (float)(v60 * 8.0))) - v38) + 0.0;
  FIELD_F32(a1, 304) = v39;
  FIELD_F32(a1, 308) = v40;
  FIELD_U32(a1, 312) = 1092385505;
  FIELD_U32(a1, 316) = 1093014651;
  FIELD_F32(a1, 7940) = v39;
  FIELD_F32(a1, 7944) = v40;
  FIELD_U32(a1, 7948) = 1092385505;
  FIELD_U32(a1, 7952) = 1093014651;
  FIELD_F32(a1, 7028) = v41;
  FIELD_F32(a1, 7032) = v42;
  FIELD_U32(a1, 7036) = 1092196762;
  FIELD_U32(a1, 7040) = 1092951736;
  FIELD_F32(a1, 7636) = v41;
  FIELD_F32(a1, 7640) = v42;
  FIELD_U32(a1, 7644) = 1092196762;
  FIELD_U32(a1, 7648) = 1092951736;
  FIELD_F32(a1, 7332) = (float)(v33 + (float)(v34 + (float)(v31 * 15.0))) - v37;
  FIELD_F32(a1, 7336) = (float)(v36 + (float)(v35 + (float)(v32 * 15.0))) - v38;
  v43 = v63;
  v44 = v62;
  v45 = v64;
  v46 = v65;
  FIELD_F32(a1, 8260) = v33 + (float)(v34 + (float)(v31 * 24.0));
  FIELD_F32(a1, 8264) = v36 + (float)(v35 + (float)(v32 * 24.0));
  FIELD_F32(a1, 8268) = v46 + (float)((float)((float)(v43 * 0.0) + (float)(v44 * 0.0)) + (float)(v45 * 24.0));
  v47 = (*v20)->model;
  v48 = *(int (__fastcall **)(void *, float32x2_t *))(*(_DWORD *)v47 + 84);
  v53[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v53[0].n64_u32[1] = (unsigned __int32)"skl_root";
  v49 = v48(v47, v53);
  return (*(int (__fastcall **)(void *, int, int))(*(_DWORD *)(*v20)->model + 108))((*v20)->model, v49, a1 + 6316);
}
