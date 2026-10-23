/* sub_604534DC
 * address: 0x604534DC   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604534DC(_DWORD *result, int *a2, int *a3, _WORD *a4, unsigned int a5)
{
  unsigned int v5; // r7
  int v6; // lr
  unsigned int v7; // r7
  _DWORD *v8; // r11
  int v9; // r5
  unsigned int v10; // r4
  _DWORD *v11; // r4
  int v12; // r9
  _DWORD *v13; // r7
  _DWORD *v14; // r6
  unsigned int v15; // r2

  v5 = result[329];
  if ( v5 >= 2 )
  {
    if ( v5 == 2 )
    {
      *a2 = *(unsigned __int16 *)(result[347] + 8 * a5 + 152);
      *a3 = *(unsigned __int16 *)(result[347] + 8 * a5 + 154);
      result = (_DWORD *)*(unsigned __int16 *)(result[347] + 8 * a5 + 156);
      *a4 = (_WORD)result;
    }
  }
  else
  {
    v6 = result[352] | a5;
    if ( v6 )
    {
      v7 = a5;
      v8 = result + 320;
      if ( a5 >= 4 )
        v7 = 0;
      v9 = (int)&result[v7 + 316];
    }
    else
    {
      v8 = result + 320;
      v9 = (int)(result + 320);
    }
    v10 = 0;
    if ( a5 < 4 )
      v10 = a5;
    v11 = &result[v10];
    v12 = v11[325]
        | *(_DWORD *)(*(_DWORD *)v9 + 4) & 0x7FF
        | (*(_DWORD *)(*(_DWORD *)v9 + 4) >> 2) & 0x800
        | (*(_DWORD *)(*(_DWORD *)v9 + 4) >> 4) & 0x1000
        | (*(_DWORD *)(*(_DWORD *)v9 + 4) >> 4) & 0x2000;
    v13 = v11 + 316;
    v14 = v11 + 316;
    if ( !v6 )
      v14 = v8;
    v15 = *(_DWORD *)(*v14 + 8);
    *a2 = ((*(_DWORD *)(*v14 + 272) >> 2) & 0x800
         | *(_DWORD *)(*v14 + 272) & 0x7FF
         | (*(_DWORD *)(*v14 + 272) >> 4) & 0x1000
         | (*(_DWORD *)(*v14 + 272) >> 4) & 0x2000
         | v15 & 0x7FF
         | (v15 >> 2) & 0x800
         | (v15 >> 4) & 0x1000
         | (v15 >> 4) & 0x2000)
        & ~v12;
    if ( !(result[352] | a5) )
      v13 = v8;
    *a3 = *(_DWORD *)(*v13 + 272) & 0x7FF
        | v12
        | (*(_DWORD *)(*v13 + 272) >> 2) & 0x800
        | (*(_DWORD *)(*v13 + 272) >> 4) & 0x1000
        | (*(_DWORD *)(*v13 + 272) >> 4) & 0x2000;
    *a4 = *(_WORD *)(*(_DWORD *)(v11[316] + 324) + 434);
    v11[325] = 0;
    return 0;
  }
  return result;
}
