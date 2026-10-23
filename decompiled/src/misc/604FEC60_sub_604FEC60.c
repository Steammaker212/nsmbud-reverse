/* sub_604FEC60
 * address: 0x604FEC60   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604FEC60(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r7
  int i; // r2
  StateMethodExecuter *result; // r0

  v2 = sub_6047482C(a1 + 2140, 0);
  v3 = v2;
  if ( v2 )
  {
    v4 = FIELD_U32(v2, 56);
    (*(void (__fastcall **)(int *))(dword_60CA7420 + 12))(&dword_60CA7420);
    (*(void (__fastcall **)(int *))(dword_60CA7420 + 12))(&dword_60CA7420);
    if ( dword_60CA7424 == v4 )
    {
LABEL_10:
      result = (StateMethodExecuter *)FIELD_U8(v3, 51);
      if ( ((unsigned __int8)result & 1) == 0 )
        return result;
    }
    else
    {
      for ( i = 1; *(unsigned __int8 *)(dword_60CA7424 + i - 1) == *(unsigned __int8 *)(v4 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(dword_60CA7424 + i - 1) )
          goto LABEL_10;
        if ( i > 0x80000 || *(unsigned __int8 *)(dword_60CA7424 + i) != *(unsigned __int8 *)(v4 + i) )
          break;
        if ( !*(_BYTE *)(dword_60CA7424 + i) )
          goto LABEL_10;
      }
    }
  }
  return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CA7348);
}
