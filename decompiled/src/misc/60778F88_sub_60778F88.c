/* sub_60778F88
 * address: 0x60778F88   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60778F88(int a1)
{
  int v2; // r0
  int result; // r0
  int *v4; // r1
  int v5; // r5
  int v6; // r4
  _DWORD *v7; // r0
  int ActorSlotChecked; // r0

  v2 = FIELD_U32(a1, 60) | 0x100;
  FIELD_U32(a1, 60) = v2;
  result = sub_607798D0(v2);
  if ( !result )
  {
    FIELD_U32(a1, 60) &= ~0x100u;
    FIELD_U32(a1, 52) = 10;
    if ( FIELD_U8(a1, 273) && !FIELD_U32(dword_60C99DD4, 764) )
      v4 = &dword_60CBFB14;
    else
      v4 = &dword_60CBFAF4;
    StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v4);
    FIELD_U32(a1, 52) = 0;
    FIELD_U32(a1, 56) = 0;
    v5 = FIELD_U32(a1, 68);
    if ( v5 != a1 + 64 )
    {
      v6 = a1 + 60;
      v7 = (_DWORD *)(v5 - 4);
      do
      {
        ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, *v7);
        if ( ActorSlotChecked )
          FIELD_U32(ActorSlotChecked, 1232) |= 0x40u;
        v5 = FIELD_U32(v5, 4);
        v7 = (_DWORD *)(v5 - 4);
      }
      while ( v5 - 4 != v6 );
    }
    return sub_603FBC00(dword_60C99DD4);
  }
  return result;
}
