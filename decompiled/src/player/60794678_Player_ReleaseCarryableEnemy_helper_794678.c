/* Player_ReleaseCarryableEnemy_helper_794678
 * address: 0x60794678   size: 28   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Player_ReleaseCarryableEnemy_helper_794678(int result)
{
  int v1; // r1

  v1 = FIELD_U32(result, 208);
  if ( (v1 & 8) != 0 )
  {
    FIELD_U8(result, 236) = 1;
    FIELD_U32(result, 208) = v1 & 0xFFFFFFF7;
  }
  return result;
}
