/* jcb_sphere_ed_ref
 * address: 0x6003C868   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jcb_sphere_ed_ref(int a1)
{
  _DWORD v3[6]; // [sp+0h] [bp-18h] BYREF

  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "jcb_sphere_ed";
  sub_60047464(a1, 1, v3, 0, 0.0, 1.0);
  FIELD_U32(a1, 11492) = 1;
  return 11492;
}
