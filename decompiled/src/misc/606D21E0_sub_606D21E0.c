/* sub_606D21E0
 * address: 0x606D21E0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D21E0(int a1)
{
  _DWORD *v2; // r5

  FIELD_U32(a1, 208) = off_60BC6E38;
  v2 = (_DWORD *)(a1 + 208);
  sub_60002B6C((StageActor *)(a1 + 208));
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 188) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 188));
  sead__IDisposer__dtor((_DWORD *)(a1 + 188));
  FIELD_U32(a1, 168) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 168));
  sead__IDisposer__dtor((_DWORD *)(a1 + 168));
  FIELD_U32(a1, 148) = off_60BC6E38;
  sub_60002B6C((StageActor *)(a1 + 148));
  sead__IDisposer__dtor((_DWORD *)(a1 + 148));
  return a1;
}
