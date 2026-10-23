/* sub_60518E70
 * address: 0x60518E70   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60518E70(int a1)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)a1;
  StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA895C);
  v1 += 10;
  sub_60473DE4(v1, 0, &dword_60CA8944, 0);
  return sub_60473DE4(v1, 1u, &dword_60CA894C, 1);
}
