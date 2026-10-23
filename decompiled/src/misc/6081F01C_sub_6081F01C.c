/* sub_6081F01C
 * address: 0x6081F01C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6081F01C(int a1, unsigned int a2, _DWORD *a3)
{
  if ( a2 >= 0x12 )
    a2 = 0;
  return sub_6019EC34((_DWORD *)(a1 + 12 * a2 + 540), a3);
}
