/* sub_607CF1EC
 * address: 0x607CF1EC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CF1EC(int a1)
{
  int v2; // r1
  int v3; // r0
  int v4; // r1

  sub_607D7F60();
  FIELD_U32(a1, 11420) = FIELD_S8(a1, 84);
  FIELD_U32(a1, 1236) |= 0x400000u;
  v2 = FIELD_U32(a1, 80);
  FIELD_U32(a1, 11424) = v2;
  v3 = sub_60773F3C(a1, v2);
  v4 = FIELD_U32(a1, 160);
  if ( v3 < 0 )
    v3 = -v3;
  if ( v4 < 0 )
    v4 = -v4;
  if ( v3 <= v4 )
    SE_PLY_YOSHI_TONGUE_ref(a1);
  else
    FIELD_U32(a1, 11428) = 0;
  FIELD_U32(a1, 11448) = 10;
  FIELD_U8(a1, 11462) = 0;
  FIELD_U8(a1, 11461) = 0;
  return 11461;
}
