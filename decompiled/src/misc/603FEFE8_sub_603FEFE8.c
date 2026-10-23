/* sub_603FEFE8
 * address: 0x603FEFE8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FEFE8(int a1)
{
  int result; // r0
  int *v3; // r5
  int i; // r6
  int v5; // r0

  v3 = (int *)(a1 + 160480);
  result = FIELD_U32(a1, 160480);
  if ( result >= 1 )
  {
    for ( i = 0; i < result; ++i )
    {
      if ( i <= 3 )
      {
        v5 = 0;
        if ( (unsigned int)i < 4 )
          v5 = i;
        sub_604FE30C(a1 + 40116 * v5 + 16);
        result = *v3;
      }
    }
  }
  return result;
}
