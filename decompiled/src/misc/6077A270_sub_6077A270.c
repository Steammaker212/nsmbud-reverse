/* sub_6077A270
 * address: 0x6077A270   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6077A270()
{
  int ActorSlotChecked; // r0
  int v1; // r0
  int v2; // r0
  int result; // r0

  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
  {
    ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
    if ( ActorSlotChecked )
      FIELD_U32(ActorSlotChecked, 1232) |= 0x800000u;
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) != 0 )
  {
    v1 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
    if ( v1 )
      FIELD_U32(v1, 1232) |= 0x800000u;
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) != 0 )
  {
    v2 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
    if ( v2 )
      FIELD_U32(v2, 1232) |= 0x800000u;
  }
  result = PlayerMgr_instance;
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0 )
  {
    result = Player_getActorSlotChecked(PlayerMgr_instance, 3);
    if ( result )
      FIELD_U32(result, 1232) |= 0x800000u;
  }
  return result;
}
