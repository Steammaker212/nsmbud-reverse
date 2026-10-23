/* sub_603B887C
 * address: 0x603B887C   size: 1060   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B887C(int a1)
{
  StateMgr *v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r4
  float v11; // r10
  float v12; // r9
  float *v13; // r0
  int v14; // r0
  unsigned int v15; // r1
  float32x2_t *v16; // r1
  _DWORD **v17; // r4
  int result; // r0
  unsigned int v19; // r1
  unsigned int v20; // r2
  unsigned int *v21; // r1
  _DWORD **v22; // r11
  _DWORD *v23; // t1
  int v24; // r0
  int v25; // [sp+4h] [bp-94h] BYREF
  float32x2_t v26; // [sp+8h] [bp-90h] BYREF
  int v27; // [sp+10h] [bp-88h]
  float v28; // [sp+14h] [bp-84h]
  int v29; // [sp+18h] [bp-80h]
  int v30; // [sp+1Ch] [bp-7Ch]
  int v31; // [sp+20h] [bp-78h]
  float v32; // [sp+24h] [bp-74h]
  int v33; // [sp+28h] [bp-70h]
  int v34; // [sp+2Ch] [bp-6Ch]
  int v35; // [sp+30h] [bp-68h]
  int v36; // [sp+34h] [bp-64h]
  float32x2_t v37; // [sp+38h] [bp-60h] BYREF
  int v38; // [sp+40h] [bp-58h]
  float v39; // [sp+44h] [bp-54h]
  int v40; // [sp+48h] [bp-50h]
  int v41; // [sp+4Ch] [bp-4Ch]
  int v42; // [sp+50h] [bp-48h]
  float v43; // [sp+54h] [bp-44h]
  int v44; // [sp+58h] [bp-40h]
  int v45; // [sp+5Ch] [bp-3Ch]
  int v46; // [sp+60h] [bp-38h]
  int v47; // [sp+64h] [bp-34h]
  int v48; // [sp+68h] [bp-30h] BYREF
  unsigned int v49; // [sp+6Ch] [bp-2Ch] BYREF
  unsigned int v50[10]; // [sp+70h] [bp-28h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C9818C + 8))()
    || (v5 = StateMgr__getCurrentState(v2),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        v6 == (*(int (**)(void))(dword_60C981AC + 8))())
    || (v7 = StateMgr__getCurrentState(v2),
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
        v8 == (*(int (**)(void))(dword_60C9820C + 8))())
    || (v9 = StateMgr__getCurrentState(v2),
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9),
        v10 == (*(int (**)(void))(dword_60C981CC + 8))())
    || !FIELD_U8(a1, 22565) )
  {
    v11 = FIELD_F32(a1, 6452);
    v13 = (float *)(a1 + 6456);
    if ( FIELD_U8(a1, 22613) )
    {
      v12 = *v13 + FIELD_F32(a1, 22628);
      v11 = v11 + FIELD_F32(a1, 22624);
    }
    else
    {
      v12 = *v13;
    }
  }
  else
  {
    v11 = FIELD_F32(a1, 108);
    v12 = FIELD_F32(a1, 112);
  }
  v14 = FIELD_U32(a1, 116);
  v48 = FIELD_U32(a1, 156);
  v15 = FIELD_U32(a1, 160);
  v50[0] = FIELD_U32(a1, 164);
  v49 = v15;
  v37.n64_u64[0] = 1065353216;
  v38 = 0;
  v40 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 1065353216;
  v39 = v11;
  v41 = 1065353216;
  v42 = 0;
  v43 = v12;
  v47 = v14;
  Mtx34_rotateY(&v37, &v49);
  v26.n64_u32[0] = dword_60AF1EC0[FIELD_U32(a1, 80)] - v49;
  Mtx34_rotateY(&v37, (unsigned int *)&v26);
  if ( FIELD_U32(a1, 80) )
  {
    v16 = (float32x2_t *)&v48;
  }
  else
  {
    v16 = &v26;
    v26.n64_u32[0] = -v48;
  }
  Mtx34_rotateX(&v37, (unsigned int *)v16);
  v26.n64_u32[0] = v49 - dword_60AF1EC0[FIELD_U32(a1, 80)];
  Mtx34_rotateY(&v37, (unsigned int *)&v26);
  Mtx34_rotateZ(&v37, v50);
  v17 = (_DWORD **)(a1 + 6300);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6300) + 60))(**(_DWORD **)(a1 + 6300), &v37);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v17 + 68))(**v17, a1 + 23092);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6300));
  result = FIELD_U8(a1, 22648);
  if ( FIELD_U8(a1, 22648) )
  {
    v26.n64_u64[0] = 1065353216;
    v27 = 0;
    v29 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 1065353216;
    v28 = v11;
    v30 = 1065353216;
    v31 = 0;
    v32 = v12;
    v36 = 1172475904;
    v19 = FIELD_U32(a1, 160);
    v20 = FIELD_U32(a1, 164);
    v48 = FIELD_U32(a1, 156);
    v49 = v19;
    v50[0] = v20;
    Mtx34_rotateY(&v26, &v49);
    v25 = dword_60AF1EC0[FIELD_U32(a1, 80)] - v49;
    Mtx34_rotateY(&v26, (unsigned int *)&v25);
    if ( FIELD_U32(a1, 80) )
    {
      v21 = (unsigned int *)&v48;
    }
    else
    {
      v21 = (unsigned int *)&v25;
      v25 = -v48;
    }
    Mtx34_rotateX(&v26, v21);
    v25 = v49 - dword_60AF1EC0[FIELD_U32(a1, 80)];
    Mtx34_rotateY(&v26, (unsigned int *)&v25);
    Mtx34_rotateZ(&v26, v50);
    v23 = *(_DWORD **)(a1 + 6308);
    v22 = (_DWORD **)(a1 + 6308);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v23 + 60))(*v23, &v26);
    (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)**v22 + 68))(**v22, v22 - 1541);
    v24 = *(_DWORD *)(*v22)[3];
    FIELD_U32(v24, 20) = *(_DWORD *)(*(_DWORD *)(*v17)[3] + 20);
    FIELD_U32(v24, 28) |= 2u;
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v22 + 52))(**v22);
    return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v22 + 56))(**v22);
  }
  return result;
}
