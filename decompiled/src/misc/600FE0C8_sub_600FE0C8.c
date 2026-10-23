/* sub_600FE0C8
 * address: 0x600FE0C8   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_600FE0C8(int a1)
{
  int v2; // r5
  char v3; // r12
  _DWORD *v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  ActiveCollider *v8; // r4
  ActiveColliderMgr *v9; // r5
  ActiveColliderMgr *result; // r0

  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  if ( ((unsigned int)dword_60C81768 & ~(1611653364 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C81768) )
  {
    dword_60C81764 = (int)&off_60BC2CB4;
    _cxa_guard_release(dword_60C81768);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C81764) == 1 )
  {
    v4 = *(_DWORD **)(v2 + 7100);
    v5 = v4[3];
    v6 = v4[2];
    v7 = v4[17];
    if ( v6 > v7 )
      v5 += 4 * v7;
    *(_DWORD *)(*(_DWORD *)v5 + 24) = 0;
    PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, v2 + 6644);
    FIELD_U8(v2, 7608) = 0;
  }
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_F32(a1, 100) = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 928))(a1);
  FIELD_F32(a1, 136) = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 924))(a1);
  FIELD_U32(a1, 9356) = dword_60C86020 + 596523264;
  v8 = (ActiveCollider *)(a1 + 7964);
  v9 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v8);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v9, v8);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v9, v8);
  }
  return result;
}
