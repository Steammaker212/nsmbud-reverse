/* sub_6073C130
 * address: 0x6073C130   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073C130(int a1)
{
  int v1; // r4

  v1 = a1 + 6268;
  FIELD_U32(a1, 6268) &= ~0x10u;
  FIELD_U32(a1, 8072) = 1;
  ((void (__fastcall *)(int, int, float, float, float))loc_605EA46C)(a1 + 6064, 1, 3.0, 1.4, 0.0);
  *(_DWORD *)(v1 - 6148) = -1082130432;
  FIELD_U32(v1, 1740) = 0;
  return 0;
}
