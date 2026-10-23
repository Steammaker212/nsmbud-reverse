/* sub_608B4AEC
 * address: 0x608B4AEC   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B4AEC(int a1, int a2)
{
  if ( FIELD_U8(a1, 12) )
    return *(_DWORD *)(FIELD_U32(a1, 4) + 12 * a2 + 12);
  else
    return 0;
}
