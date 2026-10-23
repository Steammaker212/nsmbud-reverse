/* sub_607799F0
 * address: 0x607799F0   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607799F0(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int ActorSlotChecked; // r0

  result = FIELD_U8(a1, 274);
  if ( !result )
  {
    if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) == 0
      || (v3 = Player_getActorSlotChecked(PlayerMgr_instance, 0)) == 0
      || (result = FIELD_U8(v3, 1231), (result & 4) != 0) )
    {
      if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) == 0
        || (v4 = Player_getActorSlotChecked(PlayerMgr_instance, 1)) == 0
        || (result = FIELD_U8(v4, 1231), (result & 4) != 0) )
      {
        if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) == 0
          || (v5 = Player_getActorSlotChecked(PlayerMgr_instance, 2)) == 0
          || (result = FIELD_U8(v5, 1231), (result & 4) != 0) )
        {
          if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) == 0
            || (ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 3)) == 0
            || (result = FIELD_U8(ActorSlotChecked, 1231), (result & 4) != 0) )
          {
            FIELD_U8(a1, 274) = 1;
            return sub_60816F60(dword_60CC6B68, 1);
          }
        }
      }
    }
  }
  return result;
}
