/* SE_SYS_CS_NEW_ITEM_WINDOW_ADD_ITEM_ref
 * address: 0x604F43AC   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_CS_NEW_ITEM_WINDOW_ADD_ITEM_ref(int a1)
{
  StateMethodExecuter **v2; // r6
  StateMethodExecuter *result; // r0
  _DWORD *v4; // r2
  int v5; // r0
  _BYTE *v6; // r1
  int v7; // r5

  v2 = (StateMethodExecuter **)(a1 + 9640);
  result = (StateMethodExecuter *)(FIELD_U32(a1, 9640) - 1);
  *v2 = result;
  if ( !result )
  {
    v4 = *(_DWORD **)(a1 + 9632);
    v5 = *v4;
    if ( *(_BYTE *)(*v4 + 3597) && (v6 = (_BYTE *)(v5 + 3580), !FIELD_U8(v5, 3580)) )
    {
      v7 = 10;
    }
    else
    {
      v5 = v4[1];
      if ( FIELD_U8(v5, 3597) && (v6 = (_BYTE *)(v5 + 3580), !FIELD_U8(v5, 3580)) )
      {
        v7 = 11;
      }
      else
      {
        v5 = v4[2];
        if ( FIELD_U8(v5, 3597) && (v6 = (_BYTE *)(v5 + 3580), !FIELD_U8(v5, 3580)) )
        {
          v7 = 12;
        }
        else
        {
          v5 = v4[3];
          if ( FIELD_U8(v5, 3597) && (v6 = (_BYTE *)(v5 + 3580), !FIELD_U8(v5, 3580)) )
          {
            v7 = 13;
          }
          else
          {
            v5 = v4[4];
            if ( !FIELD_U8(v5, 3597) )
              return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA68FC);
            v6 = (_BYTE *)(v5 + 3580);
            if ( FIELD_U8(v5, 3580) )
              return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA68FC);
            v7 = 14;
          }
        }
      }
    }
    *v6 = 1;
    *(_BYTE *)(FIELD_U32(v5, 3584) + 64) |= 1u;
    sub_60807EF0(SoundSystem_instance, "SE_SYS_CS_NEW_ITEM_WINDOW_ADD_ITEM", 0, 1);
    *v2 = (StateMethodExecuter *)15;
    sub_6047EFCC(a1 + 7588, v7);
    *(_BYTE *)(a1 + v7 + 8048) = 1;
    return (StateMethodExecuter *)(a1 + v7);
  }
  return result;
}
