/* sub_609200A0
 * address: 0x609200A0   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609200A0(int a1)
{
  int result; // r0

  result = 1;
  if ( FIELD_U16(a1, 34) == 3 )
    return FIELD_U16(a1, 26);
  return result;
}
