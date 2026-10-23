/* Actor_kira_2_build
 * address: 0x6031FD44   size: 112   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_kira_2_build(int a1)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)operator_new(0x3358u);
  sub_60321050(v2, a1);
  *v2 = off_60BEAD58;
  v2[3265] = 0;
  v2[3266] = 0;
  v2[3267] = 0;
  sub_602A8564(v2 + 3268, v2[2]);
  sub_602A40A0(v2 + 3277, v2[2]);
  return v2;
}
