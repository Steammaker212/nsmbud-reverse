/* sub_6077A740
 * address: 0x6077A740   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6077A740(int a1, int a2)
{
  int ActorSlotChecked; // r0
  int v4; // r0
  int v5; // r0
  int result; // r0

  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
  {
    ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
    if ( ActorSlotChecked )
      sub_60768F98(ActorSlotChecked, a2);
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) != 0 )
  {
    v4 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
    if ( v4 )
      sub_60768F98(v4, a2);
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) != 0 )
  {
    v5 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
    if ( v5 )
      sub_60768F98(v5, a2);
  }
  result = PlayerMgr_instance;
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0 )
  {
    result = Player_getActorSlotChecked(PlayerMgr_instance, 3);
    if ( result )
      return sub_60768F98(result, a2);
  }
  return result;
}
