/* sub_607CE754
 * address: 0x607CE754   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_607CE754(int a1, int a2)
{
  int v4; // r0

  v4 = sub_607D6C28(a1);
  if ( v4 )
    return (int *)(*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 628))(v4, a2);
  else
    return sub_607666B0(a1, a2);
}
