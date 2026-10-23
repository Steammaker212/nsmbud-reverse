/* sub_60830DE0
 * address: 0x60830DE0   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60830DE0(int a1)
{
  signed int v2; // r5
  int v3; // r11
  _DWORD *v4; // r9
  int ActorSlotChecked; // r6
  bool v6; // zf
  float v7; // s24
  StateMethodExecuter *result; // r0

  v2 = 0;
  v3 = 0;
  FIELD_U32(dword_60CC6484, 264) = FIELD_U32(a1, 6108);
  v4 = (_DWORD *)(a1 + 6104);
  do
  {
    ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, v2);
    if ( ActorSlotChecked )
    {
      v6 = v2 == 1;
      if ( v2 == 1 )
        v6 = *v4 == 1;
      if ( v6 )
      {
        if ( FIELD_F32(ActorSlotChecked, 108) >= 910.0 )
          sub_60768F98(ActorSlotChecked, 7);
        v3 |= 2u;
      }
      else
      {
        v7 = (float)v2 * 64.0;
        if ( FIELD_F32(ActorSlotChecked, 108) >= (float)(968.0 - v7) )
        {
          sub_60786D24(ActorSlotChecked + 688, 0);
          if ( FIELD_F32(ActorSlotChecked, 108) >= (float)(1007.0 - v7) )
          {
            sub_60786CCC(ActorSlotChecked + 688, 5);
            if ( (FIELD_U8(ActorSlotChecked, 6900) & 1) != 0 )
              v3 |= 1 << v2;
          }
        }
      }
    }
    ++v2;
  }
  while ( v2 != 4 );
  result = (StateMethodExecuter *)sub_608FBB8C((unsigned __int16)v3);
  if ( result == (StateMethodExecuter *)4 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CC71C8);
  return result;
}
