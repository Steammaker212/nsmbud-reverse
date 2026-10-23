/* sub_60450C98
 * address: 0x60450C98   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60450C98(int a1, const void *a2, unsigned int a3)
{
  if ( a3 >= 0xC )
    a3 = 0;
  qmemcpy((void *)(*(_DWORD *)(a1 + 4 * a3 + 16) + 752), a2, 0x68u);
}
