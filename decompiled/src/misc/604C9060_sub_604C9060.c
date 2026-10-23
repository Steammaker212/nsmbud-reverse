/* sub_604C9060
 * address: 0x604C9060   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C9060(int a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r1
  int *v5; // r1
  int v6; // [sp+0h] [bp-18h] BYREF
  int a3; // [sp+4h] [bp-14h]

  v2 = a1 + 3800;
  if ( sub_604D3584(a1, 1) == 1 )
  {
    FIELD_U8(a1, 4854) = 0;
    a3 = 0;
    v6 = 0;
    sub_60502B04(v2, &v6, 1);
    a3 = 1;
    v6 = 1;
    sub_60502B04(v2, &v6, 1);
    a3 = 2;
    v6 = 2;
    sub_60502B04(v2, &v6, 1);
    a3 = 3;
    v6 = 3;
    return sub_60502B04(v2, &v6, 1);
  }
  if ( sub_60502D80(a1 + 3800) == 1 )
  {
    v4 = FIELD_U32(a1, 4828);
    goto LABEL_7;
  }
  v4 = FIELD_U32(a1, 4828);
  if ( FIELD_U8(a1, 4846) )
  {
LABEL_7:
    a3 = 2;
    if ( v4 == 2 )
    {
      result = a1 + 615723;
      if ( FIELD_U8(a1, 615723) )
      {
        *(_BYTE *)result = 0;
        return sub_6047459C(a1 + 40, 7u);
      }
    }
    else
    {
      a3 = 3;
      result = 3;
      if ( v4 == 3 )
      {
        result = a1 + 615722;
        if ( FIELD_U8(a1, 615722) )
        {
          *(_BYTE *)result = 0;
          return sub_6047459C(a1 + 40, 8u);
        }
      }
    }
    return result;
  }
  a3 = 1;
  if ( v4 == 1 )
    v5 = &dword_60CA3518;
  else
    v5 = &dword_60CA31D8;
  return (int)StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v5);
}
