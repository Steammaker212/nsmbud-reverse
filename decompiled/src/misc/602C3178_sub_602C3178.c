/* sub_602C3178
 * address: 0x602C3178   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C3178(int a1)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v4; // r6
  _DWORD *v5; // r0
  unsigned int v6; // r3
  int v7; // r1
  int v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r0

  result = FIELD_U8(a1, 6220);
  if ( !result )
  {
    result = FIELD_U32(a1, 6100);
    if ( !result )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v4 != (*(int (**)(void))(dword_60C9149C + 8))() )
      {
        FIELD_U32(a1, 12032) = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        FIELD_U8(a1, 6486) = FIELD_U8(a1, 6483);
        v5 = *(_DWORD **)(a1 + 6304);
        v6 = v5[17];
        v7 = v5[3];
        if ( v5[2] > v6 )
          v7 += 4 * v6;
        FIELD_U32(a1, 6488) = *(_DWORD *)(*(_DWORD *)v7 + 20);
        v8 = v5[3];
        v9 = v5[2];
        v10 = v5[17];
        if ( v9 > v10 )
          v8 += 4 * v10;
        FIELD_U32(a1, 6496) = *(_DWORD *)(*(_DWORD *)v8 + 28) & 1;
        if ( sub_602C2BD4(a1) )
          sub_602A3EFC(a1 + 6612, 24, 0.05);
      }
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9149C);
    }
  }
  return result;
}
