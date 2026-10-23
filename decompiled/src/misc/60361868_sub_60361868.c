/* sub_60361868
 * address: 0x60361868   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60361868(int a1)
{
  int v2; // r0
  float v3; // s0
  int v4; // r0
  int v5; // r1
  int v6; // r2
  ColliderBase *v7; // r4

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7032));
  if ( v2 )
  {
    sub_606AE1F0(v2, 0);
    if ( FIELD_U8(a1, 7037) )
    {
      FIELD_F32(a1, 112) = v3 + FIELD_F32(a1, 6308);
      FIELD_F32(a1, 496) = FIELD_F32(a1, 7028) - v3;
    }
    else
    {
      FIELD_F32(a1, 108) = v3 + FIELD_F32(a1, 6304);
      FIELD_F32(a1, 492) = FIELD_F32(a1, 7024) - v3;
    }
  }
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  if ( ((int (__fastcall *)(int, int))loc_6069B070)(a1 + 6984, a1 + 108) )
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
    v7 = (ColliderBase *)(a1 + 6328);
    sub_60160948(v7);
  }
  else
  {
    v7 = (ColliderBase *)(a1 + 6328);
  }
  return ShapedCollider_execute(v7);
}
