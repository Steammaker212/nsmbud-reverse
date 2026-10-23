/* sub_601E1BE4
 * address: 0x601E1BE4   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601E1BE4(int a1)
{
  int v2; // r5
  int v3; // r0
  float v4; // s0
  int v5; // r0
  int v6; // r1
  StateBase *v7; // r1
  int v9; // r0
  int v10; // r1

  sub_6018D7F8(a1, 1);
  if ( FIELD_S32(a1, 320) >= 1 && (v2 = FIELD_U32(a1, 316)) != 0 )
  {
    while ( 1 )
    {
      v3 = FIELD_U32(v2, 8);
      if ( v3 )
      {
        v4 = (*(float (__fastcall **)(int))(*(_DWORD *)v3 + 16))(v3);
        if ( v4 <= 0.00000011921 && v4 >= -0.00000011921 )
          break;
      }
      v2 = FIELD_U32(v2, 4);
      if ( v2 == a1 + 312 )
        v2 = 0;
      if ( !v2 )
        goto LABEL_9;
    }
    v9 = FIELD_U32(a1, 368);
    if ( v9 == -1 || (v10 = FIELD_U32(a1, 380), v9 != v10) || v10 == -1 )
      v7 = (StateBase *)&unk_60C89570;
    else
      v7 = (StateBase *)&unk_60C89504;
  }
  else
  {
LABEL_9:
    v5 = FIELD_U32(a1, 368);
    if ( v5 == -1 || (v6 = FIELD_U32(a1, 356), v5 != v6) || v6 == -1 )
      v7 = (StateBase *)&unk_60C89570;
    else
      v7 = (StateBase *)&unk_60C89600;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 284), v7);
}
