/* sub_60455A58
 * address: 0x60455A58   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60455A58(int a1, int a2)
{
  sub_609055B0(a1, *(_DWORD *)a2);
  sub_60905558(a1, FIELD_U8(a2, 4));
  sub_60905558(a1, FIELD_U8(a2, 5));
  sub_60905558(a1, FIELD_U8(a2, 6));
  sub_60905558(a1, FIELD_U8(a2, 7));
  sub_609055B0(a1, FIELD_U32(a2, 8));
  sub_609055B0(a1, FIELD_U32(a2, 12));
  sub_609055B0(a1, FIELD_U32(a2, 16));
  sub_609055B0(a1, FIELD_U32(a2, 20));
  sub_609055B0(a1, FIELD_U32(a2, 24));
  sub_60455558(a1, (unsigned __int8 *)(a2 + 28));
  return sub_6045588C(a1, a2 + 44);
}
