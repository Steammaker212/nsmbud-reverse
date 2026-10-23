/* sub_608439B4
 * address: 0x608439B4   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_608439B4(_WORD *result, int a2, unsigned int a3)
{
  unsigned int *v3; // r1
  signed int v4; // r3
  unsigned int v5; // r6
  unsigned int v6; // r7
  int v7; // r10
  int v8; // r4
  unsigned int v9; // r7
  unsigned int v10; // r4
  int v11; // r6
  int v12; // r5
  unsigned int v13; // r7
  unsigned int v14; // r4
  int v15; // r6
  int v16; // r5

  if ( a3 >= 0xC )
  {
    v3 = (unsigned int *)(a2 + 8);
    result += 2;
    v4 = 0;
    do
    {
      v5 = *(v3 - 2);
      v6 = v5 & 0x7F800000;
      v7 = HIWORD(v5) & 0x8000;
      if ( (v5 & 0x7F800000) == 0x7F800000 )
      {
        if ( (v5 & 0x7FFFFF) != 0 )
        {
          if ( (v5 & 0x7FFFFF) <= 0x3FFFFF )
            LOWORD(v7) = v7 | 0x7DFF;
          else
            v7 = HIWORD(v5) | 0x7FFF;
        }
        else
        {
          LOWORD(v7) = v7 | 0x7C00;
        }
      }
      else
      {
        v8 = (v6 >> 23) - 112;
        if ( v8 < 31 )
        {
          if ( v6 >= 0x38000001 )
            v7 |= (v5 >> 13) & 0x3FF | (v8 << 10) & 0x7C00;
        }
        else
        {
          LOWORD(v7) = v7 | 0x7C00;
        }
      }
      *(result - 2) = v7;
      v9 = *(v3 - 1);
      v10 = v9 & 0x7F800000;
      v11 = HIWORD(v9) & 0x8000;
      if ( (v9 & 0x7F800000) == 0x7F800000 )
      {
        if ( (v9 & 0x7FFFFF) != 0 )
        {
          if ( (v9 & 0x7FFFFF) <= 0x3FFFFF )
            LOWORD(v11) = v11 | 0x7DFF;
          else
            v11 = HIWORD(v9) | 0x7FFF;
        }
        else
        {
          LOWORD(v11) = v11 | 0x7C00;
        }
      }
      else
      {
        v12 = (v10 >> 23) - 112;
        if ( v12 <= 30 )
        {
          if ( v10 >= 0x38000001 )
            v11 |= (v9 >> 13) & 0x3FF | (v12 << 10) & 0x7C00;
        }
        else
        {
          LOWORD(v11) = v11 | 0x7C00;
        }
      }
      *(result - 1) = v11;
      v13 = *v3;
      v14 = *v3 & 0x7F800000;
      v15 = HIWORD(*v3) & 0x8000;
      if ( v14 == 2139095040 )
      {
        if ( (v13 & 0x7FFFFF) != 0 )
        {
          if ( (v13 & 0x7FFFFF) <= 0x3FFFFF )
            LOWORD(v15) = v15 | 0x7DFF;
          else
            v15 = HIWORD(v13) | 0x7FFF;
        }
        else
        {
          LOWORD(v15) = v15 | 0x7C00;
        }
      }
      else
      {
        v16 = (v14 >> 23) - 112;
        if ( v16 <= 30 )
        {
          if ( v14 >= 0x38000001 )
            v15 |= (v13 >> 13) & 0x3FF | (v16 << 10) & 0x7C00;
        }
        else
        {
          LOWORD(v15) = v15 | 0x7C00;
        }
      }
      ++v4;
      *result = v15;
      v3 += 3;
      result[1] = 15360;
      result += 4;
    }
    while ( v4 < (int)(a3 / 0xC) );
  }
  return result;
}
