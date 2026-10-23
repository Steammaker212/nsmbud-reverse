/* Actor_pipe_big_RDash_build
 * address: 0x605C7114   size: 216   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_pipe_big_RDash_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0xBD0u);
  Actor_pipe_big_RDash_build_helper_6946F8(v2, a1);
  *(_DWORD *)v2 = off_60C0A45C;
  FIELD_U32(v2, 1004) = &off_60C0A518;
  FIELD_U32(v2, 1008) = &off_60C0A528;
  FIELD_U32(v2, 1012) = &off_60C0A54C;
  FIELD_U32(v2, 1016) = v2;
  FIELD_U32(v2, 1020) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 1024), (StateExecuter *)(v2 + 1008), &NullState);
  FIELD_U32(v2, 1004) = &off_60C0A508;
  RectCollider_ctor((RectCollider *)(v2 + 1040));
  FIELD_U32(v2, 1040) = off_60BC30D8;
  Actor_pipe_big_RDash_build_helper(v2 + 1696);
  FIELD_U32(v2, 2928) = 0;
  FIELD_U8(v2, 2932) = 0;
  FIELD_U32(v2, 2936) = 0;
  FIELD_U32(v2, 2940) = 0xFFFF;
  FIELD_U8(v2, 2944) = 0;
  memset((void *)(v2 + 2948), 0, 76);
  return v2;
}
