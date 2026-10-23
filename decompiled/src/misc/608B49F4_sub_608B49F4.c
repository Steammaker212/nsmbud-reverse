/* sub_608B49F4
 * address: 0x608B49F4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608B49F4(int a1)
{
  int v2; // r4

  if ( !FIELD_U8(a1, 12) )
    return 0;
  v2 = *(_DWORD *)a1;
  return *(_DWORD *)(v2 + sub_608B4850(*(_DWORD *)a1)) == 1413568326;
}
