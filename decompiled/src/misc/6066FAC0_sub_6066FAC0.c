/* sub_6066FAC0
 * address: 0x6066FAC0   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066FAC0(int a1, int a2)
{
  float v2; // s16
  float v3; // s18
  int v5; // r6
  int v6; // r7
  ColliderBase *v7; // r5
  int v8; // r8
  int v10; // [sp+4h] [bp-74h] BYREF
  int v11; // [sp+8h] [bp-70h]
  ShapedColliderInfo v12[3]; // [sp+Ch] [bp-6Ch] BYREF

  v2 = FIELD_F32(a2, 32);
  v3 = FIELD_F32(a2, 36);
  v5 = FIELD_U32(a1, 8092);
  v6 = FIELD_U32(a1, 8088);
  v12[0].distToCenter.x = 0.0;
  v12[0].distToCenter.y = 0.0;
  v12[0].field_8 = v3;
  v12[0].field_C = v3;
  v12[0].topLeft.x = -v3;
  v12[0].topLeft.y = v2;
  v12[0].bottomRight.x = v3;
  v12[0].bottomRight.y = -v2;
  v12[0].rotation = 0;
  v7 = (ColliderBase *)(a1 + 6120);
  ShapedCollider_init((ShapedCollider *)(a1 + 6120), (StageActor *)a1, v12);
  FIELD_U32(a1, 6444) = sub_606705D0;
  FIELD_U32(a1, 6448) = sub_60670684;
  FIELD_U32(a1, 6452) = sub_60670738;
  FIELD_U32(a1, 6292) = v6;
  FIELD_U32(a1, 6296) = v5;
  FIELD_U32(a1, 6456) = a1 + 8892;
  ColliderMgr_add(ColliderMgr_instance, v7);
  v11 = 1140850688;
  v10 = 1140850688;
  sub_6069AFA0(a1 + 8160, a1 + 108, a1 + 492, &v10, v7);
  v8 = FIELD_U32(a1, 8100);
  v12[0].distToCenter.x = 0.0;
  v12[0].distToCenter.y = v2;
  v12[0].field_8 = v3;
  v12[0].field_C = v3;
  v12[0].topLeft.x = -v3;
  v12[0].topLeft.y = v2;
  v12[0].bottomRight.x = v3;
  v12[0].bottomRight.y = -v2;
  v12[0].rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6776), (StageActor *)a1, v12);
  FIELD_U32(a1, 7100) = sub_606707F8;
  FIELD_U32(a1, 7104) = sub_606708AC;
  FIELD_U32(a1, 7108) = sub_60670960;
  FIELD_U32(a1, 6948) = 0;
  FIELD_U32(a1, 6952) = v8;
  FIELD_U32(a1, 7112) = a1 + 8892;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6776));
  v11 = 1140850688;
  v10 = 1140850688;
  return sub_6069AFA0(a1 + 8200, a1 + 108, a1 + 492, &v10, a1 + 6776);
}
