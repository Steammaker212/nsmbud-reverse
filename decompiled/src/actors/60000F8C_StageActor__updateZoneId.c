/* StageActor__updateZoneId
 * address: 0x60000F8C   size: 24   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall StageActor__updateZoneId(StageActor *result)
{
  FIELD_U8(result, 0x214) = FIELD_U8(LevelInfo_instance, 0x14);
  return result;
}
