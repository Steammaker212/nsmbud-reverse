/* sub_6086A340
 * address: 0x6086A340   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086A340(int result, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r4
  int v3; // r2
  int v4; // r3
  unsigned int v5; // r5

  v2 = FIELD_U16(result, 8);
  if ( v2 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = *a2;
      if ( v5 <= 0x7FFE )
      {
        *(_DWORD *)(*(_DWORD *)result + 4 * v4) &= 0x3FFF8000u;
        *(_DWORD *)(*(_DWORD *)result + 4 * v4) |= v5 & 0x7FFF;
        *(_DWORD *)(*(_DWORD *)result + 4 * v5) &= 0xC0007FFF;
        *(_DWORD *)(*(_DWORD *)result + 4 * v5) |= v3 & 0x3FFF8000;
        v2 = FIELD_U16(result, 8);
      }
      ++v4;
      v3 += 0x8000;
      ++a2;
    }
    while ( v4 < v2 );
  }
  return result;
}
