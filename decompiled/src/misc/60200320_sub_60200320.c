/* sub_60200320
 * address: 0x60200320   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60200320(int a1)
{
  int v2; // r0
  int v3; // r0
  void *ResArchiveById; // r9
  char v5; // r12
  int v6; // r10
  int v7; // r11
  sead__SafeString *v8; // r6
  void *Model; // r7
  int v10; // r4
  ModelWrapper *v11; // r0
  int v12; // r0
  int *v13; // r1

  v2 = operator_new(0x44u);
  v3 = sub_601DFE10(v2);
  FIELD_U32(a1, 316) = v3;
  FIELD_U32(v3, 16) = a1 + 320;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  if ( ((unsigned int)dword_60C8C370 & ~(1612710756 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C8C370) )
  {
    dword_60C8C390 = (int)&sead__SafeStringBase__vtable;
    dword_60C8C394 = (int)"teresaA";
    dword_60C8C398 = (int)&sead__SafeStringBase__vtable;
    dword_60C8C39C = (int)"teresa_otherA";
    dword_60C8C3A0 = (int)&sead__SafeStringBase__vtable;
    dword_60C8C3A4 = (int)"teresaB";
    sub_60000288();
    _cxa_guard_release(dword_60C8C370);
  }
  if ( ((unsigned int)&dword_60C8C370[1] & ~(1612710900 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C370[1]) )
  {
    dword_60C8C3A8 = (int)&sead__SafeStringBase__vtable;
    dword_60C8C3AC = (int)"wait";
    dword_60C8C3B0 = (int)&sead__SafeStringBase__vtable;
    dword_60C8C3B4 = (int)"wait_otherA1";
    dword_60C8C3B8 = (int)&sead__SafeStringBase__vtable;
    dword_60C8C3BC = (int)"shay_teresaB";
    sub_60000288();
    _cxa_guard_release(&dword_60C8C370[1]);
  }
  v6 = a1 + 268;
  v7 = 0;
  v8 = (sead__SafeString *)&dword_60C8C390;
  do
  {
    Model = (void *)Resource_getModel(ResArchiveById, v8, 6, 1, 0, 0, 0, 0, 1, 0);
    v10 = operator_new_8DE25C(0x30u, 0, 4);
    v11 = ModelWrapper_ctor((ModelWrapper *)v10, Model, 1, 0, 0, 0, 0);
    ModelWrapper_setup(v11, (int)ResArchiveById, 0, 0);
    *(_DWORD *)(v6 + v7) = v10;
    SkeletalAnim_play(**(_DWORD **)(v10 + 12), (int)ResArchiveById, (int)&v8[3]);
    AnimationCtrl_setRepeat(
      (ModelAnimation *)(**(_DWORD **)(*(_DWORD *)(v6 + v7) + 12) + 4),
      *(_DWORD *)((char *)&unk_60AF5A20 + v7));
    v12 = *(_DWORD *)(v6 + v7);
    v7 += 4;
    ++v8;
    *(_DWORD *)(*(_DWORD *)v12 + 36) = 0;
  }
  while ( v7 != 12 );
  FIELD_U32(a1, 212) = 1123024896;
  FIELD_U32(a1, 128) = 1076887552;
  FIELD_U32(a1, 132) = 1076887552;
  FIELD_U32(a1, 136) = 1076887552;
  FIELD_U32(a1, 196) = 0;
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 188) = 0;
  FIELD_U32(a1, 184) = 0;
  FIELD_U32(a1, 180) = 0;
  FIELD_U32(a1, 176) = 0;
  FIELD_U32(a1, 164) = 1124204544;
  FIELD_U32(a1, 168) = 1119092736;
  FIELD_U32(a1, 152) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 156) = FIELD_U32(a1, 84);
  FIELD_U32(a1, 160) = FIELD_U32(a1, 88);
  switch ( FIELD_U32(a1, 364) )
  {
    case 0:
      v13 = &dword_60C8C260;
      goto LABEL_14;
    case 1:
      v13 = (int *)&unk_60C8C314;
      goto LABEL_14;
    case 2:
      v13 = &dword_60C8C338;
      goto LABEL_14;
    case 3:
      v13 = (int *)&unk_60C8C314;
LABEL_14:
      StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)v13);
      break;
    default:
      return 1;
  }
  return 1;
}
