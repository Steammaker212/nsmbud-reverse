/* sub_6068ABA8
 * address: 0x6068ABA8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_6068ABA8(sead_IDisposer *a1)
{
  sead_IDisposer_ctor(a1);
  FIELD_U32(a1, 0x0) = (int)off_60C17448;
  a1[1].vtable = 0;
  a1[1].containingHeap = 0;
  agl_TextureData_ref(&a1[1].field_8);
  agl_TextureData_ref(&a1[18].field_8);
  return a1;
}
