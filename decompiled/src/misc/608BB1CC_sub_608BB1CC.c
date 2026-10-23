/* sub_608BB1CC
 * address: 0x608BB1CC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BB1CC(int a1)
{
  int i; // r5

  for ( i = FIELD_U32(a1, 380); i; i = FIELD_U32(i, 368) )
    sub_608C7E5C(i);
  FIELD_U32(a1, 380) = 0;
  return 0;
}
