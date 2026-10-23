/* sub_604E6D24
 * address: 0x604E6D24   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E6D24(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r5
  unsigned int v5; // r9
  int v6; // r2
  unsigned int v7; // r0
  int v8; // r1
  _DWORD *v9; // r10
  int v10; // r11
  int *v11; // r8
  int v12; // r0
  int v13; // r1

  v2 = sub_60834614(a1);
  result = sub_60834614(v2);
  if ( FIELD_U8(result, 20) )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = result + v4;
      v7 = 0;
      if ( v5 < 4 )
        v7 = v5;
      v8 = FIELD_U32(v6, 32);
      v9 = (_DWORD *)(a1 + 3668 * v7);
      if ( v8 == 6 || v9[11092] != v8 )
      {
        v9[11092] = v8;
        v9[11091] |= 1u;
      }
      if ( v5 <= 3 && v5 != v9[11093] )
      {
        v9[11093] = v5;
        v9[11091] |= 1u;
      }
      v10 = FIELD_U32(v6, 24);
      v11 = v9 + 11095;
      if ( sub_6050DF34(v9 + 11090, v9[11095], 0) < v10 && (FIELD_U8(dword_60CC6D78, 44) & 1) == 0 )
        v9[12006] = 653;
      v12 = *v11;
      if ( *v11 != v10 )
      {
        v9[11094] = v12;
        *v11 = v10;
        v12 = v9[11091] | 2;
        v9[11091] = v12;
      }
      result = sub_60834614(v12);
      if ( (int)++v5 > 3 )
        break;
      v13 = result + v4;
      v4 += 72;
    }
    while ( FIELD_U8(v13, 92) );
  }
  return result;
}
