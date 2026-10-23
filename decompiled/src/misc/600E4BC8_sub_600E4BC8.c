/* sub_600E4BC8
 * address: 0x600E4BC8   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E4BC8(int a1)
{
  char v1; // r12
  int v3; // r5
  float v4; // s16
  float v5; // s0
  ActiveColliderMgr *v6; // r6
  float v7; // s0
  ActiveColliderMgr *v8; // r6

  v3 = FIELD_U32(a1, 56);
  if ( ((unsigned int)&dword_60C84B44 & ~(1611549672 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B44) )
  {
    dword_60C84B40 = (int)&off_60BC8314;
    _cxa_guard_release(&dword_60C84B44);
  }
  v4 = 2.0;
  if ( v3
    && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C84B40) == 1
    && !(*(int (__fastcall **)(int))(*(_DWORD *)v3 + 716))(v3)
    && (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 720))(v3) != 1 )
  {
    v4 = 4.25;
  }
  FIELD_F32(a1, 6576) = v4;
  sub_600E29D0(a1);
  FIELD_U32(a1, 6416) = lemmy_bomb_ref;
  FIELD_U32(a1, 6420) = lemmy_bomb_ref_E5168;
  FIELD_U32(a1, 6424) = lemmy_bomb_ref_E53BC;
  FIELD_U32(a1, 3200) |= 0x800u;
  FIELD_U32(a1, 3192) |= 0x800u;
  FIELD_U32(a1, 3176) |= 0x800u;
  FIELD_U32(a1, 3184) |= 0x800u;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCCDE0, 0);
  v5 = FIELD_F32(a1, 6576) * 6.0;
  FIELD_F32(a1, 312) = v5;
  FIELD_F32(a1, 316) = v5;
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6592), (StageActor *)a1, &stru_60AF5E50, a1 + 6896);
  v7 = FIELD_F32(a1, 6576) * 5.0;
  FIELD_F32(a1, 6716) = v7;
  FIELD_F32(a1, 6720) = v7;
  v8 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6592))
    && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 6592)) )
  {
    ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 6592));
  }
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C84F08);
  return 1;
}
