/* sub_604B3678
 * address: 0x604B3678   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B3678(int a1)
{
  char v2; // r12
  int result; // r0

  FIELD_U32(a1, 16) = operator_new_8DE09C(0x18u);
  if ( ((unsigned int)&dword_60CA1BE0[1] & ~(1615541920 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1BE0[1]) )
  {
    dword_60CA1C50 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C54 = (int)"Pa_StarCoin_00";
    dword_60CA1C58 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C5C = (int)"Pa_Coin_00";
    dword_60CA1C60 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C64 = (int)"Pa_ArrowBtnR_00";
    dword_60CA1C68 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C6C = (int)"Pa_ArrowBtnL_00";
    dword_60CA1C70 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C74 = (int)"Pa_ArrowBtnT_00";
    dword_60CA1C78 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1C7C = (int)"Pa_ArrowBtnB_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA1BE0[1]);
  }
  sub_6047ED10(a1 + 24, FIELD_U32(a1, 16), (int)&dword_60CA1C50, 6);
  *(_BYTE *)(**(_DWORD **)(a1 + 16) + 208) = 0;
  *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 16) + 4) + 208) = 0;
  *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 16) + 8) + 208) = 0;
  *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 16) + 12) + 208) = 0;
  *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 16) + 16) + 208) = 0;
  result = *(_DWORD *)(FIELD_U32(a1, 16) + 20);
  FIELD_U8(result, 208) = 0;
  return result;
}
