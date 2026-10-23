/* sub_60594B40
 * address: 0x60594B40   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60594B40(int a1)
{
  ActiveCollider *v1; // r4
  ActiveColliderMgr *v2; // r5

  if ( FIELD_U32(a1, 8164) )
  {
    v1 = (ActiveCollider *)(a1 + 7840);
    v2 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7840));
    ActiveColldierMgr_removeFromCreateList(v2, v1);
    ActiveColldierMgr_removeFromList3(v2, (int)v1);
  }
  return 1;
}
