/* Icon_IN_ref
 * address: 0x60958594   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Icon_IN_ref(_DWORD *a1)
{
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  *a1 = off_60C5EA70;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  sub_608DEB0C(a1 + 1, 256, (int)(a1 + 4));
  a1[260] = 1;
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "Icon = IN";
  sub_60969510(a1, v3);
  return a1;
}
