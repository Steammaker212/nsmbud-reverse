/* sub_600305E0
 * address: 0x600305E0   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_600305E0(unsigned int result, int a2)
{
  unsigned int v2; // r4
  unsigned __int8 *v4; // r6
  int v5; // r7
  int v6; // r0
  unsigned __int8 *v7; // r0
  int v8; // t1

  v2 = result;
  v4 = *(unsigned __int8 **)(result + 64);
  if ( v4 )
  {
    result = v4[6136];
    if ( v4[6136] )
      goto LABEL_3;
    v5 = FIELD_U32(a2, 64);
    if ( v5 )
    {
      v6 = *(_DWORD *)v4;
      if ( FIELD_U8(v5, 533) != 1 )
      {
        result = (*(int (__fastcall **)(unsigned __int8 *, unsigned int, int))(v6 + 256))(v4, v2, a2);
        if ( result != 1 )
          return result;
        goto LABEL_3;
      }
      if ( (*(int (__fastcall **)(unsigned __int8 *, unsigned int, int))(v6 + 236))(v4, v2, a2) == 1 )
      {
LABEL_3:
        result = FIELD_U8(v2, 110) | 2;
        FIELD_U8(v2, 110) = result;
        return result;
      }
      result = FIELD_U32(a2, 136);
      if ( result != 1 )
      {
        result = FIELD_S8(v5, 84);
        if ( result <= 3 )
        {
          v7 = &v4[2 * result];
          v8 = *((unsigned __int16 *)v7 + 3070);
          result = (unsigned int)(v7 + 6140);
          if ( !v8 )
          {
            *(_WORD *)result = 5;
            return (*(int (__fastcall **)(unsigned __int8 *, unsigned int, int))(*(_DWORD *)v4 + 264))(v4, v2, a2);
          }
        }
      }
    }
  }
  return result;
}
