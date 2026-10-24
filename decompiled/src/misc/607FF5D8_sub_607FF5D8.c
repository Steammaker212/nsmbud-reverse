/* sub_607FF5D8
 * address: 0x607FF5D8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_607FF5D8(sead_IDisposer *a1)
{
  sead_IDisposer_ctor(a1);
  FIELD_U32(a1, 0x0) = (int)off_60C27DFC;
  sub_607FE910(&FIELD_U32(a1 + (1) * 16, 0x0));
  sub_607FE910(&FIELD_U32(a1 + (1) * 16, 0x8));
  return a1;
}
