/* sub_60379EE0
 * address: 0x60379EE0   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60379EE0(int a1)
{
  char v2; // r12
  Vec2 v4; // [sp+0h] [bp-10h] BYREF

  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + 6.0;
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U8(a1, 6386) = 1;
  if ( ((unsigned int)&algn_60C96653[1] & ~(1614257960 << v2) & 1) == 0
    && _cxa_guard_acquire((__guard *)&algn_60C96653[1]) )
  {
    byte_60C96650 = 0;
    byte_60C96651 = 1;
    byte_60C96652 = 4;
    _cxa_guard_release((__guard *)&algn_60C96653[1]);
  }
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&byte_60C96650);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 22) & 1) != 0 || (FIELD_U32(a1, 2872) & 0x10400) == 0x400 )
    return (_BYTE *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C965DC);
  if ( StageActor__distanceToPlayer((StateActor *)a1, &v4) == -1 )
    return StageActor__delete((StateActor *)a1, 0);
  return (_BYTE *)SE_EMY_REV_KOURA_FALL_ref_3(a1);
}
