/* sub_6021044C
 * address: 0x6021044C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021044C(int a1)
{
  int *v2; // r0
  int v3; // r0

  v2 = (int *)sub_601DFFE4(a1 + 300);
  v3 = sub_601693DC(903, v2[21], v2[22], v2[24]);
  sub_60204DB8(v3, 0, 0, 2.5, 1.5);
  FIELD_U8(a1, 216) &= ~2u;
  FIELD_U32(a1, 416) = 5;
  FIELD_U32(a1, 464) = 1;
  return 1;
}
