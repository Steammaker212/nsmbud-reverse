/* sub_600C8524
 * address: 0x600C8524   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600C8524(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1

  v4 = FIELD_U32(a1, 6220);
  v2 = (_DWORD *)(a1 + 6220);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  StateMgr__execute((StateMgr *)(a1 + 6244));
  StateMgr__execute((StateMgr *)(a1 + 6084));
  return 1;
}
