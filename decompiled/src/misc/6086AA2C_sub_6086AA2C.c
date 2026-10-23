/* sub_6086AA2C
 * address: 0x6086AA2C   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_6086AA2C(float *a1)
{
  float *result; // r0
  float v3; // s16
  int v4; // r0
  int v5; // r9
  int v6; // r1
  int v7; // r7
  int j; // r5
  int v9; // r4
  int v10; // r1
  int v11; // r5
  int v12; // r7
  int i; // r6
  int v14; // r4

  result = *((float **)a1 + 1);
  v3 = *result;
  if ( a1[11] != *result )
  {
    v4 = *((_DWORD *)a1 + 10);
    v5 = *((_DWORD *)a1 + 12);
    if ( v4 >= 1 && v4 <= *((_DWORD *)a1 + 9) )
    {
      v10 = *((_DWORD *)a1 + 19);
      if ( v10 >= 1 )
      {
        v11 = 0;
        v12 = 0;
        for ( i = 0; i < v10; ++i )
        {
          v14 = *(_DWORD *)(*((_DWORD *)a1 + 20) + v11 + 20);
          if ( (*(_BYTE *)(*((_DWORD *)a1 + 14) + 4 * v14 + 3) & 0x40) == 0 )
          {
            *(_DWORD *)(v5 + 4 * (v14 >> 5)) = *(_DWORD *)(v5 + 4 * (v14 >> 5)) & ~(1 << (v14 & 0x1F))
                                             | ((((int (__fastcall *)(float))loc_6086E97C)(v3) != 0) << (v14 & 0x1F));
            v10 = *((_DWORD *)a1 + 19);
          }
          v11 += 48;
          v12 += 12;
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)a1 + 19);
      if ( v6 >= 1 )
      {
        v7 = 0;
        for ( j = 0; j < v6; ++j )
        {
          v9 = *(_DWORD *)(*((_DWORD *)a1 + 20) + v7 + 20);
          if ( (*(_BYTE *)(*((_DWORD *)a1 + 14) + 4 * v9 + 3) & 0x40) == 0 )
          {
            *(_DWORD *)(v5 + 4 * (v9 >> 5)) = *(_DWORD *)(v5 + 4 * (v9 >> 5)) & ~(1 << (v9 & 0x1F))
                                            | ((((int (__fastcall *)(float))loc_6086E97C)(v3) != 0) << (v9 & 0x1F));
            v6 = *((_DWORD *)a1 + 19);
          }
          v7 += 48;
        }
      }
    }
    result = **((float ***)a1 + 1);
    *((_DWORD *)a1 + 11) = result;
  }
  return result;
}
