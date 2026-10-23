/* sub_6048FAA4
 * address: 0x6048FAA4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048FAA4(int a1)
{
  _BOOL4 v2; // r1
  int result; // r0
  int v4; // r5

  v2 = sub_6045C130(a1 + 13824);
  result = 0;
  if ( v2 )
  {
    FIELD_U32(a1, 4796) = FIELD_U32(a1, 5864);
    sub_60502694(a1 + 3768);
    v4 = FIELD_U32(a1, 5864);
    sub_6048E23C(a1, 0, v4);
    sub_6048EBD4(a1, v4);
    sub_6048F09C(a1, 0, FIELD_U32(a1, 5864));
    sub_6048EE54((_DWORD *)a1, 0);
    StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60C9F660);
    return 1;
  }
  return result;
}
