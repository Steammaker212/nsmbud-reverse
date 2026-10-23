/* sub_607C9B1C
 * address: 0x607C9B1C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607C9B1C(int a1)
{
  FIELD_U32(a1, 536) &= ~2u;
  sub_6078E940(a1, *(int **)(a1 + 24));
  sub_6078EE88(a1, *(_DWORD **)(a1 + 24));
}
