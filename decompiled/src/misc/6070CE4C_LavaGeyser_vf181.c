/* LavaGeyser_vf181
 * address: 0x6070CE4C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LavaGeyser_vf181(int result)
{
  float v1; // s0

  if ( FIELD_U8(result, 6400) )
  {
    FIELD_U8(result, 6400) = 0;
  }
  else
  {
    FIELD_U32(result, 6320) = FIELD_U32(result, 6364);
    v1 = FIELD_F32(result, 6360);
    FIELD_F32(result, 6324) = v1;
    FIELD_F32(result, 6316) = v1 * 0.4;
  }
  FIELD_U32(result, 6348) = 1;
  return result;
}
