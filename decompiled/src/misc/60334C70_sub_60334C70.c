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
  FIELD_F32(result, 0x7C) = -2.0;
  *(_DWORD *)&FIELD_U8(result, 0x288)[2528] |= 0x40000000u;
  *(_DWORD *)&FIELD_U8(result, 0x288)[2536] |= 0x40000000u;
  *(_DWORD *)&FIELD_U8(result, 0x288)[2532] |= 4u;
  *(_DWORD *)&FIELD_U8(result, 0x288)[2540] |= 4u;
  return result;
}
