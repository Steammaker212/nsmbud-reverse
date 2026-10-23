/* Actor_jugemu_maruchipureifor_build
 * address: 0x603026B4   size: 228   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_jugemu_maruchipureifor_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x1BC8u);
  Actor_jugemu_maruchipureifor_build_helper(v2, a1);
  *(_DWORD *)v2 = off_60BE8EBC;
  FIELD_U32(v2, 6956) = 0;
  FIELD_U32(v2, 6960) = 0;
  FIELD_U32(v2, 6964) = 0;
  FIELD_U32(v2, 6968) = 1065353216;
  FIELD_U32(v2, 6972) = 1065353216;
  FIELD_U32(v2, 6976) = 1065353216;
  FIELD_U32(v2, 7012) = 0;
  FIELD_U32(v2, 7016) = 0;
  FIELD_U32(v2, 7020) = 0;
  memset((void *)(v2 + 6980), 0, 31);
  FIELD_U8(v2, 7034) = 0;
  FIELD_U16(v2, 7032) = 0;
  FIELD_U32(v2, 7028) = 0;
  sub_6000BAC8((_DWORD *)(v2 + 7036), FIELD_U32(v2, 8));
  FIELD_U32(v2, 7036) = off_60BE9160;
  FIELD_U32(v2, 7072) = v2;
  sub_602A40A0((_DWORD *)(v2 + 7076), FIELD_U32(v2, 8));
  return v2;
}
