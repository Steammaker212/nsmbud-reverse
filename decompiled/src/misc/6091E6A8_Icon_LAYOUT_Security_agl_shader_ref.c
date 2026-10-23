/* Icon_LAYOUT_Security_agl_shader_ref
 * address: 0x6091E6A8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall Icon_LAYOUT_Security_agl_shader_ref(sead_IDisposer *a1)
{
  _DWORD v3[6]; // [sp+0h] [bp-18h] BYREF

  sead_IDisposer_ctor(a1);
  FIELD_U32(a1, 0x0) = (int)off_60C5D698;
  a1[1].vtable = (int)&off_60C5D6A8;
  memset(&a1[1].containingHeap, 0, 76);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "Icon = LAYOUT, Security = agl_shader";
  sub_60969510(&a1[1], v3);
  return a1;
}
