/* Actor_minigemuManager_RDash_build_helper
 * address: 0x607313A8   size: 80   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_minigemuManager_RDash_build_helper(Actor *a1, ActorBuildInfo *a2)
{
  Actor *result; // r0

  result = Actor__ctor(a1, a2);
  FIELD_U32(result, 0x0) = (int)off_60C22770;
  LOBYTE(FIELD_U32(result + (1) * 80, 0x0)) = 0;
  LOBYTE(FIELD_U32(result + (1) * 80, 0x14)) = -1;
  BYTE1(FIELD_U32(result + (1) * 80, 0x14)) = 0;
  FIELD_U32(result + (1) * 80, 0x18) = 0;
  *(_DWORD *)&FIELD_U8(result + (1) * 80, 0x1C) = 0x10000;
  LOWORD(FIELD_U32(result + (1) * 80, 0x20)) = 0;
  *(_DWORD *)&FIELD_U8(result + (1) * 80, 0x10) = 0;
  FIELD_U32(result + (1) * 80, 0xC) = 0;
  FIELD_U32(result + (1) * 80, 0x8) = 0;
  FIELD_U32(result + (1) * 80, 0x4) = 0;
  return result;
}
