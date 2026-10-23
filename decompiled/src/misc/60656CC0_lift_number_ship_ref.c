/* lift_number_ship_ref
 * address: 0x60656CC0   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall lift_number_ship_ref(int a1)
{
  char v1; // r12

  if ( ((unsigned int)&unk_60CB64B0 & ~(1617259736 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60CB64B0) )
  {
    dword_60CB64B4 = (int)&sead__SafeStringBase__vtable;
    dword_60CB64B8 = (int)"lift_number_ship_yougan";
    dword_60CB64BC = (int)&sead__SafeStringBase__vtable;
    dword_60CB64C0 = (int)"lift_number_ship";
    sub_60000288();
    _cxa_guard_release((__guard *)&unk_60CB64B0);
  }
  return (char *)&unk_60CB64B0 + 8 * (FIELD_U32(a1, 20) & 1) + 4;
}
