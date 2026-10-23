/* sub_605E05C8
 * address: 0x605E05C8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E05C8(_DWORD *a1)
{
  sub_605D79D0((int)a1, (StateBase *)&unk_60CB1788, 0);
  a1[1566] |= 0x2000000u;
  a1[1567] |= 1u;
  sub_605D845C(a1);
  a1[2003] = 0;
  return 8012;
}
