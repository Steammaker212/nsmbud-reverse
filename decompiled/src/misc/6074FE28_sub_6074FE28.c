/* sub_6074FE28
 * address: 0x6074FE28   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6074FE28(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60C23C38;
  FIELD_U32(a1, 728) = off_60C2313C;
  sub_60959BAC(a1 + 4584);
  sub_609175E4(a1 + 4360);
  sub_604794C0((_DWORD *)(a1 + 728));
  FIELD_U32(a1, 708) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 708));
  sead__IDisposer__dtor((_DWORD *)(a1 + 708));
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
