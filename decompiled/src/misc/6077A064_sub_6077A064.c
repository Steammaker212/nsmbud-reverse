/* sub_6077A064
 * address: 0x6077A064   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6077A064(int a1, int a2)
{
  int v3; // r5
  int ActorSlotChecked; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  v3 = 1;
  if ( !sub_6077A158(a1) )
  {
    if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
    {
      ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
      if ( ActorSlotChecked )
        sub_607689EC(ActorSlotChecked, a2);
    }
    if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) != 0 )
    {
      v5 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
      if ( v5 )
        sub_607689EC(v5, a2);
    }
    if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) != 0 )
    {
      v6 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
      if ( v6 )
        sub_607689EC(v6, a2);
    }
    v3 = 0;
    if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0 )
    {
      v7 = Player_getActorSlotChecked(PlayerMgr_instance, 3);
      if ( v7 )
        sub_607689EC(v7, a2);
    }
  }
  return v3;
}
