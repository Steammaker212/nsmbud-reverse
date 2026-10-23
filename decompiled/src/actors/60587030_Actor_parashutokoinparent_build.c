/* Actor_parashutokoinparent_build
 * address: 0x60587030   size: 196   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_parashutokoinparent_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1920u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60C06008;
  FIELD_U32(v2, 6332) = 0;
  FIELD_U32(v2, 6328) = 0;
  FIELD_U32(v2, 6324) = 0;
  FIELD_U32(v2, 6320) = 0;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6316) = 0;
  FIELD_U32(v2, 6336) = 1;
  FIELD_U16(v2, 6340) = 0;
  FIELD_U8(v2, 6342) = 0;
  memset(v2 + 6344, 0, 88);
  FIELD_U32(v2, 6428) = off_60C062AC;
  FIELD_U32(v2, 6316) = 0;
  return v2;
}
