/* sub_6020E460
 * address: 0x6020E460   size: 1112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6020E460(int a1)
{
  void *ResArchiveById; // r8
  char v3; // r12
  int v4; // r6
  void *Model; // r7
  int v6; // r5
  ModelWrapper *v7; // r0
  void *v8; // r5
  int v9; // r7
  ModelWrapper *v10; // r0
  unsigned int v11; // r0
  int v12; // r5
  unsigned int v13; // r7
  int v14; // r0
  int v15; // r1
  float v16; // r1
  unsigned int v17; // r6
  int v18; // r7
  unsigned int v19; // r0
  int v20; // r0
  bool v21; // zf
  StateBase *v22; // r1
  int v24; // [sp+18h] [bp-30h] BYREF
  int v25; // [sp+1Ch] [bp-2Ch]
  int v26; // [sp+20h] [bp-28h]

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  if ( ((unsigned int)algn_60C8CF64 & ~(1612768400 << v3) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60C8CF64) )
  {
    dword_60C8CF7C = (int)&sead__SafeStringBase__vtable;
    dword_60C8CF80 = (int)"teresaA";
    dword_60C8CF84 = (int)&sead__SafeStringBase__vtable;
    dword_60C8CF88 = (int)"teresa_otherA";
    sub_60000288();
    _cxa_guard_release((__guard *)algn_60C8CF64);
  }
  if ( ((unsigned int)&algn_60C8CF64[4] & ~(1612768532 << v3) & 1) == 0
    && _cxa_guard_acquire((__guard *)&algn_60C8CF64[4]) )
  {
    dword_60C8CF8C = (int)&sead__SafeStringBase__vtable;
    dword_60C8CF90 = (int)"wait";
    dword_60C8CF94 = (int)&sead__SafeStringBase__vtable;
    dword_60C8CF98 = (int)"wait_otherA1";
    sub_60000288();
    _cxa_guard_release((__guard *)&algn_60C8CF64[4]);
  }
  v4 = 0;
  Model = (void *)Resource_getModel(ResArchiveById, (sead__SafeString *)&dword_60C8CF7C, 6, 1, 0, 0, 0, 0, 1, 0);
  v6 = operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor((ModelWrapper *)v6, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v7, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 372) = v6;
  SkeletalAnim_play(**(_DWORD **)(v6 + 12), (int)ResArchiveById, (int)&dword_60C8CF8C);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 372) + 12) + 24) = 1065353216;
  v8 = (void *)Resource_getModel(ResArchiveById, (sead__SafeString *)&dword_60C8CF84, 6, 1, 0, 0, 0, 0, 1, 0);
  v9 = operator_new_8DE25C(0x30u, 0, 4);
  v10 = ModelWrapper_ctor((ModelWrapper *)v9, v8, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v10, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 376) = v9;
  SkeletalAnim_play(**(_DWORD **)(v9 + 12), (int)ResArchiveById, (int)&dword_60C8CF94);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 376) + 12) + 24) = 1065353216;
  FIELD_U32(a1, 212) = 1135542272;
  v11 = FIELD_U32(a1, 352);
  if ( v11 < 3 )
    v4 = *((_DWORD *)*(&off_60BD8EE8 + v11) + 2 * FIELD_U8(dword_60CC6D78, 2082));
  v24 = 4;
  v25 = 1;
  v26 = -1;
  v12 = sub_601A443C(dword_60C89E18, 4, 1);
  if ( FIELD_S32(v12, 32) >= 1 )
  {
    v13 = 0;
    while ( !sub_60183038(v12, v13, v4) )
    {
      if ( (signed int)++v13 >= FIELD_U32(v12, 32) )
        goto LABEL_15;
    }
    v26 = v13;
  }
LABEL_15:
  v14 = sub_601DFFE4((int)&v24);
  FIELD_U32(a1, 300) = FIELD_U32(v14, 84);
  FIELD_U32(a1, 304) = FIELD_U32(v14, 88);
  v15 = FIELD_U32(v14, 96);
  FIELD_U32(a1, 308) = v15;
  FIELD_U32(a1, 248) = v15;
  FIELD_U32(a1, 80) = FIELD_U32(v14, 72);
  v16 = FIELD_F32(v14, 76);
  FIELD_F32(a1, 84) = v16;
  FIELD_U32(a1, 88) = FIELD_U32(v14, 80);
  FIELD_F32(a1, 440) = v16 + 180.0;
  v17 = FIELD_U32(a1, 240);
  v18 = dword_60CC6D78;
  v19 = sub_6018691C(a1);
  sub_60186FC0(v18 + 984, v17, v19, a1 + 300);
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v20 = sub_601CF9C0(dword_60C8AEF0);
  sub_6019EC34(&v24, (_DWORD *)(v20 + 1032));
  v21 = v24 == 4;
  if ( v24 == 4 )
    v21 = v25 == 1;
  if ( v21 && sub_601D9D1C((int)&v24) || sub_601DAC28((int)&v24) )
  {
    v22 = (StateBase *)&dword_60C8CDCC;
  }
  else
  {
    FIELD_U32(a1, 128) = 1077936128;
    FIELD_U32(a1, 132) = 1077936128;
    FIELD_U32(a1, 136) = 1077936128;
    FIELD_U32(a1, 84) = FIELD_U32(a1, 440);
    FIELD_U8(a1, 468) = 1;
    v22 = (StateBase *)&unk_60C8CE14;
  }
  StateMgr__changeState((StateMgr *)(a1 + 284), v22);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 280))(a1);
  return 1;
}
