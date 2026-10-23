/* sub_6028CBEC
 * address: 0x6028CBEC   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028CBEC(int a1)
{
  signed int v2; // r0
  ActiveColliderMgr *v3; // r6
  unsigned __int8 v5; // [sp+4h] [bp-14h] BYREF

  sub_6028CD24(a1);
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  FIELD_U32(a1, 160) = *((_DWORD *)&unk_60C8F4C0 + v2 + 6);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 0;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 116) = 1158250496;
  FIELD_U32(a1, 6368) = 3;
  FIELD_U32(a1, 620) = a1 + 6352;
  FIELD_U32(a1, 6416) = 1;
  FIELD_U32(a1, 624) = a1 + 6388;
  v5 = 3;
  ActiveCollider_init2((ActiveCollider *)(a1 + 188), (StateActor *)a1, (ActiveColliderInfo *)&unk_60BDE5E8, &v5, 0);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
  }
  skl_root_ref_28CEA4(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F3B0);
  return 1;
}
