/* sub_607798D0
 * address: 0x607798D0   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_607798D0()
{
  int ActorSlotChecked; // r0
  int v1; // r4
  int v2; // r0
  int v3; // r0
  int v4; // r0

  ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
  if ( ActorSlotChecked )
  {
    v1 = 1;
    if ( (FIELD_U16(ActorSlotChecked, 1232) & 0x4028) != 0 )
      return v1;
  }
  v1 = 1;
  v2 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
  if ( v2 )
  {
    if ( (FIELD_U16(v2, 1232) & 0x4028) != 0 )
      return v1;
  }
  v3 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
  if ( v3 )
  {
    if ( (FIELD_U16(v3, 1232) & 0x4028) != 0 )
      return v1;
  }
  v4 = Player_getActorSlotChecked(PlayerMgr_instance, 3);
  if ( !v4 )
    return 0;
  if ( (FIELD_U16(v4, 1232) & 0x4028) == 0 )
    return 0;
  return v1;
}
