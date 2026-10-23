/* sub_6095926C
 * address: 0x6095926C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095926C(int a1, int a2)
{
  int result; // r0
  int v4; // lr
  int v5; // r2
  int v6; // r3
  int v7; // r4
  int v8; // r5
  int v9; // r6
  int v10; // r7
  bool v11; // zf

  result = 0;
  v4 = FIELD_U8(a1, 361);
  if ( v4 == FIELD_U8(a2, 361) )
  {
    result = 1;
    if ( FIELD_U8(a1, 361) )
    {
      v5 = 0;
      v6 = 0;
      while ( 1 )
      {
        v7 = a2 + v5;
        v8 = a1 + v5;
        if ( *(unsigned __int8 *)(a1 + v5 + 238) != *(unsigned __int8 *)(a2 + v5 + 238) )
          break;
        v9 = FIELD_U8(v7, 239);
        v10 = FIELD_U8(v8, 239);
        v11 = v10 == v9;
        if ( v10 == v9 )
          v11 = FIELD_U16(v8, 234) == FIELD_U16(v7, 234);
        if ( !v11 || FIELD_U16(v8, 236) != FIELD_U16(v7, 236) )
          break;
        ++v6;
        v5 += 8;
        if ( v6 >= v4 )
          return result;
      }
      return 0;
    }
  }
  return result;
}
