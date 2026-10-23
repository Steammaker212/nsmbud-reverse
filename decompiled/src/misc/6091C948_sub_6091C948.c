/* sub_6091C948
 * address: 0x6091C948   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6091C948(int a1, int a2, void *a3)
{
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = a2 + 16;
  return sub_6091C4C4(a1, (int)v4, a2 + 16 + FIELD_U32(a2, 4), a3);
}
