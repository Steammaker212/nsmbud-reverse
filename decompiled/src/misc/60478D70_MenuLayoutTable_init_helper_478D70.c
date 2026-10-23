/* MenuLayoutTable_init_helper_478D70
 * address: 0x60478D70   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MenuLayoutTable_init_helper_478D70(_DWORD *a1, int a2, int a3)
{
  int v6; // r0
  int result; // r0

  sub_6047778C(a1, a2, a3);
  v6 = sub_60853DE0(a2, 2);
  a1[34] = sub_60980A38(a3, v6, 0);
  result = FIELD_U32(a3, 12);
  a1[55] = result;
  return result;
}
