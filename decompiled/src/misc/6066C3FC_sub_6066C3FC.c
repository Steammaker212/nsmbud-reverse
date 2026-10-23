/* sub_6066C3FC
 * address: 0x6066C3FC   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_6066C3FC(int a1, int a2)
{
  float v4; // r0
  float v5; // r1
  float v6; // r2
  float v7; // r3
  float v8; // r0
  float v9; // r1
  float v10; // r2
  float v11; // r3
  float v12; // r0
  float v13; // r1
  float v14; // r2
  float v15; // r3
  float v16; // r0
  float v17; // r1
  float v18; // r2
  float v19; // r3
  ShapedColliderInfo v21[2]; // [sp+0h] [bp-48h] BYREF

  v4 = *(float *)a2;
  v5 = FIELD_F32(a2, 4);
  v6 = FIELD_F32(a2, 8);
  v7 = FIELD_F32(a2, 12);
  memset(v21, 0, 16);
  v21[0].topLeft.x = v4;
  v21[0].topLeft.y = v5;
  v21[0].bottomRight.x = v6;
  v21[0].bottomRight.y = v7;
  v21[0].rotation = FIELD_U32(a2, 16);
  ShapedCollider_init((ShapedCollider *)(a1 + 648), (StageActor *)a1, v21);
  FIELD_U32(a1, 872) = 4;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 648));
  v8 = FIELD_F32(a2, 20);
  v9 = FIELD_F32(a2, 24);
  v10 = FIELD_F32(a2, 28);
  v11 = FIELD_F32(a2, 32);
  memset(v21, 0, 16);
  v21[0].topLeft.x = v8;
  v21[0].topLeft.y = v9;
  v21[0].bottomRight.x = v10;
  v21[0].bottomRight.y = v11;
  v21[0].rotation = FIELD_U32(a2, 36);
  ShapedCollider_init((ShapedCollider *)(a1 + 1304), (StageActor *)a1, v21);
  FIELD_U32(a1, 1528) = 4;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1304));
  v12 = FIELD_F32(a2, 40);
  v13 = FIELD_F32(a2, 44);
  v14 = FIELD_F32(a2, 48);
  v15 = FIELD_F32(a2, 52);
  memset(v21, 0, 16);
  v21[0].topLeft.x = v12;
  v21[0].topLeft.y = v13;
  v21[0].bottomRight.x = v14;
  v21[0].bottomRight.y = v15;
  v21[0].rotation = FIELD_U32(a2, 56);
  ShapedCollider_init((ShapedCollider *)(a1 + 1960), (StageActor *)a1, v21);
  FIELD_U32(a1, 2184) = 4;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1960));
  v16 = FIELD_F32(a2, 60);
  v17 = FIELD_F32(a2, 64);
  v18 = FIELD_F32(a2, 68);
  v19 = FIELD_F32(a2, 72);
  memset(v21, 0, 16);
  v21[0].topLeft.x = v16;
  v21[0].topLeft.y = v17;
  v21[0].bottomRight.x = v18;
  v21[0].bottomRight.y = v19;
  v21[0].rotation = FIELD_U32(a2, 76);
  ShapedCollider_init((ShapedCollider *)(a1 + 2616), (StageActor *)a1, v21);
  FIELD_U32(a1, 2840) = 4;
  return ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 2616));
}
