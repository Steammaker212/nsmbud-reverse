/* Actor_banamanage_OBJ_build
 * address: 0x6059F9C8   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_banamanage_OBJ_build(ActorBuildInfo *a1)
{
  StageActor *v2; // r0
  StageActor *result; // r0
  unsigned int settings1; // r1

  v2 = (StageActor *)operator_new(0x298u);
  result = StageActor__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60C07D1C;
  FIELD_U32(result + (1) * 644, 0x0) = 0;
  settings1 = FIELD_U32(result, 0x14);
  FIELD_U32(result + (1) * 644, 0x4) = HIBYTE(settings1) & 0xF;
  FIELD_U32(result + (1) * 644, 0x8) = ((settings1 >> 4) & 7) + 1;
  FIELD_U32(result + (1) * 644, 0xC) = (Profile *)BYTE1(settings1);
  *(_DWORD *)&FIELD_U8(result + (1) * 644, 0x10) = BYTE2(settings1);
  return result;
}
