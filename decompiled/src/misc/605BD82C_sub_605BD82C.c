/* sub_605BD82C
 * address: 0x605BD82C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BD82C(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = FIELD_U16(a1, 7376);
  result = 3;
  if ( !v1 )
    return 1;
  return result;
}
