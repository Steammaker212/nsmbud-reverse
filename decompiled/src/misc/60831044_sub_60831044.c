/* sub_60831044
 * address: 0x60831044   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60831044(int a1)
{
  StateMethodExecuter *result; // r0
  _DWORD *v3; // r6
  _DWORD *v4; // r4
  StateMethodExecuter *v5; // t1
  int ActorSlotChecked; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r5
  int v12; // r0
  int v13; // r5

  FIELD_U32(dword_60CC6484, 264) = FIELD_U32(a1, 6108);
  v3 = (_DWORD *)(a1 + 6104);
  result = *(StateMethodExecuter **)(a1 + 6104);
  if ( result == (StateMethodExecuter *)1 )
  {
    result = *(StateMethodExecuter **)(a1 + 6100);
    if ( !result )
      return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CC71E8);
  }
  else if ( !result )
  {
    v5 = *(StateMethodExecuter **)(a1 + 6100);
    v4 = (_DWORD *)(a1 + 6100);
    result = v5;
    if ( !v5 )
    {
      ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
      if ( ActorSlotChecked )
      {
        v7 = ActorSlotChecked + 688;
        sub_60786CF8(ActorSlotChecked + 688, 0);
        sub_60786CF8(v7, 5);
      }
      v8 = Player_getActorSlotChecked(PlayerMgr_instance, 1u);
      if ( v8 )
      {
        v9 = v8 + 688;
        sub_60786CF8(v8 + 688, 0);
        sub_60786CF8(v9, 5);
      }
      v10 = Player_getActorSlotChecked(PlayerMgr_instance, 2u);
      if ( v10 )
      {
        v11 = v10 + 688;
        sub_60786CF8(v10 + 688, 0);
        sub_60786CF8(v11, 5);
      }
      v12 = Player_getActorSlotChecked(PlayerMgr_instance, 3u);
      if ( v12 )
      {
        v13 = v12 + 688;
        sub_60786CF8(v12 + 688, 0);
        sub_60786CF8(v13, 5);
      }
      *v4 = 5;
      *v3 = 1;
      return (StateMethodExecuter *)1;
    }
  }
  return result;
}
