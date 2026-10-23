/* PlantFireball_vf66
 * address: 0x6013A050   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlantFireball_vf66(int result)
{
  int v1; // r2
  int v2; // r2

  v1 = FIELD_U32(result, 6760);
  if ( v1 >= 1 )
  {
    v2 = v1 - 1;
    FIELD_U32(result, 6760) = v2;
    if ( !v2 )
      FIELD_U32(result, 116) = 1158512640;
  }
  return result;
}
