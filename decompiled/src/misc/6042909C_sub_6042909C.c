/* sub_6042909C
 * address: 0x6042909C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6042909C(int a1, int a2, int a3)
{
  int v6; // r7

  v6 = a1 + 576;
  sub_6086C280(a1 + 576, FIELD_U32(dword_60CCFC8C, 24));
  sub_6086C584(v6, FIELD_U32(dword_60CCFC8C, 24), a2, a3, FIELD_U32(a1, 768));
  sub_6043E808(a1 + 16, v6);
  sub_6086C63C(v6, 0);
  return (FIELD_U32(a1, 768) + 255) & 0xFFFFFF00;
}
