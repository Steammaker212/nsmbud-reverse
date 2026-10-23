/* sub_600F698C
 * address: 0x600F698C   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F698C(int a1)
{
  int v2; // r0
  ActiveColliderMgr *v3; // r6
  int v4; // r10
  int v5; // r8
  int *v6; // r6
  int *v7; // r7
  char *v8; // r9
  int *v9; // r12
  int v10; // r1
  int v11; // r2
  int v12; // r11
  sead_ListNode *v13; // r5

  v2 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 6304) = v2 == 0;
  FIELD_U32(a1, 80) = FIELD_F32(a1, 108) >= FIELD_F32(dword_60CC6484, 116);
  FIELD_U32(a1, 6308) = (unsigned __int8)v2 >> 4;
  deka_sanbo_ref(a1);
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF601C, &stru_60AF6028, &stru_60AF6034);
  FIELD_U32(a1, 3200) |= 0x800u;
  FIELD_U32(a1, 3192) |= 0x800u;
  FIELD_U32(a1, 3176) |= 0x800u;
  FIELD_U32(a1, 3184) |= 0x800u;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCED34, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 6396), (StageActor *)a1, &stru_60AF6040, a1 + 6700);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6396))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 6396)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 6396));
  }
  FIELD_U32(a1, 624) = 0;
  FIELD_U32(a1, 6244) = 0;
  FIELD_U32(a1, 100) = dword_60C85B54;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  if ( !dword_60C85B70 )
  {
    v4 = 0;
    v5 = 0;
    v6 = &dword_60AF606C;
    v7 = &dword_60C85B74;
    do
    {
      v8 = (char *)&unk_60C858B8 + v4;
      v9 = (int *)((char *)&unk_60C858B8 + v4 + 8);
      *(_DWORD *)((char *)&unk_60C858B8 + v4 + 32) = *v6;
      v10 = v7[1];
      v11 = v7[2];
      *v9 = *v7;
      v9[1] = v10;
      v9[2] = v11;
      v12 = *(_DWORD *)((char *)&unk_60C858B8 + v4 + 36);
      if ( v12 )
      {
        v13 = (sead_ListNode *)((char *)&unk_60C858B8 + 40 * v5);
        *((_DWORD *)v8 + 9) = 0;
        sead__ListNode__erase((char *)&unk_60C858B8 + v4);
        --FIELD_U32(v12, 8);
      }
      else
      {
        v13 = (sead_ListNode *)((char *)&unk_60C858B8 + v4);
      }
      *((_DWORD *)v8 + 9) = &dword_60C85B68;
      sead__ListNode__insertFront((sead_ListNode *)&dword_60C85B68, v13);
      v4 += 40;
      v7 += 3;
      ++v6;
      ++v5;
      ++dword_60C85B70;
    }
    while ( v4 != 240 );
  }
  FIELD_U32(a1, 6368) = 0;
  FIELD_U32(a1, 6372) = 1097859072;
  AnimationCtrl_setRepeat((ModelAnimation *)(a1 + 6368), 0);
  FIELD_U32(a1, 6388) = 0;
  sub_6041838C((ModelAnimation *)(a1 + 6368));
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85AB8);
  sub_600F6DD0(a1);
  return 1;
}
