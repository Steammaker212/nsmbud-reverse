/* sub_60674D70
 * address: 0x60674D70   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60674D70(int a1)
{
  int v2; // r6
  int *v3; // r5

  FIELD_U32(a1, 116) = 0;
  v2 = FIELD_U32(a1, 20) & 3;
  if ( v2 == 3 )
    v2 = 0;
  v3 = &dword_60CB7B58[2 * (v2 | (4 * v2))];
  sub_60674EA4(a1, v3);
  sub_6067506C(a1);
  ShapedCollider_init((ShapedCollider *)(a1 + 6392), (StageActor *)a1, (ShapedColliderInfo *)v3);
  if ( *((_BYTE *)v3 + 36) )
  {
    ShapedCollider_init((ShapedCollider *)(a1 + 7048), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CB7AF8);
    FIELD_U32(a1, 7384) = a1 + 8376;
    ColliderBase_setSolidity((ColliderBase *)(a1 + 7048), 0);
    FIELD_U8(a1, 7704) = 1;
  }
  if ( BYTE1(dword_60CB7B58[10 * v2 + 9]) )
  {
    ShapedCollider_init((ShapedCollider *)(a1 + 7712), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CB7B1C);
    FIELD_U32(a1, 8048) = a1 + 8380;
    ColliderBase_setSolidity((ColliderBase *)(a1 + 7712), 0);
    FIELD_U8(a1, 8368) = 1;
  }
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = -1040187392;
  return 1;
}
