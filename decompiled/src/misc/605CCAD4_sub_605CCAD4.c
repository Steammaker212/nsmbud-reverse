/* sub_605CCAD4
 * address: 0x605CCAD4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CCAD4(int a1)
{
  FIELD_U32(a1, 6124) &= 0xFFFFFFCF;
  sub_600009FC((StageActor *)a1);
  FIELD_U8(a1, 6056) = 2;
  return 6056;
}
