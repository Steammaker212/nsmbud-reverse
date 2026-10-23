/* Actor_rokugabon_rock_build
 * address: 0x60145D3C   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rokugabon_rock_build(ActorBuildInfo *a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x1B88u);
  result = sub_6013D46C(v2, a1);
  *(_DWORD *)result = off_60BD3C48;
  FIELD_U16(result, 7040) = 0;
  return result;
}
