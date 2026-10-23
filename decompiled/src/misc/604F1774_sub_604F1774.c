/* sub_604F1774
 * address: 0x604F1774   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F1774(int a1)
{
  char v1; // r12
  int v4; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CA6580[3] & ~(1615796116 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6580[3]) )
  {
    dword_60CA6660 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6664 = (int)"N_Pos1P_00";
    dword_60CA6668 = (int)&sead__SafeStringBase__vtable;
    dword_60CA666C = (int)"N_Pos2P_00";
    dword_60CA6670 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6674 = (int)"N_Pos2P_01";
    dword_60CA6678 = (int)&sead__SafeStringBase__vtable;
    dword_60CA667C = (int)"N_Pos3P_00";
    dword_60CA6680 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6684 = (int)"N_Pos3P_01";
    dword_60CA6688 = (int)&sead__SafeStringBase__vtable;
    dword_60CA668C = (int)"N_Pos3P_02";
    dword_60CA6690 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6694 = (int)"N_Pos4P_00";
    dword_60CA6698 = (int)&sead__SafeStringBase__vtable;
    dword_60CA669C = (int)"N_Pos4P_01";
    dword_60CA66A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA66A4 = (int)"N_Pos4P_02";
    dword_60CA66A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA66AC = (int)"N_Pos4P_03";
    dword_60CA66B0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA66B4 = (int)"N_MessageWin_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA6580[3]);
  }
  v4 = 11;
  return sub_6047518C(a1 + 42520, a1 + 74316, &dword_60CA6660, &v4);
}
