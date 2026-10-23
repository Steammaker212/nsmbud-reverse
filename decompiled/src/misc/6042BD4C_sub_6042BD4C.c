/* sub_6042BD4C
 * address: 0x6042BD4C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042BD4C(int a1, int a2)
{
  sub_6090B310(dword_60CCF464);
  sub_6042BD90(a1);
  sub_6042BEE0(a1);
  FIELD_U32(a1, 768) = a2;
  sub_6090B32C(dword_60CCF464);
  return 1;
}
