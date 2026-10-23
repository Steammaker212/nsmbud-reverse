/* sub_6052410C
 * address: 0x6052410C   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6052410C(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0
  StateMgr *v4; // r0
  StateBase *v5; // r1

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 44, 2u) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v3 = FIELD_U32(a1, 4664) + 1;
    FIELD_U32(a1, 4664) = v3;
    if ( v3 == 5 )
    {
      if ( FIELD_U8(a1, 4672) )
      {
        v4 = (StateMgr *)(a1 + 24);
        if ( FIELD_U8(a1, 4673) )
        {
          if ( FIELD_U8(a1, 4674) )
            v5 = (StateBase *)&unk_60CA9D04;
          else
            v5 = (StateBase *)&stru_60CA9D84;
        }
        else if ( FIELD_U8(a1, 4674) )
        {
          v5 = (StateBase *)&unk_60CA9C84;
        }
        else
        {
          v5 = (StateBase *)&stru_60CA9CA4;
        }
      }
      else
      {
        v4 = (StateMgr *)(a1 + 24);
        if ( FIELD_U8(a1, 4673) )
          v5 = (StateBase *)&unk_60CA9C04;
        else
          v5 = (StateBase *)&unk_60CA9BC4;
      }
      return StateMgr__changeState(v4, v5);
    }
    else
    {
      return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA9BA4);
    }
  }
  return result;
}
