/* Actor_Bowser_fire_kishi_build
 * address: 0x60111C20   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_Bowser_fire_kishi_build(ActorBuildInfo *a1)
{
  StageActor *v2; // r0
  StageActor *result; // r0

  v2 = (StageActor *)operator_new(0x2A4u);
  result = StageActor__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BD073C;
  FIELD_U32(result + (1) * 644, 0x0) = 0;
  FIELD_U32(result + (1) * 644, 0x4) = 2139095039;
  FIELD_U32(result + (1) * 644, 0x8) = 2139095039;
  FIELD_U32(result + (1) * 644, 0xC) = (Profile *)-8388609;
  *(_DWORD *)&FIELD_U8(result + (1) * 644, 0x10) = -8388609;
  FIELD_U32(result + (1) * 644, 0x14) = 0;
  FIELD_U32(result + (1) * 644, 0x18) = 0;
  *(_DWORD *)&FIELD_U8(result + (1) * 644, 0x1C) = 0;
  return result;
}
