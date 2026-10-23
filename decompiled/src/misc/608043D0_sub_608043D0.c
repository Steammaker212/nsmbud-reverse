/* sub_608043D0
 * address: 0x608043D0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_608043D0(sead_IDisposer *a1, int a2, int a3, int a4)
{
  sead_IDisposer_ctor(a1);
  FIELD_U32(a1, 0x0) = (int)off_60C27EE8;
  sub_60804D58(&a1[1], a2, a3);
  a1[1].field_8 = a4;
  return a1;
}
