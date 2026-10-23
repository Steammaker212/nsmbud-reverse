/* sub_606980C4
 * address: 0x606980C4   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606980C4(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r1
  int ActorSlotChecked; // r0
  int v6; // r0
  int v7; // r0

  sub_60698718();
  result = a1 + 6128;
  v3 = FIELD_U32(a1, 6128);
  if ( v3 )
  {
    v4 = v3 - 1;
    *(_DWORD *)result = v4;
    if ( v4 == 1 )
    {
      if ( FIELD_U8(a1, 6104) == 2 )
      {
        ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
        if ( ActorSlotChecked )
          sub_60767234(ActorSlotChecked);
      }
      if ( FIELD_U8(a1, 6105) == 2 )
      {
        v6 = Player_getActorSlotChecked(PlayerMgr_instance, 1);
        if ( v6 )
          sub_60767234(v6);
      }
      if ( FIELD_U8(a1, 6106) == 2 )
      {
        v7 = Player_getActorSlotChecked(PlayerMgr_instance, 2);
        if ( v7 )
          sub_60767234(v7);
      }
      result = FIELD_U8(a1, 6107);
      if ( result == 2 )
      {
        result = Player_getActorSlotChecked(PlayerMgr_instance, 3);
        if ( result )
          return sub_60767234(result);
      }
    }
  }
  return result;
}
