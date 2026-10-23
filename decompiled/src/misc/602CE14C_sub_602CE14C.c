/* sub_602CE14C
 * address: 0x602CE14C   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602CE14C(_DWORD *a1, int a2)
{
  char v2; // r12
  int v5; // r6
  void *ResArchiveById; // r5
  sead__SafeString *v7; // r8
  void *Model2; // r7
  ModelWrapper *v9; // r6
  ModelWrapper *v10; // r0
  int result; // r0
  _BYTE v12[40]; // [sp+18h] [bp-28h] BYREF

  if ( ((unsigned int)&unk_60C91A70 & ~(1613554028 << v2) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C91A70) )
  {
    dword_60C91A74 = (int)&sead__SafeStringBase__vtable;
    dword_60C91A78 = (int)"hanachan_bodyS";
    dword_60C91A7C = (int)&sead__SafeStringBase__vtable;
    dword_60C91A80 = (int)"hanachan_body";
    sub_60000288();
    _cxa_guard_release((__guard *)&unk_60C91A70);
  }
  v5 = a1[31];
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a2 + 12), 0);
  v7 = (sead__SafeString *)((char *)&unk_60C91A70 + 8 * (v5 & 1) + 4);
  Model2 = (void *)Resource_getModel2(ResArchiveById, v7, 2, 1, 0, 1, 0, 0, 0);
  v9 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v10 = sub_60421830(v9, Model2, 2, 1, 0, 1, 0);
  j_ModelWrapper_setupModel((int)v10, (int)ResArchiveById, 0, 0);
  a1[1] = v9;
  (*(void (__fastcall **)(_BYTE *, _DWORD *))(*a1 + 40))(v12, a1);
  sub_60421938(v9, (int)ResArchiveById, (int)v12);
  TexAnim_play(**(_DWORD **)(a1[1] + 20), ResArchiveById, v7);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1] + 20) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(a1[1] + 20) + 24) = 0;
  result = **(_DWORD **)(a1[1] + 20);
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
