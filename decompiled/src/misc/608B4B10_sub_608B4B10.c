/* sub_608B4B10
 * address: 0x608B4B10   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B4B10(int a1, int a2)
{
  if ( FIELD_U8(a1, 12) )
    return sub_608B4850(*(_DWORD *)a1) + *(_DWORD *)(FIELD_U32(a1, 4) + 12 * a2 + 8) + 8;
  else
    return 0;
}
