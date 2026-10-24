/* Fuzzy__vf264
 * address: 0x602785A0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A9420
// 
// Overridden by: None
signed int __fastcall Fuzzy__vf264(Enemy *a1)
{
  Profile *profile; // r0
  unsigned int prev; // r1
  int v4; // r0

  profile = a1[1]._._._._.profile;
  FIELD_U32(profile, 0x14) = 1112014848;
  FIELD_U32(profile + (1) * 24, 0x4) = (void *)((int)FIELD_U32(profile + (1) * 24, 0x4) | 2);
  prev = (unsigned int)a1[1]._._._.aCollider.createNode.prev;
  if ( prev )
  {
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, prev);
    if ( v4 )
      FIELD_U8(v4, 10566) = 1;
    a1[1]._._._.aCollider.createNode.prev = 0;
  }
  return Enemy__vf264(a1);
}
