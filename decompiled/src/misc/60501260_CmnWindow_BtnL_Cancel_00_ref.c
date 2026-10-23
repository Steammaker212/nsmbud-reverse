/* CmnWindow_BtnL_Cancel_00_ref
 * address: 0x60501260   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CmnWindow_BtnL_Cancel_00_ref(int a1)
{
  char v1; // r12
  int *v3; // r1
  unsigned int v4; // r2
  int result; // r0
  int v6; // r3
  unsigned int v7; // r2
  int v8; // r2
  unsigned int v9; // r1

  if ( ((unsigned int)&unk_60CA7590 & ~(1615860344 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60CA7590) )
  {
    dword_60CA75F4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA75F8 = (int)"CmnWindow_BtnL_Cancel_00";
    dword_60CA75FC = (int)&sead__SafeStringBase__vtable;
    dword_60CA7600 = (int)"CmnWindow_BtnL_Cancel_00";
    sub_60000288();
    _cxa_guard_release((__guard *)&unk_60CA7590);
  }
  v3 = (int *)(a1 + 7720);
  v4 = FIELD_U32(a1, 7720);
  result = 0;
  if ( v4 >= 2 )
    v4 = 0;
  v6 = (unsigned __int8)byte_60B036FC[v4];
  v7 = dword_60B03700[v4];
  if ( v7 >= 2 )
    v7 = 0;
  *(_BYTE *)(*(_DWORD *)(a1 + 4 * v7 + 5688) + 64) = *(_BYTE *)(*(_DWORD *)(a1 + 4 * v7 + 5688) + 64) & 0xFE | v6;
  if ( v6 )
  {
    v8 = *v3;
    if ( (unsigned int)*v3 >= 2 )
      v8 = 0;
    v9 = dword_60B03708[v8];
    if ( v9 >= 4 )
      v9 = 0;
    return sub_6047E0EC((_DWORD *)&unk_60CA7590 + 2 * v8 + 25, *(_DWORD *)(a1 + 4 * v9 + 5672), 0);
  }
  return result;
}
