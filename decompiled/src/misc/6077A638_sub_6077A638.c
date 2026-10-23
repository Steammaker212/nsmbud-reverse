/* sub_6077A638
 * address: 0x6077A638   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_6077A638()
{
  int v0; // r4
  _BYTE *v1; // r0
  _BYTE *v2; // r0
  _BYTE *v3; // r0
  _BYTE *ActorSlotChecked; // r0

  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) == 0
    || (v0 = 0, (v1 = (_BYTE *)Player_getActorSlotChecked(PlayerMgr_instance, 0)) == 0)
    || sub_60769B10(v1) )
  {
    if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) == 0
      || (v2 = (_BYTE *)Player_getActorSlotChecked(PlayerMgr_instance, 1)) == 0
      || (v0 = 0, sub_60769B10(v2)) )
    {
      if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) == 0
        || (v3 = (_BYTE *)Player_getActorSlotChecked(PlayerMgr_instance, 2)) == 0
        || (v0 = 0, sub_60769B10(v3)) )
      {
        if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0 )
        {
          ActorSlotChecked = (_BYTE *)Player_getActorSlotChecked(PlayerMgr_instance, 3);
          if ( ActorSlotChecked )
            return sub_60769B10(ActorSlotChecked);
        }
        return 1;
      }
    }
  }
  return v0;
}
