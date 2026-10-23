/* sub_60549B88
 * address: 0x60549B88   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60549B88(int a1)
{
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "In";
  sub_60473DE4((_DWORD *)(a1 + 40), 0, v3, 0);
  FIELD_U8(a1, 3593) = 1;
  return 1;
}
