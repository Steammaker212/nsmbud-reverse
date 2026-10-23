/* sub_6087EC1C
 * address: 0x6087EC1C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6087EC1C(int *result)
{
  char v1; // r1
  int v2; // r3
  int v3; // r2
  bool v4; // cc
  int v5; // r2
  int v6; // r1
  int v7; // r6
  int v8; // r1
  int v9; // r4

  v1 = *((_BYTE *)result + 20);
  if ( (v1 & 1) != 0 )
  {
    v2 = result[2];
    if ( v2 >= 2 )
    {
      v3 = result[4];
      v4 = v3 < 1;
      if ( v3 >= 1 )
        v4 = result[3] < 1;
      if ( !v4 )
      {
        v5 = 0;
        while ( 1 )
        {
          v6 = *result;
          if ( v2 >= 1 )
          {
            v7 = *(_DWORD *)(v6 + 4 * v5);
            *(_DWORD *)(result[1] + 4 * v5) |= v7;
            if ( result[2] >= 2 )
            {
              v8 = 1;
              do
              {
                v9 = v5 + result[3] * v8++;
                *(_DWORD *)(result[1] + 4 * v9) |= v7;
              }
              while ( v8 < result[2] );
            }
            v6 = *result;
          }
          *(_DWORD *)(v6 + 4 * v5++) = 0;
          if ( v5 >= result[3] )
            break;
          v2 = result[2];
        }
        v1 = *((_BYTE *)result + 20);
      }
    }
    *((_BYTE *)result + 21) = -1;
    *((_BYTE *)result + 20) = v1 & 0xFE;
  }
  return result;
}
