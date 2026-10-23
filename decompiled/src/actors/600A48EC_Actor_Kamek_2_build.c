/* Actor_Kamek_2_build
 * address: 0x600A48EC   size: 84   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_Kamek_2_build(int a1)
{
  Actor *v2; // r0
  Actor *result; // r0
  int v4; // r2

  v2 = (Actor *)operator_new(0x5Cu);
  result = Actor__ctor(v2, (ActorBuildInfo *)a1);
  FIELD_U32(result, 0x0) = (int)off_60BC8D18;
  LOBYTE(result[1].id) = 0;
  v4 = FIELD_U32(a1, 20);
  result[1].vtable = FIELD_U32(a1, 16);
  result[1].heap = v4;
  if ( (FIELD_U32(result, 0x14) & 0x100000) != 0 )
    LOBYTE(result[1].id) = 1;
  return result;
}
