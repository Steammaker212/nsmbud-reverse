/* Actor_Parabeetle_build
 * address: 0x606B5010   size: 424   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Parabeetle_build(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r1

  v2 = operator_new(0x1C40u);
  sub_606B5FF4(v2, a1);
  *(_DWORD *)v2 = off_60C1AE4C;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(v2 + 6632));
  FIELD_U32(v2, 6632) = off_60BEE598;
  memset(v2 + 7000, 0, 128);
  ColliderNode_ctor((ColliderNode *)(v2 + 7032));
  ColliderNode_ctor((ColliderNode *)(v2 + 7064));
  ColliderNode_ctor((ColliderNode *)(v2 + 7096));
  memset(v2 + 7128, 0, 96);
  ColliderNode_ctor((ColliderNode *)(v2 + 7128));
  ColliderNode_ctor((ColliderNode *)(v2 + 7160));
  ColliderNode_ctor((ColliderNode *)(v2 + 7192));
  FIELD_U32(v2, 7028) = 0;
  FIELD_U32(v2, 7024) = 0;
  FIELD_U32(v2, 7020) = 0;
  FIELD_U32(v2, 7016) = 0;
  FIELD_U32(v2, 7012) = 0;
  FIELD_U32(v2, 7008) = 0;
  FIELD_U32(v2, 7004) = 0;
  FIELD_U32(v2, 7000) = 0;
  v3 = FIELD_U32(v2, 6940);
  v4 = FIELD_U32(v2, 6936);
  FIELD_U32(v2, 7060) = v3;
  FIELD_U32(v2, 7056) = v4;
  FIELD_U32(v2, 7156) = v3;
  FIELD_U32(v2, 7152) = v4;
  FIELD_U32(v2, 7092) = v3;
  FIELD_U32(v2, 7088) = v4;
  FIELD_U32(v2, 7188) = v3;
  FIELD_U32(v2, 7184) = v4;
  FIELD_U32(v2, 7124) = v3;
  FIELD_U32(v2, 7120) = v4;
  FIELD_U32(v2, 7220) = v3;
  FIELD_U32(v2, 7216) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(v2 + 6632), 3, v2 + 7000, v2 + 7032, v2 + 7128);
  FIELD_U32(v2, 7224) = 0;
  FIELD_U8(v2, 7228) = 0;
  return v2;
}
