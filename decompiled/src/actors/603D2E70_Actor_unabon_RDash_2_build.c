/* Actor_unabon_RDash_2_build
 * address: 0x603D2E70   size: 196   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_unabon_RDash_2_build(ActorBuildInfo *a1)
{
  StageActor *v2; // r0
  StageActor *result; // r0

  v2 = (StageActor *)operator_new(0x2F4u);
  result = StageActor__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BF7DB4;
  FIELD_U32(result + (1) * 644, 0x0) = 0;
  FIELD_U32(result + (1) * 644, 0x4) = 0;
  FIELD_U32(result + (1) * 644, 0x8) = 0;
  FIELD_U32(result + (1) * 644, 0xC) = (Profile *)-1;
  *(_DWORD *)&FIELD_U8(result + (1) * 644, 0x10) = 0;
  LOWORD(FIELD_U32(result + (1) * 644, 0x14)) = 0;
  BYTE2(FIELD_U32(result + (1) * 644, 0x14)) = 0;
  FIELD_U32(result + (1) * 644, 0x24) = 0;
  FIELD_U32(result + (1) * 644, 0x20) = 0;
  *(_DWORD *)&FIELD_U8(result + (1) * 644, 0x1C) = 0;
  FIELD_U32(result + (1) * 644, 0x18) = 0;
  FIELD_U32(result + (1) * 644, 0x28) = -1;
  FIELD_U32(result + (1) * 644, 0x2C) = 0;
  LOWORD(FIELD_U32(result + (1) * 644, 0x30)) = 0;
  BYTE2(FIELD_U32(result + (1) * 644, 0x30)) = 0;
  FIELD_U32(result + (1) * 644, 0x40) = 0;
  FIELD_U32(result + (1) * 644, 0x3C) = 0;
  FIELD_U32(result + (1) * 644, 0x38) = 0;
  FIELD_U32(result + (1) * 644, 0x34) = 0;
  FIELD_U32(result + (1) * 644, 0x44) = -1;
  FIELD_U32(result + (1) * 644, 0x48) = 0;
  LOWORD(FIELD_U32(result + (1) * 644, 0x4C)) = 0;
  BYTE2(FIELD_U32(result + (1) * 644, 0x4C)) = 0;
  FIELD_U32(result + (1) * 644, 0x5C) = 0;
  FIELD_U32(result + (1) * 644, 0x58) = 0;
  *(_DWORD *)&FIELD_U8(result + (1) * 644, 0x54) = 0;
  FIELD_U32(result + (1) * 644, 0x50) = 0;
  FIELD_U32(result + (1) * 644, 0x60) = -1;
  FIELD_F32(result + (1) * 644, 0x64) = 0.0;
  LOWORD(FIELD_F32(result + (1) * 644, 0x68)) = 0;
  BYTE2(FIELD_F32(result + (1) * 644, 0x68)) = 0;
  FIELD_F32(result + (1) * 644, 0x6C) = 0.0;
  return result;
}
