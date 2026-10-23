/* sub_6029F248
 * address: 0x6029F248   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6029F248(int a1)
{
  Vec3 *v2; // r8
  int v3; // s2
  int v4; // s0
  int v5; // s2
  ActiveColliderMgr *v6; // r7
  Vec3 v8; // [sp+14h] [bp-24h] BYREF

  FIELD_U32(a1, 6444) = 1065353216;
  FIELD_U32(a1, 6448) = 1065353216;
  FIELD_U32(a1, 6452) = 1065353216;
  v2 = (Vec3 *)(a1 + 108);
  FIELD_U32(a1, 6432) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6436) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6440) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 6456) = 0;
  FIELD_U32(a1, 6460) = 0;
  FIELD_U32(a1, 6464) = 0;
  if ( Actor__getProfileId((Actor *)a1) == 769 )
  {
    FIELD_U8(a1, 534) = 0;
    sub_6029F478(a1);
    v3 = 1140850688;
    v4 = 1132462080;
  }
  else
  {
    v4 = 1107296256;
    FIELD_U8(a1, 6472) = 0;
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = 0;
    FIELD_U32(a1, 500) = 1140850688;
    FIELD_U32(a1, 504) = 1140850688;
    v3 = 1107296256;
  }
  FIELD_U32(a1, 508) = v4;
  FIELD_U32(a1, 512) = v3;
  FIELD_F64(a1, 6552) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6548))(a1 + 6548);
  FIELD_U32(a1, 6560) = v5;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE2390, 0);
  FIELD_U32(a1, 300) = a1 + 6580;
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 188));
  }
  sub_6029F5DC(a1);
  joint_root_ref(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C90238);
  LightSource_update1((LightSource *)(a1 + 6476), 39, v2, 0, 0, 0, 0, 0, 0);
  LightSource_unkUpdate3((LightSource *)(a1 + 6476));
  v8.x = 1.0;
  v8.y = 1.0;
  v8.z = 1.0;
  EffectWrapper_update((EffectWrapper *)(a1 + 6316), 373, (Vec3 *)(a1 + 6420), 0, &v8);
  return 1;
}
