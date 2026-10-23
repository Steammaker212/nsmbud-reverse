/* sub_604D6F6C
 * address: 0x604D6F6C   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D6F6C(int a1, int a2, int a3)
{
  char v3; // r12
  int result; // r0
  int v8; // [sp+8h] [bp-20h] BYREF
  _DWORD v9[2]; // [sp+Ch] [bp-1Ch] BYREF
  int v10; // [sp+14h] [bp-14h] BYREF

  if ( ((unsigned int)&dword_60CA4D34[1] & ~(1615687572 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D34[1]) )
  {
    dword_60CA4DB8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4DBC = (int)"T_CourseNum_00";
    _cxa_guard_release(&dword_60CA4D34[1]);
  }
  if ( ((unsigned int)&dword_60CA4D34[2] & ~(1615687672 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D34[2]) )
  {
    dword_60CA4DC0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4DC4 = (int)"CourseSelectVSWin_CourseNum_00";
    _cxa_guard_release(&dword_60CA4D34[2]);
  }
  v10 = 0;
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = a2 + 136;
  v8 = 1;
  result = sub_60475570(a1 + 60, (int)&v10, v9, (int)&dword_60CA4DB8, &v8);
  if ( v10 )
    return sub_6047E0EC(&dword_60CA4DC0, v10, 1, a3);
  return result;
}
