/* sub_6066A220
 * address: 0x6066A220   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066A220(int a1)
{
  _DWORD *v2; // r5

  FIELD_U32(a1, 1516) = off_60BC6E38;
  v2 = (_DWORD *)(a1 + 1516);
  sub_60002B6C((StageActor *)(a1 + 1516));
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 1260) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 1260));
  sead__IDisposer__dtor((_DWORD *)(a1 + 1260));
  FIELD_U32(a1, 1004) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 1004));
  sead__IDisposer__dtor((_DWORD *)(a1 + 1004));
  FIELD_U32(a1, 748) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 748));
  sead__IDisposer__dtor((_DWORD *)(a1 + 748));
  FIELD_U32(a1, 492) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 492));
  sead__IDisposer__dtor((_DWORD *)(a1 + 492));
  FIELD_U32(a1, 236) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 236));
  sead__IDisposer__dtor((_DWORD *)(a1 + 236));
  return a1;
}
