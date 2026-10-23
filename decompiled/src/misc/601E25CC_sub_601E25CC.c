/* sub_601E25CC
 * address: 0x601E25CC   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601E25CC(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r5
  int v4; // r0
  float v5; // s0
  StateBase *v6; // r1
  int v7; // r1

  result = (StateMethodExecuter *)sub_6018D7EC(a1);
  if ( result == (StateMethodExecuter *)1 )
  {
    if ( FIELD_S32(a1, 320) >= 1 && (v3 = FIELD_U32(a1, 316)) != 0 )
    {
      while ( 1 )
      {
        v4 = FIELD_U32(v3, 8);
        if ( v4 )
        {
          v5 = (*(float (__fastcall **)(int))(*(_DWORD *)v4 + 16))(v4);
          if ( v5 <= 0.00000011921 && v5 >= -0.00000011921 )
            break;
        }
        v3 = FIELD_U32(v3, 4);
        if ( v3 == a1 + 312 )
          v3 = 0;
        if ( !v3 )
          goto LABEL_10;
      }
      sub_6018D7F8(a1, 1);
      FIELD_F32(a1, 388) = sub_6019EEE0();
      sub_6018E528(a1, v7);
      v6 = (StateBase *)&unk_60C89528;
    }
    else
    {
LABEL_10:
      v6 = (StateBase *)&unk_60C89600;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 284), v6);
  }
  return result;
}
