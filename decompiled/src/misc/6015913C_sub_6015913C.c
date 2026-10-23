/* sub_6015913C
 * address: 0x6015913C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6015913C(ActiveCollider *a1, int a2)
{
  ActiveColliderMgr *v4; // r6
  int result; // r0

  if ( (a2 & 0x800) == 0 && (FIELD_U32(a1, 0x74).field_1C & 0x800) != 0 )
  {
    v4 = ActiveColliderMgr_instance;
    if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, a1)
      || ActiveColliderMgr_isInCreateList(v4, a1) == 1 )
    {
      ActiveColldierMgr_removeFromActiveList(v4, a1);
      ActiveColldierMgr_removeFromCreateList(v4, a1);
      ActiveColldierMgr_removeFromList3(v4, (int)a1);
      if ( !ActiveColliderMgr_isInActiveList(v4, a1) && !ActiveColliderMgr_isInCreateList(v4, a1) )
        ActiveColliderMgr_addToCreateList(v4, a1);
    }
  }
  result = FIELD_U32(a1, 0x74).field_1C & ~a2;
  FIELD_U32(a1, 0x74).field_1C = result;
  return result;
}
