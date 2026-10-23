/* wanwan_ref_3D99EC
 * address: 0x603D99EC   size: 984   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall wanwan_ref_3D99EC(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  int v4; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r0
  StateBase *v10; // r0
  int v11; // r6
  StateBase *v12; // r0
  int v13; // r6
  int result; // r0
  StateBase *v15; // r0
  int v16; // r5
  int v17; // r5
  int v18; // r0
  int v19; // r0
  int v20; // r5
  int v21; // r0
  int (**v22)(); // [sp+0h] [bp-30h] BYREF
  const char *v23; // [sp+4h] [bp-2Ch]
  int (**v24)(); // [sp+8h] [bp-28h] BYREF
  const char *v25; // [sp+Ch] [bp-24h]

  sub_602A3EFC(a1 + 18616, 24, 0.0625);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C99014 + 8))() )
  {
    FIELD_U8(a1, 11819) = 1;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98FF4);
LABEL_3:
    v4 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
    v24 = &sead__SafeStringBase__vtable;
    v25 = "wanwan";
    v5 = LoadResource(ResourceMgrRelated_instance, &v24);
    v22 = &sead__SafeStringBase__vtable;
    v23 = "wait";
    SkeletalAnim_play(v4, v5, (int)&v22);
    v6 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
    FIELD_U32(v6, 20) = 1077936128;
    FIELD_U32(v6, 28) |= 2u;
    *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 24) = 0;
    v7 = FIELD_U32(a1, 6304);
    v24 = &sead__SafeStringBase__vtable;
    v25 = "wanwan";
    v8 = LoadResource(ResourceMgrRelated_instance, &v24);
    v22 = &sead__SafeStringBase__vtable;
    v23 = "touch";
    TexAnim_play(v7, v8, &v22);
    AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6304) + 4), 0);
    *(_DWORD *)(FIELD_U32(a1, 6304) + 24) = 1065353216;
    v9 = dword_60AF1F00[FIELD_U32(a1, 80)];
    FIELD_U32(a1, 120) = v9;
    FIELD_U32(a1, 132) = v9;
    goto LABEL_10;
  }
  v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
  if ( v11 != (*(int (**)(void))(dword_60C99034 + 8))() )
  {
    v12 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
    if ( v13 != (*(int (**)(void))(dword_60C99054 + 8))() )
      goto LABEL_3;
  }
  result = sub_603D988C(a1);
  if ( result )
    return result;
  FIELD_U8(a1, 11818) = 0;
  v15 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
  if ( v16 == (*(int (**)(void))(dword_60C99034 + 8))() )
  {
    StateMgr__changeState((StateMgr *)(a1 + 12940), (StateBase *)&dword_60C99198);
    FIELD_U32(a1, 80) ^= 1u;
    FIELD_U8(a1, 11818) = 1;
  }
  FIELD_U32(a1, 124) = -1069547520;
  v17 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  v24 = &sead__SafeStringBase__vtable;
  v25 = "wanwan";
  v18 = LoadResource(ResourceMgrRelated_instance, &v24);
  v22 = &sead__SafeStringBase__vtable;
  v23 = "wait";
  SkeletalAnim_play(v17, v18, (int)&v22);
  v19 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  FIELD_U32(v19, 20) = 1077936128;
  FIELD_U32(v19, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 24) = 0;
  v20 = FIELD_U32(a1, 6304);
  v24 = &sead__SafeStringBase__vtable;
  v25 = "wanwan";
  v21 = LoadResource(ResourceMgrRelated_instance, &v24);
  v22 = &sead__SafeStringBase__vtable;
  v23 = "touch";
  TexAnim_play(v20, v21, &v22);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6304) + 4), 0);
  *(_DWORD *)(FIELD_U32(a1, 6304) + 24) = 1065353216;
  (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C99094);
LABEL_10:
  FIELD_U32(a1, 11864) = 60;
  FIELD_U8(a1, 11816) = 1;
  return 11816;
}
