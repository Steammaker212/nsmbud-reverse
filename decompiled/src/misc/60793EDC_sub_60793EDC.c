/* sub_60793EDC
 * address: 0x60793EDC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60793EDC(int result, int a2, int a3)
{
  if ( a3 >= 0 )
    return (*(int (__fastcall **)(_DWORD, int, int))(***(_DWORD ***)(result + 24) + 108))(
             **(_DWORD **)(result + 24),
             a3,
             a2);
  return result;
}
