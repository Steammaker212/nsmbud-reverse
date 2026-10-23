/* sub_602EF2C8
 * address: 0x602EF2C8   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EF2C8(int a1)
{
  char v1; // r12
  int v2; // r4
  int v3; // r5

  v2 = FIELD_U32(a1, 56);
  if ( ((unsigned int)dword_60C7B430 & ~(1613689568 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
  {
    Enemy_RTTI = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C7B430);
  }
  v3 = 0;
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &Enemy_RTTI) == 1 )
    return FIELD_U32(v2, 8);
  return v3;
}
