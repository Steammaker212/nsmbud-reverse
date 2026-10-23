/* sub_60541978
 * address: 0x60541978   size: 836   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60541978(int a1)
{
  char v1; // r12
  char v3; // r12
  char v4; // r12
  int v6; // [sp+4h] [bp-1Ch] BYREF
  int v7; // [sp+8h] [bp-18h] BYREF
  int v8; // [sp+Ch] [bp-14h] BYREF

  if ( ((unsigned int)&dword_60CABCA0[2] & ~(1616124312 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CABCA0[2]) )
  {
    dword_60CABD28 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD2C = (int)"N_Window_00";
    dword_60CABD30 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD34 = (int)"N_WinBtn_00";
    dword_60CABD38 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD3C = (int)"N_Delete_00";
    dword_60CABD40 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD44 = (int)"N_Copy_00";
    dword_60CABD48 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD4C = (int)"N_WichiWritePos_00";
    dword_60CABD50 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD54 = (int)"N_OverWritePos_00";
    dword_60CABD58 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD5C = (int)"N_OverWriteEffect_00";
    dword_60CABD60 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD64 = (int)"N_CompleteOverWrite_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CABCA0[2]);
  }
  v8 = 8;
  sub_6047518C(a1 + 28128, a1 + 31696, &dword_60CABD28, &v8);
  if ( ((unsigned int)&dword_60CABCA0[3] & ~(1616124596 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CABCA0[3]) )
  {
    dword_60CABCB4 = (int)&sead__SafeStringBase__vtable;
    dword_60CABCB8 = (int)"Pa_BtnL_00";
    dword_60CABCBC = (int)&sead__SafeStringBase__vtable;
    dword_60CABCC0 = (int)"Pa_BtnR_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CABCA0[3]);
  }
  v7 = 2;
  sub_60475520(a1 + 28128, a1 + 31728, &dword_60CABCB4, &v7);
  if ( ((unsigned int)&dword_60CABCA0[4] & ~(1616124760 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CABCA0[4]) )
  {
    dword_60CABD70 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD74 = (int)"T_CopyWhich_00";
    dword_60CABD78 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD7C = (int)"T_CopyWhich_01";
    dword_60CABD80 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD84 = (int)"T_CopyConfirm_00";
    dword_60CABD88 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD8C = (int)"T_CopyConfirm_01";
    dword_60CABD90 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD94 = (int)"T_CopyRunning_00";
    dword_60CABD98 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD9C = (int)"T_CopyRunning_01";
    dword_60CABDA0 = (int)&sead__SafeStringBase__vtable;
    dword_60CABDA4 = (int)"T_CopyEnd_00";
    dword_60CABDA8 = (int)&sead__SafeStringBase__vtable;
    dword_60CABDAC = (int)"T_CopyEnd_01";
    dword_60CABDB0 = (int)&sead__SafeStringBase__vtable;
    dword_60CABDB4 = (int)"T_DeleteConfirm_00";
    dword_60CABDB8 = (int)&sead__SafeStringBase__vtable;
    dword_60CABDBC = (int)"T_DeleteConfirm_01";
    dword_60CABDC0 = (int)&sead__SafeStringBase__vtable;
    dword_60CABDC4 = (int)"T_DeleteRunning_00";
    dword_60CABDC8 = (int)&sead__SafeStringBase__vtable;
    dword_60CABDCC = (int)"T_DeleteRunning_01";
    dword_60CABDD0 = (int)&sead__SafeStringBase__vtable;
    dword_60CABDD4 = (int)"T_DeleteEnd_00";
    dword_60CABDD8 = (int)&sead__SafeStringBase__vtable;
    dword_60CABDDC = (int)"T_DeleteEnd_01";
    sub_60000288();
    _cxa_guard_release(&dword_60CABCA0[4]);
  }
  v6 = 14;
  return sub_60475334(a1 + 28128, a1 + 31736, &dword_60CABD70, &v6);
}
