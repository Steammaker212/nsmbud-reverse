/* sub_606BEDCC
 * address: 0x606BEDCC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BEDCC(int result, int a2)
{
  _BYTE *v2; // r4
  int v3; // r2
  bool v4; // zf

  v2 = *(_BYTE **)(result + 64);
  if ( v2 )
  {
    v3 = FIELD_U32(a2, 64);
    v4 = v3 == 0;
    if ( v3 )
      v4 = (v2[6124] & 4) == 0;
    if ( !v4 )
    {
      result = FIELD_U32(result, 140);
      if ( result == 9 )
      {
        result = FIELD_U8(a2, 149);
        if ( (result & 2) != 0 )
        {
          result = FIELD_U8(v3, 533);
          if ( result == 3 )
          {
            result = sub_605CC390((int)v2);
            if ( result )
              return (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v2 + 244))(v2);
          }
        }
      }
    }
  }
  return result;
}
