/* SpinningStar_ctor
 * address: 0x606720B0   size: 892   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SpinningStar_ctor(ActorBuildInfo *a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r0

  v2 = operator_new(0x1DD0u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = SpinningStar_vtable;
  FIELD_U32(v2, 6124) = 0;
  FIELD_U32(v2, 6120) = 0;
  FIELD_U32(v2, 6116) = 0;
  FIELD_U32(v2, 6112) = 0;
  FIELD_U32(v2, 6108) = 0;
  FIELD_U32(v2, 6104) = 0;
  FIELD_U32(v2, 6100) = 0;
  FIELD_U32(v2, 6128) = off_60C15BF4;
  FIELD_U32(v2, 6136) = &off_60C15BA8;
  ShapedCollider_ctor2((ShapedCollider *)(v2 + 6136), 15, v2 + 6500, v2 + 6624, v2 + 7104)->_._.vtable = (int)&off_60C15BA8;
  memset((void *)(v2 + 6500), 0, 120);
  memset(v2 + 6624, 0, 480);
  SpinningStar_ctor_helper(v2 + 6624);
  memset(v2 + 7104, 0, 480);
  SpinningStar_ctor_helper(v2 + 7104);
  memset((void *)(v2 + 6500), 0, 120);
  v3 = FIELD_U32(v2, 6444);
  v4 = FIELD_U32(v2, 6440);
  FIELD_U32(v2, 6652) = v3;
  FIELD_U32(v2, 6648) = v4;
  FIELD_U32(v2, 7132) = v3;
  FIELD_U32(v2, 7128) = v4;
  FIELD_U32(v2, 6684) = v3;
  FIELD_U32(v2, 6680) = v4;
  FIELD_U32(v2, 7164) = v3;
  FIELD_U32(v2, 7160) = v4;
  FIELD_U32(v2, 6716) = v3;
  FIELD_U32(v2, 6712) = v4;
  FIELD_U32(v2, 7196) = v3;
  FIELD_U32(v2, 7192) = v4;
  FIELD_U32(v2, 6748) = v3;
  FIELD_U32(v2, 6744) = v4;
  FIELD_U32(v2, 7228) = v3;
  FIELD_U32(v2, 7224) = v4;
  FIELD_U32(v2, 6780) = v3;
  FIELD_U32(v2, 6776) = v4;
  FIELD_U32(v2, 7260) = v3;
  FIELD_U32(v2, 7256) = v4;
  FIELD_U32(v2, 6812) = v3;
  FIELD_U32(v2, 6808) = v4;
  FIELD_U32(v2, 7292) = v3;
  FIELD_U32(v2, 7288) = v4;
  FIELD_U32(v2, 6844) = v3;
  FIELD_U32(v2, 6840) = v4;
  FIELD_U32(v2, 7324) = v3;
  FIELD_U32(v2, 7320) = v4;
  FIELD_U32(v2, 6876) = v3;
  FIELD_U32(v2, 6872) = v4;
  FIELD_U32(v2, 7356) = v3;
  FIELD_U32(v2, 7352) = v4;
  FIELD_U32(v2, 6908) = v3;
  FIELD_U32(v2, 6904) = v4;
  FIELD_U32(v2, 7388) = v3;
  FIELD_U32(v2, 7384) = v4;
  FIELD_U32(v2, 6940) = v3;
  FIELD_U32(v2, 6936) = v4;
  FIELD_U32(v2, 7420) = v3;
  FIELD_U32(v2, 7416) = v4;
  FIELD_U32(v2, 6972) = v3;
  FIELD_U32(v2, 6968) = v4;
  FIELD_U32(v2, 7452) = v3;
  FIELD_U32(v2, 7448) = v4;
  FIELD_U32(v2, 7004) = v3;
  FIELD_U32(v2, 7000) = v4;
  FIELD_U32(v2, 7484) = v3;
  FIELD_U32(v2, 7480) = v4;
  FIELD_U32(v2, 7036) = v3;
  FIELD_U32(v2, 7032) = v4;
  FIELD_U32(v2, 7516) = v3;
  FIELD_U32(v2, 7512) = v4;
  FIELD_U32(v2, 7068) = v3;
  FIELD_U32(v2, 7064) = v4;
  FIELD_U32(v2, 7548) = v3;
  FIELD_U32(v2, 7544) = v4;
  FIELD_U32(v2, 7100) = v3;
  FIELD_U32(v2, 7096) = v4;
  FIELD_U32(v2, 7580) = v3;
  FIELD_U32(v2, 7576) = v4;
  FIELD_U8(v2, 7600) = 0;
  FIELD_U32(v2, 7596) = 0;
  FIELD_U32(v2, 7592) = 0;
  FIELD_U32(v2, 7588) = 0;
  FIELD_U32(v2, 7584) = 0;
  FIELD_U32(v2, 7616) = 0;
  FIELD_U32(v2, 7612) = 0;
  FIELD_U32(v2, 7608) = 0;
  FIELD_U32(v2, 7604) = 0;
  FIELD_U8(v2, 7620) = 45;
  FIELD_U8(v2, 7625) = 0;
  FIELD_U8(v2, 7622) = 0;
  FIELD_U8(v2, 7621) = 0;
  FIELD_U8(v2, 7624) = 0;
  FIELD_U8(v2, 7623) = 0;
  return v2;
}
