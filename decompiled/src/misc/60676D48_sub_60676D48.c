/* sub_60676D48
 * address: 0x60676D48   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60676D48(StageActor *a1)
{
  int v2; // r4
  int v3; // r0
  unsigned int category; // r1
  float *v5; // r2
  int v6; // r0
  float v7; // s2
  float v8; // s4

  StageActor__cullCheck(a1, 0);
  v2 = 1;
  if ( !v3 )
  {
    (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 208))(a1);
    category = a1[9].aCollider.info.category;
    if ( !category )
    {
LABEL_13:
      StateMgr__execute((StateMgr *)&a1[9].aCollider.field_64);
      (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 216))(a1);
      return v2;
    }
    v5 = (float *)ActorMgrRelated_getById(ActorMgr__instance + 27168, category);
    if ( v5 )
    {
      v6 = LOBYTE(a1[9].aCollider.info.field_1C);
      if ( (unsigned int)(v6 - 2) < 2 )
      {
        sub_606D465C(&FIELD_U32(a1, 0x6C), &a1[9].aCollider.info.field_14);
        FIELD_F32(a1, 0x6C) = FIELD_F32(a1, 0x6C) - FIELD_F32(a1, 0x23C);
        FIELD_F32(a1, 0x70) = FIELD_F32(a1, 0x70) - FIELD_F32(a1, 0x240);
        FIELD_F32(a1, 0x74) = FIELD_F32(a1, 0x74) - FIELD_F32(a1, 0x244);
      }
      else if ( v6 == 1 )
      {
        if ( HIBYTE(a1[9].aCollider.info.field_1C) )
          FIELD_F32(a1, 0x70) = a1[9].aCollider.info.distToEdge.y;
        else
          FIELD_F32(a1, 0x6C) = a1[9].aCollider.info.distToEdge.x;
      }
      else if ( !LOBYTE(a1[9].aCollider.info.field_1C) )
      {
        v7 = a1[9].aCollider.info.distToEdge.y + v5[1526];
        v8 = *(float *)&a1[9].aCollider.info.field_10 + v5[1527];
        FIELD_F32(a1, 0x6C) = a1[9].aCollider.info.distToEdge.x + v5[1525];
        FIELD_F32(a1, 0x70) = v7;
        FIELD_F32(a1, 0x74) = v8;
      }
      goto LABEL_13;
    }
    return 0;
  }
  return v2;
}
