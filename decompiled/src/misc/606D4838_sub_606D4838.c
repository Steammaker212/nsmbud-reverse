/* sub_606D4838
 * address: 0x606D4838   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D4838(int a1, unsigned int a2)
{
  if ( a2 <= 3 )
    return ((int (*)(void))((char *)dword_606D4854 + dword_606D4854[a2]))();
  else
    return 0;
}
