/* sub_600D3A90
 * address: 0x600D3A90   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_600D3A90()
{
  int v0; // r4
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int ActorSlotChecked; // r0

  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) == 0
    || (v0 = 0, (v1 = Player_getActorSlotChecked(PlayerMgr_instance, 0)) == 0)
    || FIELD_F32(v1, 88) == 0.0 )
  {
    if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) == 0
      || (v2 = Player_getActorSlotChecked(PlayerMgr_instance, 1)) == 0
      || (v0 = 0, FIELD_F32(v2, 88) == 0.0) )
    {
      if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) == 0
        || (v3 = Player_getActorSlotChecked(PlayerMgr_instance, 2)) == 0
        || (v0 = 0, FIELD_F32(v3, 88) == 0.0) )
      {
        if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0 )
        {
          ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 3);
          if ( ActorSlotChecked )
            return FIELD_F32(ActorSlotChecked, 88) == 0.0;
        }
        return 1;
      }
    }
  }
  return v0;
}
