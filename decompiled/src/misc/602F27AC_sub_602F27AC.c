/* sub_602F27AC
 * address: 0x602F27AC   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F27AC(int result, void *a2, int a3)
{
  char v3; // r12
  int *v6; // r8
  sead__SafeString *v7; // r6
  void *Model2; // r7
  int v9; // r5
  ModelWrapper *v10; // r0

  v6 = (int *)result;
  if ( a2 )
  {
    if ( ((unsigned int)&unk_60C927A0 & ~(1613703128 << v3) & 1) == 0 )
    {
      if ( _cxa_guard_acquire((__guard *)&unk_60C927A0) )
      {
        dword_60C927A4 = (int)&sead__SafeStringBase__vtable;
        dword_60C927A8 = (int)"ice_A1";
        dword_60C927AC = (int)&sead__SafeStringBase__vtable;
        dword_60C927B0 = (int)"ice_B1";
        dword_60C927B4 = (int)&sead__SafeStringBase__vtable;
        dword_60C927B8 = (int)"ice_C1";
        dword_60C927BC = (int)&sead__SafeStringBase__vtable;
        dword_60C927C0 = (int)"ice_A2";
        dword_60C927C4 = (int)&sead__SafeStringBase__vtable;
        dword_60C927C8 = (int)"ice_B2";
        dword_60C927CC = (int)&sead__SafeStringBase__vtable;
        dword_60C927D0 = (int)"ice_C2";
        sub_60000288();
        _cxa_guard_release((__guard *)&unk_60C927A0);
      }
    }
    v7 = (sead__SafeString *)((char *)&unk_60C927A0 + 8 * a3 + 4);
    Model2 = (void *)Resource_getModel2(a2, v7, 1, 1, 1, 1, 0, 0, 0);
    v9 = operator_new_8DE25C(0x30u, 0, 4);
    v10 = ModelWrapper_ctor((ModelWrapper *)v9, Model2, 1, 1, 1, 1, 0);
    ModelWrapper_setup(v10, (int)a2, 0, 0);
    *v6 = v9;
    *(_DWORD *)(*(_DWORD *)v9 + 36) = 7;
    return sub_60446088(**(_DWORD **)(v9 + 28), (int)a2, (int)v7);
  }
  return result;
}
