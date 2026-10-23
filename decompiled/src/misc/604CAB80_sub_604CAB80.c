/* sub_604CAB80
 * address: 0x604CAB80   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604CAB80(int a1)
{
  int v2; // r5
  StateMethodExecuter *result; // r0
  int v4; // [sp+0h] [bp-18h] BYREF
  int v5; // [sp+4h] [bp-14h]

  v2 = a1 + 3800;
  if ( sub_604D3584(a1, 1) == 1 )
  {
    FIELD_U8(a1, 4854) = 0;
    v5 = 0;
    v4 = 0;
    sub_60502B04(v2, &v4, 1);
    v5 = 1;
    v4 = 1;
    sub_60502B04(v2, &v4, 1);
    v5 = 2;
    v4 = 2;
    sub_60502B04(v2, &v4, 1);
    v5 = 3;
    v4 = 3;
    return (StateMethodExecuter *)sub_60502B04(v2, &v4, 1);
  }
  else if ( sub_60502D80(a1 + 3800) || FIELD_U8(a1, 4846) )
  {
    result = *(StateMethodExecuter **)(a1 + 4828);
    v5 = 2;
    if ( result == (StateMethodExecuter *)2 )
    {
      result = (StateMethodExecuter *)(a1 + 615723);
      if ( FIELD_U8(a1, 615723) )
      {
        LOBYTE(FIELD_U32(result, 0x0)) = 0;
        return (StateMethodExecuter *)sub_6047459C(a1 + 40, 7u);
      }
    }
    else
    {
      v5 = 3;
      if ( result == (StateMethodExecuter *)3 )
      {
        result = (StateMethodExecuter *)(a1 + 615722);
        if ( FIELD_U8(a1, 615722) )
        {
          LOBYTE(FIELD_U32(result, 0x0)) = 0;
          return (StateMethodExecuter *)sub_6047459C(a1 + 40, 8u);
        }
      }
    }
  }
  else
  {
    sub_60502548(a1 + 3800);
    FIELD_U16(a1, 4852) = 0;
    sub_6047EABC((_DWORD *)(a1 + 3840));
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA34F8);
  }
  return result;
}
