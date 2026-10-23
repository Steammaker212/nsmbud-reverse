/* Actor_Parabeetle_2_build_helper
 * address: 0x606B51C0   size: 408   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Parabeetle_2_build_helper(int a1, int a2)
{
  int v3; // r0
  int v4; // r1

  sub_606B5FF4(a1, a2);
  *(_DWORD *)a1 = off_60C1AE4C;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 6632));
  FIELD_U32(a1, 6632) = off_60BEE598;
  memset(a1 + 7000, 0, 128);
  ColliderNode_ctor((ColliderNode *)(a1 + 7032));
  ColliderNode_ctor((ColliderNode *)(a1 + 7064));
  ColliderNode_ctor((ColliderNode *)(a1 + 7096));
  memset(a1 + 7128, 0, 96);
  ColliderNode_ctor((ColliderNode *)(a1 + 7128));
  ColliderNode_ctor((ColliderNode *)(a1 + 7160));
  ColliderNode_ctor((ColliderNode *)(a1 + 7192));
  FIELD_U32(a1, 7028) = 0;
  FIELD_U32(a1, 7024) = 0;
  FIELD_U32(a1, 7020) = 0;
  FIELD_U32(a1, 7016) = 0;
  FIELD_U32(a1, 7012) = 0;
  FIELD_U32(a1, 7008) = 0;
  FIELD_U32(a1, 7004) = 0;
  FIELD_U32(a1, 7000) = 0;
  v3 = FIELD_U32(a1, 6940);
  v4 = FIELD_U32(a1, 6936);
  FIELD_U32(a1, 7060) = v3;
  FIELD_U32(a1, 7056) = v4;
  FIELD_U32(a1, 7156) = v3;
  FIELD_U32(a1, 7152) = v4;
  FIELD_U32(a1, 7092) = v3;
  FIELD_U32(a1, 7088) = v4;
  FIELD_U32(a1, 7188) = v3;
  FIELD_U32(a1, 7184) = v4;
  FIELD_U32(a1, 7124) = v3;
  FIELD_U32(a1, 7120) = v4;
  FIELD_U32(a1, 7220) = v3;
  FIELD_U32(a1, 7216) = v4;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(a1 + 6632), 3, a1 + 7000, a1 + 7032, a1 + 7128);
  FIELD_U32(a1, 7224) = 0;
  FIELD_U8(a1, 7228) = 0;
  return a1;
}
