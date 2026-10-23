/* sub_609885B8
 * address: 0x609885B8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609885B8(int a1, char a2, char a3)
{
  *(_WORD *)a1 = 14;
  FIELD_U16(a1, 2) = 0;
  FIELD_U16(a1, 4) = 128;
  FIELD_U16(a1, 6) = 2;
  FIELD_U8(a1, 8) = a2 ^ 1;
  FIELD_U8(a1, 9) = a3;
  return a1 + 10;
}
