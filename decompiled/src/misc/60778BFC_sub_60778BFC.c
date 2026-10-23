/* sub_60778BFC
 * address: 0x60778BFC   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60778BFC(int a1)
{
  int ActorSlotChecked; // r0
  bool v3; // zf
  int result; // r0
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  bool v10; // zf

  ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
  v3 = ActorSlotChecked == 0;
  if ( ActorSlotChecked )
    v3 = (FIELD_U8(ActorSlotChecked, 1231) & 4) == 0;
  if ( v3 || (result = FIELD_U8(ActorSlotChecked, 1232), (result & 2) != 0) )
  {
    v5 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
    v6 = v5 == 0;
    if ( v5 )
      v6 = (FIELD_U8(v5, 1231) & 4) == 0;
    if ( v6 || (result = FIELD_U8(v5, 1232), (result & 2) != 0) )
    {
      v7 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
      v8 = v7 == 0;
      if ( v7 )
        v8 = (FIELD_U8(v7, 1231) & 4) == 0;
      if ( v8 || (result = FIELD_U8(v7, 1232), (result & 2) != 0) )
      {
        v9 = Player_getActorSlotChecked(PlayerMgr_instance, 3);
        v10 = v9 == 0;
        if ( v9 )
          v10 = (FIELD_U8(v9, 1231) & 4) == 0;
        if ( v10 || (result = FIELD_U8(v9, 1232), (result & 2) != 0) )
        {
          FIELD_U32(a1, 60) |= 0x80u;
          FIELD_U32(a1, 52) = 7;
          return 7;
        }
      }
    }
  }
  return result;
}
