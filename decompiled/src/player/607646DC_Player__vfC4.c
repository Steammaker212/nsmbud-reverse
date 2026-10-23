/* Player__vfC4
 * address: 0x607646DC   size: 228   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607646DC(
        StateActor *a1,
        ActiveColliderInfo *a2,
        ActiveColliderInfo *a3,
        ActiveColliderInfo *a4,
        ActiveColliderInfo *info)
{
  ActiveCollider__init(&FIELD_U32(a1, 0xBC), &FIELD_U32(a1, 0x0), a2, 0);
  ActiveCollider__init((ActiveCollider *)&a1[1]._.collisionMgr[388], &FIELD_U32(a1, 0x0), a2, 0);
  ActiveCollider__init((ActiveCollider *)&a1[1]._.collisionMgr[692], &FIELD_U32(a1, 0x0), a2, 0);
  ActiveCollider__init((ActiveCollider *)&a1[1]._.collisionMgr[1300], &FIELD_U32(a1, 0x0), a3, 0);
  ActiveCollider__init((ActiveCollider *)&a1[1]._.collisionMgr[996], &FIELD_U32(a1, 0x0), a3, 0);
  ActiveCollider__init((ActiveCollider *)&a1[1]._.collisionMgr[1908], &FIELD_U32(a1, 0x0), a3, 0);
  ActiveCollider__init((ActiveCollider *)&a1[1]._.collisionMgr[1604], &FIELD_U32(a1, 0x0), a3, 0);
  ActiveCollider__init((ActiveCollider *)&a1[1]._.collisionMgr[2212], &FIELD_U32(a1, 0x0), a4, 0);
  return ActiveCollider__init((ActiveCollider *)&a1[1]._.collisionMgr[2516], &FIELD_U32(a1, 0x0), info, 0);
}
