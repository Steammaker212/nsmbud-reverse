/* SE_SYS_STAR_COIN_PAY_ref
 * address: 0x604E4E04   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_STAR_COIN_PAY_ref(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int i; // r3
  StateMethodExecuter *result; // r0
  StateMethodExecuter **v7; // r7
  StateMethodExecuter *v8; // t1

  v2 = dword_60CA5A80;
  v3 = sub_6047482C(FIELD_U32(a1, 4), 0xAu);
  if ( v3 )
  {
    v4 = FIELD_U32(v3, 56);
    if ( v2 == v4 )
    {
LABEL_10:
      if ( (FIELD_U8(v3, 51) & 1) != 0 )
      {
        FIELD_U32(a1, 4552) = 0;
        return StateMgr__changeState((StateMgr *)(a1 + 4536), &stru_60CA59AC);
      }
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
  v8 = *(StateMethodExecuter **)(a1 + 4572);
  v7 = (StateMethodExecuter **)(a1 + 4572);
  result = v8;
  if ( v8 )
  {
    result = (StateMethodExecuter *)((char *)result - 1);
    *v7 = result;
    if ( !result )
      return (StateMethodExecuter *)sub_60478680((int)"SE_SYS_STAR_COIN_PAY", 9);
  }
  return result;
}
