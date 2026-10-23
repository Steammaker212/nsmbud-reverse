/* sub_600CA1E0
 * address: 0x600CA1E0   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_600CA1E0()
{
  int v0; // r4
  int ActorSlotChecked; // r0
  int v2; // r0
  int v3; // r0
  int result; // r0

  v0 = PlayerMgr_instance;
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
  {
    ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
    if ( ActorSlotChecked )
      sub_60768F98(ActorSlotChecked, 1);
  }
  if ( (FIELD_U8(v0, 66) & 2) != 0 )
  {
    v2 = Player_getActorSlotChecked(v0, 1);
    if ( v2 )
      sub_60768F98(v2, 1);
  }
  if ( (FIELD_U8(v0, 66) & 4) != 0 )
  {
    v3 = Player_getActorSlotChecked(v0, 2);
    if ( v3 )
      sub_60768F98(v3, 1);
  }
  result = FIELD_U8(v0, 66);
  if ( (result & 8) != 0 )
  {
    result = Player_getActorSlotChecked(v0, 3);
    if ( result )
      return sub_60768F98(result, 1);
  }
  return result;
}
