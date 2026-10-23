/* jcb_attack_st_wait_ref_3E1EC
 * address: 0x6003E1EC   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall jcb_attack_st_wait_ref_3E1EC(int a1)
{
  ColliderBase *v2; // r1
  int v3; // r5
  int v4; // r1
  _DWORD *v5; // r0
  int v6; // r0
  ColliderBase *v7; // r4
  _DWORD v9[8]; // [sp+0h] [bp-20h] BYREF

  if ( FIELD_U32(a1, 11468) )
  {
    sub_60045DB4(a1, 22, 1, 1, 0.0, 1.0);
    v2 = (ColliderBase *)(a1 + 10432);
  }
  else
  {
    sub_60045DB4(a1, 16, 1, 1, 0.0, 1.0);
    v2 = (ColliderBase *)(a1 + 10032);
  }
  ColliderMgr_add(ColliderMgr_instance, v2);
  v3 = 2;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780))(a1, 2);
  v4 = FIELD_U32(a1, 6300);
  v5 = *(_DWORD **)(a1 + 6312);
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "jcb_attack_st_wait";
  ShuAnim_play(v5, v4, (int)v9);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6312) + 4), 0);
  v6 = FIELD_U32(a1, 6312);
  FIELD_U32(v6, 20) = 1112276992;
  FIELD_U32(v6, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6312) + 24) = 1065353216;
  FIELD_U16(a1, 6278) = 30;
  FIELD_U32(a1, 11616) = 1065353216;
  FIELD_U8(a1, 11682) = 0;
  if ( !(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11452) + 716))(FIELD_U32(a1, 11452)) )
  {
    v3 = 3;
    if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11452) + 720))(FIELD_U32(a1, 11452)) )
      v3 = 2;
  }
  FIELD_U32(a1, 11504) = v3;
  FIELD_U32(a1, 11448) = 0x40000000;
  FIELD_U8(a1, 11693) = 1;
  FIELD_U8(a1, 11694) = 1;
  v7 = (ColliderBase *)(a1 + 6336);
  sub_60160948(v7);
  return ColliderMgr_add(ColliderMgr_instance, v7);
}
