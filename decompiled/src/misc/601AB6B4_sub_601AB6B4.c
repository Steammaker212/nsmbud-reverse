/* sub_601AB6B4
 * address: 0x601AB6B4   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601AB6B4(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r2

  v2 = FIELD_U32(a1, 80);
  FIELD_U32(a1, 348) = v2;
  v3 = FIELD_U32(a1, 84);
  FIELD_U32(a1, 352) = v3;
  v4 = FIELD_U32(a1, 88);
  FIELD_U32(a1, 356) = v4;
  FIELD_U32(a1, 324) = v2;
  FIELD_U32(a1, 328) = v3;
  FIELD_U32(a1, 332) = v4;
  sub_601AB740(a1);
  FIELD_U32(a1, 128) = 1075000115;
  FIELD_U32(a1, 132) = 1075000115;
  FIELD_U32(a1, 136) = 1075000115;
  sub_601ABAD4(a1);
  sub_601ABC5C(a1);
  sub_60427BC8(dword_60C9BBD4, **(_DWORD **)(a1 + 272), FIELD_U8(a1, 240), FIELD_U8(a1, 244));
  FIELD_U32(a1, 212) = 1116471296;
  return 1;
}
