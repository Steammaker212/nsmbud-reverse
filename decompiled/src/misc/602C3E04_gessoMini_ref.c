/* gessoMini_ref
 * address: 0x602C3E04   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall gessoMini_ref(int a1)
{
  void *v2; // r5
  void *Model2; // r8
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  ActiveColliderMgr *v6; // r6
  ActiveColliderMgr *v7; // r6
  int v8; // r4
  double (__fastcall **v9)(int); // t1
  int v10; // s2
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "gessoMini";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  FIELD_U32(a1, 6300) = v2;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "gessoMini";
  Model2 = (void *)Resource_getModel2(v2, &a2, 2, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)v2, 0, 0);
  FIELD_U32(a1, 6304) = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "swim";
  sub_60421AE4(v4, &a2, 1);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1077936128;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1098907648;
  FIELD_U32(a1, 504) = 1098907648;
  FIELD_U32(a1, 508) = 1098907648;
  FIELD_U32(a1, 512) = 1098907648;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE4F68, 0);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 9500), (StageActor *)a1, &stru_60AFE86C, 0);
  FIELD_U32(a1, 9612) = a1 + 9804;
  v7 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 9500))
    && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 9500)) )
  {
    ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 9500));
  }
  FIELD_U8(a1, 6331) = FIELD_U32(a1, 20) & 7;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91584);
  sub_602C409C(a1);
  FIELD_U8(a1, 6056) = 1;
  v9 = *(double (__fastcall ***)(int))(a1 + 6340);
  v8 = a1 + 6340;
  FIELD_F64(v8, 4) = (*v9)(v8);
  FIELD_U32(v8, 12) = v10;
  *(_DWORD *)(v8 - 5716) = v8 + 32;
  FIELD_U32(v8, 60) = 1;
  FIELD_U32(v8, 64) = 2;
  return 1;
}
