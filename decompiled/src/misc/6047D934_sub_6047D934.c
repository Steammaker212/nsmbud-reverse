/* sub_6047D934
 * address: 0x6047D934   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6047D934(_DWORD *result, int *a2, _WORD *a3, int a4)
{
  int v4; // lr
  int v5; // r12
  _WORD *v6; // r4
  int v7; // r3

  if ( a4 < 2 )
  {
    v5 = 1;
    v4 = 0;
  }
  else
  {
    v4 = 0;
    v5 = 1;
    v6 = a3;
    v7 = a4 / 2;
    do
    {
      switch ( *v6 )
      {
        case 4:
          goto LABEL_5;
        case 0xA:
          ++v5;
          ++v6;
          break;
        case 0xE:
          v6 = (_WORD *)((char *)v6 + (unsigned __int16)v6[3] + 8);
          break;
        case 0xF:
          v6 += 3;
          break;
        default:
          ++v4;
LABEL_5:
          ++v6;
          break;
      }
    }
    while ( v6 - a3 < v7 );
  }
  if ( result )
    *result = v4;
  if ( a2 )
    *a2 = v5;
  return result;
}
