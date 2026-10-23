/* sub_608B2598
 * address: 0x608B2598   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B2598(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r5
  int v6; // r0

  v4 = sub_608B175C(FIELD_U32(a1, 60), a2);
  v5 = 0;
  if ( v4 )
  {
    v6 = sub_608B1C60(v4);
    if ( v6 )
    {
      v5 = 1;
      *(_DWORD *)a3 = *(_DWORD *)v6;
      FIELD_U32(a3, 4) = FIELD_U32(v6, 4);
      FIELD_U8(a3, 8) = FIELD_U8(v6, 8);
      FIELD_U8(a3, 9) = FIELD_U8(v6, 9);
    }
  }
  return v5;
}
