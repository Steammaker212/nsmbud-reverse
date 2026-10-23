/* sub_605CDFF0
 * address: 0x605CDFF0   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CDFF0(int a1)
{
  int v1; // r4
  unsigned int v2; // r0
  __int64 v4; // [sp+30h] [bp-10h] BYREF

  v1 = a1 + 108;
  FIELD_U32(a1, 6232) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6236) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6240) = FIELD_U32(a1, 116);
  v4 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
  v2 = *(_DWORD *)(v1 - 88);
  sub_605CD938(
    v1 + 6012,
    (_DWORD *)(v1 + 56),
    v1,
    &v4,
    HIWORD(*(_DWORD *)(v1 - 84)) & 7,
    (*(_DWORD *)(v1 - 84) >> 20) & 0xF,
    v2 >> 28,
    HIWORD(v2) & 3,
    (*(_DWORD *)(v1 - 84) >> 19) & 1,
    *(_BYTE *)(v1 - 80),
    (v2 >> 13) & 1,
    (v2 & 0x100000) != 0,
    (v2 & 0x40000) != 0,
    (v2 >> 14) & 1,
    0,
    0);
  return 1;
}
