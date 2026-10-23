/* sub_604BDD8C
 * address: 0x604BDD8C   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604BDD8C(int a1)
{
  _BYTE *v2; // r5
  StateMethodExecuter *result; // r0
  int v4; // r2
  int v5; // r2
  int v6; // r2
  int *v7; // r1
  int v8; // r0

  v2 = (_BYTE *)(a1 + 35576);
  sub_604C0BAC(a1 + 9904, FIELD_U8(a1, 35576));
  result = (StateMethodExecuter *)sub_60509908(v2 - 25660);
  if ( result == (StateMethodExecuter *)1 )
  {
    result = (StateMethodExecuter *)sub_60509908(a1 + 13672);
    if ( result )
    {
      result = (StateMethodExecuter *)sub_60509908(a1 + 17428);
      if ( result == (StateMethodExecuter *)1 )
      {
        if ( FIELD_U8(a1, 35556) )
        {
          v4 = FIELD_U32(a1, 21184);
          FIELD_U32(v4, 24) = FIELD_U32(a1, 21196);
          FIELD_U8(v4, 64) |= 0x10u;
          v5 = FIELD_U32(a1, 21188);
          FIELD_U32(v5, 24) = FIELD_U32(a1, 21200);
          FIELD_U8(v5, 64) |= 0x10u;
          v6 = FIELD_U32(a1, 21192);
          FIELD_U32(v6, 24) = FIELD_U32(a1, 21204);
          FIELD_U8(v6, 64) |= 0x10u;
          FIELD_U8(a1, 35556) = 0;
        }
        if ( FIELD_U8(a1, 35577) )
        {
          v7 = &dword_60CA27D8;
          return StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)v7);
        }
        v8 = FIELD_U32(a1, 360);
        if ( *v2 )
        {
          if ( (v8 & 0x40) == 0 )
          {
            v7 = &dword_60CA27D8;
            return StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)v7);
          }
        }
        else if ( (v8 & 0x80) == 0 )
        {
          v7 = &dword_60CA27D8;
          return StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)v7);
        }
        sub_60502694(a1 + 564);
        v7 = &dword_60CA27F8;
        return StateMgr__changeState((StateMgr *)(a1 + 520), (StateBase *)v7);
      }
    }
  }
  return result;
}
