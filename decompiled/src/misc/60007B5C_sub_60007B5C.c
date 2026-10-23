/* sub_60007B5C
 * address: 0x60007B5C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60007B5C(int a1, int a2)
{
  _DWORD *result; // r0
  int (**v5)(); // [sp+8h] [bp-20h] BYREF
  const char *v6; // [sp+Ch] [bp-1Ch]

  v5 = &sead__SafeStringBase__vtable;
  v6 = "PlayerUnitHeap";
  FIELD_U32(a1, 16) = sub_608FAFA4(2457600, 4, (int)&v5, 4, a2, 0);
  v5 = &sead__SafeStringBase__vtable;
  v6 = "ActorUnitHeap";
  result = sub_608FAFA4(262656, 512, (int)&v5, 4, a2, 0);
  FIELD_U32(a1, 20) = result;
  return result;
}
