/* sub_6037943C
 * address: 0x6037943C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037943C(int a1, unsigned int a2)
{
  if ( a2 >= 2 )
    a2 = 0;
  return ((int (__fastcall *)(int))off_60BF142C[2 * *(unsigned __int16 *)(a1 + 8 * a2 + 6)])(a1 + ((int)off_60BF142C[2 * *(unsigned __int16 *)(a1 + 8 * a2 + 6) + 1] >> 1));
}
