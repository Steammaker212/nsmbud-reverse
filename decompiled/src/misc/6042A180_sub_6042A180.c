/* sub_6042A180
 * address: 0x6042A180   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042A180(int a1, int a2, unsigned int a3)
{
  int v3; // r3
  int v4; // r1
  int v5; // r3
  int v6; // r1
  unsigned int v7; // r3

  v3 = FIELD_U32(a1, 8);
  v4 = v3 + a2;
  v5 = FIELD_U32(a1, 4) + v3;
  v6 = v4 - v5;
  v7 = (a3 + v5 - 1) / a3;
  FIELD_U32(a1, 8) = v6 + v7 * a3;
  return v7 * a3;
}
