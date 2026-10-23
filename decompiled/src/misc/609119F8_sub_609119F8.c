/* sub_609119F8
 * address: 0x609119F8   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609119F8(int a1, unsigned int a2)
{
  int v2; // r12
  int v3; // r3
  _DWORD *v4; // r3
  unsigned __int8 *v5; // r1
  int v6; // r2
  unsigned __int8 *i; // r0
  int v8; // r3
  int v9; // r2
  int v10; // r3
  int v11; // r2
  int v12; // r3
  int v13; // r2
  int result; // r0

  if ( FIELD_U32(a1, 8) <= a2 )
    return 0;
  v2 = FIELD_U32(a1, 4);
  result = -1;
  v3 = FIELD_U32(v2, 20);
  if ( v3 != -1 )
  {
    v4 = *(_DWORD **)(FIELD_U32(v2, 12) + 16 * v3);
    if ( *v4 > (signed int)a2 )
    {
      v5 = (unsigned __int8 *)v4 + v4[a2 + 1];
      if ( v5 )
      {
        v6 = FIELD_U8(v2, 8);
        if ( !FIELD_U8(v2, 8) )
        {
          for ( i = v5; ; i += v11 )
          {
            while ( 1 )
            {
              v10 = *i;
              if ( v10 != 14 )
                break;
              i += FIELD_U16(i, 5) + 7;
            }
            v11 = 6;
            if ( v10 != 15 )
            {
              if ( !*i )
                return i - v5;
              v11 = 1;
            }
          }
        }
        if ( v6 != 1 )
        {
          if ( v6 != 2 )
            return result;
          for ( i = v5; ; i += 4 )
          {
            while ( 1 )
            {
              v8 = *(_DWORD *)i;
              if ( *(_DWORD *)i != 14 )
                break;
              v9 = *((unsigned __int16 *)i + 4) + 10;
LABEL_10:
              i += v9;
            }
            v9 = 6;
            if ( v8 == 15 )
              goto LABEL_10;
            if ( !v8 )
              return i - v5;
          }
        }
        for ( i = v5; ; i += 2 )
        {
          while ( 1 )
          {
            v12 = *(unsigned __int16 *)i;
            if ( v12 != 14 )
              break;
            v13 = *((unsigned __int16 *)i + 3) + 8;
LABEL_24:
            i += v13;
          }
          v13 = 6;
          if ( v12 == 15 )
            goto LABEL_24;
          if ( !*(_WORD *)i )
            return i - v5;
        }
      }
    }
  }
  return result;
}
