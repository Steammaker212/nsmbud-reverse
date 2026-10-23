/* sub_60907FA4
 * address: 0x60907FA4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_60907FA4(sead_IDisposer *a1, int a2)
{
  sead_IDisposer_ctor(a1);
  FIELD_U32(a1, 0x0) = (int)off_60C5CDA8;
  nn__os__InitializeLightEvent(&a1[1], 0, a2 ^ 1);
  return a1;
}
