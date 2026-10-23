/* sub_608B2A38
 * address: 0x608B2A38   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B2A38(int a1, int a2, _DWORD *a3)
{
  int v4; // r0
  int v5; // r6
  int v6; // r5

  v4 = sub_608B175C(FIELD_U32(a1, 60), a2);
  v5 = v4;
  v6 = 0;
  if ( v4 && sub_608B1A60(v4) == 3 )
  {
    v6 = 1;
    *a3 = *(_DWORD *)sub_608B1C48(v5);
  }
  return v6;
}
