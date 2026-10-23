/* Actor_goruDemo_Toad_build
 * address: 0x6074F198   size: 384   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_goruDemo_Toad_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1408u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60C23C38;
  FIELD_U32(v2, 644) = 0;
  FIELD_U32(v2, 648) = 0;
  FIELD_U32(v2, 652) = &off_60C23CE8;
  FIELD_U32(v2, 656) = &off_60C23CF8;
  FIELD_U32(v2, 660) = &off_60C23D1C;
  FIELD_U32(v2, 664) = v2;
  FIELD_U32(v2, 668) = 0;
  StateMgr_ctor((StateMgr *)(v2 + 672), (StateExecuter *)(v2 + 656), &NullState);
  FIELD_U32(v2, 652) = &off_60C23CD8;
  FIELD_U32(v2, 688) = 0;
  FIELD_U32(v2, 692) = 0;
  FIELD_U32(v2, 696) = 0;
  FIELD_U32(v2, 700) = 0;
  FIELD_U32(v2, 704) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 708));
  FIELD_U32(v2, 708) = off_60BC6E38;
  FIELD_U32(v2, 724) = 0;
  FIELD_U32(v2, 728) = off_60C2313C;
  *(_DWORD *)sub_60479414(v2 + 728, v2 + 4296, 1) = off_60C2313C;
  agl_TextureData_ref(v2 + 4296);
  FIELD_U32(v2, 4568) = 0;
  FIELD_U32(v2, 4572) = 0;
  FIELD_U32(v2, 4576) = 0;
  sub_60959B54(v2 + 4584);
  FIELD_U32(v2, 5052) = v2 + 5060;
  FIELD_U32(v2, 5048) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(v2, 5056) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(v2 + 5048);
  **(_BYTE **)(v2 + 5052) = 0;
  FIELD_U32(v2, 5048) = &off_60BD4BF0;
  return v2;
}
