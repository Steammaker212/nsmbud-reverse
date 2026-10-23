/* Actor_sunekuburoku_RDashfor_build_helper
 * address: 0x603A9F54   size: 484   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_sunekuburoku_RDashfor_build_helper(int a1, ActorBuildInfo *a2)
{
  RectCollider *v3; // r0
  RectCollider *v4; // r0
  bool v5; // zf

  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BF47B0;
  FIELD_U32(a1, 6304) = off_60BF4A30;
  RectCollider_ctor((RectCollider *)(a1 + 6312))->_._._.vtable = (int)&off_60BF4A50;
  FIELD_U32(a1, 7032) = 0;
  FIELD_U16(a1, 7036) = 0;
  FIELD_U32(a1, 7056) = 1065353216;
  FIELD_U32(a1, 7060) = 1065353216;
  FIELD_U32(a1, 7064) = 1065353216;
  FIELD_U32(a1, 7068) = 1065353216;
  FIELD_U32(a1, 7072) = 0;
  FIELD_U32(a1, 7076) = 0;
  FIELD_U32(a1, 7080) = 0;
  FIELD_U32(a1, 7052) = &off_60BF4AA8;
  FIELD_U32(a1, 6304) = off_60BF4A40;
  FIELD_U32(a1, 7096) = off_60BF4A30;
  RectCollider_ctor((RectCollider *)(a1 + 7104));
  FIELD_U32(a1, 7104) = &off_60BF4A50;
  FIELD_U32(a1, 7824) = 0;
  FIELD_U16(a1, 7828) = 0;
  FIELD_U32(a1, 7844) = &off_60BF4AA8;
  FIELD_U32(a1, 7848) = 1065353216;
  FIELD_U32(a1, 7852) = 1065353216;
  FIELD_U32(a1, 7856) = 1065353216;
  FIELD_U32(a1, 7860) = 1065353216;
  FIELD_U32(a1, 7864) = 0;
  FIELD_U32(a1, 7868) = 0;
  FIELD_U32(a1, 7872) = 0;
  FIELD_U32(a1, 7096) = off_60BF4A40;
  v3 = (RectCollider *)(a1 + 7896);
  do
  {
    v3[-1].nodes[7].field_18 = (int)off_60BF4A30;
    v4 = RectCollider_ctor(v3);
    FIELD_U32(v4, 0x0) = (int)&off_60BF4A50;
    v4[1]._._.nodes[4].owner = 0;
    LOWORD(v4[1]._._.nodes[4].next) = 0;
    v4[1]._._.nodes[5].prev = (ColliderListNode *)&off_60BF4AA8;
    v4[1]._._.nodes[6].owner = (ColliderBase *)1065353216;
    v4[1]._._.nodes[6].next = (ColliderListNode *)1065353216;
    v4[1]._._.nodes[6].prev = (ColliderListNode *)1065353216;
    v4[1]._._.nodes[7].owner = (ColliderBase *)1065353216;
    v4[1]._._.nodes[7].next = 0;
    v4[1]._._.nodes[7].prev = 0;
    v4[1]._._.field_70 = 0.0;
    v5 = (RectCollider *)&v4[1]._._.field_78 == (RectCollider *)(a1 + 23568);
    v3 = (RectCollider *)((char *)v4 + 784);
  }
  while ( !v5 );
  FIELD_U32(a1, 23576) = 0;
  FIELD_U32(a1, 23584) = 0;
  FIELD_U16(a1, 23588) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 23624));
  FIELD_U32(a1, 23928) = off_60BF4780;
  FIELD_U8(a1, 23612) = 0;
  FIELD_U32(a1, 23616) = 0;
  return a1;
}
