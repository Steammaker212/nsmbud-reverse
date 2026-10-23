/* sub_6056CFFC
 * address: 0x6056CFFC   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056CFFC(int a1)
{
  int *v1; // r4
  int ActorSlotChecked; // r0
  int v3; // r0
  int v4; // r0
  int result; // r0

  v1 = (int *)(a1 + 7456);
  ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
  if ( (ActorSlotChecked || (ActorSlotChecked = sub_607891A0(PlayerMgr_instance, 0)) != 0)
    && sub_6078663C(ActorSlotChecked + 688) == 1 )
  {
    *v1 |= 1u;
  }
  v3 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
  if ( (v3 || (v3 = sub_607891A0(PlayerMgr_instance, 1)) != 0) && sub_6078663C(v3 + 688) == 1 )
    *v1 |= 2u;
  v4 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
  if ( (v4 || (v4 = sub_607891A0(PlayerMgr_instance, 2)) != 0) && sub_6078663C(v4 + 688) == 1 )
    *v1 |= 4u;
  result = Player_getActorSlotChecked(PlayerMgr_instance, 3);
  if ( result || (result = sub_607891A0(PlayerMgr_instance, 3)) != 0 )
  {
    result = sub_6078663C(result + 688);
    if ( result == 1 )
    {
      result = *v1 | 8;
      *v1 = result;
    }
  }
  return result;
}
