/* sub_60528200
 * address: 0x60528200   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60528200(int a1)
{
  int result; // r0
  int *v3; // r5
  unsigned int v4; // r6
  unsigned int v5; // r0

  result = FIELD_U8(a1, 41);
  if ( result )
  {
    v3 = (int *)(a1 + 4620);
    result = FIELD_U32(a1, 4620);
    if ( result >= 1 )
    {
      v4 = 0;
      do
      {
        v5 = 0;
        if ( v4 < 4 )
          v5 = v4;
        sub_6040349C(*(_DWORD *)(a1 + 4 * v5 + 4152) + 56);
        result = *v3;
        ++v4;
      }
      while ( (int)v4 < *v3 );
    }
  }
  return result;
}
