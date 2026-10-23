/* Actor_bana_build
 * address: 0x6059BE6C   size: 296   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_bana_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x1BE8u);
  sub_605C6990(v2, a1);
  *(_DWORD *)v2 = off_60C07870;
  FIELD_U32(v2, 6120) = 0;
  sub_605C6EB4(v2 + 6124, FIELD_U32(v2, 8), 0);
  FIELD_U32(v2, 6424) = 1065353216;
  FIELD_U32(v2, 6428) = 1077936128;
  FIELD_U32(v2, 6432) = 1065353216;
  FIELD_U32(v2, 6436) = 0;
  FIELD_U32(v2, 6448) = 0;
  FIELD_U32(v2, 6444) = 0;
  FIELD_U32(v2, 6440) = 0;
  FIELD_U32(v2, 6452) = 0;
  FIELD_U32(v2, 6456) = 0;
  FIELD_U32(v2, 6460) = 0;
  FIELD_U32(v2, 6468) = 0;
  FIELD_U32(v2, 6464) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6472));
  FIELD_U32(v2, 6472) = off_60BC30D8;
  FIELD_U8(v2, 7128) = (FIELD_U32(v2, 20) & 0x300000) == 0x200000;
  FIELD_U32(v2, 7132) = 0;
  FIELD_U32(v2, 7136) = 0;
  return v2;
}
