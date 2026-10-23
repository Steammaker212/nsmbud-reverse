/* sub_60531B9C
 * address: 0x60531B9C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60531B9C(int a1)
{
  int result; // r0

  sub_60531C68();
  FIELD_U32(a1, 4004) = 0;
  FIELD_U32(a1, 4004) += sub_6040E588(0);
  FIELD_U32(a1, 4004) += sub_6040E588(1);
  FIELD_U32(a1, 4004) += sub_6040E588(2);
  FIELD_U32(a1, 4004) += sub_6040E588(3);
  FIELD_U32(a1, 4004) += sub_6040E588(4);
  FIELD_U32(a1, 4004) += sub_6040E588(5);
  FIELD_U32(a1, 4004) += sub_6040E588(6);
  FIELD_U32(a1, 4004) += sub_6040E588(7);
  result = FIELD_U32(a1, 4004) + sub_6040E588(8);
  FIELD_U32(a1, 4004) = result;
  return result;
}
