/* Actor_RDash55exclusive_moai_build
 * address: 0x606910C4   size: 280   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_RDash55exclusive_moai_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x19C0u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1798C;
  FIELD_U32(v2, 6100) = 0;
  FIELD_U32(v2, 6104) = &sead__SafeStringBase__vtable;
  FIELD_U32(v2, 6108) = &byte_60B3BA34;
  FIELD_U8(v2, 6128) = 0;
  FIELD_U32(v2, 6124) = 0;
  FIELD_U32(v2, 6120) = 0;
  FIELD_U32(v2, 6112) = 0;
  FIELD_U32(v2, 6116) = 0;
  memset((void *)(v2 + 6132), 0, 36);
  ShapedCollider_ctor((ShapedCollider *)(v2 + 6176));
  FIELD_U32(v2, 6556) = 0;
  FIELD_U32(v2, 6552) = 0;
  FIELD_U32(v2, 6548) = 0;
  FIELD_U32(v2, 6544) = 0;
  FIELD_U32(v2, 6560) = 1036831949;
  FIELD_U32(v2, 6564) = 0;
  FIELD_U32(v2, 6568) = 0;
  FIELD_U8(v2, 6572) = 0;
  FIELD_U32(v2, 6576) = 0;
  FIELD_U8(v2, 6580) = 0;
  FIELD_U32(v2, 6584) = off_60C17A54;
  return v2;
}
