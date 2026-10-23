/* sub_60779818
 * address: 0x60779818   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60779818()
{
  int v0; // r4
  int ActorSlotChecked; // r0
  bool v2; // zf
  int v3; // r0
  bool v4; // zf
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  bool v8; // zf

  ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
  v2 = ActorSlotChecked == 0;
  if ( ActorSlotChecked )
  {
    v0 = 1;
    v2 = (FIELD_U8(ActorSlotChecked, 1232) & 0x10) == 0;
  }
  if ( v2 )
  {
    v0 = 1;
    v3 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
    v4 = v3 == 0;
    if ( v3 )
      v4 = (FIELD_U8(v3, 1232) & 0x10) == 0;
    if ( v4 )
    {
      v5 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
      v6 = v5 == 0;
      if ( v5 )
        v6 = (FIELD_U8(v5, 1232) & 0x10) == 0;
      if ( v6 )
      {
        v7 = Player_getActorSlotChecked(PlayerMgr_instance, 3);
        v8 = v7 == 0;
        if ( v7 )
          v8 = (FIELD_U8(v7, 1232) & 0x10) == 0;
        if ( v8 )
          return 0;
      }
    }
  }
  return v0;
}
