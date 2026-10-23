/* sub_60115578
 * address: 0x60115578   size: 1292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60115578(int a1)
{
  _DWORD *v2; // r0
  int *v3; // r4
  unsigned int v4; // r7
  unsigned int v5; // r8
  unsigned int v6; // r5
  StateBase *CurrentState; // r0
  int v8; // r6
  float *v9; // r0
  float *v10; // r3
  float *v11; // r1
  float v12; // s8
  float v13; // s10
  float v14; // s12
  float v15; // s14
  float v16; // s9
  float v17; // s11
  float v18; // s13
  float v19; // s15
  float v20; // s4
  float v21; // s0
  int v22; // r1
  int v23; // r2
  int v24; // r0
  float v25; // s2
  float v26; // s12
  float v27; // s5
  float v28; // s8
  float v29; // s1
  float v30; // s9
  float v31; // s13
  __int64 *v33; // r0
  __int64 *v34; // r3
  __int64 v35; // d16
  __int64 v36; // d17
  __int64 v37; // d17
  __int64 v38; // d17
  __int64 v39; // d17
  __int64 v40; // d17
  __int64 v41; // d17
  _DWORD **v42; // r4
  float v43; // s2
  float v44; // s0
  StateBase *v45; // r0
  int v46; // r6
  StateBase *v47; // r0
  int v48; // r5
  unsigned int *v49; // r6
  unsigned int *v50; // r9
  int speed[3]; // [sp+4h] [bp-9Ch] BYREF
  float32x2_t target[6]; // [sp+10h] [bp-90h] BYREF
  float v53; // [sp+40h] [bp-60h] BYREF
  float v54; // [sp+44h] [bp-5Ch]
  float v55; // [sp+48h] [bp-58h]
  __int64 v56; // [sp+50h] [bp-50h] BYREF
  __int64 v57; // [sp+58h] [bp-48h]
  __int64 v58; // [sp+60h] [bp-40h]
  __int64 v59; // [sp+68h] [bp-38h]
  __int64 v60; // [sp+70h] [bp-30h]
  __int64 v61; // [sp+78h] [bp-28h]

  if ( !FIELD_U8(a1, 7248) )
    return BowserJrBase__vf3F0((_DWORD *)a1);
  v3 = (int *)(a1 + 7244);
  v2 = *(_DWORD **)(a1 + 7244);
  v4 = v2[39];
  v5 = v2[40];
  v6 = v2[41];
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*(int (**)(void))(dword_60C86AC4 + 8))() )
  {
    v9 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
    v10 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
    v11 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
    v12 = *v9;
    v13 = v9[1];
    v14 = v9[2];
    v15 = v9[3];
    v16 = *v11;
    v17 = v11[1];
    v18 = v11[2];
    v19 = v11[3];
    v20 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
    v21 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
    v22 = *(_DWORD *)(*v3 + 108);
    v23 = *(_DWORD *)(*v3 + 112);
    v24 = *(_DWORD *)(*v3 + 116);
    v25 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
    v26 = v14 + (float)(v20 * v15);
    v27 = v10[2] + (float)(v21 * v10[3]);
    v28 = v12 + (float)(v20 * v13);
    v29 = *v10 + (float)(v21 * v10[1]);
    v30 = v16 + (float)(v25 * v17);
    v31 = v18 + (float)(v25 * v19);
    *(float *)&v56 = (float)(v27 * v26) + (float)(v30 * (float)(v29 * v28));
    *(float *)&v58 = v31 * v28;
    *(float *)&v60 = (float)(v30 * (float)(v27 * v28)) - (float)(v29 * v26);
    *((float *)&v56 + 1) = (float)(v30 * (float)(v29 * v26)) - (float)(v27 * v28);
    *((float *)&v58 + 1) = v31 * v26;
    *((float *)&v60 + 1) = (float)(v29 * v28) + (float)(v30 * (float)(v27 * v26));
    *(float *)&v57 = v31 * v29;
    *(float *)&v59 = -v30;
    *(float *)&v61 = v31 * v27;
    HIDWORD(v57) = v22;
    HIDWORD(v59) = v23;
    HIDWORD(v61) = v24;
  }
  else
  {
    v33 = (__int64 *)sub_600D17D0(*v3);
    v34 = v33 + 4;
    v35 = *v33;
    v36 = v33[1];
    v33 += 2;
    v56 = v35;
    v57 = v36;
    v37 = v33[1];
    v58 = *v33;
    v59 = v37;
    v38 = v34[1];
    v60 = *v34;
    v61 = v38;
  }
  v39 = v57;
  FIELD_U64(a1, 7192) = v56;
  FIELD_U64(a1, 7200) = v39;
  v40 = v59;
  FIELD_U64(a1, 7208) = v58;
  FIELD_U64(a1, 7216) = v40;
  v41 = v61;
  FIELD_U64(a1, 7224) = v60;
  FIELD_U64(a1, 7232) = v41;
  if ( !FIELD_U8(a1, 7652) )
  {
    FIELD_U32(a1, 144) = 1067030938;
    FIELD_U32(a1, 148) = 1067030938;
    FIELD_U32(a1, 152) = 1067030938;
  }
  *((float *)&v57 + 1) = *((float *)&v57 + 1)
                       + (float)((float)((float)(*((float *)&v56 + 1) * 2.4) + (float)(*(float *)&v56 * 0.0))
                               - (float)(*(float *)&v57 * 2.72));
  *((float *)&v59 + 1) = *((float *)&v59 + 1)
                       + (float)((float)((float)(*((float *)&v58 + 1) * 2.4) + (float)(*(float *)&v58 * 0.0))
                               - (float)(*(float *)&v59 * 2.72));
  *((float *)&v61 + 1) = *((float *)&v61 + 1)
                       + (float)((float)((float)(*((float *)&v60 + 1) * 2.4) + (float)(*(float *)&v60 * 0.0))
                               - (float)(*(float *)&v61 * 2.72));
  v42 = (_DWORD **)(a1 + 7100);
  (*(void (__fastcall **)(_DWORD, __int64 *))(***(_DWORD ***)(a1 + 7100) + 60))(**(_DWORD **)(a1 + 7100), &v56);
  v55 = FIELD_F32(a1, 152);
  v54 = FIELD_F32(a1, 148);
  v53 = FIELD_F32(a1, 144);
  v43 = FIELD_F32(a1, 6696) - v54;
  v44 = FIELD_F32(a1, 6700) - v55;
  v53 = v53 + (float)((float)(FIELD_F32(a1, 6692) - v53) * 0.5);
  v54 = v54 + (float)(v43 * 0.5);
  v55 = v55 + (float)(v44 * 0.5);
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v42 + 68))(**v42, &v53);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7100));
  sub_604218E0(*(_DWORD **)(a1 + 7100));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v42 + 52))(**v42);
  v45 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v46 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v45, 0x0) + 2))(v45);
  if ( v46 != (*(int (**)(void))(dword_60C86A64 + 8))() )
  {
    v47 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v48 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v47, 0x0) + 2))(v47);
    if ( v48 != (*(int (**)(void))(dword_60C86AC4 + 8))() )
    {
      if ( FIELD_U8(a1, 7654) )
      {
        v49 = (unsigned int *)(a1 + 7660);
        v50 = (unsigned int *)(a1 + 7656);
        FIELD_U32(a1, 7656) = FIELD_U32(a1, 7112) - v5;
        FIELD_U32(a1, 7660) = FIELD_U32(a1, 7116);
      }
      else
      {
        speed[0] = 50331648;
        target[0].n64_u32[0] = 0;
        moveValueTo((int *)(a1 + 7108), (int *)target, speed);
        target[0].n64_u32[0] = 0;
        speed[0] = 0x1000000;
        v50 = (unsigned int *)(a1 + 7656);
        moveValueTo((int *)(a1 + 7656), (int *)target, speed);
        target[0].n64_u32[0] = 0;
        speed[0] = 0x2000000;
        v49 = (unsigned int *)(a1 + 7660);
        moveValueTo((int *)(a1 + 7660), (int *)target, speed);
      }
      (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(*(_DWORD *)**v42 + 100))(**v42, 25, target, speed);
      Mtx34_rotateY(target, v50);
      Mtx34_rotateZ(target, v49);
      (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(*(_DWORD *)**v42 + 96))(**v42, 25, target, speed);
    }
  }
  return (_DWORD *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v42 + 56))(**v42);
}
