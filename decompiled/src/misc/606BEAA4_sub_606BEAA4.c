/* sub_606BEAA4
 * address: 0x606BEAA4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BEAA4(int a1)
{
  _DWORD *v1; // r4
  int v2; // t1
  int result; // r0

  v1 = (_DWORD *)a1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  ((void (__fastcall *)(_DWORD *))loc_60021148)(v1 + 1704);
  v2 = v1[1799];
  v1 += 1799;
  *v1 = v2 + *(v1 - 92);
  result = *(v1 - 91);
  v1[1] = result;
  return result;
}
