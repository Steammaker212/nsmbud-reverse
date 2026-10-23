/* sub_607CE718
 * address: 0x607CE718   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_607CE718(int a1, int a2)
{
  int v4; // r0

  v4 = sub_607D6C28(a1);
  if ( v4 )
    return (int *)(*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 624))(v4, a2);
  else
    return sub_60766698(a1, a2);
}
