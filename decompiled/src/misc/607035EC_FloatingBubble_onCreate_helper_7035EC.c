/* FloatingBubble_onCreate_helper_7035EC
 * address: 0x607035EC   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall FloatingBubble_onCreate_helper_7035EC(int a1, int a2)
{
  char v2; // r12
  void *ResArchiveById; // r6
  sead__SafeString *v6; // r9
  void *Model2; // r5
  int v8; // r7
  ModelWrapper *v9; // r0
  int result; // r0

  if ( ((unsigned int)dword_60CBC830 & ~(1617966604 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CBC830) )
  {
    dword_60CBC838 = (int)&sead__SafeStringBase__vtable;
    dword_60CBC83C = (int)"obj_waterfloat01";
    dword_60CBC840 = (int)&sead__SafeStringBase__vtable;
    dword_60CBC844 = (int)"obj_waterfloat03";
    dword_60CBC848 = (int)&sead__SafeStringBase__vtable;
    dword_60CBC84C = (int)"obj_waterfloat02";
    sub_60000288();
    _cxa_guard_release(dword_60CBC830);
  }
  if ( ((unsigned int)&dword_60CBC830[1] & ~(1617966748 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC830[1]) )
  {
    dword_60CBC850 = (int)&sead__SafeStringBase__vtable;
    dword_60CBC854 = (int)"obj_waterfloat01";
    dword_60CBC858 = (int)&sead__SafeStringBase__vtable;
    dword_60CBC85C = (int)"obj_waterfloat03";
    dword_60CBC860 = (int)&sead__SafeStringBase__vtable;
    dword_60CBC864 = (int)"obj_waterfloat02";
    sub_60000288();
    _cxa_guard_release(&dword_60CBC830[1]);
  }
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v6 = (sead__SafeString *)&dword_60CBC830[2 * a2];
  Model2 = (void *)Resource_getModel2(ResArchiveById, v6 + 1, 0, 0, 1, 0, 0, 0, 0);
  v8 = operator_new_8DE25C(0x30u, 0, 4);
  v9 = ModelWrapper_ctor((ModelWrapper *)v8, Model2, 0, 0, 1, 0, 0);
  ModelWrapper_setup(v9, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6100) = v8;
  sub_60446088(**(_DWORD **)(v8 + 28), (int)ResArchiveById, &v6[4].vtable);
  result = **(_DWORD **)(a1 + 6100);
  FIELD_U32(result, 36) = 22;
  return result;
}
