/* sub_601A299C
 * address: 0x601A299C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A299C(int a1)
{
  sub_60023F4C();
  sub_601A2F94(a1);
  sub_601A3024(a1);
  sub_601A29FC(a1);
  FIELD_U16(a1, 299220) = 137;
  FIELD_U8(a1, 299222) = 0;
  FIELD_U8(a1, 299223) = 0;
  FIELD_U8(a1, 299224) = 0;
  return 299224;
}
