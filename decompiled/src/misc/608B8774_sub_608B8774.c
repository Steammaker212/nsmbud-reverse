/* sub_608B8774
 * address: 0x608B8774   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B8774(int result, unsigned int a2, int a3, float a4)
{
  int v4; // r12
  int v5; // r3
  int v6; // r2
  int v7; // r2

  if ( a2 )
  {
    v4 = a3 + 1;
    v5 = 61;
    do
    {
      if ( (a2 & 1) != 0 )
      {
        v6 = *(_DWORD *)(result + 4 * v5);
        if ( v6 )
          *(float *)(v6 + 4 * v4 + 84) = a4;
      }
      if ( !(a2 >> 1) )
        break;
      v7 = v5 - 60;
      ++v5;
      a2 >>= 1;
    }
    while ( v7 < 16 );
  }
  return result;
}
