/* sub_608B2BAC
 * address: 0x608B2BAC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B2BAC(int a1, _DWORD *a2, int a3, int a4)
{
  int v6; // r0

  v6 = sub_608B175C(FIELD_U32(a1, 60), a3);
  if ( v6 )
    return sub_608B1E38(v6, a2, a4);
  else
    return 0;
}
