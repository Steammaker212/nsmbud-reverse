/* sub_608C0F2C
 * address: 0x608C0F2C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C0F2C(int result, unsigned int a2, int a3, float a4)
{
  int v4; // lr
  float *v5; // r2
  int v6; // r3
  bool v7; // cc

  if ( a2 )
  {
    v4 = FIELD_U32(result, 1000);
    if ( v4 >= 1 )
    {
      v5 = (float *)(result + 4 * a3 + 54372);
      v6 = 1;
      do
      {
        if ( (a2 & 1) != 0 )
        {
          *v5 = a4;
          v4 = FIELD_U32(result, 1000);
        }
        if ( !(a2 >> 1) )
          break;
        v7 = v6 < v4;
        v5 += 28;
        a2 >>= 1;
        ++v6;
      }
      while ( v7 );
    }
  }
  return result;
}
