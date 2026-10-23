/* sub_608B25EC
 * address: 0x608B25EC   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B25EC(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r6
  int v6; // r5
  int v7; // r5

  v4 = sub_608B175C(FIELD_U32(a1, 60), a2);
  v5 = v4;
  v6 = 0;
  if ( v4 && sub_608B1A60(v4) == 1 )
  {
    v7 = sub_608B1C54(v5);
    *(_DWORD *)a3 = sub_608B1FF4(v7);
    FIELD_U32(a3, 20) = FIELD_U32(v7, 8);
    FIELD_U8(a3, 24) = sub_608B200C(v7);
    FIELD_U8(a3, 25) = sub_608B2030(v7);
    sub_608B1F9C(v7, (int *)(a3 + 4));
    return 1;
  }
  return v6;
}
