/* sub_6077A44C
 * address: 0x6077A44C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMgr *sub_6077A44C()
{
  StateMgr *ActorSlotChecked; // r0
  StateMgr *v1; // r0
  StateMgr *v2; // r0
  StateMgr *result; // r0

  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
  {
    ActorSlotChecked = (StateMgr *)Player_getActorSlotChecked(PlayerMgr_instance, 0);
    if ( ActorSlotChecked )
      sub_60768AD8(ActorSlotChecked);
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) != 0 )
  {
    v1 = (StateMgr *)Player_getActorSlotChecked(PlayerMgr_instance, 1);
    if ( v1 )
      sub_60768AD8(v1);
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) != 0 )
  {
    v2 = (StateMgr *)Player_getActorSlotChecked(PlayerMgr_instance, 2);
    if ( v2 )
      sub_60768AD8(v2);
  }
  result = (StateMgr *)PlayerMgr_instance;
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0 )
  {
    result = (StateMgr *)Player_getActorSlotChecked(PlayerMgr_instance, 3);
    if ( result )
      return sub_60768AD8(result);
  }
  return result;
}
