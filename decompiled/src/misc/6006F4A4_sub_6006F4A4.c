/* sub_6006F4A4
 * address: 0x6006F4A4   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6006F4A4(int a1)
{
  int v1; // r6
  int v2; // r4
  signed int result; // r0
  ActiveColliderMgr *v4; // r5
  ActiveColliderMgr *v5; // r5
  signed int List; // r0

  v1 = 40;
  v2 = a1 + 11572;
  do
  {
    result = FIELD_U8(v2, 304);
    if ( !FIELD_U8(v2, 304) )
      goto LABEL_10;
    v4 = ActiveColliderMgr_instance;
    if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)v2) == 1 )
    {
      v5 = ActiveColliderMgr_instance;
LABEL_9:
      ActiveColldierMgr_removeFromActiveList(v5, (ActiveCollider *)v2);
      ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)v2);
      result = (signed int)ActiveColldierMgr_removeFromList3(v5, v2);
      FIELD_U8(v2, 304) = 0;
      goto LABEL_10;
    }
    List = ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)v2);
    v5 = ActiveColliderMgr_instance;
    if ( List == 1 )
      goto LABEL_9;
    result = ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)v2);
    if ( !result )
    {
      result = ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)v2);
      if ( !result )
        result = (signed int)ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)v2);
    }
LABEL_10:
    --v1;
    v2 += 308;
  }
  while ( v1 );
  return result;
}
