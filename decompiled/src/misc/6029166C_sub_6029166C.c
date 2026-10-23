/* sub_6029166C
 * address: 0x6029166C   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029166C(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r6
  int v5; // r0
  _BOOL4 v6; // r0
  char v7; // r12
  float *v8; // r0
  float v9; // r1
  float v10; // r0
  float v12[9]; // [sp+4h] [bp-24h] BYREF

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, v2) )
  {
    ActiveColliderMgr_addToCreateList(v3, v2);
  }
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6860))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 6860)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 6860));
  }
  FIELD_U8(a1, 7532) = 1;
  sub_60290A48(a1, 1);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 7500) + 12) + 4), 0);
  v5 = *(_DWORD *)(FIELD_U32(a1, 7500) + 12);
  if ( *(_DWORD *)(FIELD_U32(a1, 7500) + 8) > 1u )
    v5 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
  sub_602918C0(a1);
  memset(v12, 0, 12);
  sub_60292D70(a1, v12);
  v6 = v12[0] < 0.0;
  FIELD_U32(a1, 80) = v6;
  FIELD_U32(a1, 7524) = !v6;
  FIELD_U32(a1, 6664) = 32;
  FIELD_U32(a1, 160) = dword_60C8F8E0;
  if ( ((unsigned int)dword_60C8FA60 & ~(1613305824 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60C8FA60) )
  {
    dword_60C8FA60[1] = 0;
    dword_60C8FA60[2] = 1065353216;
    dword_60C8FA6C = 0;
    dword_60C8FA70 = -1082130432;
    dword_60C8FA74 = 1065353216;
    dword_60C8FA78 = 0;
    dword_60C8FA7C = -1082130432;
    dword_60C8FA80 = 0;
    _cxa_guard_release(dword_60C8FA60);
  }
  v8 = (float *)&dword_60C8FA60[2 * FIELD_U32(a1, 6668)];
  v9 = v8[1];
  FIELD_F32(a1, 120) = v9;
  v10 = v8[2];
  FIELD_F32(a1, 124) = v10;
  FIELD_U32(a1, 128) = 0;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + v9;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + v10;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + 0.0;
  FIELD_U8(a1, 6740) = 0;
  FIELD_U8(a1, 6848) = 0;
  return 6848;
}
