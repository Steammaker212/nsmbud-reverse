/* sub_605FABDC
 * address: 0x605FABDC   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_605FABDC(int a1)
{
  ActiveColliderMgr *v2; // r6
  ActiveColliderMgr *result; // r0
  ActiveColliderMgr *v4; // r5
  ActiveCollider *v5; // r4
  ActiveColliderMgr *v6; // r5

  if ( (FIELD_U8(a1, 21) & 2) != 0 )
  {
    if ( (FIELD_U64(EventMgr__instance, 16)
        & sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540))) != 0
      && !FIELD_U32(a1, 164) )
    {
      FIELD_U8(a1, 6324) = 1;
      v5 = (ActiveCollider *)(a1 + 188);
      v6 = ActiveColliderMgr_instance;
      result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v5);
      if ( !result )
      {
        result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v6, v5);
        if ( !result )
          return ActiveColliderMgr_addToCreateList(v6, v5);
      }
    }
    else
    {
      v4 = ActiveColliderMgr_instance;
      ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
      ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(a1 + 188));
      ActiveColldierMgr_removeFromList3(v4, a1 + 188);
      result = (ActiveColliderMgr *)6324;
      FIELD_U8(a1, 6324) = 0;
    }
  }
  else
  {
    v2 = ActiveColliderMgr_instance;
    if ( FIELD_U32(a1, 164) )
    {
      ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
      ActiveColldierMgr_removeFromCreateList(v2, (ActiveCollider *)(a1 + 188));
      return ActiveColldierMgr_removeFromList3(v2, a1 + 188);
    }
    else
    {
      result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(
                                      ActiveColliderMgr_instance,
                                      (ActiveCollider *)(a1 + 188));
      if ( !result )
      {
        result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188));
        if ( !result )
          return ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
      }
    }
  }
  return result;
}
