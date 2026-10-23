/* Actor_editokoinakutarange_Tag_build_helper
 * address: 0x60006070   size: 40   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_editokoinakutarange_Tag_build_helper(int result, char a2)
{
  unsigned int v2; // r2
  int v3; // r3

  v2 = FIELD_U32(result, 44);
  v3 = result;
  if ( v2 < 0x100 )
    v3 = result + v2;
  FIELD_U8(v3, 4960) = a2;
  ++FIELD_U32(result, 44);
  return result;
}
