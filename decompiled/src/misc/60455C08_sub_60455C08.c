/* sub_60455C08
 * address: 0x60455C08   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60455C08(int a1, unsigned __int8 *a2)
{
  sub_60905558(a1, *a2);
  sub_60905558(a1, a2[1]);
  sub_60905558(a1, a2[2]);
  sub_60905558(a1, a2[3]);
  return sub_609055B0(a1, *((_DWORD *)a2 + 1));
}
