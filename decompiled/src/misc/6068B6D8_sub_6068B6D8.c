/* sub_6068B6D8
 * address: 0x6068B6D8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068B6D8(int a1)
{
  float v2; // s0
  float v3; // s2
  float v4; // s6
  float v6[14]; // [sp+0h] [bp-38h] BYREF

  v2 = FIELD_F32(a1, 4);
  v3 = FIELD_F32(a1, 16) * 0.5;
  v6[0] = v2 - v3;
  v4 = FIELD_F32(a1, 8);
  v6[1] = v4 + v3;
  v6[2] = 1.0;
  v6[3] = v2 - v3;
  v6[4] = v4 - v3;
  v6[5] = 1.0;
  v6[6] = v2 + v3;
  v6[7] = v4 - v3;
  v6[8] = 1.0;
  v6[9] = v2 + v3;
  v6[10] = v4 + v3;
  v6[11] = 1.0;
  sub_6068A698(*(_DWORD **)(a1 + 24), v6);
  sub_6068AD3C(FIELD_U32(a1, 20));
  return 1;
}
