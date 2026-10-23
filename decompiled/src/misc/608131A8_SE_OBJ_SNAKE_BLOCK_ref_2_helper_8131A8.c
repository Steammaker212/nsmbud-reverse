/* SE_OBJ_SNAKE_BLOCK_ref_2_helper_8131A8
 * address: 0x608131A8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_SNAKE_BLOCK_ref_2_helper_8131A8(int result, float a2, float a3)
{
  int v3; // r1

  v3 = FIELD_U32(result, 468);
  if ( v3 <= 18 )
  {
    FIELD_U32(result, 468) = v3 + 1;
    result += 8 * v3;
    FIELD_F32(result, 308) = a2;
    FIELD_F32(result, 312) = a3;
  }
  return result;
}
