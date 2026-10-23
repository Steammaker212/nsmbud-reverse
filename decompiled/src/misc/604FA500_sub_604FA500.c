/* sub_604FA500
 * address: 0x604FA500   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FA500(_DWORD *a1)
{
  char v1; // r12
  int result; // r0
  int v4; // [sp+4h] [bp-14h] BYREF

  if ( ((unsigned int)&dword_60CA7024[1] & ~(1615832352 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7024[1]) )
  {
    dword_60CA7058 = (int)&sead__SafeStringBase__vtable;
    dword_60CA705C = (int)"N_KinopioWin_00";
    dword_60CA7060 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7064 = (int)"N_Sign_00";
    dword_60CA7068 = (int)&sead__SafeStringBase__vtable;
    dword_60CA706C = (int)"N_W9Win_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA7024[1]);
  }
  v4 = 3;
  sub_6047518C((int)(a1 + 10), (int)(a1 + 912), &dword_60CA7058, &v4);
  a1[920] = 0;
  *(_BYTE *)(a1[912] + 64) |= 1u;
  *(_BYTE *)(a1[913] + 64) &= ~1u;
  result = a1[914];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
