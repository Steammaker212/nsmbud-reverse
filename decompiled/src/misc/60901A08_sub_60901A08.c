/* sub_60901A08
 * address: 0x60901A08   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60901A08(_WORD *a1, unsigned int a2, int a3, int a4)
{
  int result; // r0
  int v6; // lr
  int v7; // r4
  _WORD *v8; // r5
  int v9; // r4
  __int16 v10; // r6
  int v11; // r4
  __int16 v12; // r6
  __int16 v13; // r7
  int v14; // r7
  bool v15; // zf

  result = 0;
  if ( a2 && a4 >= -1 )
  {
    if ( a4 == -1 )
      a4 = 0x7FFFFFFF;
    v6 = 0;
    v7 = 0;
    do
    {
      result = v7;
      v8 = a1;
      if ( a4 <= v6 )
        break;
      v9 = a3 + v6;
      v10 = *(unsigned __int8 *)(a3 + v6);
      if ( !*(_BYTE *)(a3 + v6) )
        break;
      if ( (v10 & 0x80) != 0 )
      {
        if ( (v10 & 0xE0) == 0xC0 )
        {
          if ( !FIELD_U8(v9, 1) )
            break;
          v12 = (v10 << 6) & 0x7C0;
          v13 = FIELD_U8(v9, 1) & 0x3F;
          v11 = 2;
        }
        else
        {
          if ( (v10 & 0xF0) != 0xE0 )
            break;
          v14 = FIELD_U8(v9, 1);
          v15 = v14 == 0;
          if ( FIELD_U8(v9, 1) )
          {
            v9 = FIELD_U8(v9, 2);
            v15 = v9 == 0;
          }
          if ( v15 )
            break;
          v13 = ((v14 & 0x3F) << 6) | (v10 << 12);
          v12 = v9 & 0x3F;
          v11 = 3;
        }
        v10 = v13 | v12;
      }
      else
      {
        v11 = 1;
      }
      v6 += v11;
      v7 = result + 1;
      *a1++ = v10;
    }
    while ( result + 1 < a2 );
    *v8 = 0;
  }
  return result;
}
