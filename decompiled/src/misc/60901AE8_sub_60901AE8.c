/* sub_60901AE8
 * address: 0x60901AE8   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60901AE8(int a1, unsigned int a2, _WORD *a3, int a4)
{
  unsigned int result; // r0
  int v6; // r7
  _BYTE *v7; // r4
  unsigned int v8; // r5
  int v9; // r6

  result = 0;
  if ( a2 && a4 >= -1 )
  {
    if ( a4 == -1 )
      a4 = 0x7FFFFFFF;
    v6 = 0;
    result = 0;
    while ( 1 )
    {
      v7 = (_BYTE *)(a1 + result);
      if ( a4 <= v6 )
        break;
      v8 = (unsigned __int16)*a3;
      if ( !*a3 )
        break;
      if ( v8 > 0x7F )
      {
        if ( v8 >> 11 )
        {
          if ( result + 2 >= a2 )
            goto LABEL_16;
          *v7 = (v8 >> 12) | 0xE0;
          v7[1] = (v8 >> 6) & 0x3F | 0x80;
          v9 = 3;
          v7[2] = v8 & 0x3F | 0x80;
        }
        else
        {
          if ( result + 1 >= a2 )
            goto LABEL_16;
          *v7 = (v8 >> 6) | 0xC0;
          v9 = 2;
          v7[1] = v8 & 0x3F | 0x80;
        }
      }
      else
      {
        *v7 = v8;
        v9 = 1;
      }
      result += v9;
      ++a3;
      ++v6;
      if ( result >= a2 )
      {
LABEL_16:
        --result;
        v7 = (_BYTE *)(a1 + result);
        break;
      }
    }
    *v7 = 0;
  }
  return result;
}
