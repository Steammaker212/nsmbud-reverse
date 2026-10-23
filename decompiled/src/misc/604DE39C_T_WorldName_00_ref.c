/* T_WorldName_00_ref
 * address: 0x604DE39C   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall T_WorldName_00_ref(int a1)
{
  _DWORD *v2; // r4
  char v3; // r12
  char v4; // r12
  int v6[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v2);
  v6[0] = (int)&sead__SafeStringBase__vtable;
  v6[1] = (int)"CourseSelectWorldName.bflyt";
  message_ref(v2, v6, 0, 0, 0);
  if ( ((unsigned int)dword_60CA5060 & ~(1615717408 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CA5060) )
  {
    dword_60CA5070 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5074 = dword_60CA4FC8;
    dword_60CA5078 = (int)&sead__SafeStringBase__vtable;
    dword_60CA507C = dword_60CA4FD0;
    sub_60000288();
    _cxa_guard_release(dword_60CA5060);
  }
  v6[0] = 2;
  sub_60476030((int)v2, &dword_60CA5070, v6);
  if ( ((unsigned int)&dword_60CA5060[1] & ~(1615717568 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CA5060[1]) )
  {
    dword_60CA5068 = (int)&sead__SafeStringBase__vtable;
    dword_60CA506C = (int)"T_WorldName_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA5060[1]);
  }
  v6[0] = 1;
  return sub_60475334((int)v2, a1 + 3588, &dword_60CA5068, v6);
}
