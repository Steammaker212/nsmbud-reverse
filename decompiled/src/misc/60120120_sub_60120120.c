/* sub_60120120
 * address: 0x60120120   size: 1432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60120120(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r6
  int *v13; // r6
  int v14; // r1
  int v15; // r0
  unsigned int v16; // r5
  int v17; // r0
  int v18; // r1
  int *v19; // r0
  int v20; // r0
  int v21; // r0
  int *v22; // r0
  int v23; // r0
  int v24; // r0
  unsigned int v25; // r1
  _DWORD *v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  void (__fastcall *v30)(int, int); // r2
  int v31; // r0
  int v32; // r1
  StateBase *v33; // r0
  int v34; // r6
  StateBase *v35; // r0
  int v36; // r6
  StateBase *v37; // r0
  int v38; // r6
  int v39; // r1
  int v40; // r0
  unsigned int v41; // r5
  int v42; // r0
  unsigned int v43; // r1
  _DWORD *v44; // r0
  int v45; // r0
  StateBase *v46; // r0
  int v47; // r5
  int v48; // r1
  _DWORD *v49; // r0
  int v50; // r4
  int v51; // r1
  unsigned int v52; // r0
  int *v53; // r1
  unsigned int v54; // r0
  int v55; // r0
  int v56; // r2
  unsigned int v57; // r0
  int (**v59)(); // [sp+0h] [bp-28h] BYREF
  const char *v60; // [sp+4h] [bp-24h]

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C86C24 + 8))() )
    goto LABEL_6;
  v5 = StateMgr__getCurrentState(v2);
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
  if ( v6 == (*(int (**)(void))(dword_60C86CA8 + 8))()
    || (v7 = StateMgr__getCurrentState(v2),
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
        v8 == (*(int (**)(void))(dword_60C86CC8 + 8))())
    || (v9 = StateMgr__getCurrentState(v2),
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9),
        v10 == (*(int (**)(void))(dword_60C86D2C + 8))())
    || (v11 = StateMgr__getCurrentState(v2),
        v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11),
        v12 == (*(int (**)(void))(dword_60C86CE8 + 8))()) )
  {
LABEL_6:
    sub_6040EB10(a1 + 9420);
    v13 = (int *)(a1 + 6304);
    v14 = FIELD_U32(a1, 6300);
    v15 = **(_DWORD **)(FIELD_U32(a1, 6304) + 12);
    v59 = &sead__SafeStringBase__vtable;
    v60 = "jcm_wait";
    SkeletalAnim_play(v15, v14, (int)&v59);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 4), 1);
    v16 = 0;
    v17 = **(_DWORD **)(FIELD_U32(a1, 6304) + 12);
    FIELD_U32(v17, 20) = 0;
    FIELD_U32(v17, 28) |= 2u;
    *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 24) = 1065353216;
    v18 = FIELD_U32(a1, 6300);
    v19 = *(int **)(FIELD_U32(a1, 6304) + 12);
    if ( *(_DWORD *)(FIELD_U32(a1, 6304) + 8) > 1u )
      ++v19;
    v20 = *v19;
    v59 = &sead__SafeStringBase__vtable;
    v60 = "jcm_wait";
    SkeletalAnim_play(v20, v18, (int)&v59);
    v21 = *(_DWORD *)(*v13 + 12);
    if ( *(_DWORD *)(*v13 + 8) > 1u )
      v21 += 4;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v21 + 4), 1);
    v22 = *(int **)(*v13 + 12);
    if ( *(_DWORD *)(*v13 + 8) > 1u )
      ++v22;
    v23 = *v22;
    FIELD_U32(v23, 20) = 0;
    FIELD_U32(v23, 28) |= 2u;
    v24 = *(_DWORD *)(*v13 + 12);
    if ( *(_DWORD *)(*v13 + 8) > 1u )
      v24 += 4;
    *(_DWORD *)(*(_DWORD *)v24 + 24) = 1065353216;
    FIELD_U8(a1, 9331) = 0;
    do
    {
      v27 = *v13;
      if ( v16 <= 9 && ((1 << v16) & 0x3EC) != 0 )
      {
        v26 = *(_DWORD **)(v27 + 12);
      }
      else
      {
        v25 = FIELD_U32(v27, 8);
        v26 = *(_DWORD **)(v27 + 12);
        if ( v25 > 1 )
          ++v26;
      }
      sub_60448AF4(*v26, v16++);
    }
    while ( v16 != 10 );
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1) )
    {
      v28 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
      v29 = (*(int (__fastcall **)(int))(*(_DWORD *)v28 + 724))(v28);
      v30 = *(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780);
      if ( v29 == 1 )
      {
LABEL_24:
        v31 = a1;
        v32 = 1;
LABEL_46:
        v30(v31, v32);
        goto LABEL_47;
      }
LABEL_45:
      v31 = a1;
      v32 = 0;
      goto LABEL_46;
    }
  }
  else
  {
    v33 = StateMgr__getCurrentState(v2);
    v34 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v33, 0x0) + 2))(v33);
    if ( v34 == (*(int (**)(void))(dword_60C86C48 + 8))()
      || (v35 = StateMgr__getCurrentState(v2),
          v36 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v35, 0x0) + 2))(v35),
          v36 == (*(int (**)(void))(dword_60C86C68 + 8))())
      || (v37 = StateMgr__getCurrentState(v2),
          v38 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v37, 0x0) + 2))(v37),
          v38 == (*(int (**)(void))(dword_60C86C88 + 8))()) )
    {
      sub_6040EB10(a1 + 9420);
      v39 = FIELD_U32(a1, 6300);
      v40 = **(_DWORD **)(FIELD_U32(a1, 6304) + 12);
      v59 = &sead__SafeStringBase__vtable;
      v60 = "jcm_wait";
      SkeletalAnim_play(v40, v39, (int)&v59);
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 4), 1);
      v41 = 0;
      v42 = **(_DWORD **)(FIELD_U32(a1, 6304) + 12);
      FIELD_U32(v42, 20) = 0;
      FIELD_U32(v42, 28) |= 2u;
      *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 24) = 1065353216;
      FIELD_U8(a1, 9331) = 0;
      do
      {
        v45 = FIELD_U32(a1, 6304);
        if ( v41 <= 9 && ((1 << v41) & 0x3EC) != 0 )
        {
          v44 = *(_DWORD **)(v45 + 12);
        }
        else
        {
          v43 = FIELD_U32(v45, 8);
          v44 = *(_DWORD **)(v45 + 12);
          if ( v43 > 1 )
            ++v44;
        }
        sub_60448AF4(*v44, v41++);
      }
      while ( v41 != 10 );
      v30 = *(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780);
      goto LABEL_24;
    }
    v46 = StateMgr__getCurrentState(v2);
    v47 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v46, 0x0) + 2))(v46);
    if ( v47 == (*(int (**)(void))(dword_60C86D94 + 8))() )
    {
      v48 = FIELD_U32(a1, 7660);
      v50 = a1 + 7656;
      v49 = *(_DWORD **)(a1 + 7656);
      v59 = &sead__SafeStringBase__vtable;
      v60 = "jc_wait";
      sub_60421938(v49, v48, (int)&v59);
      v51 = *(_DWORD *)(FIELD_U32(a1, 7656) + 12);
      v52 = *(_DWORD *)(FIELD_U32(a1, 7656) + 68);
      if ( *(_DWORD *)(FIELD_U32(a1, 7656) + 8) > v52 )
        v51 += 4 * v52;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v51 + 4), 1);
      v53 = *(int **)(*(_DWORD *)v50 + 12);
      v54 = *(_DWORD *)(*(_DWORD *)v50 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v50 + 8) > v54 )
        v53 += v54;
      v55 = *v53;
      FIELD_U32(v55, 20) = 0;
      FIELD_U32(v55, 28) |= 2u;
      v56 = *(_DWORD *)(*(_DWORD *)v50 + 12);
      v57 = *(_DWORD *)(*(_DWORD *)v50 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v50 + 8) > v57 )
        v56 += 4 * v57;
      *(_DWORD *)(*(_DWORD *)v56 + 24) = 1065353216;
      FIELD_U8(a1, 9331) = 0;
      v30 = *(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780);
      goto LABEL_45;
    }
  }
LABEL_47:
  FIELD_U8(a1, 9327) = 0;
  return 9327;
}
