/* sub_60982EB0
 * address: 0x60982EB0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60982EB0(int a1, int a2)
{
  int v2; // r3
  int v3; // r12
  int result; // r0

  v2 = FIELD_U32(a1, 24);
  v3 = a1 + 20;
  result = 0;
  while ( v2 != v3 )
  {
    if ( FIELD_U32(v2, 8) == a2 )
      return 1;
    v2 = FIELD_U32(v2, 4);
  }
  return result;
}
