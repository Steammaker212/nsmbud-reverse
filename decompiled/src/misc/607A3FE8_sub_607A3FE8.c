/* sub_607A3FE8
 * address: 0x607A3FE8   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A3FE8(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r4
  int v5; // t1

  v3 = (_DWORD *)(a1 + 9704);
  result = FIELD_U32(a1, 9704);
  switch ( result )
  {
    case 2:
      FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + 1.0;
      nullsub_5471(a1);
      SE_PLY_ref_10(a1);
      result = FIELD_U32(a1, 9712);
      if ( !result )
      {
        sub_60767080((StateMgr *)a1);
        return Player_changeState(a1, (StateBase *)&dword_60CC4F2C, 1);
      }
      break;
    case 1:
      v5 = FIELD_U32(a1, 9712);
      v4 = (_DWORD *)(a1 + 9712);
      result = v5;
      if ( !v5 )
      {
        sub_60778334((_DWORD *)dword_60CBFA90);
        *v3 = 2;
        result = 95;
        *v4 = 95;
      }
      break;
    case 0:
      result = FIELD_U32(a1, 9712);
      if ( !result )
      {
        result = dword_60CBFA90;
        if ( FIELD_U8(dword_60CBFA90, 448) )
        {
          result = sub_607782F4((_DWORD *)dword_60CBFA90);
          if ( result == FIELD_S8(a1, 84) )
          {
            *v3 = 1;
            FIELD_U32(a1, 9712) = 30;
            return 30;
          }
        }
      }
      break;
  }
  return result;
}
