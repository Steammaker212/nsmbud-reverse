/* StageActor__setPlayerId
 * address: 0x60002780   size: 8   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
StageActor *__fastcall StageActor__setPlayerId(StageActor *this, char playerId)
{
  FIELD_U8(this, 0x54) = playerId;
  return this;
}
