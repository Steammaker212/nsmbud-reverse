/* sub_6034AEF8
 * address: 0x6034AEF8   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034AEF8(int a1, unsigned int *a2)
{
  unsigned int v4; // r3
  unsigned int v5; // r1
  _BOOL4 v6; // r2
  char v7; // r3
  char v8; // r0
  unsigned int v9; // r1
  _BOOL4 v10; // r1
  int v11; // r1
  int v12; // r0

  v4 = *a2;
  v5 = a2[3];
  v6 = ((v4 >> 1) & 1) == 0;
  v7 = v4 & 1;
  if ( v5 )
    v8 = FIELD_U32(v5, 8) == 382;
  else
    v8 = 0;
  ShellEnemy__ctor((CarryableEnemy *)a1, (int)a2, v6, v7, v8);
  *(_DWORD *)a1 = &off_60BEE1FC;
  v9 = a2[3];
  if ( v9 )
    v10 = FIELD_U32(v9, 8) == 382;
  else
    v10 = 0;
  FIELD_U32(a1, 6820) = v10;
  FIELD_U32(a1, 6824) = 0;
  FIELD_U32(a1, 6828) = 0;
  FIELD_U32(a1, 6832) = 0;
  FIELD_U32(a1, 6836) = 1;
  FIELD_U8(a1, 6840) = 0;
  FIELD_U32(a1, 6844) = 0;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 6848));
  FIELD_U32(a1, 6848) = off_60BEE598;
  memset(a1 + 7216, 0, 128);
  ColliderNode_ctor((ColliderNode *)(a1 + 7248));
  ColliderNode_ctor((ColliderNode *)(a1 + 7280));
  ColliderNode_ctor((ColliderNode *)(a1 + 7312));
  memset(a1 + 7344, 0, 96);
  ColliderNode_ctor((ColliderNode *)(a1 + 7344));
  ColliderNode_ctor((ColliderNode *)(a1 + 7376));
  ColliderNode_ctor((ColliderNode *)(a1 + 7408));
  FIELD_U32(a1, 7244) = 0;
  FIELD_U32(a1, 7240) = 0;
  FIELD_U32(a1, 7236) = 0;
  FIELD_U32(a1, 7232) = 0;
  FIELD_U32(a1, 7228) = 0;
  FIELD_U32(a1, 7224) = 0;
  FIELD_U32(a1, 7220) = 0;
  FIELD_U32(a1, 7216) = 0;
  v11 = FIELD_U32(a1, 7156);
  v12 = FIELD_U32(a1, 7152);
  FIELD_U32(a1, 7276) = v11;
  FIELD_U32(a1, 7272) = v12;
  FIELD_U32(a1, 7372) = v11;
  FIELD_U32(a1, 7368) = v12;
  FIELD_U32(a1, 7308) = v11;
  FIELD_U32(a1, 7304) = v12;
  FIELD_U32(a1, 7404) = v11;
  FIELD_U32(a1, 7400) = v12;
  FIELD_U32(a1, 7340) = v11;
  FIELD_U32(a1, 7336) = v12;
  FIELD_U32(a1, 7436) = v11;
  FIELD_U32(a1, 7432) = v12;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(a1 + 6848), 3, a1 + 7216, a1 + 7248, a1 + 7344);
  FIELD_U32(a1, 7464) = 0;
  FIELD_U32(a1, 7460) = 0;
  FIELD_U32(a1, 7456) = 0;
  FIELD_U32(a1, 7452) = 0;
  FIELD_U32(a1, 7448) = 0;
  FIELD_U32(a1, 7444) = 0;
  FIELD_U32(a1, 7440) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7468));
  FIELD_U32(a1, 7772) = 0;
  FIELD_U32(a1, 7776) = 0;
  FIELD_U32(a1, 7780) = 0;
  FIELD_U32(a1, 7788) = 0;
  FIELD_U32(a1, 7784) = 0;
  return a1;
}
