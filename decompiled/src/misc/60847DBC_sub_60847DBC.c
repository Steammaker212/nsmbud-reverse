/* sub_60847DBC
 * address: 0x60847DBC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60847DBC(int a1, int a2)
{
  int result; // r0

  sub_60998EF4(a1);
  FIELD_U32(a1, 16) = 32;
  FIELD_U8(a1, 1) = 2;
  FIELD_U32(a1, 12) = dword_60B0E900[FIELD_U8(a2, 8)];
  FIELD_U32(a1, 20) = FIELD_U16(a2, 4);
  FIELD_U32(a1, 24) = FIELD_U16(a2, 6);
  FIELD_U16(a1, 6) = FIELD_U8(a2, 9);
  result = dword_60AF1E80[FIELD_U8(a2, 10)];
  FIELD_U16(a1, 2) = result;
  return result;
}
