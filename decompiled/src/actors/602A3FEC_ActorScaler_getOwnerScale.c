/* ActorScaler_getOwnerScale
 * address: 0x602A3FEC   size: 16   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

double __fastcall ActorScaler_getOwnerScale(ActorScaler *this)
{
  return *(double *)&FIELD_F32(this, 0xAC);
}
