/* BossBase__onCreate
 * address: 0x60024B30   size: 420   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F00
// 
// Overridden by: None
signed int __fastcall BossBase__onCreate(BossBase *this)
{
  ActiveColliderMgr *v2; // r5
  float v3; // s2
  char v4; // r12

  (*(void (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0)._._._._.vtable + 0x3EC))(this);
  FIELD_U32(this, 0x0).field_1804 = 16;
  FIELD_U32(this, 0x0)._._._.profileFlags |= 0x200u;
  (*(void (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0)._._._._.vtable + 0x3F4))(this);
  (*(void (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0)._._._._.vtable + 0x3F8))(this);
  FIELD_U32(this, 0x0)._._._.field_270 = 0;
  FIELD_U32(this, 0x0).field_1864 = 0;
  (*(void (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0)._._._._.vtable + 0x3E8))(this);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, &FIELD_U32(this, 0x1A40))
    && !ActiveColliderMgr_isInCreateList(v2, &FIELD_U32(this, 0x1A40)) )
  {
    ActiveColliderMgr_addToCreateList(v2, &FIELD_U32(this, 0x1A40));
  }
  (*(void (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0)._._._._.vtable + 0x3FC))(this);
  *(double *)&FIELD_U32(this, 0x1A20).scale.x = ((double (__fastcall *)(ActorScaler *))*(_DWORD *)FIELD_U32(this, 0x1A20).vtable)(&FIELD_U32(this, 0x1A20));
  FIELD_U32(this, 0x1A20).scale.z = v3;
  (*(void (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0)._._._._.vtable + 0x3E0))(this);
  PlayerLookTargetList_add(PlayerLookTargetList_instance, (int)&FIELD_U32(this, 0x19F4));
  if ( ((unsigned int)&algn_60C7F66B[1] & ~(1610763372 << v4) & 1) == 0
    && _cxa_guard_acquire((__guard *)&algn_60C7F66B[1]) )
  {
    stru_60C7F668.field_0 = 1;
    stru_60C7F668.field_1 = 1;
    stru_60C7F668.field_2 = 1;
    _cxa_guard_release((__guard *)&algn_60C7F66B[1]);
  }
  EnemyFreezeMgr_setFlags(&FIELD_U32(this, 0x0).freezeMgr, &stru_60C7F668);
  (*(void (__fastcall **)(BossBase *))(FIELD_U32(this, 0x0)._._._._.vtable + 0x3F0))(this);
  return 1;
}
