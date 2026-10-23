/* sub_60805104
 * address: 0x60805104   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_60805104(sead_IDisposer *a1)
{
  sead_IDisposer_ctor(a1);
  FIELD_U32(a1, 0x0) = (int)off_60C27F08;
  sub_60805134(&a1[1]);
  return a1;
}
