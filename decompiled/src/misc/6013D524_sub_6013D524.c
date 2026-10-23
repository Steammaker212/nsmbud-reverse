/* sub_6013D524
 * address: 0x6013D524   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6013D524(StateActor *a1)
{
  (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 640))(a1);
  ActiveCollider__init(&FIELD_U32(a1, 0xBC), &FIELD_U32(a1, 0x0), &stru_60BD30FC, 0);
  ActiveCollider__init(
    (ActiveCollider *)&a1[1]._._.aCollider.info.category,
    &FIELD_U32(a1, 0x0),
    (ActiveColliderInfo *)&unk_60BD3128,
    0);
  ActiveCollider__init(
    (ActiveCollider *)&a1[1]._._.field_278,
    &FIELD_U32(a1, 0x0),
    &stru_60AF6880,
    (int)&a1[1]._.collisionMgr[288]);
  FIELD_U32(a1, 0x26C) = 0;
  FIELD_U32(a1, 0x270) = 0;
  a1[1]._._.scale.x = 0.0;
  FIELD_F32(a1, 0x1F4) = 24.0;
  FIELD_F32(a1, 0x1F8) = 24.0;
  FIELD_F32(a1, 0x1EC) = 0.0;
  FIELD_U32(a1, 0x1F0) = 0;
  LODWORD(a1[1]._._.aCollider.info.distToEdge.y) = 180;
  (*(void (__fastcall **)(StateActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C87C00);
  (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 636))(a1);
  return 1;
}
