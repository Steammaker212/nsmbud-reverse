/* sub_605CCEC8
 * address: 0x605CCEC8   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CCEC8(int a1)
{
  unsigned int v2; // r1
  __int64 v4; // [sp+30h] [bp-10h] BYREF

  v4 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
  v2 = FIELD_U32(a1, 20);
  ((void (__fastcall *)(int, int, int, __int64 *, int, unsigned int, unsigned int, unsigned int, unsigned int, _DWORD, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))sub_605CD938)(
    a1 + 648,
    a1 + 164,
    a1 + 108,
    &v4,
    FIELD_U16(a1, 26) & 7,
    HIBYTE(v2) & 0xF,
    v2 >> 28,
    HIWORD(v2) & 3,
    (v2 >> 12) & 1,
    FIELD_U8(a1, 28),
    (v2 >> 13) & 1,
    (v2 >> 9) & 1,
    (v2 >> 8) & 1,
    (v2 >> 14) & 1,
    (v2 >> 10) & 3,
    (v2 >> 18) & 3);
  return 1;
}
