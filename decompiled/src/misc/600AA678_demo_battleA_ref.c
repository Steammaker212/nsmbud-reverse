/* demo_battleA_ref
 * address: 0x600AA678   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall demo_battleA_ref(_DWORD *a1)
{
  int result; // r0

  sub_60421AD4(a1[1774]);
  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 1316))(a1);
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[25] = 0;
  return result;
}
