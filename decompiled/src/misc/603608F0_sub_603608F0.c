/* sub_603608F0
 * address: 0x603608F0   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603608F0(int a1)
{
  bool v2; // zf
  int v3; // r0
  int *v4; // r0
  float v5; // s16
  ShapedColliderInfo v7; // [sp+0h] [bp-40h] BYREF

  v3 = FIELD_U32(a1, 20) & 0xF;
  v2 = v3 == 0;
  FIELD_U8(a1, 1316) = v3;
  FIELD_U32(a1, 644) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 648) = FIELD_U32(a1, 112);
  v4 = dword_603609C8;
  if ( !v2 )
    v4 = &dword_603609C8[1];
  v5 = *(float *)v4;
  FIELD_U32(a1, 652) = FIELD_U32(a1, 116);
  FIELD_F32(a1, 500) = v5;
  FIELD_U32(a1, 504) = 0;
  FIELD_F32(a1, 508) = v5;
  FIELD_U32(a1, 512) = 0;
  lift_zen_ashiba_ref(a1);
  sub_60360AC0(a1);
  memset(&v7, 0, 16);
  v7.topLeft.x = v5 * -0.5;
  v7.topLeft.y = 0.0;
  v7.bottomRight.x = v5 * 0.5;
  v7.bottomRight.y = -160.0;
  v7.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 656), (StageActor *)a1, &v7);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 656));
  return 1;
}
