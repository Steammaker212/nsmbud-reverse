/* block_challenge_ref
 * address: 0x605B2094   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall block_challenge_ref(int a1)
{
  void *ResArchiveById; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  ActiveColliderMgr *v6; // r6
  char v7; // r12
  float v8; // s2
  float v9; // s0
  int *v10; // r0
  float v11; // s0
  ModelWrapper *v12; // r5
  void *model; // r6
  sead__SafeString a2; // [sp+18h] [bp-48h] BYREF
  int v16; // [sp+20h] [bp-40h]
  int v17; // [sp+24h] [bp-3Ch]
  int v18; // [sp+28h] [bp-38h]
  int v19; // [sp+2Ch] [bp-34h]
  int v20; // [sp+30h] [bp-30h]
  int v21; // [sp+34h] [bp-2Ch]
  int v22; // [sp+38h] [bp-28h]
  int v23; // [sp+3Ch] [bp-24h]
  int v24; // [sp+40h] [bp-20h]
  int v25; // [sp+44h] [bp-1Ch]

  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "block_challenge";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6100) = v4;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C092EC, 0);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 188));
  }
  if ( ((unsigned int)&dword_60CB0470 & ~(1616585144 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0470) )
  {
    dword_60CB0480 = 0;
    dword_60CB047C = 0;
    dword_60CB0478 = 0;
    dword_60CB0474 = 0;
    dword_60CB0484 = -1056964608;
    dword_60CB0488 = 1090519040;
    dword_60CB048C = 1090519040;
    dword_60CB0490 = -1056964608;
    dword_60CB0494 = 0;
    _cxa_guard_release(&dword_60CB0470);
  }
  ShapedCollider_init((ShapedCollider *)(a1 + 6104), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CB0474);
  v8 = (float)(-0.0085513 * 0.4) + 0.94154;
  v9 = (float)(0.023005 * 0.4) + 0.33689;
  if ( v8 > 0.00000011921 || v8 < -0.00000011921 )
  {
    v11 = v9 / v8;
  }
  else
  {
    v10 = dword_605B2364;
    if ( v9 > 0.0 )
      v10 = &dword_605B2364[1];
    v11 = *(float *)v10;
  }
  FIELD_F32(a1, 6760) = v11;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB0440);
  v12 = *(ModelWrapper **)(a1 + 6100);
  model = FIELD_U32(v12, 0x0);
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v12, 0x0) + 68))(FIELD_U32(v12, 0x0), a1 + 144);
  a2.vtable = (void *)1065353216;
  a2.cstr = 0;
  v16 = 0;
  v18 = 0;
  v19 = 1065353216;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 1065353216;
  v17 = FIELD_U32(a1, 108);
  v21 = FIELD_U32(a1, 112);
  v25 = FIELD_U32(a1, 116);
  (*(void (__fastcall **)(void *, sead__SafeString *))(*(_DWORD *)model + 60))(model, &a2);
  ModelWrapper_updateModel(v12);
  return 1;
}
