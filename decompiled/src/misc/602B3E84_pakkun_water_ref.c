/* pakkun_water_ref
 * address: 0x602B3E84   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall pakkun_water_ref(int a1)
{
  int v2; // s2
  void *Resource; // r0
  ActiveColliderMgr *v4; // r6
  float *v5; // r7
  ActiveColliderMgr *v6; // r6
  float v7; // s2
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF
  _DWORD v10[8]; // [sp+20h] [bp-20h] BYREF

  FIELD_U32(a1, 620) = a1 + 6508;
  FIELD_U32(a1, 6524) = 3;
  FIELD_U32(a1, 624) = a1 + 6544;
  FIELD_U32(a1, 6572) = 1;
  FIELD_U32(a1, 6244) = 0;
  FIELD_F64(a1, 6480) = ((double (*)(void))**(_DWORD **)(a1 + 6476))();
  FIELD_U32(a1, 6488) = v2;
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "pakkun_water";
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v10);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "pakkun_water_ball";
  FIELD_U32(a1, 6472) = Resource_getModel2(Resource, &a2, 0, 0, 0, 0, 0, 0, 0);
  FIELD_U32(a1, 116) = 1158250496;
  FIELD_U32(a1, 100) = -1107296256;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 6328) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6332) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6336) = 1158250496;
  sub_602B413C(a1);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE3AF8, 0);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
  }
  v5 = (float *)(a1 + 6332);
  ActiveCollider__init((ActiveCollider *)(a1 + 6580), (StageActor *)a1, &stru_60AFE5CC, a1 + 6888);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6580))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 6580)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 6580));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFE5F8, &stru_60AFE604, 0);
  FIELD_U32(a1, 3200) |= 0x4000000u;
  FIELD_U32(a1, 3192) |= 0x4000000u;
  v7 = *v5;
  FIELD_F32(a1, 6452) = *v5 + 80.0;
  FIELD_F32(a1, 6456) = v7;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C90D70);
  return 1;
}
