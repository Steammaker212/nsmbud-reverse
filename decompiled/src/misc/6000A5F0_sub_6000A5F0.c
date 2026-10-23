/* sub_6000A5F0
 * address: 0x6000A5F0   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000A5F0(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 948);
  if ( !v2 )
    return 0;
  result = v2 - 1;
  FIELD_U32(a1, 948) = result;
  return result;
}
