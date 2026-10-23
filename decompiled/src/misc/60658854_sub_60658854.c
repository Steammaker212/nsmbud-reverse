/* sub_60658854
 * address: 0x60658854   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60658854(int a1)
{
  ColliderBase *v2; // r5
  float v3; // s4
  int v4; // r0
  int v5; // r1
  int v6; // r2
  float v8[6]; // [sp+8h] [bp-18h] BYREF

  v2 = (ColliderBase *)(a1 + 6152);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6152));
  FIELD_U32(a1, 6396) = FIELD_U32(a1, 164);
  ShapedCollider_execute(v2);
  v3 = FIELD_F32(a1, 504);
  v8[0] = FIELD_F32(a1, 500) + 64.0;
  v8[1] = v3 + 64.0;
  if ( sub_6069AFA0(a1 + 6808, a1 + 108, a1 + 492, v8, v2) == 1 )
  {
    v4 = FIELD_U32(a1, 108);
    v5 = FIELD_U32(a1, 112);
    v6 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 584) = v4;
    FIELD_U32(a1, 588) = v5;
    FIELD_U32(a1, 592) = v6;
    FIELD_U32(a1, 608) = v4;
    FIELD_U32(a1, 612) = v5;
    FIELD_U32(a1, 616) = v6;
    sub_60160948(v2);
  }
  return sub_60658908(a1);
}
