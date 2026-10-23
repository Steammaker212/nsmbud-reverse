/* sub_603A5930
 * address: 0x603A5930   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A5930(int a1, int a2, int a3, float a4, float a5, float a6)
{
  float *v9; // r0
  int v10; // r1
  float v11; // s4
  float v12; // s6
  char v13; // r12
  int v14; // s2
  ShapedColliderInfo v16; // [sp+4h] [bp-3Ch] BYREF

  v9 = (float *)(a1 + 676);
  *v9 = a4;
  v9[1] = a5;
  v9[2] = a6;
  v10 = FIELD_U32(a1, 728);
  if ( !v10 )
  {
    v10 = a2;
    FIELD_U32(a1, 728) = a2;
  }
  v11 = FIELD_F32(v10, 112);
  v12 = FIELD_F32(v10, 23572);
  v16.distToCenter.x = a4 - FIELD_F32(v10, 108);
  v16.distToCenter.y = a5 - v11;
  v16.field_8 = 0.0;
  v16.field_C = 0.0;
  v16.topLeft.x = v12 * -0.5;
  v16.topLeft.y = v12 * 0.5;
  v16.bottomRight.x = v12 * 0.5;
  v16.bottomRight.y = v12 * -0.5;
  v16.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 8), (StageActor *)v10, &v16);
  FIELD_U32(a1, 320) = sub_603A5B40;
  FIELD_U32(a1, 324) = nullsub_3521;
  FIELD_U32(a1, 328) = nullsub_3522;
  if ( ((unsigned int)&dword_60C9797C & ~(1614436852 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60C9797C) )
  {
    dword_60C97978 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C9797C);
  }
  if ( a2 && (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C97978) == 1 && (FIELD_U8(a2, 23) & 0xC) != 0 )
  {
    FIELD_U32(a1, 332) = sub_603A5C88;
    FIELD_U32(a1, 336) = sub_603A5CA8;
    FIELD_U32(a1, 340) = sub_603A5CC8;
  }
  FIELD_U32(a1, 780) = a1 + 736;
  FIELD_F64(a1, 752) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 748))(a1 + 748);
  FIELD_U32(a1, 760) = v14;
  FIELD_U32(a1, 144) = 1;
  if ( a3 == 1 )
    ColliderBase_setType((ColliderBase *)(a1 + 8), 30);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 8));
  FIELD_U32(a1, 688) = FIELD_U32(a1, 676);
  FIELD_U32(a1, 692) = FIELD_U32(a1, 680);
  FIELD_U32(a1, 696) = FIELD_U32(a1, 684);
  FIELD_U32(a1, 164) = a1 + 688;
  FIELD_U32(a1, 160) = a1 + 676;
  return a1 + 688;
}
