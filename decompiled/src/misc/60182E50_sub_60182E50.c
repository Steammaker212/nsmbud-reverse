/* sub_60182E50
 * address: 0x60182E50   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60182E50(int a1, unsigned int a2)
{
  if ( a2 >= 0x100 )
    a2 = 0;
  return *(_DWORD *)(a1 + 1096 * a2 + 1124);
}
