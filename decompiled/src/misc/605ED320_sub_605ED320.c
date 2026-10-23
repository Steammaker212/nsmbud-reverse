/* sub_605ED320
 * address: 0x605ED320   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605ED320(int a1)
{
  unsigned int v1; // r4
  unsigned int v2; // r5

  v1 = a1 + 6108;
  v2 = FIELD_U32(a1, 6104);
  if ( a1 + 6108 < v2 )
  {
    do
    {
      sub_605ED5C0(v1);
      v1 += 24;
    }
    while ( v1 < v2 );
  }
  return 1;
}
