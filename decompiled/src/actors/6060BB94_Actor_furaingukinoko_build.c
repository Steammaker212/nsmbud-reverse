/* Actor_furaingukinoko_build
 * address: 0x6060BB94   size: 316   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_furaingukinoko_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x19F0u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0F92C;
  FIELD_U32(v2, 6100) = 0;
  FIELD_U32(v2, 6104) = 0;
  sub_6063044C(v2 + 6108);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(v2 + 6128));
  FIELD_U32(v2, 6496) = 0;
  FIELD_U32(v2, 6500) = 0;
  FIELD_U32(v2, 6504) = 32;
  FIELD_U32(v2, 6508) = 0x20000;
  FIELD_U32(v2, 6512) = 0x8000000;
  FIELD_U32(v2, 6516) = 0x80000;
  FIELD_U32(v2, 6520) = 0x800000;
  FIELD_U32(v2, 6524) = 0x400000;
  FIELD_U8(v2, 6528) = 0;
  FIELD_U8(v2, 6548) = 0;
  FIELD_U32(v2, 6544) = 0;
  FIELD_U32(v2, 6540) = 0;
  FIELD_U32(v2, 6532) = 0;
  FIELD_U32(v2, 6536) = 0;
  memset((void *)(v2 + 6552), 0, 55);
  FIELD_U8(v2, 6636) = 0;
  FIELD_U32(v2, 6632) = 0;
  FIELD_U32(v2, 6628) = 0;
  FIELD_U32(v2, 6624) = 0;
  FIELD_U32(v2, 6620) = 0;
  FIELD_U32(v2, 6616) = 0;
  FIELD_U32(v2, 6612) = 0;
  FIELD_U32(v2, 6608) = 0;
  return v2;
}
