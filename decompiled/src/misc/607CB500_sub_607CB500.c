/* sub_607CB500
 * address: 0x607CB500   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CB500(int a1, float a2)
{
  if ( (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 140))(a1, a2) == 1 )
    return sub_60793DB4(a1, a2);
  else
    return sub_60793DA0(a1, a2);
}
