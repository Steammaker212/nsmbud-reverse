/* sub_601CE270
 * address: 0x601CE270   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CE270(_DWORD *a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r0

  if ( !sub_601C4774((int)a1) )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
  result = a1[254];
  if ( result != 10 )
  {
    if ( result == 1 )
    {
      v4 = a1[281];
      if ( v4 >= 1 )
      {
        result = v4 - 1;
        a1[281] = result;
        return result;
      }
    }
    else
    {
      if ( result )
        return result;
      v3 = sub_601D05D4(dword_60C8AEF0);
      if ( v3 )
      {
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 68))(v3);
        if ( result == 1 )
        {
          a1[281] = 10;
          a1[254] = 1;
          return 1;
        }
        return result;
      }
    }
    sub_601C5B4C((int)a1, 10);
    result = (int)sub_601C4288(a1, 2, a1 + 258);
    a1[254] = 10;
    return result;
  }
  result = sub_601C4774((int)a1);
  if ( result == 1 )
  {
    result = sub_601C42A8(a1);
    if ( result == 1 )
    {
      sub_601C6044((int)a1, a1 + 258);
      a1[45] = 0;
      *((_BYTE *)a1 + 328) = 1;
      return (*(int (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
    }
  }
  return result;
}
