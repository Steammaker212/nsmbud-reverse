/* sub_608C0ED8
 * address: 0x608C0ED8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C0ED8(int result, unsigned int a2, float a3)
{
  int v3; // lr
  int v4; // r3
  bool v5; // cc

  if ( a2 )
  {
    v3 = FIELD_U32(result, 1000);
    if ( v3 >= 1 )
    {
      result += 54368;
      v4 = 1;
      do
      {
        if ( (a2 & 1) != 0 )
          *(float *)result = a3;
        if ( !(a2 >> 1) )
          break;
        v5 = v4 < v3;
        result += 112;
        a2 >>= 1;
        ++v4;
      }
      while ( v5 );
    }
  }
  return result;
}
