/* sub_6029DDD8
 * address: 0x6029DDD8   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029DDD8(int a1)
{
  char v1; // r12
  void *ResArchiveById; // r5
  _DWORD *v4; // r9
  int v5; // t1
  void *Model2; // r6
  ModelWrapper *v7; // r7
  ModelWrapper *v8; // r0
  int result; // r0

  if ( ((unsigned int)algn_60C901C8 & ~(1613356536 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60C901C8) )
  {
    dword_60C901DC = (int)&sead__SafeStringBase__vtable;
    dword_60C901E0 = (int)"dossun";
    dword_60C901E4 = (int)&sead__SafeStringBase__vtable;
    dword_60C901E8 = (int)"dossun_big";
    sub_60000288();
    _cxa_guard_release((__guard *)algn_60C901C8);
  }
  if ( ((unsigned int)&algn_60C901C8[4] & ~(1613356668 << v1) & 1) == 0
    && _cxa_guard_acquire((__guard *)&algn_60C901C8[4]) )
  {
    dword_60C901EC = (int)&sead__SafeStringBase__vtable;
    dword_60C901F0 = (int)"dossun";
    dword_60C901F4 = (int)&sead__SafeStringBase__vtable;
    dword_60C901F8 = (int)"dossun_big";
    sub_60000288();
    _cxa_guard_release((__guard *)&algn_60C901C8[4]);
  }
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v5 = FIELD_U32(a1, 6304);
  v4 = (_DWORD *)(a1 + 6304);
  Model2 = (void *)Resource_getModel2(
                     ResArchiveById,
                     (sead__SafeString *)&dword_60C901C0[2 * v5 + 7],
                     0,
                     0,
                     0,
                     1,
                     0,
                     0,
                     0);
  v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v8 = ModelWrapper_ctor(v7, Model2, 0, 0, 0, 1, 0);
  ModelWrapper_setup(v8, (int)ResArchiveById, 0, 0);
  *(v4 - 1) = v7;
  sub_6045195C(*FIELD_U32(v7, 0x20).animations, ResArchiveById, &dword_60C901C0[2 * *v4 + 11]);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(v4 - 1) + 36) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(*(v4 - 1) + 36) + 24) = 0;
  result = **(_DWORD **)(*(v4 - 1) + 36);
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
