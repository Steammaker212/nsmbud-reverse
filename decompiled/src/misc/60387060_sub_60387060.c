/* sub_60387060
 * address: 0x60387060   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60387060(int a1)
{
  int v2; // r0
  ActiveColliderMgr *v4; // r5
  ActiveCollider *v5; // r6

  v2 = FIELD_U32(a1, 32);
  if ( v2 == 1 )
  {
    v4 = ActiveColliderMgr_instance;
    v5 = (ActiveCollider *)(FIELD_U32(a1, 56) + 132);
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v5);
    ActiveColldierMgr_removeFromCreateList(v4, v5);
    ActiveColldierMgr_removeFromList3(v4, (int)v5);
    *(_BYTE *)(FIELD_U32(a1, 56) + 128) = 0;
  }
  else if ( !v2 )
  {
    FIELD_U32(a1, 32) = 1;
    return 1;
  }
  return 1;
}
