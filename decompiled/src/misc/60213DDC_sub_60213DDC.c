/* sub_60213DDC
 * address: 0x60213DDC   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60213DDC(int a1)
{
  int v2; // r5
  StateMethodExecuter *result; // r0
  StateBase *v4; // r1
  StateMgr *v5; // r0

  v2 = dword_60C8996C;
  result = (StateMethodExecuter *)sub_60190968(dword_60C8996C);
  if ( result == (StateMethodExecuter *)1 )
  {
    result = (StateMethodExecuter *)FIELD_U8(v2, 1384);
    if ( FIELD_U8(v2, 1384) )
    {
      result = (StateMethodExecuter *)sub_6019112C(v2);
      switch ( (unsigned int)result )
      {
        case '!':
          v4 = (StateBase *)&unk_60C8D144;
          goto LABEL_10;
        case '"':
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
          v4 = (StateBase *)&unk_60C8D164;
          v5 = (StateMgr *)(a1 + 284);
          goto LABEL_11;
        case '#':
          v4 = (StateBase *)&unk_60C8D1C4;
          goto LABEL_10;
        case '$':
        case '%':
        case '&':
        case '\'':
        case '(':
        case ')':
        case '*':
        case '+':
        case ',':
        case '-':
        case '.':
        case '/':
        case '0':
        case '1':
        case '2':
        case '3':
          return result;
        case '4':
          v4 = (StateBase *)&unk_60C8D1A4;
          goto LABEL_10;
        default:
          if ( result != (StateMethodExecuter *)201 )
            return result;
          v4 = (StateBase *)&dword_60C8D1E4;
LABEL_10:
          v5 = (StateMgr *)(a1 + 284);
LABEL_11:
          result = StateMgr__changeState(v5, v4);
          break;
      }
    }
  }
  return result;
}
