/* sub_6095E89C
 * address: 0x6095E89C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095E89C(_DWORD *a1, float *a2, int a3, int a4)
{
  int v4; // r2
  int v5; // r12
  float v6; // s0
  float v7; // s2
  float v8; // s4
  float v9; // s6
  int v10; // r1
  int v11; // r5
  int v12; // r6
  unsigned int v13; // r7
  unsigned int v14; // r4

  v4 = a1[114];
  v5 = 0;
  if ( v4 >= 1 )
  {
    v6 = a2[3];
    if ( v6 > 0.0 )
    {
      v7 = *a2;
      v8 = a2[1];
      v9 = a2[2];
      v10 = 0;
      v5 = 0;
      do
      {
        if ( (a4 & (1 << v10)) == 0 )
        {
          v11 = a1[156];
          if ( a1[155] > (unsigned int)v10 )
            v11 += 1396 * v10;
          v12 = FIELD_U32(v11, 988);
          if ( v12 < 1 )
          {
LABEL_13:
            v5 |= 1 << v10;
          }
          else
          {
            v13 = 0;
            while ( 1 )
            {
              v14 = 0;
              if ( v13 < 0x18 )
                v14 = v13;
              if ( v6 < (float)((float)((float)((float)(v8 * *(float *)(v11 + 16 * v14 + 996))
                                              + (float)(v7 * *(float *)(v11 + 16 * v14 + 992)))
                                      + (float)(v9 * *(float *)(v11 + 16 * v14 + 1000)))
                              - *(float *)(v11 + 16 * v14 + 1004)) )
                break;
              if ( (int)++v13 >= v12 )
                goto LABEL_13;
            }
          }
        }
        ++v10;
      }
      while ( v10 < v4 );
    }
  }
  return v5;
}
