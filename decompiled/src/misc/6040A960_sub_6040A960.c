/* sub_6040A960
 * address: 0x6040A960   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040A960(int a1, int a2)
{
  int result; // r0
  _BYTE *v4; // r6
  int v5; // r2
  int v6; // r0
  unsigned int v7; // r0
  _DWORD *v8; // r2
  char v9; // r3
  int v10; // r4
  int v11; // t1
  bool v12; // zf

  v4 = (_BYTE *)(a1 + 6559);
  result = FIELD_U8(a1, 6559);
  if ( result == 1 )
  {
    if ( a2 == 7 && FIELD_U8(a1, 6546) )
    {
LABEL_4:
      result = 3;
      *v4 = 3;
      return result;
    }
    result = FIELD_U8(a1, 6476);
    if ( result == 7 )
    {
      v6 = sub_6040B63C(a1 + 6478);
      result = sub_6040AA98(v6);
      if ( result != 1 )
        return result;
      v7 = FIELD_U8(a1, 6478);
      FIELD_U32(a1, 6504) = v7;
      v8 = *(_DWORD **)(a1 + 6472);
      if ( v8 )
      {
        v9 = 2;
        if ( v8[23] <= v7 || (v9 = 1, v8[22] <= v7) || (v9 = 0, v8[21] <= v7) )
        {
          *v4 = 2;
          FIELD_U8(a1, 6560) = v9;
          return 6560;
        }
      }
      goto LABEL_4;
    }
    if ( result == 1 )
    {
      v11 = FIELD_U8(a1, 6478);
      v10 = a1 + 6478;
      result = v11;
      if ( v11 == 1 )
        return sub_6040B5AC(v10);
    }
    else if ( !FIELD_U8(a1, 6476) )
    {
      result = a1 + 6478;
      v5 = FIELD_U8(a1, 6478);
      if ( v5 == 1 )
      {
        if ( FIELD_S8(a1, 6561) == a2 )
          return sub_6040B594();
      }
      else
      {
        v12 = a2 == 5;
        if ( a2 == 5 )
          v12 = v5 == 5;
        if ( v12 )
          return sub_6040B594();
      }
    }
  }
  return result;
}
