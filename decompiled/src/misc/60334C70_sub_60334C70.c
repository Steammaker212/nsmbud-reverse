/* sub_60334C70
 * address: 0x60334C70   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall sub_60334C70(MultiStateActor *result)
{
  FIELD_U32(result, 0x0)._.speed.y = -2.0;
  *(_DWORD *)&FIELD_U32(result, 0x0).collisionMgr[2528] |= 0x40000000u;
  *(_DWORD *)&FIELD_U32(result, 0x0).collisionMgr[2536] |= 0x40000000u;
  *(_DWORD *)&FIELD_U32(result, 0x0).collisionMgr[2532] |= 4u;
  *(_DWORD *)&FIELD_U32(result, 0x0).collisionMgr[2540] |= 4u;
  return result;
}
