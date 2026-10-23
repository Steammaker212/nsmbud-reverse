/* sub_604B6354
 * address: 0x604B6354   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B6354(int a1)
{
  int v2; // r0
  bool v3; // zf
  StateMgr *v4; // r5
  int *v5; // r1
  int v6; // r0

  sub_6047F4A0((int *)(a1 + 3792));
  v2 = FIELD_U32(a1, 3764);
  if ( (v2 & 8) != 0 )
  {
    v4 = (StateMgr *)(a1 + 3748);
    v5 = &dword_60CA1D58;
    goto LABEL_9;
  }
  v3 = (FIELD_U32(a1, 3764) & 4) == 0;
  if ( (v2 & 4) != 0 )
    v2 = FIELD_U8(a1, 3777);
  v4 = (StateMgr *)(a1 + 3748);
  if ( (FIELD_U32(a1, 3764) & 4) != 0 )
    v3 = v2 == 0;
  if ( !v3 )
  {
    v5 = &dword_60CA1DD8;
LABEL_9:
    StateMgr__changeState(v4, (StateBase *)v5);
  }
  StateMgr__execute(v4);
  v6 = FIELD_U32(a1, 3652);
  if ( v6 )
    sub_604B70B4(v6);
  sub_604B7F5C(a1);
  FIELD_U32(a1, 3764) = 0;
  return 0;
}
