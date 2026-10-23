/* sub_608B81A4
 * address: 0x608B81A4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B81A4(int result, unsigned int a2, float a3)
{
  int v3; // r2
  int v4; // r3
  int v5; // r3

  if ( a2 )
  {
    v3 = 61;
    do
    {
      if ( (a2 & 1) != 0 )
      {
        v4 = *(_DWORD *)(result + 4 * v3);
        if ( v4 )
          FIELD_F32(v4, 12) = a3;
      }
      if ( !(a2 >> 1) )
        break;
      v5 = v3 - 60;
      ++v3;
      a2 >>= 1;
    }
    while ( v5 < 16 );
  }
  return result;
}
