/* sub_601AC068
 * address: 0x601AC068   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601AC068(int a1)
{
  _DWORD *v2; // r0
  unsigned int v3; // r3
  int v4; // r1
  StateMethodExecuter *result; // r0
  _DWORD *v6; // r0
  int v7; // r3
  unsigned int v8; // r5
  unsigned int v9; // r0
  _DWORD *v10; // r0
  int v11; // r2
  unsigned int v12; // r3
  unsigned int v13; // r0

  v2 = *(_DWORD **)(a1 + 268);
  v3 = v2[17];
  v4 = v2[3];
  if ( v2[2] > v3 )
    v4 += 4 * v3;
  if ( (*(_BYTE *)(*(_DWORD *)v4 + 28) & 0x20) != 0 )
  {
    if ( FIELD_U32(a1, 284) != 2 )
    {
      FIELD_U32(a1, 284) = 2;
      sub_60421938(v2, FIELD_U32(a1, 276), (int)&unk_60C8A628);
      v6 = *(_DWORD **)(a1 + 268);
      v7 = v6[3];
      v8 = v6[2];
      v9 = v6[17];
      if ( v8 > v9 )
        v7 += 4 * v9;
      *(_DWORD *)(*(_DWORD *)v7 + 24) = dword_60C8A608[4 * FIELD_U32(a1, 284) + 2];
      v10 = *(_DWORD **)(a1 + 268);
      v11 = v10[3];
      v12 = v10[2];
      v13 = v10[17];
      if ( v12 > v13 )
        v11 += 4 * v13;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), dword_60C8A608[4 * FIELD_U32(a1, 284) + 3]);
    }
    return StateMgr__changeState((StateMgr *)(a1 + 308), (StateBase *)&dword_60C8A5BC);
  }
  else
  {
    result = *(StateMethodExecuter **)(a1 + 360);
    if ( result )
    {
      result = (StateMethodExecuter *)((char *)result - 1);
      FIELD_U32(a1, 360) = result;
      if ( !result )
        return (StateMethodExecuter *)sub_601E4C88(dword_60C8B13C, 171, a1 + 80, 1);
    }
  }
  return result;
}
