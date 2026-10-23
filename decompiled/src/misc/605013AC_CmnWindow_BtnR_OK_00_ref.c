/* CmnWindow_BtnR_OK_00_ref
 * address: 0x605013AC   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CmnWindow_BtnR_OK_00_ref(int a1)
{
  char v1; // r12
  int *v3; // r1
  unsigned int v4; // r2
  int result; // r0
  int v6; // r3
  unsigned int v7; // r2
  int v8; // r2
  unsigned int v9; // r1

  if ( ((unsigned int)&dword_60CA7594 & ~(1615860680 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7594) )
  {
    dword_60CA7610[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CA7614 = (int)"CmnWindow_BtnR_OK_00";
    dword_60CA7618 = (int)&sead__SafeStringBase__vtable;
    dword_60CA761C = (int)"CmnWindow_BtnR_OK_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA7594);
  }
  v3 = (int *)(a1 + 7720);
  v4 = FIELD_U32(a1, 7720);
  result = 0;
  if ( v4 >= 2 )
    v4 = 0;
  v6 = (unsigned __int8)byte_60B03710[v4];
  v7 = dword_60B03714[v4];
  if ( v7 >= 2 )
    v7 = 0;
  *(_BYTE *)(*(_DWORD *)(a1 + 4 * v7 + 5688) + 64) = *(_BYTE *)(*(_DWORD *)(a1 + 4 * v7 + 5688) + 64) & 0xFE | v6;
  if ( v6 )
  {
    v8 = *v3;
    if ( (unsigned int)*v3 >= 2 )
      v8 = 0;
    v9 = dword_60B0371C[v8];
    if ( v9 >= 4 )
      v9 = 0;
    return sub_6047E0EC(&dword_60CA7610[2 * v8], *(_DWORD *)(a1 + 4 * v9 + 5672), 0);
  }
  return result;
}
