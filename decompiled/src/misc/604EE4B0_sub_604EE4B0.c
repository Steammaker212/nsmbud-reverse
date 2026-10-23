/* sub_604EE4B0
 * address: 0x604EE4B0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EE4B0(int a1)
{
  char v1; // r12
  unsigned int v3; // r0
  __guard *v4; // r5

  v3 = (unsigned int)&dword_60CA62A4[1] & ~(1615783116 << v1);
  if ( (v3 & 1) == 0 )
  {
    v3 = _cxa_guard_acquire(&dword_60CA62A4[1]);
    if ( v3 )
    {
      dword_60CA62BC = (int)&sead__SafeStringBase__vtable;
      dword_60CA62C0 = (int)"FreeInfoWindow_Text_00";
      dword_60CA62C4 = (int)&sead__SafeStringBase__vtable;
      dword_60CA62C8 = (int)"ChallengeInfoWindow_Text_00";
      sub_60000288();
      _cxa_guard_release(&dword_60CA62A4[1]);
    }
  }
  v4 = &dword_60CA62A0[2 * (*(_DWORD *)(sub_60834644(v3) + 492) == 4) + 7];
  sub_6047E0EC(v4, FIELD_U32(a1, 3608), 0);
  return sub_6047E0EC(v4, FIELD_U32(a1, 3612), 0);
}
