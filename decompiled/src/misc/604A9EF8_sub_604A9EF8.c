/* sub_604A9EF8
 * address: 0x604A9EF8   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A9EF8(int a1)
{
  _BYTE *v2; // r5
  int v3; // r1
  int result; // r0
  int v5; // r3
  bool v6; // zf
  bool v7; // zf
  int v8; // r0
  int *v9; // r6
  unsigned int v10; // r1
  unsigned int v11; // r7
  int v12; // r7
  int v13; // r1
  int v14; // r0
  unsigned int v15; // r1
  unsigned int v16; // r6
  int v17; // r6
  int v18; // r1
  unsigned int v19; // r1
  unsigned int v20; // r2

  v2 = (_BYTE *)(a1 + 279733);
  if ( FIELD_U8(a1, 279733) )
  {
    v3 = 97958;
    result = 0;
    while ( 1 )
    {
      v5 = a1 + v3;
      if ( *(_BYTE *)(a1 + v3 - 13) )
      {
        if ( *(_BYTE *)(v5 - 3) )
          break;
        v6 = *(_BYTE *)(v5 - 11) == 0;
        if ( !*(_BYTE *)(v5 - 11) )
          v6 = *(_BYTE *)(a1 + v3) == 0;
        if ( !v6 )
          break;
        v7 = *(_BYTE *)(v5 - 1) == 0;
        if ( !*(_BYTE *)(v5 - 1) )
          v7 = *(_BYTE *)(v5 - 12) == 0;
        if ( !v7 )
          break;
      }
      ++result;
      v3 += 2988;
      if ( result >= 61 )
      {
        result = FIELD_U8(a1, 86998);
        if ( !FIELD_U8(a1, 86998) )
        {
          v9 = (int *)(a1 + 279736);
          v8 = FIELD_U32(a1, 279736);
          if ( v8 < 1 )
          {
LABEL_22:
            v13 = 0;
          }
          else
          {
            v10 = 0;
            while ( 1 )
            {
              v11 = 0;
              if ( v10 < 4 )
                v11 = v10;
              v12 = a1 + 20556 * v11;
              if ( FIELD_U8(v12, 24276) )
              {
                if ( FIELD_U32(v12, 24228) == 6 )
                  break;
              }
              if ( (int)++v10 >= v8 )
                goto LABEL_22;
            }
            v13 = 1;
          }
          sub_604AD96C(a1, v13, 0, 1.0);
          result = *v9;
          if ( *v9 >= 1 )
          {
            result = 20556;
            v19 = 0;
            do
            {
              v20 = 0;
              if ( v19 < 4 )
                v20 = v19;
              ++v19;
              *(_DWORD *)(a1 + 20556 * v20 + 3732) |= 8u;
            }
            while ( (int)v19 < *v9 );
          }
          *v2 = 0;
        }
        return result;
      }
    }
  }
  else
  {
    v14 = FIELD_U32(a1, 279736);
    if ( v14 < 1 )
    {
LABEL_30:
      v18 = 0;
    }
    else
    {
      v15 = 0;
      while ( 1 )
      {
        v16 = 0;
        if ( v15 < 4 )
          v16 = v15;
        v17 = a1 + 20556 * v16;
        if ( FIELD_U8(v17, 24276) )
        {
          if ( FIELD_U32(v17, 24228) == 6 )
            break;
        }
        if ( (int)++v15 >= v14 )
          goto LABEL_30;
      }
      v18 = 1;
    }
    result = sub_604AC434(a1, v18);
    if ( result == 1 )
    {
      FIELD_U8(a1, 56) = 1;
      return (int)StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)&dword_60CA1670);
    }
  }
  return result;
}
