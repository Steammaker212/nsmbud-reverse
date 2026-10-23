/* sub_60674D14
 * address: 0x60674D14   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60674D14(int a1, int a2, _DWORD *a3)
{
  int v3; // r1

  v3 = FIELD_U32(a2, 144);
  FIELD_U32(v3, 6100) = *a3;
  FIELD_U32(v3, 6104) = a3[1];
  FIELD_U8(v3, 6114) = 1;
  return 1;
}
