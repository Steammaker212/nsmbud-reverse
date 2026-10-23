/* sub_605E1C54
 * address: 0x605E1C54   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E1C54(_DWORD *a1)
{
  a1[1566] |= 0x400000u;
  sub_605D79D0((int)a1, (StateBase *)&unk_60CB1788, 0);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 444))(a1);
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  sub_605D793C((int)a1);
  a1[26] = 0;
  sub_605EAB48(a1 + 1516, 0.0);
  a1[2003] = 0;
  return 8012;
}
