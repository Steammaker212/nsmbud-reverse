/* sub_605C018C
 * address: 0x605C018C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C018C(int a1)
{
  ColliderBase *v2; // r5

  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 572) = 1098907648;
  FIELD_U32(a1, 576) = -1056964608;
  FIELD_U32(a1, 580) = 0;
  v2 = (ColliderBase *)(a1 + 6112);
  ShapedCollider_init((ShapedCollider *)(a1 + 6112), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CB08E8);
  ColliderMgr_add(ColliderMgr_instance, v2);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1111490560;
  FIELD_U32(a1, 504) = 1111490560;
  FIELD_U32(a1, 508) = 1111490560;
  FIELD_U32(a1, 512) = 1111490560;
  boss_koopa_ashiba_ref(a1);
  sub_605C0470(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB0924);
  return 1;
}
