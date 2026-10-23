/* sub_608C1208
 * address: 0x608C1208   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C1208(int a1, _DWORD *a2, int a3)
{
  int v4; // r0
  int v5; // r0

  v4 = FIELD_U32(a1, 12) + 20 * a3;
  *a2 = FIELD_U32(v4, 4);
  a2[1] = FIELD_U32(v4, 8);
  v5 = sub_608D9708();
  a2[2] = nullsub_106(v5);
  return 1;
}
