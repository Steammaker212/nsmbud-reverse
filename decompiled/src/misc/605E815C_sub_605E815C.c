/* sub_605E815C
 * address: 0x605E815C   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E815C(_DWORD *a1)
{
  int v2; // r8
  int v3; // r7
  _BOOL4 v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r5
  int v8; // r4
  int v9; // r3
  int v10; // r7
  int v11; // r7
  int v12; // r7
  int v13; // r6
  int v14; // r7

  v2 = 0;
  if ( a1[76] != -1 )
  {
    v3 = FIELD_U8(dword_60CC6D78, 109032);
    v4 = sub_6040E4C8(LevelInfo_instance);
    v5 = a1[9];
    if ( v5 )
    {
      v6 = a1[6];
      v7 = a1[7];
      v8 = a1[8];
      if ( v4 )
      {
        while ( 1 )
        {
          v9 = a1[7];
          if ( v8 < v7 )
            v9 = 0;
          v10 = *(_DWORD *)(v6 - 4 * v9 + 4 * v8);
          if ( FIELD_U32(v10, 6256) == 1 && FIELD_U32(v10, 6252) == a1[76] )
            break;
          ++v8;
          if ( !--v5 )
            return v2;
        }
      }
      else if ( v3 )
      {
        while ( 1 )
        {
          v11 = a1[7];
          if ( v8 < v7 )
            v11 = 0;
          v12 = *(_DWORD *)(v6 - 4 * v11 + 4 * v8);
          if ( FIELD_U32(v12, 6256) == 1
            && FIELD_U32(v12, 6252) == a1[76]
            && (FIELD_U16(v12, 6266) & 0x802) != 0 )
          {
            break;
          }
          ++v8;
          if ( !--v5 )
            return v2;
        }
      }
      else
      {
        while ( 1 )
        {
          v13 = a1[7];
          if ( v8 < v7 )
            v13 = 0;
          v14 = *(_DWORD *)(v6 - 4 * v13 + 4 * v8);
          if ( FIELD_U32(v14, 6256) == 1 && FIELD_U32(v14, 6252) == a1[76] && (FIELD_U8(v14, 6266) & 2) != 0 )
            break;
          ++v8;
          if ( !--v5 )
            return v2;
        }
      }
      return 1;
    }
  }
  return v2;
}
