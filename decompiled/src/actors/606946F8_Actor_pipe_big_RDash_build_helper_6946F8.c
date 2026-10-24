/* Actor_pipe_big_RDash_build_helper_6946F8
 * address: 0x606946F8   size: 116   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall Actor_pipe_big_RDash_build_helper_6946F8(StageActor *a1, ActorBuildInfo *a2)
{
  StageActor *result; // r0

  result = StageActor__ctor(a1, a2);
  FIELD_U32(result, 0x0) = (int)off_60C17C30;
  FIELD_U32(result + (1) * 644, 0x118) = 0;
  FIELD_U32(result + (1) * 644, 0x120) = 0;
  *(_DWORD *)&FIELD_U8(result + (1) * 644, 0x128) = 0;
  FIELD_F32(result + (1) * 644, 0x130) = 0.0;
  FIELD_F32(result + (1) * 644, 0x138) = 0.0;
  FIELD_U32(result + (1) * 644, 0x140) = 0;
  FIELD_U32(result + (1) * 644, 0x148) = 0;
  FIELD_U32(result + (1) * 644, 0x150) = 0;
  *(_DWORD *)&FIELD_U8(result + (1) * 644, 0x10) = 0;
  FIELD_U32(result + (1) * 644, 0xC) = 0;
  FIELD_U32(result + (1) * 644, 0x8) = 0;
  FIELD_U32(result + (1) * 644, 0x4) = 0;
  FIELD_U32(result + (1) * 644, 0x0) = 0;
  FIELD_U32(result + (1) * 644, 0x110) = 0;
  FIELD_U32(result + (1) * 644, 0x10C) = 0;
  FIELD_U32(result + (1) * 644, 0x108) = 0;
  FIELD_U32(result + (1) * 644, 0x104) = 0;
  FIELD_U32(result + (1) * 644, 0x158) = 0;
  FIELD_F32(result + (1) * 644, 0x15C) = 0.0;
  FIELD_F32(result + (1) * 644, 0x160) = 0.0;
  FIELD_F32(result + (1) * 644, 0x164) = 0.0;
  return result;
}
