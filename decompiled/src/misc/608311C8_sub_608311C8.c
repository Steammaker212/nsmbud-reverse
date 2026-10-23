/* sub_608311C8
 * address: 0x608311C8   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608311C8(int a1)
{
  int ActorSlotChecked; // r0
  int v3; // r0
  int v4; // r0
  int result; // r0

  ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
  if ( ActorSlotChecked )
    sub_60768D14(ActorSlotChecked, 1);
  v3 = Player_getActorSlotChecked(PlayerMgr_instance, 1u);
  if ( v3 && !FIELD_U8(a1, 6160) )
    sub_60768D14(v3, 1);
  v4 = Player_getActorSlotChecked(PlayerMgr_instance, 2u);
  if ( v4 )
    sub_60768D14(v4, 0);
  result = Player_getActorSlotChecked(PlayerMgr_instance, 3u);
  if ( result )
    return sub_60768D14(result, 0);
  return result;
}
