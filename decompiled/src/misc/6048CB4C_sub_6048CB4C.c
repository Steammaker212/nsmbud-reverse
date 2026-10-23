/* sub_6048CB4C
 * address: 0x6048CB4C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048CB4C(int result)
{
  int v1; // r4
  _BYTE *v2; // r5
  int *v3; // r6
  bool v4; // zf
  bool v5; // zf
  bool v6; // zf
  bool v7; // zf

  v1 = dword_60CC6E04;
  FIELD_U8(result, 47792) = 0;
  v2 = (_BYTE *)(result + 47792);
  if ( FIELD_U32(result, 47784) == 5 )
  {
    v3 = (int *)(result + 47788);
    result = sub_60828E70(v1, 0);
    v4 = result == 5;
    if ( result != 5 )
    {
      result = *v3;
      v4 = *v3 == 0;
    }
    if ( v4 )
    {
      result = sub_60828E70(v1, 1);
      v5 = result == 5;
      if ( result != 5 )
      {
        result = *v3;
        v5 = *v3 == 1;
      }
      if ( v5 )
      {
        result = sub_60828E70(v1, 2);
        v6 = result == 5;
        if ( result != 5 )
        {
          result = *v3;
          v6 = *v3 == 2;
        }
        if ( v6 )
        {
          result = sub_60828E70(v1, 3);
          v7 = result == 5;
          if ( result != 5 )
          {
            result = *v3;
            v7 = *v3 == 3;
          }
          if ( v7 )
          {
            result = *(unsigned __int8 *)(FIELD_U32(v1, 40) + 6262);
            if ( !*(_BYTE *)(FIELD_U32(v1, 40) + 6262) )
            {
              *v2 = 1;
              return 1;
            }
          }
        }
      }
    }
  }
  return result;
}
