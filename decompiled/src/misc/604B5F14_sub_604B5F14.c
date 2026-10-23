/* sub_604B5F14
 * address: 0x604B5F14   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B5F14(int a1)
{
  int v1; // r2
  int result; // r0

  v1 = 5;
  if ( (unsigned int)(FIELD_U32(a1, 3724) - 35) < 3 )
    v1 = 0;
  FIELD_U32(a1, 3784) = v1;
  FIELD_U16(a1, 3788) = 0;
  result = FIELD_U32(a1, 3652);
  if ( result )
    FIELD_U8(result, 1047) = 1;
  return result;
}
