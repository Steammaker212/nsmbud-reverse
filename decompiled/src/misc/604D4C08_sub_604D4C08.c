/* sub_604D4C08
 * address: 0x604D4C08   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604D4C08(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r7
  unsigned int v4; // r0
  int v5; // r6
  unsigned int v6; // r2
  int v7; // r2
  unsigned int v8; // [sp+4h] [bp-1Ch] BYREF

  result = (StateMethodExecuter *)FIELD_U8(a1, 4942);
  if ( !result )
  {
    v3 = FIELD_U32(a1, 4928);
    v4 = 0;
    if ( v3 == 256 )
      v3 = 13;
    do
    {
      v5 = v4;
      if ( v4 != v3 )
      {
        if ( v4 == 12 )
          goto LABEL_12;
        v8 = v4;
        v6 = 0;
        if ( v4 < 0xD )
          v6 = v4;
        if ( (*(_BYTE *)(*(_DWORD *)(a1 + 4 * v6 + 3848) + 64) & 1) != 0 )
        {
          v7 = a1;
          if ( v4 < 0xC )
            v7 = a1 + v4;
          if ( FIELD_U8(v7, 45) )
          {
LABEL_12:
            v8 = v4;
            sub_60502B04(a1 + 3900, &v8, 1);
          }
        }
      }
      v4 = v5 + 1;
      if ( v5 > 12 )
        v4 = 13;
    }
    while ( v4 != 13 );
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60CA3E78);
  }
  return result;
}
