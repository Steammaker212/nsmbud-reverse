/* sub_602E3888
 * address: 0x602E3888   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E3888(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r2
  int *v5; // r1
  unsigned int v6; // r0

  result = FIELD_U8(a1, 15364);
  if ( result )
  {
    result = FIELD_U8(a1, 15377);
    if ( !FIELD_U8(a1, 15377) )
    {
      FIELD_U8(a1, 15384) = 0;
      v3 = a1 + 6300;
      j_ibaramushi_ref((_DWORD *)(a1 + 6300), 0, 0);
      v4 = -134217728;
      FIELD_U8(a1, 15377) = 16;
      if ( !FIELD_U8(a1, 15378) )
        v4 = 0x8000000;
      if ( FIELD_U32(a1, 6372) == 1 )
        v4 = -v4;
      FIELD_U32(a1, 15352) = v4;
      result = FIELD_U8(a1, 15425);
      if ( !FIELD_U8(a1, 15425) )
      {
        result = SE_EMY_IBARAMUSHI_FOOT_ref(a1);
        if ( result == 1 )
        {
          if ( FIELD_U8(a1, 15400) )
            goto LABEL_10;
          v5 = *(int **)(*(_DWORD *)v3 + 12);
          v6 = *(_DWORD *)(*(_DWORD *)v3 + 68);
          if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v6 )
            v5 += v6;
          result = *v5;
          if ( *(float *)(*v5 + 20) != 0.0 )
          {
LABEL_10:
            result = FIELD_U8(a1, 15372);
            if ( !FIELD_U8(a1, 15372) )
            {
              if ( FIELD_U32(a1, 6372) )
                JUMPOUT(0x602E1558);
              FIELD_U8(a1, 15383) = 2;
              result = 1;
              FIELD_U8(a1, 15425) = 1;
            }
          }
        }
      }
    }
  }
  return result;
}
