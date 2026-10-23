/* sub_6088B2E4
 * address: 0x6088B2E4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088B2E4(_DWORD *a1)
{
  int v1; // r1

  v1 = 0;
  if ( !*(_BYTE *)(*(_DWORD *)(a1[1] + 136) + 1874) )
  {
    sub_6088E6EC(*a1, FIELD_U32(SuperStripe_instance, 4));
    return 1;
  }
  return v1;
}
