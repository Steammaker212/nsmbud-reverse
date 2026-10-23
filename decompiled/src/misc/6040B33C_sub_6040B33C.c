/* sub_6040B33C
 * address: 0x6040B33C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040B33C(int a1)
{
  int v1; // r4

  FIELD_U32(a1, 6472) = 0;
  FIELD_U8(a1, 6476) = 0;
  FIELD_U8(a1, 6478) = 0;
  v1 = a1 + 6478;
  FIELD_U8(a1, 6481) = 0;
  FIELD_U8(a1, 6480) = 0;
  FIELD_U8(a1, 6479) = 0;
  FIELD_U32(a1, 6484) = 10;
  FIELD_U32(a1, 6492) = 0;
  FIELD_U32(a1, 6496) = 0;
  FIELD_U32(a1, 6500) = 0;
  FIELD_U32(a1, 6504) = 0;
  FIELD_U32(a1, 6508) = 0;
  FIELD_U16(a1, 6512) = -1;
  FIELD_U8(a1, 6559) = 0;
  memset((void *)(a1 + 6514), 0, 0x2Cu);
  FIELD_U16(v1, 82) = 2050;
  FIELD_U8(v1, 84) = 0;
  return 2050;
}
