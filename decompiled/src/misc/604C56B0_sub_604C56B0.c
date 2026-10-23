/* sub_604C56B0
 * address: 0x604C56B0   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C56B0(int a1)
{
  char v1; // r12
  int v4[9]; // [sp+4h] [bp-24h] BYREF

  if ( ((unsigned int)&dword_60CA2F00[3] & ~(1615615696 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2F00[3]) )
  {
    dword_60CA2F34 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2F38 = (int)"B_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA2F00[3]);
  }
  if ( ((unsigned int)&dword_60CA2F00[4] & ~(1615615812 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2F00[4]) )
  {
    dword_60CA3050 = (int)&sead__SafeStringBase__vtable;
    dword_60CA3054 = (int)"Pa_Camera_00";
    dword_60CA3058 = (int)&sead__SafeStringBase__vtable;
    dword_60CA305C = (int)"Pa_Return_00";
    dword_60CA3060 = (int)&sead__SafeStringBase__vtable;
    dword_60CA3064 = (int)"Pa_Menu_00";
    dword_60CA3068 = (int)&sead__SafeStringBase__vtable;
    dword_60CA306C = (int)"Pa_Item_00";
    dword_60CA3070 = (int)&sead__SafeStringBase__vtable;
    dword_60CA3074 = (int)"Pa_ZoomIn_00";
    dword_60CA3078 = (int)&sead__SafeStringBase__vtable;
    dword_60CA307C = (int)"Pa_ZoomOut_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA2F00[4]);
  }
  v4[0] = 1;
  sub_604755C4(a1 + 48, a1 + 13868, &dword_60CA3050, (int)&dword_60CA2F34, v4);
  v4[0] = 1;
  sub_604755C4(a1 + 48, a1 + 13872, &dword_60CA3058, (int)&dword_60CA2F34, v4);
  v4[0] = 1;
  sub_604755C4(a1 + 48, a1 + 13876, &dword_60CA3060, (int)&dword_60CA2F34, v4);
  v4[0] = 1;
  sub_604755C4(a1 + 48, a1 + 13880, &dword_60CA3068, (int)&dword_60CA2F34, v4);
  v4[0] = 1;
  sub_604755C4(a1 + 48, a1 + 13884, &dword_60CA3070, (int)&dword_60CA2F34, v4);
  v4[0] = 1;
  return sub_604755C4(a1 + 48, a1 + 13888, &dword_60CA3078, (int)&dword_60CA2F34, v4);
}
