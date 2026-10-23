/* sub_605AD4D4
 * address: 0x605AD4D4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605AD4D4(int a1)
{
  int v1; // r3
  int *v2; // r1
  _DWORD *v3; // lr

  v1 = 3;
  v2 = &dword_60CB01F4[15 * FIELD_U32(a1, 6784)];
  v3 = v2 + 1;
  do
  {
    if ( v2[v1] == a1 )
    {
      v2[v1] = 0;
      if ( (*v3)-- <= 1 )
        *v2 = 0;
    }
    ++v1;
  }
  while ( v1 != 15 );
  return 1;
}
