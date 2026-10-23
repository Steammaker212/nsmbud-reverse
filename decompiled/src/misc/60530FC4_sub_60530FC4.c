/* sub_60530FC4
 * address: 0x60530FC4   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60530FC4(int a1, void *a2, int a3)
{
  char v3; // r12
  void *Model2; // r6
  ModelWrapper *v8; // r7
  ModelWrapper *v9; // r0

  if ( ((unsigned int)&dword_60CAAB60[3] & ~(1616056300 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CAAB60[3]) )
  {
    dword_60CAABA4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAABA8 = (int)"stand_2_1";
    dword_60CAABAC = (int)&sead__SafeStringBase__vtable;
    dword_60CAABB0 = (int)"stand_1_1";
    dword_60CAABB4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAABB8 = (int)"stand_1_1";
    dword_60CAABBC = (int)&sead__SafeStringBase__vtable;
    dword_60CAABC0 = (int)"stand_1_2";
    dword_60CAABC4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAABC8 = (int)"stand_1_3";
    sub_60000288();
    _cxa_guard_release(&dword_60CAAB60[3]);
  }
  FIELD_U32(a1, 56) = a2;
  Model2 = (void *)Resource_getModel2(a2, (sead__SafeString *)&dword_60CAAB60[2 * a3 + 17], 1, 1, 0, 0, 0, 0, 0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v9 = ModelWrapper_ctor(v8, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v9, a2, 0, 0);
  FIELD_U32(a1, 52) = v8;
  *((_DWORD *)FIELD_U32(v8, 0x0) + 8) = -2;
  *(_DWORD *)(**(_DWORD **)(a1 + 52) + 36) = -2;
  return sub_6040F4B8(FIELD_U32(a1, 52), (int)&dword_60CAAAE4, 1, 1.0, 0.0);
}
