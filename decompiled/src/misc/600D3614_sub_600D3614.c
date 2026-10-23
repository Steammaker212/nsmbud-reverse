/* sub_600D3614
 * address: 0x600D3614   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_600D3614()
{
  int ActorSlotChecked; // r0
  int v1; // r0
  int v2; // r0
  int result; // r0

  ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
  if ( ActorSlotChecked )
    sub_60768D14(ActorSlotChecked, 0);
  v1 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
  if ( v1 )
    sub_60768D14(v1, 0);
  v2 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
  if ( v2 )
    sub_60768D14(v2, 0);
  result = Player_getActorSlotChecked(PlayerMgr_instance, 3);
  if ( result )
    return sub_60768D14(result, 0);
  return result;
}
