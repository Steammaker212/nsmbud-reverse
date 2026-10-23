/* sub_604A18F0
 * address: 0x604A18F0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A18F0(int a1)
{
  int result; // r0
  int v3; // r1
  unsigned int i; // r6
  unsigned int v5; // r0

  result = 22496;
  v3 = FIELD_U32(a1, 22496);
  if ( v3 >= 1 )
  {
    for ( i = 0; (int)i < v3; ++i )
    {
      v5 = 0;
      if ( i < 4 )
        v5 = i;
      result = *(_DWORD *)(a1 + 4 * v5 + 20276);
      if ( result )
      {
        result = sub_6040349C(result);
        v3 = FIELD_U32(a1, 22496);
      }
    }
  }
  return result;
}
