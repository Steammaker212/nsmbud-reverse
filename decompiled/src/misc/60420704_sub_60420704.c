/* sub_60420704
 * address: 0x60420704   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60420704(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // r12
  int v5; // r4
  int v6; // lr
  int result; // r0
  int v8; // r5
  int v9; // r8
  int v10; // r7
  int v11; // r7
  int v12; // r7
  int v13; // r4
  int v14; // r7
  int v15; // r7
  int v16; // r3
  int v17; // r2
  int v18; // r12
  int v19; // r7
  int v20; // r7
  int v21; // r7
  int v22; // r3
  int v23; // r2

  v4 = FIELD_U8(a2, 222);
  if ( FIELD_U8(a2, 222) )
  {
    v5 = a4[2];
    v6 = a3[2];
    result = 0;
    v8 = 0;
    while ( *(_DWORD *)(v6 + 16 * v8) == *(_DWORD *)(v5 + 16 * v8) )
    {
      if ( ++v8 >= v4 )
      {
        v9 = FIELD_U8(a2, 221);
        if ( FIELD_U8(a2, 221) )
        {
          result = 0;
          v10 = 0;
          while ( *(_DWORD *)(*a3 + 16 * v10) == *(_DWORD *)(*a4 + 16 * v10) )
          {
            if ( ++v10 >= v9 )
              goto LABEL_9;
          }
        }
        else
        {
LABEL_9:
          result = 0;
          v11 = 0;
          while ( *(_DWORD *)(v6 + 4 + 16 * v11) == *(_DWORD *)(v5 + 4 + 16 * v11) )
          {
            if ( ++v11 >= v4 )
            {
              if ( FIELD_U8(a2, 221) )
              {
                v12 = 0;
                result = 0;
                while ( *(_DWORD *)(*a3 + 4 + 16 * v12) == *(_DWORD *)(*a4 + 4 + 16 * v12) )
                {
                  if ( ++v12 >= v9 )
                    goto LABEL_16;
                }
              }
              else
              {
LABEL_16:
                v13 = v5 + 8;
                result = 0;
                v14 = 0;
                while ( *(_DWORD *)(v6 + 8 + 16 * v14) == *(_DWORD *)(v13 + 16 * v14) )
                {
                  if ( ++v14 >= v4 )
                  {
                    result = 1;
                    if ( !FIELD_U8(a2, 221) )
                      return result;
                    v15 = 0;
                    v16 = *a4 + 8;
                    v17 = *a3 + 8;
                    while ( *(_DWORD *)(v17 + 16 * v15) == *(_DWORD *)(v16 + 16 * v15) )
                    {
                      if ( ++v15 >= v9 )
                        return result;
                    }
                    return 0;
                  }
                }
              }
              return result;
            }
          }
        }
        return result;
      }
    }
  }
  else
  {
    v18 = FIELD_U8(a2, 221);
    result = 1;
    if ( FIELD_U8(a2, 221) )
    {
      v19 = 0;
      while ( *(_DWORD *)(*a3 + 16 * v19) == *(_DWORD *)(*a4 + 16 * v19) )
      {
        if ( ++v19 >= v18 )
        {
          if ( !FIELD_U8(a2, 221) )
            return result;
          v20 = 0;
          while ( *(_DWORD *)(*a3 + 4 + 16 * v20) == *(_DWORD *)(*a4 + 4 + 16 * v20) )
          {
            if ( ++v20 >= v18 )
            {
              v21 = 0;
              v22 = *a4 + 8;
              v23 = *a3 + 8;
              while ( *(_DWORD *)(v23 + 16 * v21) == *(_DWORD *)(v22 + 16 * v21) )
              {
                if ( ++v21 >= v18 )
                  return result;
              }
              return 0;
            }
          }
          return 0;
        }
      }
      return 0;
    }
  }
  return result;
}
