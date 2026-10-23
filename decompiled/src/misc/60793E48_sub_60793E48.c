/* sub_60793E48
 * address: 0x60793E48   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60793E48(int a1, int a2, int a3)
{
  int v4; // r6
  int result; // r0

  v4 = **(_DWORD **)(a1 + 24);
  result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 84))(v4, a3);
  if ( result == -1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 108))(v4);
  if ( result >= 0 )
    return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 24) + 108))(**(_DWORD **)(a1 + 24));
  return result;
}
