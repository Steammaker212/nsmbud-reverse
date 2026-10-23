/* sub_60355B48
 * address: 0x60355B48   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60355B48(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  _BYTE *v4; // r0
  _BYTE *v5; // r2

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*(int (**)(void))(dword_60C951C0 + 8))() )
  {
    v4 = (_BYTE *)(a1 + 6432);
    if ( FIELD_U8(a1, 6432) == 1 )
    {
      FIELD_U32(a1, 6252) = 0;
      FIELD_U8(a1, 6433) = 1;
      *v4 = 0;
      v5 = *(_BYTE **)(a1 + 632);
      if ( v5 )
        *v5 |= 4u;
      *v4 = 0;
      sub_60355C1C(a1, FIELD_U32(a1, 6300));
    }
    sub_602A3EFC(a1 + 6784, 24, 0.04);
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C950D8);
  }
  return 1;
}
