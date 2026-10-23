/* sub_6081B83C
 * address: 0x6081B83C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081B83C(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r2
  int v6; // r3
  int v7; // r7
  bool v8; // vf
  int v9; // r2
  int v10; // r6
  int v11; // r8
  int v12; // r2
  int v13; // r0

  result = FIELD_U32(a1, 264);
  if ( result == 1 )
  {
    result = FIELD_U8(a1, 268);
    if ( FIELD_U8(a1, 268) )
    {
      v13 = FIELD_U32(a1, 1660);
      if ( v13 < 1 )
      {
        result = v13 + 1;
        FIELD_U32(a1, 1660) = result;
      }
      else
      {
        return sub_6081BA50(a1);
      }
    }
  }
  else if ( !result )
  {
    sead__CriticalSection__lock(a1 + 692);
    v3 = FIELD_U32(a1, 740);
    if ( v3 <= 0 )
    {
      return sead__CriticalSection__unlock(a1 + 692);
    }
    else
    {
      v4 = v3 - 1;
      v5 = FIELD_U32(a1, 732);
      v6 = FIELD_U32(a1, 736);
      v7 = v6 + 1;
      if ( v6 + 1 >= v5 )
        v7 = 0;
      v8 = __OFSUB__(v6, v5);
      v9 = v6 - v5;
      if ( v9 < 0 != v8 )
        v9 = FIELD_U32(a1, 736);
      v10 = *(_DWORD *)(FIELD_U32(a1, 728) + 8 * v9);
      v11 = *(_DWORD *)(FIELD_U32(a1, 728) + 8 * v9 + 4);
      FIELD_U32(a1, 736) = v7;
      FIELD_U32(a1, 740) = v4;
      result = sead__CriticalSection__unlock(a1 + 692);
      if ( v10 )
      {
        v12 = (unsigned __int8)v11;
        if ( (_BYTE)v11 )
          v12 = 1;
        return sub_6081B908(a1, v10, v12);
      }
    }
  }
  return result;
}
