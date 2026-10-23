/* PlantFireball_vf52
 * address: 0x60136874   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlantFireball_vf52(int result)
{
  int v1; // r1

  v1 = FIELD_U32(result, 6244);
  FIELD_U32(result, 6244) = v1 - 1;
  if ( v1 <= 1 )
    FIELD_U8(result, 19) = 1;
  return result;
}
