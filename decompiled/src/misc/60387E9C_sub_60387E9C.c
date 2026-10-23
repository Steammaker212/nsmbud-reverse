/* sub_60387E9C
 * address: 0x60387E9C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60387E9C(char *a1)
{
  *(_DWORD *)a1 = off_60BF3958;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 132));
  operator_delete(a1);
}
