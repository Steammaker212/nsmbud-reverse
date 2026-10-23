/* sub_602D0734
 * address: 0x602D0734   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D0734(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StageActor *owner; // r8
  unsigned int v7; // r1
  int result; // r0
  float CenterX; // s16
  float v10; // s0
  int v11; // t1

  owner = FIELD_U32(a3, 0x40);
  v7 = FIELD_U32(a1, 6592);
  if ( !v7 )
  {
    result = a1 + 6600;
    if ( (ActiveCollider *)(a1 + 6600) != a2 )
      return result;
LABEL_6:
    CenterX = ActiveCollider_getCenterX(a2);
    v10 = ActiveCollider_getCenterX(a3);
    if ( FIELD_U32(a1, 80) )
    {
      result = 0;
      if ( v10 >= CenterX )
        return result;
    }
    else
    {
      result = 1;
      if ( v10 <= CenterX )
        return result;
    }
    FIELD_U32(a1, 80) = result;
    FIELD_U32(a1, 6592) = FIELD_U32(owner, 0x8);
    FIELD_U32(a1, 6596) = 30;
    FIELD_U8(a1, 6710) |= 2u;
    FIELD_U8(a1, 7014) |= 2u;
    FIELD_U8(a1, 7318) |= 2u;
    FIELD_U8(a1, 7622) |= 2u;
    FIELD_U8(a1, 7926) |= 2u;
    FIELD_U8(a1, 8230) |= 2u;
    FIELD_U8(a1, 8534) |= 2u;
    FIELD_U8(a1, 8838) |= 2u;
    FIELD_U8(a1, 9142) |= 2u;
    v11 = FIELD_U8(a1, 9446);
    FIELD_U8(a1, 9446) = v11 | 2;
    return v11 | 2;
  }
  result = ActorMgrRelated_getById(ActorMgr__instance + 27168, v7);
  if ( (ActiveCollider *)(a1 + 6600) == a2 && owner != (StageActor *)result )
    goto LABEL_6;
  return result;
}
