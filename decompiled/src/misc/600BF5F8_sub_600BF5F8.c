/* sub_600BF5F8
 * address: 0x600BF5F8   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BF5F8(int a1)
{
  ShapedColliderInfo v3; // [sp+4h] [bp-74h] BYREF
  _DWORD v4[6]; // [sp+28h] [bp-50h] BYREF
  _DWORD v5[14]; // [sp+40h] [bp-38h] BYREF

  boss_cannon_ref();
  FIELD_U32(a1, 7432) = dword_60C83930;
  FIELD_U32(a1, 116) = 1137180672;
  v4[0] = 0;
  v4[1] = -1038090240;
  v4[2] = 0;
  v5[0] = 1099431936;
  v5[1] = 1116209152;
  v5[2] = 1099431936;
  v5[3] = 0;
  v5[4] = -1048051712;
  v5[5] = 0;
  v5[6] = -1048051712;
  v5[7] = 1116209152;
  v4[3] = 1103101952;
  v4[4] = v5;
  v4[5] = 0;
  sub_60161E18((_DWORD *)(a1 + 6104), a1, v4);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
  FIELD_U32(a1, 6416) = boss_cannon_gun_ref;
  v3.distToCenter.x = 0.0;
  v3.distToCenter.y = -40.0;
  v3.field_8 = 0.0;
  v3.field_C = 0.0;
  v3.topLeft.x = -23.0;
  v3.topLeft.y = 32.0;
  v3.bottomRight.x = 23.0;
  v3.bottomRight.y = 0.0;
  v3.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6760), (StageActor *)a1, &v3);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6760));
  FIELD_U32(a1, 7436) = -1038090240;
  FIELD_U32(a1, 508) = 1119879168;
  FIELD_U32(a1, 512) = 1124073472;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C83844);
  boss_cannon_body_ref(a1);
  FIELD_U32(a1, 7440) = 0;
  return 1;
}
