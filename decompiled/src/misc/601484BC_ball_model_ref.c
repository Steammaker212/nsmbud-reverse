/* ball_model_ref
 * address: 0x601484BC   size: 1048   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall ball_model_ref(int a1)
{
  float v2; // r1
  float v3; // r2
  float v4; // s0
  StateBase *CurrentState; // r0
  int v6; // r5
  int v7; // r5
  char v8; // r12
  __int64 *v9; // r0
  __int64 *v10; // r2
  __int64 v11; // d16
  __int64 v12; // d17
  __int64 v13; // d17
  __int64 v14; // d17
  ModelWrapper **v15; // r4
  _DWORD *v16; // t1
  void *model; // r0
  int (__fastcall *v18)(void *, _DWORD *); // r2
  int v19; // r6
  float v20; // r0
  float v21; // r1
  float v22; // r2
  float v23; // s2
  float v24; // s8
  float v25; // s10
  unsigned int v26; // r0
  unsigned int v27; // r3
  int v28; // r1
  int v29; // s2
  int v30; // s14
  float *v31; // r3
  float *v32; // r1
  float *v33; // r0
  float v34; // s14
  float v35; // s0
  float v36; // s2
  float v37; // s10
  float v38; // s5
  float v39; // s6
  float v40; // s1
  float v41; // s13
  float v42; // s9
  _DWORD **v43; // r4
  _DWORD *v44; // t1
  _DWORD v45[3]; // [sp+0h] [bp-90h] BYREF
  float v46; // [sp+Ch] [bp-84h]
  float v47; // [sp+1Ch] [bp-74h]
  float v48; // [sp+2Ch] [bp-64h]
  __int64 v49; // [sp+30h] [bp-60h] BYREF
  __int64 v50; // [sp+38h] [bp-58h]
  __int64 v51; // [sp+40h] [bp-50h]
  __int64 v52; // [sp+48h] [bp-48h]
  __int64 v53; // [sp+50h] [bp-40h]
  __int64 v54; // [sp+58h] [bp-38h]
  float v55; // [sp+60h] [bp-30h] BYREF
  float v56; // [sp+64h] [bp-2Ch]
  float v57; // [sp+68h] [bp-28h]

  v2 = FIELD_F32(a1, 148);
  v3 = FIELD_F32(a1, 152);
  v55 = FIELD_F32(a1, 144);
  v56 = v2;
  v57 = v3;
  v4 = FIELD_F32(a1, 6756);
  v55 = v4 * v55;
  v56 = v4 * v2;
  v57 = v4 * v3;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*(int (**)(void))(dword_60C880E0 + 8))() )
  {
    v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6412));
    if ( ((unsigned int)&dword_60C8816C & ~(1611957620 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C8816C) )
    {
      dword_60C88168 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C8816C);
    }
    if ( v7 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C88168) == 1 )
      {
        v9 = (__int64 *)(*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(v7 + 6300) + 64))(**(_DWORD **)(v7 + 6300));
        v10 = v9 + 4;
        v11 = *v9;
        v12 = v9[1];
        v9 += 2;
        v49 = v11;
        v50 = v12;
        v13 = v9[1];
        v51 = *v9;
        v52 = v13;
        v14 = v10[1];
        v53 = *v10;
        v54 = v14;
        v16 = *(_DWORD **)(a1 + 6300);
        v15 = (ModelWrapper **)(a1 + 6300);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v16 + 60))(*v16);
        (*(void (__fastcall **)(void *, float *))(*(_DWORD *)(*v15)->model + 68))((*v15)->model, &v55);
        ModelWrapper_updateModel(*v15);
        model = (*v15)->model;
        v18 = *(int (__fastcall **)(void *, _DWORD *))(*(_DWORD *)model + 84);
        v45[0] = &sead__SafeStringBase__vtable;
        v45[1] = "ball_model";
        v19 = v18(model, v45);
        (*(void (__fastcall **)(void *, int, _DWORD *))(*(_DWORD *)(*v15)->model + 108))((*v15)->model, v19, v45);
        v20 = v46;
        *((float *)v15 - 1548) = v46;
        v21 = v47;
        *((float *)v15 - 1547) = v47;
        v22 = v48;
        *((float *)v15 - 1546) = v48;
        v23 = v21 - FIELD_F32(v7, 112);
        v24 = (float)(1.0 - v56) / v56;
        v25 = v22 + (float)((float)(v22 - FIELD_F32(v7, 116)) * v24);
        v46 = v20 + (float)((float)(v20 - FIELD_F32(v7, 108)) * v24);
        v47 = v21 + (float)(v23 * v24);
        v48 = v25;
        (*(void (__fastcall **)(void *, int, _DWORD *))(*(_DWORD *)(*v15)->model + 104))((*v15)->model, v19, v45);
        *((float *)v15 - 1548) = v46;
        *((float *)v15 - 1547) = v47;
        *((float *)v15 - 1546) = v48;
      }
    }
  }
  else
  {
    v26 = FIELD_U32(a1, 156);
    v27 = FIELD_U32(a1, 160);
    v28 = (v27 >> 20) & 0xFF0;
    v29 = v27 & 0xFFFFFF;
    v30 = v26 & 0xFFFFFF;
    v31 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 164) >> 20) & 0xFF0));
    v32 = (float *)((char *)sinLutTable + v28);
    v33 = (float *)((char *)sinLutTable + ((v26 >> 20) & 0xFF0));
    v34 = (float)(unsigned int)v30;
    v35 = (float)(FIELD_U32(a1, 164) & 0xFFFFFF) * 0.000000059605;
    v36 = (float)(unsigned int)v29 * 0.000000059605;
    v37 = v31[2] + (float)(v35 * v31[3]);
    v38 = v32[2] + (float)(v36 * v32[3]);
    v39 = *v31 + (float)(v35 * v31[1]);
    v40 = *v32 + (float)(v36 * v32[1]);
    v41 = v33[2] + (float)((float)(v34 * 0.000000059605) * v33[3]);
    v42 = *v33 + (float)((float)(v34 * 0.000000059605) * v33[1]);
    *(float *)&v49 = v38 * v37;
    *(float *)&v51 = v38 * v39;
    *(float *)&v53 = -v40;
    *((float *)&v49 + 1) = (float)((float)(v42 * v40) * v37) - (float)(v41 * v39);
    *((float *)&v51 + 1) = (float)(v41 * v37) + (float)((float)(v42 * v40) * v39);
    *((float *)&v53 + 1) = v42 * v38;
    *(float *)&v50 = (float)(v40 * (float)(v41 * v37)) + (float)(v42 * v39);
    *(float *)&v52 = (float)(v40 * (float)(v41 * v39)) - (float)(v42 * v37);
    *(float *)&v54 = v41 * v38;
    HIDWORD(v50) = FIELD_U32(a1, 108);
    HIDWORD(v52) = FIELD_U32(a1, 112);
    HIDWORD(v54) = FIELD_U32(a1, 116);
    v44 = *(_DWORD **)(a1 + 6304);
    v43 = (_DWORD **)(a1 + 6304);
    (*(void (__fastcall **)(_DWORD, __int64 *))(*(_DWORD *)*v44 + 60))(*v44, &v49);
    (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v43 + 68))(**v43, &v55);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v43 + 56))(**v43);
  }
}
