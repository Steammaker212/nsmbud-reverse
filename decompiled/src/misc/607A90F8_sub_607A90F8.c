/* sub_607A90F8
 * address: 0x607A90F8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A90F8(_DWORD *a1)
{
  int result; // r0
  int v3; // r1
  _DWORD *v4; // r5

  result = a1[308];
  if ( (result & 0x200) != 0 )
  {
    v4 = a1 + 3011;
    v3 = a1[3011];
    if ( v3 == 3 )
    {
      result = sub_6078F110((_DWORD *)a1[2842]);
      if ( result != 1 )
        return result;
      (*(void (__fastcall **)(_DWORD *, int, _DWORD))(*a1 + 144))(a1, 7, 0);
      sub_6078F2B0(a1[2842]);
      *v4 = 0;
      result = a1[308];
      goto LABEL_13;
    }
    if ( v3 != 2 )
    {
      if ( v3 != 1 )
        return result;
      if ( a1[330] == 8 && *(_DWORD *)(a1[2840] + 164) != 8 )
      {
        a1[308] = result | 0x4000;
        *v4 = 2;
        return 2;
      }
      goto LABEL_12;
    }
    if ( a1[330] != 8 || *(_DWORD *)(a1[2840] + 164) == 8 )
    {
LABEL_12:
      *v4 = 0;
LABEL_13:
      result &= ~0x4000u;
      a1[308] = result;
      return result;
    }
    result = dword_60CBFA90;
    if ( (FIELD_U8(dword_60CBFA90, 61) & 1) != 0 )
    {
      result = sub_607799C0();
      if ( result == 1 )
      {
        *v4 = 3;
        return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1[2842] + 192))(a1[2842]);
      }
    }
  }
  return result;
}
