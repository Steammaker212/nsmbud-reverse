/* jcb_damage_s_ref_48AF0
 * address: 0x60048AF0   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jcb_damage_s_ref_48AF0(int a1)
{
  int v2; // r1
  _DWORD *v3; // r0
  int v4; // r0
  int v5; // r0
  ActiveColliderMgr *v6; // r5
  ActiveColliderMgr *v7; // r6
  ActiveColliderMgr *v8; // r6
  _DWORD v10[8]; // [sp+0h] [bp-20h] BYREF

  ((void (*)(void))jce_damage_s_ref)();
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780))(a1, 2);
  sub_60045DB4(a1, 25, 0, 1, 0.0, 1.0);
  v2 = FIELD_U32(a1, 6300);
  v3 = *(_DWORD **)(a1 + 6312);
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "jcb_damage_s";
  ShuAnim_play(v3, v2, (int)v10);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6312) + 4), 1);
  v4 = FIELD_U32(a1, 6312);
  FIELD_U32(v4, 20) = 0;
  FIELD_U32(v4, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6312) + 24) = 1065353216;
  jce_damage_s_ref(a1);
  FIELD_U32(a1, 11472) = 40;
  FIELD_U32(a1, 11476) = 120;
  v5 = FIELD_U32(a1, 6984);
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 120) = dword_60AF1EC0[v5];
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 11492) = 1;
  FIELD_U8(a1, 11683) = 0;
  FIELD_U8(a1, 11678) = 0;
  FIELD_U8(a1, 11693) = 0;
  FIELD_U8(a1, 11694) = 0;
  FIELD_U8(a1, 11679) = 1;
  FIELD_U32(a1, 11480) = 0;
  FIELD_U32(a1, 11432) = 0;
  FIELD_U32(a1, 11436) = 0;
  v6 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v6, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromList3(v6, a1 + 188);
  v7 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7724));
  ActiveColldierMgr_removeFromCreateList(v7, (ActiveCollider *)(a1 + 7724));
  ActiveColldierMgr_removeFromList3(v7, a1 + 7724);
  v8 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8028));
  ActiveColldierMgr_removeFromCreateList(v8, (ActiveCollider *)(a1 + 8028));
  ActiveColldierMgr_removeFromList3(v8, a1 + 8028);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 8336));
  sub_601601B8(a1 + 8336);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 8856));
  sub_601601B8(a1 + 8856);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6336));
  sub_601601B8(a1 + 6336);
  if ( !sub_601536B0(ColliderMgr_instance, a1 + 6336) )
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6336));
  if ( sub_601536B0(ColliderMgr_instance, a1 + 10032) == 1 )
  {
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 10032));
    sub_601601B8(a1 + 10032);
  }
  if ( sub_601536B0(ColliderMgr_instance, a1 + 10432) == 1 )
  {
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 10432));
    sub_601601B8(a1 + 10032);
  }
  FIELD_U8(a1, 11690) = 0;
  FIELD_U8(a1, 11687) = 0;
  return 11687;
}
