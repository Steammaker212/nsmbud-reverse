/* sub_607C4684
 * address: 0x607C4684   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C4684(int a1)
{
  char v2; // r1
  _DWORD *v3; // r0
  unsigned int v4; // r0
  int result; // r0

  v2 = FIELD_U8(a1, 6902);
  v3 = (_DWORD *)(a1 + 9940);
  if ( (v2 & 4) != 0 )
  {
    *v3 = 1;
    FIELD_U32(a1, 1224) &= ~0x400u;
    v4 = FIELD_U32(a1, 1228) | 0x20000;
  }
  else
  {
    *v3 = 0;
    FIELD_U32(a1, 1224) |= 0x400u;
    v4 = FIELD_U32(a1, 1228) & 0xFFFDFFFF;
  }
  FIELD_U32(a1, 1228) = v4;
  SE_PLY_QUAT_ref(a1);
  sub_60774778(a1);
  FIELD_U32(a1, 160) = sub_60773F3C(a1, FIELD_U32(a1, 80));
  FIELD_U32(a1, 1216) |= 0x4000000u;
  FIELD_U32(a1, 1228) |= 0x4000u;
  result = FIELD_U32(a1, 1224) | 0x9020;
  FIELD_U32(a1, 1224) = result;
  return result;
}
