/* jcm_delight_ref
 * address: 0x6011FBCC   size: 1304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jcm_delight_ref(int a1)
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
  StateBase *v29; // r0
  int v30; // r6
  StateBase *v31; // r0
  int v32; // r6
  StateBase *v33; // r0
  int v34; // r6
  int v35; // r1
  int v36; // r0
  unsigned int v37; // r5
  int v38; // r0
  unsigned int v39; // r1
  _DWORD *v40; // r0
  int v41; // r0
  StateBase *v42; // r0
  int v43; // r5
  _DWORD *v44; // r0
  int v45; // r5
  int v46; // r1
  int v47; // r1
  unsigned int v48; // r0
  int *v49; // r1
  unsigned int v50; // r0
  int v51; // r0
  int v52; // r1
  unsigned int v53; // r0
  int (**v54)(); // [sp+0h] [bp-28h] BYREF
  const char *v55; // [sp+4h] [bp-24h]

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
    v13 = (int *)(a1 + 6304);
    v14 = FIELD_U32(a1, 6300);
    v15 = **(_DWORD **)(FIELD_U32(a1, 6304) + 12);
    v54 = &sead__SafeStringBase__vtable;
    v55 = "jcm_delight";
    SkeletalAnim_play(v15, v14, (int)&v54);
    v16 = 0;
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 4), 0);
    v17 = **(_DWORD **)(FIELD_U32(a1, 6304) + 12);
    FIELD_U32(v17, 20) = 0;
    FIELD_U32(v17, 28) |= 2u;
    *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 24) = 1065353216;
    v18 = FIELD_U32(a1, 6300);
    v19 = *(int **)(FIELD_U32(a1, 6304) + 12);
    if ( *(_DWORD *)(FIELD_U32(a1, 6304) + 8) > 1u )
      ++v19;
    v20 = *v19;
    v54 = &sead__SafeStringBase__vtable;
    v55 = "jcm_delight";
    SkeletalAnim_play(v20, v18, (int)&v54);
    v21 = *(_DWORD *)(*v13 + 12);
    if ( *(_DWORD *)(*v13 + 8) > 1u )
      v21 += 4;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v21 + 4), 0);
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
  }
  else
  {
    v29 = StateMgr__getCurrentState(v2);
    v30 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v29, 0x0) + 2))(v29);
    if ( v30 == (*(int (**)(void))(dword_60C86C48 + 8))()
      || (v31 = StateMgr__getCurrentState(v2),
          v32 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v31, 0x0) + 2))(v31),
          v32 == (*(int (**)(void))(dword_60C86C68 + 8))())
      || (v33 = StateMgr__getCurrentState(v2),
          v34 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v33, 0x0) + 2))(v33),
          v34 == (*(int (**)(void))(dword_60C86C88 + 8))()) )
    {
      v35 = FIELD_U32(a1, 6300);
      v36 = **(_DWORD **)(FIELD_U32(a1, 6304) + 12);
      v54 = &sead__SafeStringBase__vtable;
      v55 = "jcm_delight";
      SkeletalAnim_play(v36, v35, (int)&v54);
      v37 = 0;
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 4), 0);
      v38 = **(_DWORD **)(FIELD_U32(a1, 6304) + 12);
      FIELD_U32(v38, 20) = 0;
      FIELD_U32(v38, 28) |= 2u;
      *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 24) = 1065353216;
      FIELD_U8(a1, 9331) = 0;
      do
      {
        v41 = FIELD_U32(a1, 6304);
        if ( v37 <= 9 && ((1 << v37) & 0x3EC) != 0 )
        {
          v40 = *(_DWORD **)(v41 + 12);
        }
        else
        {
          v39 = FIELD_U32(v41, 8);
          v40 = *(_DWORD **)(v41 + 12);
          if ( v39 > 1 )
            ++v40;
        }
        sub_60448AF4(*v40, v37++);
      }
      while ( v37 != 10 );
    }
    else
    {
      v42 = StateMgr__getCurrentState(v2);
      v43 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v42, 0x0) + 2))(v42);
      if ( v43 == (*(int (**)(void))(dword_60C86D94 + 8))() )
      {
        v45 = a1 + 7656;
        v44 = *(_DWORD **)(a1 + 7656);
        v46 = FIELD_U32(a1, 7660);
        v54 = &sead__SafeStringBase__vtable;
        v55 = "jc_delight";
        sub_60421938(v44, v46, (int)&v54);
        v47 = *(_DWORD *)(FIELD_U32(a1, 7656) + 12);
        v48 = *(_DWORD *)(FIELD_U32(a1, 7656) + 68);
        if ( *(_DWORD *)(FIELD_U32(a1, 7656) + 8) > v48 )
          v47 += 4 * v48;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v47 + 4), 0);
        v49 = *(int **)(*(_DWORD *)v45 + 12);
        v50 = *(_DWORD *)(*(_DWORD *)v45 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v45 + 8) > v50 )
          v49 += v50;
        v51 = *v49;
        FIELD_U32(v51, 20) = 0;
        FIELD_U32(v51, 28) |= 2u;
        v52 = *(_DWORD *)(*(_DWORD *)v45 + 12);
        v53 = *(_DWORD *)(*(_DWORD *)v45 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v45 + 8) > v53 )
          v52 += 4 * v53;
        *(_DWORD *)(*(_DWORD *)v52 + 24) = 1065353216;
        FIELD_U8(a1, 9331) = 0;
      }
    }
  }
  FIELD_U8(a1, 9327) = 1;
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 780))(a1, 4);
}
