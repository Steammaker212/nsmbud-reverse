/* sub_603DF65C
 * address: 0x603DF65C   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603DF65C(_DWORD *a1, int a2)
{
  char v2; // r12
  int result; // r0
  _DWORD *v6; // r6
  _DWORD *v7; // r4
  _DWORD *v8; // t1
  int ResArchiveById; // r0
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int *v14; // r1
  unsigned int v15; // r0

  v6 = a1 + 1590;
  result = a1[1590];
  if ( result != a2 )
  {
    if ( ((unsigned int)&dword_60C99424[1] & ~(1614673552 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C99424[1]) )
    {
      dword_60C9942C = (int)&sead__SafeStringBase__vtable;
      dword_60C99430 = (int)&unk_60AC61D9;
      dword_60C99434 = (int)&sead__SafeStringBase__vtable;
      dword_60C99438 = (int)"foo_up";
      dword_60C9943C = (int)&sead__SafeStringBase__vtable;
      dword_60C99440 = (int)"change";
      dword_60C99444 = (int)&sead__SafeStringBase__vtable;
      dword_60C99448 = (int)"hurry";
      sub_60000288();
      _cxa_guard_release(&dword_60C99424[1]);
    }
    a1[1591] = *v6;
    *v6 = a2;
    v8 = (_DWORD *)a1[1589];
    v7 = a1 + 1589;
    ResArchiveById = Profile__getResArchiveById((Profile *)*(v7 - 1586), 0);
    sub_60421938(v8, ResArchiveById, (int)&byte_60C99420[8 * a2 + 12]);
    v10 = *(_DWORD *)(*v7 + 12);
    v11 = *(_DWORD *)(*v7 + 68);
    if ( *(_DWORD *)(*v7 + 8) > v11 )
      v10 += 4 * v11;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), dword_60AF2824[a2]);
    v12 = *(_DWORD *)(*v7 + 12);
    v13 = *(_DWORD *)(*v7 + 68);
    if ( *(_DWORD *)(*v7 + 8) > v13 )
      v12 += 4 * v13;
    sub_6041838C((ModelAnimation *)(*(_DWORD *)v12 + 4));
    v14 = *(int **)(*v7 + 12);
    v15 = *(_DWORD *)(*v7 + 68);
    if ( *(_DWORD *)(*v7 + 8) > v15 )
      v14 += v15;
    result = *v14;
    *(_DWORD *)(*v14 + 24) = 1065353216;
  }
  return result;
}
