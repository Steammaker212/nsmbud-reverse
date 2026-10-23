/* sub_6098CC64
 * address: 0x6098CC64   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098CC64(_DWORD *a1)
{
  int v1; // r4
  int v2; // r1

  v1 = a1[6];
  v2 = (*(int (__fastcall **)(_DWORD *))(*a1 + 68))(a1);
  return sub_60981158(v1, v2);
}
