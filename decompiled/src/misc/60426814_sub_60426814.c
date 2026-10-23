/* sub_60426814
 * address: 0x60426814   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60426814(int a1, unsigned int a2)
{
  int v2; // r2
  unsigned int v3; // r1

  v2 = 0;
  if ( a2 >= 7 )
    a2 = 0;
  v3 = *(_DWORD *)(a1 + 4 * a2 + 17984);
  if ( v3 != -1 )
  {
    v2 = FIELD_U32(a1, 7300);
    if ( FIELD_U32(a1, 7296) > v3 )
      v2 += 2088 * v3;
  }
  return v2 + 224;
}
