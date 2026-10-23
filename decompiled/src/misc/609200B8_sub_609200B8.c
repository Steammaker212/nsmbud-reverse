/* sub_609200B8
 * address: 0x609200B8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609200B8(int a1)
{
  int result; // r0
  unsigned int v3; // r2

  result = 1;
  v3 = FIELD_U16(a1, 34);
  if ( v3 <= 8 && ((1 << v3) & 0x150) != 0 )
    return FIELD_U16(a1, 28);
  return result;
}
