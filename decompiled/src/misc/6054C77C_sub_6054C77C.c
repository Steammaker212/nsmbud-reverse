/* sub_6054C77C
 * address: 0x6054C77C   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054C77C(_DWORD *a1)
{
  char v1; // r12
  int result; // r0
  int v4; // [sp+4h] [bp-14h] BYREF

  if ( ((unsigned int)&dword_60CACB34[1] & ~(1616168860 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CACB34[1]) )
  {
    dword_60CACB58 = (int)&sead__SafeStringBase__vtable;
    dword_60CACB5C = (int)"N_KinopioWin_00";
    dword_60CACB60 = (int)&sead__SafeStringBase__vtable;
    dword_60CACB64 = (int)"N_Sign_00";
    dword_60CACB68 = (int)&sead__SafeStringBase__vtable;
    dword_60CACB6C = (int)"N_W9Win_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CACB34[1]);
  }
  v4 = 3;
  sub_6047518C((int)(a1 + 10), (int)(a1 + 912), &dword_60CACB58, &v4);
  *(_BYTE *)(a1[912] + 64) &= ~1u;
  *(_BYTE *)(a1[913] + 64) &= ~1u;
  result = a1[914];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
