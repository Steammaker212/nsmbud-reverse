/* sub_604A3ED8
 * address: 0x604A3ED8   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604A3ED8(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int i; // r3
  StateMethodExecuter *result; // r0

  v2 = dword_60CA132C;
  v3 = sub_6047482C(a1 + 48, 0x10u);
  if ( v3 )
  {
    v4 = FIELD_U32(v3, 56);
    if ( v2 == v4 )
    {
LABEL_10:
      result = (StateMethodExecuter *)FIELD_U8(v3, 51);
      if ( ((unsigned __int8)result & 1) == 0 )
        return result;
    }
    else
    {
      for ( i = 1; *(unsigned __int8 *)(v2 + i - 1) == *(unsigned __int8 *)(v4 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(v2 + i - 1) )
          goto LABEL_10;
        if ( i > 0x80000 || *(unsigned __int8 *)(v2 + i) != *(unsigned __int8 *)(v4 + i) )
          break;
        if ( !*(_BYTE *)(v2 + i) )
          goto LABEL_10;
      }
    }
  }
  FIELD_U8(a1, 40) = 1;
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA10D0);
}
