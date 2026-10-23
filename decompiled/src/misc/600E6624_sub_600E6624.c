/* sub_600E6624
 * address: 0x600E6624   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600E6624(StateActor *a1)
{
  float v2; // s16
  signed int result; // r0

  if ( a1[1]._.collisionMgr[1384] )
  {
    v2 = *(float *)&FIELD_U32(a1, 0x0)._._.parent[1].field_20.next;
    FIELD_U32(a1, 0x0)._.position.z = v2
                       + (float)((float)((*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 1680))(a1) + 1)
                               * -300.0);
  }
  sub_60421AD4(*(_DWORD *)&a1[1]._.collisionMgr[348]);
  FIELD_U32(a1, 0x0)._.speed.x = 0.0;
  FIELD_U32(a1, 0x0)._.speed.y = 0.0;
  FIELD_U32(a1, 0x0)._.speed.z = 0.0;
  result = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x0)._.position);
  FIELD_U32(a1, 0x0)._.direction = result;
  return result;
}
