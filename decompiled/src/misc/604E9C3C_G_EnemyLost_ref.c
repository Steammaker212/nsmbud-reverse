/* G_EnemyLost_ref
 * address: 0x604E9C3C   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall G_EnemyLost_ref(int *a1)
{
  char v1; // r12
  unsigned int result; // r0

  if ( ((unsigned int)&dword_60CA5E9C[1] & ~(1615764572 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA5E9C[1]) )
  {
    dword_60CA5FD0[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CA5FD4 = (int)"G_EnemyLost_00";
    dword_60CA5FD8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5FDC = (int)"G_EnemyLost_01";
    dword_60CA5FE0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5FE4 = (int)"G_EnemyLost_02";
    dword_60CA5FE8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5FEC = (int)"G_EnemyLost_03";
    dword_60CA5FF0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5FF4 = (int)"G_EnemyLost_04";
    dword_60CA5FF8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5FFC = (int)"G_EnemyLost_05";
    dword_60CA6000 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6004 = (int)"G_EnemyLost_06";
    dword_60CA6008 = (int)&sead__SafeStringBase__vtable;
    dword_60CA600C = (int)"G_EnemyLost_07";
    dword_60CA6010 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6014 = (int)"G_EnemyLost_08";
    dword_60CA6018 = (int)&sead__SafeStringBase__vtable;
    dword_60CA601C = (int)"G_EnemyLost_09";
    sub_60000288();
    _cxa_guard_release(&dword_60CA5E9C[1]);
  }
  result = sub_604746E4(a1[1], &dword_60CA5CFC, &dword_60CA5FD0[2 * (a1[1139] - a1[1138])]);
  if ( result != -1 )
    return sub_604742D0((_DWORD *)a1[1], 4u, &dword_60CA5CFC, result, 1.0, 0);
  return result;
}
