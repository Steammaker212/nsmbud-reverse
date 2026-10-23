/* sub_601AB740
 * address: 0x601AB740   size: 868   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601AB740(int a1)
{
  void *ResArchiveById; // r5
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  _BOOL4 v6; // r0
  int v7; // r1
  _DWORD *v8; // r0
  int v9; // r3
  unsigned int v10; // r7
  unsigned int v11; // r0
  _DWORD *v12; // r0
  int *v13; // r1
  _DWORD *v14; // r0
  int v15; // r2
  unsigned int v16; // r3
  unsigned int v17; // r0
  int v18; // r2
  unsigned int v19; // r3
  unsigned int v20; // r0
  int v21; // r1
  void *v22; // r5
  void *v23; // r6
  ModelWrapper *v24; // r7
  ModelWrapper *v25; // r0
  int v26; // r5
  unsigned int v27; // r0
  int v28; // r1
  int *v29; // r1
  sead__SafeString identifier; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  FIELD_U32(a1, 276) = ResArchiveById;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "peach";
  Model = (void *)Resource_getModel(ResArchiveById, &identifier, 6, 2, 0, 1, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model, 2, 0, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 268) = v4;
  v6 = sub_6019B238(7);
  v7 = FIELD_U32(a1, 284);
  if ( v6 )
  {
    if ( v7 == 2 )
      goto LABEL_13;
    FIELD_U32(a1, 284) = 2;
    sub_60421938(*(_DWORD **)(a1 + 268), FIELD_U32(a1, 276), (int)&unk_60C8A628);
    v8 = *(_DWORD **)(a1 + 268);
    v9 = v8[3];
    v10 = v8[2];
    v11 = v8[17];
    if ( v10 > v11 )
      v9 += 4 * v11;
    *(_DWORD *)(*(_DWORD *)v9 + 24) = dword_60C8A608[4 * FIELD_U32(a1, 284) + 2];
    v12 = *(_DWORD **)(a1 + 268);
    v13 = &dword_60C8A608[4 * FIELD_U32(a1, 284)];
  }
  else
  {
    if ( !v7 )
      goto LABEL_13;
    FIELD_U32(a1, 284) = 0;
    sub_60421938(*(_DWORD **)(a1 + 268), FIELD_U32(a1, 276), (int)dword_60C8A608);
    v14 = *(_DWORD **)(a1 + 268);
    v15 = v14[3];
    v16 = v14[2];
    v17 = v14[17];
    if ( v16 > v17 )
      v15 += 4 * v17;
    *(_DWORD *)(*(_DWORD *)v15 + 24) = dword_60C8A608[4 * FIELD_U32(a1, 284) + 2];
    v12 = *(_DWORD **)(a1 + 268);
    v13 = &dword_60C8A608[4 * FIELD_U32(a1, 284)];
  }
  v18 = v12[3];
  v19 = v12[2];
  v20 = v12[17];
  v21 = v13[3];
  if ( v19 > v20 )
    v18 += 4 * v20;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v18 + 4), v21);
LABEL_13:
  v22 = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 1u);
  FIELD_U32(a1, 280) = v22;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobPeachWindow";
  v23 = (void *)Resource_getModel(v22, &identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v24 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v25 = ModelWrapper_ctor(v24, v23, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v25, (int)v22, 0, 0);
  FIELD_U32(a1, 272) = v24;
  v26 = (int)*FIELD_U32(v24, 0xC);
  v27 = sub_6019A628(7u, 0x29u);
  v28 = FIELD_U32(a1, 280);
  if ( v27 <= 4 && ((1 << v27) & 0x16) != 0 )
  {
    identifier.vtable = &sead__SafeStringBase__vtable;
    identifier.cstr = "cobPeachWindowClose";
    SkeletalAnim_play(v26, v28, (int)&identifier);
    AnimationCtrl_setRepeat((ModelAnimation *)(v26 + 4), 0);
    FIELD_U32(v26, 24) = 0;
    FIELD_U32(v26, 20) = FIELD_U32(v26, 8);
    FIELD_U32(v26, 28) |= 2u;
    FIELD_U8(a1, 428) = 0;
    v29 = &dword_60C8A5BC;
  }
  else
  {
    identifier.vtable = &sead__SafeStringBase__vtable;
    identifier.cstr = "cobPeachWindowOpen";
    SkeletalAnim_play(v26, v28, (int)&identifier);
    AnimationCtrl_setRepeat((ModelAnimation *)(v26 + 4), 0);
    FIELD_U32(v26, 24) = 0;
    FIELD_U32(v26, 20) = FIELD_U32(v26, 8);
    FIELD_U32(v26, 28) |= 2u;
    FIELD_U8(a1, 428) = 1;
    v29 = &dword_60C8A574;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 308), (StateBase *)v29);
}
