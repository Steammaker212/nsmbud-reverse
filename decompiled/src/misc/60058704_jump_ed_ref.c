/* jump_ed_ref
 * address: 0x60058704   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jump_ed_ref(_DWORD *a1)
{
  int result; // r0

  sub_60421AD4(a1[1801]);
  result = (*(int (__fastcall **)(_DWORD *, float))(*a1 + 1120))(a1, 0.0);
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  return result;
}
