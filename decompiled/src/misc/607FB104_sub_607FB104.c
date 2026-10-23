/* sub_607FB104
 * address: 0x607FB104   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_607FB104(sead_IDisposer *a1, int a2, int a3)
{
  sead_IDisposer_ctor(a1);
  FIELD_U32(a1, 0x0) = (int)off_60C27D7C;
  a1[1].vtable = a2;
  a1[1].containingHeap = a3;
  memset(&a1[1].field_8, 0, 52);
  return a1;
}
