/* sub_60498834
 * address: 0x60498834   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60498834(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int i; // r3
  StateMethodExecuter *result; // r0
  int v7; // r1
  StateBase *v8; // r1

  v2 = dword_60CA0720;
  v3 = sub_6047482C(a1 + 64, 0);
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
  sub_60499B54(a1);
  if ( FIELD_U8(a1, 146852)
    && (v7 = FIELD_U32(a1, 146860),
        FIELD_U32(a1, 146864) = v7,
        sub_6045BE8C(dword_60C9CFB8, v7),
        !FIELD_U8(a1, 146844)) )
  {
    sub_60515B5C(a1 + 98748);
    FIELD_U8(a1, 56) = 1;
    v8 = (StateBase *)&unk_60CA05E0;
  }
  else
  {
    FIELD_U8(a1, 56) = 1;
    v8 = (StateBase *)&dword_60CA05A0;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 40), v8);
}
