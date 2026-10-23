/* T_Btn_00_ref_511208
 * address: 0x60511208   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall T_Btn_00_ref_511208(int a1)
{
  char v1; // r12
  int v4; // [sp+8h] [bp-20h] BYREF
  int v5; // [sp+Ch] [bp-1Ch] BYREF

  if ( ((unsigned int)&dword_60CA83F0 & ~(1615925800 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA83F0) )
  {
    dword_60CA8404 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8408 = (int)"T_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA83F0);
  }
  v5 = 1;
  sub_60475570(a1 + 56, a1 + 9544, &dword_60CA82C8, (int)&dword_60CA8404, &v5);
  v4 = 1;
  return sub_60475570(a1 + 56, a1 + 9548, &dword_60CA82E0, (int)&dword_60CA8404, &v4);
}
