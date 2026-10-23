/* sub_60554C24
 * address: 0x60554C24   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60554C24(int a1)
{
  char v1; // r12
  int v4; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CAD330[2] & ~(1616202820 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD330[2]) )
  {
    dword_60CAD390 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD394 = (int)"P_SCoinBase_00";
    dword_60CAD398 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD39C = (int)"P_SCoinBase_01";
    dword_60CAD3A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD3A4 = (int)"P_SCoinBase_02";
    dword_60CAD3A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD3AC = (int)"P_StarCoin_00";
    dword_60CAD3B0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD3B4 = (int)"P_StarCoin_01";
    dword_60CAD3B8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD3BC = (int)"P_StarCoin_02";
    dword_60CAD3C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD3C4 = (int)"P_Light_00";
    dword_60CAD3C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD3CC = (int)"P_Light_01";
    dword_60CAD3D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD3D4 = (int)"P_Light_02";
    sub_60000288();
    _cxa_guard_release(&dword_60CAD330[2]);
  }
  v4 = 9;
  return __Player__applyPowerUpTransform(a1, a1 + 3620, (int)&dword_60CAD390, &v4);
}
