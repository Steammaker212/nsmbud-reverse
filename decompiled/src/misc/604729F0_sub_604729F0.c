/* sub_604729F0
 * address: 0x604729F0   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604729F0(_DWORD *result, _DWORD *a2)
{
  _DWORD *v2; // r8
  _DWORD *v4; // r7
  _DWORD *v5; // r9
  int v6; // r1
  int v7; // r2
  int v8; // r3
  bool v9; // nf
  int v10; // r0

  v2 = result;
  v4 = (_DWORD *)result[1];
  if ( v4 )
  {
    while ( 2 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v5 = (_DWORD *)a2[1];
      (*(void (__fastcall **)(_DWORD *))(v4[4] + 12))(v4 + 4);
      result = (_DWORD *)v4[5];
      if ( v5 == result )
      {
LABEL_13:
        v10 = v4[6];
        v2[824] = v10;
        if ( v10 )
        {
          if ( FIELD_U8(v10, 84) )
            ((void (__fastcall *)(_DWORD *))loc_60472644)(v2);
        }
        v2[822] = 0;
        return 0;
      }
      else
      {
        v6 = a2[1];
        v7 = 0;
        while ( 1 )
        {
          v8 = *(unsigned __int8 *)(v6 + v7);
          v9 = v8 - *((unsigned __int8 *)result + v7) < 0;
          if ( v8 != *((unsigned __int8 *)result + v7) )
            break;
          if ( *(_BYTE *)(v6 + v7) )
          {
            if ( ++v7 < 0x80000 )
              continue;
          }
          if ( !v4 )
            return result;
          goto LABEL_13;
        }
        result = v4 + 2;
        if ( v9 )
          result = v4 + 1;
        v4 = (_DWORD *)*result;
        if ( *result )
          continue;
      }
      break;
    }
  }
  return result;
}
