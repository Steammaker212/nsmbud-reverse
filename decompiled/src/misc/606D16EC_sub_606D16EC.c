/* sub_606D16EC
 * address: 0x606D16EC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_606D16EC(int a1)
{
  unsigned int v2; // r9
  ShapedCollider *v3; // r5
  int v4; // r6
  float v5; // r1
  float v6; // r1
  ColliderListNode *result; // r0
  ShapedColliderInfo v8[2]; // [sp+0h] [bp-48h] BYREF

  v2 = FIELD_U32(a1, 6156);
  v3 = *(ShapedCollider **)(a1 + 6152);
  v4 = FIELD_U32(a1, 6160);
  do
  {
    memset(v8, 0, 16);
    v5 = FIELD_F32(v4, 4);
    v8[0].topLeft.x = *(float *)v4;
    v8[0].topLeft.y = v5;
    v6 = FIELD_F32(v4, 12);
    v8[0].bottomRight.x = FIELD_F32(v4, 8);
    v8[0].bottomRight.y = v6;
    v8[0].rotation = 0;
    ShapedCollider_init(v3, (StageActor *)a1, v8);
    FIELD_U32(v3, 0x0).field_138 = FIELD_U32(v4, 16);
    FIELD_U32(v3, 0x0).field_13C = FIELD_U32(v4, 20);
    FIELD_U32(v3, 0x0).field_140 = FIELD_U32(v4, 24);
    result = ColliderMgr_add(ColliderMgr_instance, &FIELD_U32(v3, 0x0));
    v3 = (ShapedCollider *)((char *)v3 + 656);
    v4 += 28;
  }
  while ( (unsigned int)v3 < v2 );
  return result;
}
