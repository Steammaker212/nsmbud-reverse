/* sub_60390564
 * address: 0x60390564   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

double __fastcall sub_60390564(int a1)
{
  double result; // d0

  sub_6038F8CC(a1);
  *(_QWORD *)&result = sub_6038FA88(a1).n128_u64[0];
  return result;
}
