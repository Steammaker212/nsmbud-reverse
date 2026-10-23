/* sub_608C0E2C
 * address: 0x608C0E2C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C0E2C(int result, unsigned int a2, float a3)
{
  int v3; // lr
  float *v4; // r3
  int v5; // r2
  bool v6; // cc

  if ( a2 )
  {
    v3 = FIELD_U32(result, 1000);
    if ( v3 >= 1 )
    {
      v4 = (float *)(result + 54360);
      v5 = 1;
      do
      {
        if ( (a2 & 1) != 0 )
        {
          *v4 = a3;
          v3 = FIELD_U32(result, 1000);
        }
        if ( !(a2 >> 1) )
          break;
        v6 = v5 < v3;
        v4 += 28;
        a2 >>= 1;
        ++v5;
      }
      while ( v6 );
    }
  }
  return result;
}
