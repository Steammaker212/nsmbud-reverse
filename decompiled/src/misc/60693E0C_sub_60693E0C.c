/* sub_60693E0C
 * address: 0x60693E0C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60693E0C(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60C17BA4;
  ShapedCollider_dtor((ColliderBase *)(a1 + 1896));
  FIELD_U32(a1, 684) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 684));
  sead__IDisposer__dtor((_DWORD *)(a1 + 684));
  FIELD_U32(a1, 664) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 664));
  sead__IDisposer__dtor((_DWORD *)(a1 + 664));
  FIELD_U32(a1, 644) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 644));
  sead__IDisposer__dtor((_DWORD *)(a1 + 644));
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
