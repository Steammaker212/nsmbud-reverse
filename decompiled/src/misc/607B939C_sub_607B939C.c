/* sub_607B939C
 * address: 0x607B939C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B939C(_DWORD *a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r1
  int (__fastcall ***v5)(_DWORD, int *); // r1
  unsigned int v6; // r5
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r1

  v2 = sub_6079DD80((int)a1);
  result = 2;
  if ( !v2 )
  {
    v4 = sub_6079DE44((int)a1);
    result = 3;
    if ( !v4 )
    {
      v5 = sub_6079DB30((int)a1);
      result = 1;
      if ( !v5 )
      {
        v6 = a1[330];
        v7 = sub_6079D894((int)a1);
        if ( v7 )
        {
          v6 = FIELD_U32(v7, 1320);
        }
        else if ( v6 <= 9 && ((1 << v6) & 0x390) != 0 )
        {
          v8 = (*(int (__fastcall **)(_DWORD *))(*a1 + 1068))(a1);
          result = 0;
          if ( v8 )
            return result;
        }
        v9 = v6 - 4;
        result = 0;
        if ( (v6 | 1) == 9 )
          v9 = 3;
        if ( v9 <= 5 )
          return dword_60B0CED0[v9];
      }
    }
  }
  return result;
}
