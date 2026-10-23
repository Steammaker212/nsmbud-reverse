/* sub_604EE80C
 * address: 0x604EE80C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EE80C(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0

  v2 = (_DWORD *)(a1 + 42520);
  sub_60473DE4((_DWORD *)(a1 + 42520), 0, &dword_60CA62E4, 0);
  sub_60473DE4(v2, 1u, &dword_60CA6304, 0);
  sub_60473DE4((_DWORD *)(a1 + 4), 0, &dword_60CA62E4, 0);
  sub_604F293C(a1);
  v3 = sub_60473B4C((int)v2);
  sub_6098F1D4(v3);
  FIELD_U8(a1, 74477) = 1;
  FIELD_U8(a1, 74478) = 1;
  FIELD_U8(a1, 74479) = 0;
  return SE_SYS_HURRY_UP_ref_8164F8(dword_60CC6B68, 4);
}
