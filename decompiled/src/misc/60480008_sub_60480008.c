/* sub_60480008
 * address: 0x60480008   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60480008(int a1)
{
  int result; // r0
  unsigned __int8 v3; // r3
  int v4; // r1
  bool v5; // zf

  result = sub_60834614();
  if ( dword_60C99DD4 )
  {
    result = FIELD_U32(result, 492);
    if ( !result )
    {
      result = FIELD_U8(dword_60C99DD4, 436)
             + FIELD_U8(dword_60C99DD4, 364)
             + FIELD_U8(dword_60C99DD4, 292);
      v3 = FIELD_U8(dword_60C99DD4, 508) + result;
      if ( v3 )
      {
        if ( (result = FIELD_U32(a1, 104), result <= 0) && (v4 = 0, FIELD_U8(dword_60C99DD4, 292))
          || v3 > 1u
          && (result <= 1 && (v4 = 1, FIELD_U8(dword_60C99DD4, 364))
           || v3 >= 3u
           && (result <= 2 && (v4 = 2, FIELD_U8(dword_60C99DD4, 436))
            || v3 >= 4u
            && result <= 3
            && (result = FIELD_U8(dword_60C99DD4, 508), v4 = 3, FIELD_U8(dword_60C99DD4, 508)))) )
        {
          result = *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 32);
          v5 = result == 0;
          if ( result )
          {
            result = FIELD_U8(result, 19);
            v5 = result == 0;
          }
          if ( v5 )
          {
            result = sub_60454D54(dword_60C9CF0C, v4, *(_DWORD *)(dword_60C99DD4 + 72 * v4 + 304));
            if ( result == 1 )
            {
              result = FIELD_U32(a1, 104) + 1;
              FIELD_U32(a1, 104) = result;
            }
          }
        }
      }
    }
  }
  return result;
}
