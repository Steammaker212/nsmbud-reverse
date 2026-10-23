/* sub_600D3D3C
 * address: 0x600D3D3C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_600D3D3C()
{
  int ActorSlotChecked; // r0
  int v1; // r0
  int v2; // r0
  int result; // r0

  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
  {
    ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
    if ( ActorSlotChecked )
      sub_60768F28(ActorSlotChecked, 202, 0);
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) != 0 )
  {
    v1 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
    if ( v1 )
      sub_60768F28(v1, 202, 0);
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) != 0 )
  {
    v2 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
    if ( v2 )
      sub_60768F28(v2, 202, 0);
  }
  result = PlayerMgr_instance;
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0 )
  {
    result = Player_getActorSlotChecked(PlayerMgr_instance, 3);
    if ( result )
      return sub_60768F28(result, 202, 0);
  }
  return result;
}
