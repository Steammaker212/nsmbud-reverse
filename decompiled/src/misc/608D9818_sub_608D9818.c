/* sub_608D9818
 * address: 0x608D9818   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608D9818(_DWORD *a1)
{
  if ( (*a1 & 2) != 0 )
    return *(float *)&a1[(*a1 & 1) + 1];
  else
    return 1.0;
}
