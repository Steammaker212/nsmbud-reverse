/* Player_ReleaseCarryableEnemy_helper
 * address: 0x607945E0   size: 96   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Player_ReleaseCarryableEnemy_helper(int result)
{
  int v1; // r1

  v1 = FIELD_U32(result, 208);
  if ( (v1 & 1) != 0 )
  {
    v1 &= ~1u;
    FIELD_U8(result, 236) = 1;
    FIELD_U32(result, 208) = v1;
  }
  if ( (v1 & 2) != 0 )
  {
    v1 &= ~2u;
    FIELD_U8(result, 236) = 1;
    FIELD_U32(result, 208) = v1;
  }
  if ( (v1 & 4) != 0 )
  {
    v1 &= ~4u;
    FIELD_U8(result, 236) = 1;
    FIELD_U32(result, 208) = v1;
  }
  if ( (v1 & 8) != 0 )
  {
    v1 &= ~8u;
    FIELD_U8(result, 236) = 1;
    FIELD_U32(result, 208) = v1;
  }
  FIELD_U32(result, 208) = v1 & 0xFFFFFFEF;
  return result;
}
