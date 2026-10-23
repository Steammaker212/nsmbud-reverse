/* Actor_barun_build
 * address: 0x60242A4C   size: 540   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_barun_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1A00u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BD9978;
  FIELD_U8(v2, 6312) = 0;
  FIELD_U8(v2, 6313) = 0;
  FIELD_U8(v2, 6314) = -1;
  FIELD_U32(v2, 6316) = 0;
  FIELD_U32(v2, 6320) = 0;
  FIELD_U8(v2, 6324) = -1;
  memset((void *)(v2 + 6328), 0, 49);
  memset((void *)(v2 + 6380), 0, 56);
  LightMask__ctor((RevealMaskRelated *)(v2 + 6436));
  FIELD_U8(v2, 6476) = 0;
  FIELD_U32(v2, 6480) = 0;
  FIELD_U16(v2, 6484) = 0;
  FIELD_U16(v2, 6516) = 0;
  FIELD_U32(v2, 6512) = 0;
  FIELD_U32(v2, 6508) = 0;
  FIELD_U32(v2, 6504) = 0;
  FIELD_U32(v2, 6500) = 0;
  FIELD_U32(v2, 6496) = 0;
  FIELD_U32(v2, 6492) = 0;
  FIELD_U32(v2, 6488) = 0;
  FIELD_U8(v2, 6518) = 1;
  FIELD_U8(v2, 6520) = 0;
  FIELD_U8(v2, 6524) = 0;
  FIELD_U8(v2, 6523) = 0;
  FIELD_U8(v2, 6526) = 0;
  FIELD_U8(v2, 6525) = 0;
  FIELD_U8(v2, 6519) = 0;
  FIELD_U8(v2, 6522) = 0;
  FIELD_U8(v2, 6521) = 0;
  FIELD_U32(v2, 6528) = 2;
  FIELD_U32(v2, 6532) = 0;
  FIELD_U8(v2, 6536) = 0;
  FIELD_U32(v2, 6540) = 0;
  FIELD_U8(v2, 6544) = 0;
  FIELD_U8(v2, 6545) = 0;
  FIELD_U32(v2, 6548) = 0;
  FIELD_U32(v2, 6552) = 0;
  FIELD_U8(v2, 6556) = 0;
  FIELD_U32(v2, 6560) = v2 + 6576;
  FIELD_U32(v2, 6564) = 10;
  FIELD_U32(v2, 6616) = 0;
  FIELD_U32(v2, 6620) = &ActorScaler_vtable;
  FIELD_U32(v2, 6624) = 1065353216;
  FIELD_U32(v2, 6628) = 1065353216;
  FIELD_U32(v2, 6632) = 1065353216;
  FIELD_U32(v2, 6636) = 1065353216;
  FIELD_U32(v2, 6640) = 0;
  FIELD_U32(v2, 6644) = 0;
  FIELD_U32(v2, 6648) = v2;
  FIELD_U32(v2, 6652) = off_60BD9C20;
  FIELD_U32(v2, 6572) = 0;
  FIELD_U32(v2, 6568) = 0;
  return v2;
}
