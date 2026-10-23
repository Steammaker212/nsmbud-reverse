/* sub_605B750C
 * address: 0x605B750C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605B750C(int a1)
{
  _DWORD *v2; // r5

  FIELD_U32(a1, 140) = off_60BC6E38;
  v2 = (_DWORD *)(a1 + 140);
  sub_60002B6C((StageActor *)(a1 + 140));
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 120) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 120));
  sead__IDisposer__dtor((_DWORD *)(a1 + 120));
  FIELD_U32(a1, 100) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 100));
  sead__IDisposer__dtor((_DWORD *)(a1 + 100));
  FIELD_U32(a1, 80) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 80));
  sead__IDisposer__dtor((_DWORD *)(a1 + 80));
  FIELD_U32(a1, 60) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 60));
  sead__IDisposer__dtor((_DWORD *)(a1 + 60));
  FIELD_U32(a1, 40) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 40));
  sead__IDisposer__dtor((_DWORD *)(a1 + 40));
  FIELD_U32(a1, 20) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 20));
  sead__IDisposer__dtor((_DWORD *)(a1 + 20));
  *(_DWORD *)a1 = off_60BC6E38;
  sub_60002B6C((StageActor *)a1);
  return sead__IDisposer__dtor((_DWORD *)a1);
}
