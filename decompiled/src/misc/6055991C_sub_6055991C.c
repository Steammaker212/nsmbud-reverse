/* sub_6055991C
 * address: 0x6055991C   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055991C(int a1)
{
  _DWORD *v2; // r5
  char v3; // r12
  char v4; // r12
  char v5; // r12
  int result; // r0
  int v7[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 64);
  sub_604734E4((_DWORD *)(a1 + 64), 0);
  sub_60475C8C((int)v2);
  v7[0] = (int)&sead__SafeStringBase__vtable;
  v7[1] = (int)"TimeLimit.bflyt";
  message_ref(v2, v7, 0, 0, 0);
  if ( ((unsigned int)dword_60CAD950 & ~(1616222624 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CAD950) )
  {
    dword_60CAD96C = (int)&sead__SafeStringBase__vtable;
    dword_60CAD970 = dword_60CAD930;
    dword_60CAD974 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD978 = dword_60CAD938;
    dword_60CAD97C = (int)&sead__SafeStringBase__vtable;
    dword_60CAD980 = dword_60CAD940;
    sub_60000288();
    _cxa_guard_release(dword_60CAD950);
  }
  v7[0] = 3;
  sub_60476030((int)v2, &dword_60CAD96C, v7);
  if ( ((unsigned int)&dword_60CAD950[1] & ~(1616222804 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD950[1]) )
  {
    dword_60CAD95C = (int)&sead__SafeStringBase__vtable;
    dword_60CAD960 = (int)"N_Timer_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAD950[1]);
  }
  v7[0] = 1;
  sub_6047518C((int)v2, a1 + 20, &dword_60CAD95C, v7);
  if ( ((unsigned int)&dword_60CAD950[2] & ~(1616222948 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD950[2]) )
  {
    dword_60CAD964 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD968 = (int)"T_Timer_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAD950[2]);
  }
  v7[0] = 1;
  sub_60475334((int)v2, a1 + 24, &dword_60CAD964, v7);
  result = FIELD_U32(a1, 20);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
