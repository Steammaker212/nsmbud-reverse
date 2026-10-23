/* sub_605512D4
 * address: 0x605512D4   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605512D4(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // t1
  int v4; // r5
  int v5; // r6
  StateBase *v6; // r1

  v3 = FIELD_U8(a1, 18883);
  result = (StateMethodExecuter *)(a1 + 18883);
  v4 = (int)&result[-87].vtable + 1;
  if ( v3 )
  {
    result = *(StateMethodExecuter **)(a1 + 18868);
    if ( (unsigned int)result >= 3 )
      return result;
    v5 = 1;
    if ( ((unsigned __int8)result & 7) != 0 )
    {
      if ( ((unsigned __int8)result & 1) == 0 )
      {
        if ( result != (StateMethodExecuter *)2 )
          return result;
        sub_60553BD4(a1, 0);
        v6 = (StateBase *)&unk_60CAD158;
        return StateMgr__changeState((StateMgr *)(a1 + 24), v6);
      }
LABEL_15:
      result = *(StateMethodExecuter **)(a1 + 70232);
      if ( (int)result < FIELD_U32(a1, 70244) - 1 )
      {
        FIELD_U32(a1, 27552) = 2;
        sub_60553BD4(a1, 0);
        if ( v5 )
        {
          v6 = (StateBase *)&unk_60CAD0F8;
        }
        else
        {
          FIELD_U32(a1, 18868) = 1;
          sub_60502694(v4);
          v6 = (StateBase *)&unk_60CAD0D8;
        }
        return StateMgr__changeState((StateMgr *)(a1 + 24), v6);
      }
      return result;
    }
LABEL_10:
    result = *(StateMethodExecuter **)(a1 + 70232);
    if ( (int)result >= 1 )
    {
      FIELD_U32(a1, 27552) = 1;
      sub_60553BD4(a1, 0);
      if ( v5 )
      {
        v6 = (StateBase *)&unk_60CAD0F8;
      }
      else
      {
        FIELD_U32(a1, 18868) = 0;
        sub_60502694(v4);
        v6 = (StateBase *)&unk_60CAD0D8;
      }
      return StateMgr__changeState((StateMgr *)(a1 + 24), v6);
    }
    return result;
  }
  if ( FIELD_U8(a1, 18886) || FIELD_U8(a1, 18882) )
    return result;
  v5 = 0;
  LOBYTE(FIELD_U32(result, 0x0)) = 0;
  result = *(StateMethodExecuter **)(a1 + 27152);
  if ( ((unsigned __int16)result & 0x140) != 0 )
    goto LABEL_10;
  v5 = 0;
  if ( ((unsigned int)result & 0x10080) != 0 )
    goto LABEL_15;
  if ( ((unsigned __int16)result & 0x4000) != 0 )
  {
    sub_60553BD4(a1, 0);
    FIELD_U32(a1, 18868) = 2;
    sub_60502694(v4);
    v6 = (StateBase *)&unk_60CAD138;
    return StateMgr__changeState((StateMgr *)(a1 + 24), v6);
  }
  return result;
}
