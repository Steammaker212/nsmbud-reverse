/* sub_6036C5DC
 * address: 0x6036C5DC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6036C5DC(int a1, int a2)
{
  _BYTE *v2; // r4
  unsigned int result; // r0
  char v5; // r0
  int v6; // r1
  bool v7; // zf
  _BYTE *v8; // r4
  char v9; // t1

  v2 = *(_BYTE **)(a1 + 144);
  result = (unsigned __int8)v2[7309];
  if ( !v2[7309] )
  {
    result = (unsigned __int8)v2[7310];
    if ( !v2[7310] )
    {
      v5 = FIELD_U8(a2, 2553);
      v6 = FIELD_U32(a2, 2196);
      v7 = (v5 & 2) == 0;
      if ( (v5 & 2) == 0 )
        v7 = (FIELD_U32(a2, 2556) & 0x18000) == 0;
      if ( v7 )
      {
        result = Actor__getProfileId(*(Actor **)(a2 + 2196));
        if ( result == 476 )
        {
          v9 = v2[7308];
          v8 = v2 + 7308;
          result = (unsigned __int8)(v9 - 1);
          if ( result <= 1 )
          {
            *v8 = 3;
            return 3;
          }
        }
      }
      else
      {
        SE_OBJ_PNGN_ICE_BREAK_ref_36CFB4(v2, v6);
        result = FIELD_U32(a2, 2224) | 0x20;
        FIELD_U32(a2, 2224) = result;
      }
    }
  }
  return result;
}
