/* sub_6020BDBC
 * address: 0x6020BDBC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6020BDBC(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0

  result = (StateMethodExecuter *)FIELD_U8(dword_60C8996C, 1385);
  if ( FIELD_U8(dword_60C8996C, 1385) )
  {
    result = (StateMethodExecuter *)sub_60185D08((Actor *)a1);
    if ( result == (StateMethodExecuter *)1 )
    {
      if ( sub_601916EC(dword_60C8996C) == 32 )
      {
        v3 = sub_601CF9C0(dword_60C8AEF0);
        v4 = sub_608332B0(a1 + 80, v3 + 80);
        FIELD_U32(a1, 524) = v4;
        FIELD_U32(a1, 192) = v4;
        FIELD_U32(a1, 180) = v4;
        v5 = *(_DWORD **)(a1 + 408);
        v6 = v5[3];
        v7 = v5[2];
        v8 = v5[17];
        if ( v7 > v8 )
          v6 += 4 * v8;
        *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
      }
      return StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8CB14);
    }
  }
  return result;
}
