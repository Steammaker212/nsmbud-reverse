/* sub_60554A60
 * address: 0x60554A60   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60554A60(int a1)
{
  char v1; // r12
  int v4; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CAD330[1] & ~(1616202368 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD330[1]) )
  {
    dword_60CAD3E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD3E4 = (int)"N_SCoinInfo_00";
    dword_60CAD3E8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD3EC = (int)"N_Course1pos_00";
    dword_60CAD3F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD3F4 = (int)"N_Course2pos_00";
    dword_60CAD3F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD3FC = (int)"N_Course3pos_00";
    dword_60CAD400 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD404 = (int)"N_Course4pos_00";
    dword_60CAD408 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD40C = (int)"N_Course5pos_00";
    dword_60CAD410 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD414 = (int)"N_Course6pos_00";
    dword_60CAD418 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD41C = (int)"N_Course7pos_00";
    dword_60CAD420 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD424 = (int)"N_Course8pos_00";
    dword_60CAD428 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD42C = (int)"N_Course9pos_00";
    dword_60CAD430 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD434 = (int)"N_Course10pos_00";
    dword_60CAD438 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD43C = (int)"N_Course11pos_00";
    dword_60CAD440 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD444 = (int)"N_Course12pos_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAD330[1]);
  }
  v4 = 13;
  return sub_6047518C(a1, a1 + 3568, &dword_60CAD3E0, &v4);
}
