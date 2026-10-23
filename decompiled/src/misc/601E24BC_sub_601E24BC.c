/* sub_601E24BC
 * address: 0x601E24BC   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601E24BC(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r5
  int v4; // r0
  float v5; // s0
  unsigned int *v6; // r5
  _DWORD *v7; // r1
  int v8; // r0

  result = (StateMethodExecuter *)sub_6018D7E0(a1);
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
      v6 = (unsigned int *)(a1 + 364);
      v7 = (_DWORD *)(a1 + 376);
    }
    else
    {
LABEL_10:
      v6 = (unsigned int *)(a1 + 364);
      v7 = (_DWORD *)(a1 + 352);
    }
    sub_6019EC34(v6, v7);
    v8 = sub_601FEE28(dword_60C8C188);
    sub_6016EEE8(v8, (_DWORD *)(a1 + 488), 0);
    FIELD_U8(a1, 520) = 0;
    sub_60173634((__n64 *)dword_60C88BC8, v6);
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C89594);
  }
  return result;
}
