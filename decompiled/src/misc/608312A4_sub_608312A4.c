/* sub_608312A4
 * address: 0x608312A4   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608312A4(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  int ActorSlotChecked; // r0
  int v5; // r4
  int v6; // r0

  FIELD_U32(dword_60CC6484, 264) = FIELD_U32(a1, 6108);
  v3 = (_DWORD *)(a1 + 6104);
  result = FIELD_U32(a1, 6104);
  switch ( result )
  {
    case 0:
      result = FIELD_U32(a1, 6100);
      if ( !result )
      {
        FIELD_U32(a1, 6136) = dword_60CC7228;
        FIELD_U32(a1, 6140) = dword_60CC722C;
        FIELD_U32(a1, 6144) = 2;
        PlayerLookTargetList_add(PlayerLookTargetList_instance, a1 + 6116);
        FIELD_U32(a1, 6100) = 90;
        if ( !FIELD_U8(a1, 6160) )
          goto LABEL_13;
        *v3 = 1;
        result = Player_getActorSlotChecked(PlayerMgr_instance, 1u);
        if ( result )
          FIELD_U32(result, 1224) |= 1u;
      }
      break;
    case 1:
      result = FIELD_U32(a1, 6100);
      if ( result <= 69 )
      {
        ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 1u);
        v5 = ActorSlotChecked;
        if ( ActorSlotChecked )
        {
          sub_60768D14(ActorSlotChecked, 1);
          FIELD_U32(v5, 1232) |= 0x10000000u;
        }
        *v3 = 2;
        result = 2;
      }
      break;
    case 2:
      result = FIELD_U32(a1, 6100);
      if ( result <= 49 )
      {
        v6 = Player_getActorSlotChecked(PlayerMgr_instance, 1u);
        if ( v6 )
        {
          FIELD_U32(v6, 1224) &= ~1u;
          FIELD_U32(a1, 6148) |= 4u;
        }
LABEL_13:
        *v3 = 3;
        result = 3;
      }
      break;
    case 3:
      result = FIELD_U32(a1, 6100);
      if ( !result )
        result = (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CC7208);
      break;
    default:
      return result;
  }
  return result;
}
