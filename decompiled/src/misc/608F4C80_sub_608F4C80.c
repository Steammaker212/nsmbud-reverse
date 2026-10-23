/* sub_608F4C80
 * address: 0x608F4C80   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F4C80(int a1, int a2)
{
  int v4; // r0

  v4 = sub_608F2CB4(a1);
  return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v4 + 4))(v4, a1, a2);
}
