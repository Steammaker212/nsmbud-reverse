/* sub_60483024
 * address: 0x60483024   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60483024(int a1)
{
  StateMgr *v2; // r5
  int v3; // r6
  int v4; // r5
  int result; // r0

  v2 = (StateMgr *)(a1 + 3320);
  if ( (FIELD_U8(a1, 3336) & 1) != 0 )
    StateMgr__changeState(v2, (StateBase *)&dword_60C9EFBC);
  StateMgr__execute(v2);
  v3 = FIELD_U32(a1, 6888);
  if ( v3 )
  {
    v4 = FIELD_U32(a1, 6892);
    do
    {
      sub_605043AC(v4);
      --v3;
      v4 += 3584;
    }
    while ( v3 );
  }
  result = sub_60473B58((_DWORD *)(a1 + 3340), FIELD_U32(a1, 10480), 0);
  FIELD_U32(a1, 3336) = 0;
  return result;
}
