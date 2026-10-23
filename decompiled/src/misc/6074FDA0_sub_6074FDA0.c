/* sub_6074FDA0
 * address: 0x6074FDA0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6074FDA0(int a1)
{
  *(_DWORD *)a1 = off_60C23C38;
  FIELD_U32(a1, 728) = off_60C2313C;
  sub_60959BAC(a1 + 4584);
  sub_609175E4(a1 + 4360);
  sub_604794C0((_DWORD *)(a1 + 728));
  FIELD_U32(a1, 708) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 708));
  sead__IDisposer__dtor((_DWORD *)(a1 + 708));
  return StageActor__dtor((Actor *)a1);
}
