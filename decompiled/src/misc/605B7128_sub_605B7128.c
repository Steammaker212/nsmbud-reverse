/* sub_605B7128
 * address: 0x605B7128   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B7128(int a1)
{
  ColliderBase *v2; // r5
  float v3; // s2
  ShapedColliderInfo v5; // [sp+0h] [bp-40h] BYREF
  int v6; // [sp+24h] [bp-1Ch]
  int v7; // [sp+28h] [bp-18h]
  int v8; // [sp+2Ch] [bp-14h]

  if ( FIELD_U8(a1, 2000) )
  {
    v2 = (ColliderBase *)(a1 + 1344);
LABEL_5:
    ShapedCollider_execute(v2);
    StageActor__cullCheck((StageActor *)a1, 0);
    return 1;
  }
  if ( block_challenge_ref_5B77BC(a1 + 644) == 1 )
  {
    v5.distToCenter.x = 1.0;
    v5.distToCenter.y = 0.0;
    v5.field_8 = 0.0;
    v5.topLeft.x = 0.0;
    v5.topLeft.y = 1.0;
    v5.bottomRight.x = 0.0;
    v5.rotation = 0;
    v6 = 0;
    v7 = 1065353216;
    v5.field_C = FIELD_F32(a1, 108);
    v5.bottomRight.y = FIELD_F32(a1, 112);
    v8 = FIELD_U32(a1, 116);
    sub_605B7AA0(a1 + 644, &v5);
    v2 = (ColliderBase *)(a1 + 1344);
    v5.distToCenter.x = -8.0;
    v5.distToCenter.y = 8.0;
    memset(&v5.field_8, 0, 16);
    v3 = (float)FIELD_U32(a1, 1324) * -16.0;
    v5.bottomRight.x = (float)FIELD_U32(a1, 1320) * 16.0;
    v5.bottomRight.y = v3;
    v5.rotation = 0;
    ShapedCollider_init((ShapedCollider *)(a1 + 1344), (StageActor *)a1, &v5);
    FIELD_U32(a1, 1568) = 4;
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1344));
    FIELD_U8(a1, 2000) = 1;
    goto LABEL_5;
  }
  return 1;
}
