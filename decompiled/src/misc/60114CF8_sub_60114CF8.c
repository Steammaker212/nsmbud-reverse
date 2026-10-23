/* sub_60114CF8
 * address: 0x60114CF8   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60114CF8(int a1)
{
  BowserJrBase__vf3FC(a1);
  FIELD_U32(a1, 144) = 1067450368;
  FIELD_U32(a1, 148) = 1067450368;
  FIELD_U32(a1, 152) = 1067450368;
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 7612) = 0;
  FIELD_U32(a1, 7616) = 0;
  FIELD_U32(a1, 7620) = 0;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BD0C5C, 0);
  FIELD_U32(a1, 7168) = FIELD_U32(a1, 7156);
  FIELD_U32(a1, 7172) = FIELD_U32(a1, 7160);
  FIELD_U32(a1, 7640) = 1065353216;
  FIELD_U32(a1, 7252) = 0;
  sub_60114E10(a1);
  FIELD_U8(a1, 7248) = 1;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF6330, &stru_60AF633C, &stru_60AF6348);
  ((void (__fastcall *)(int))loc_60024338)(1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C86964);
  return 1;
}
