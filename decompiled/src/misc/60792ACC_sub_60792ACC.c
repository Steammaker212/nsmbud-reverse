/* sub_60792ACC
 * address: 0x60792ACC   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60792ACC(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 168);
  if ( result != 1 )
    return 0;
  return result;
}
