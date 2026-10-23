/* P_Arrow_00_ref
 * address: 0x604B3288   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall P_Arrow_00_ref(int a1)
{
  char v2; // r12
  int v3; // r0
  int v5; // [sp+4h] [bp-14h] BYREF

  CoinEditScene_bflyt_ref();
  sub_604B3678(a1);
  sub_604B37F8(a1);
  if ( ((unsigned int)dword_60CA1BEC & ~(1615540924 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CA1BEC) )
  {
    dword_60CA1C04 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C08 = (int)"P_Arrow_00";
    sub_60000288();
    _cxa_guard_release(dword_60CA1BEC);
  }
  v3 = FIELD_U32(a1, 4);
  v5 = 1;
  __Player__applyPowerUpTransform(v3, a1 + 584, (int)&dword_60CA1C04, &v5);
  return sub_604B39BC(a1);
}
