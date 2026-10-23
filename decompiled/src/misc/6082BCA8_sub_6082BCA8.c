/* sub_6082BCA8
 * address: 0x6082BCA8   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6082BCA8(int a1, _BYTE *a2)
{
  int v4; // r5
  _DWORD *v5; // r7
  __int64 v6; // r8
  unsigned __int64 v7; // r0
  char v8; // r2
  int v9; // r0
  _DWORD *v10; // r7
  int v11; // t1
  int v12; // r1
  int result; // r0
  char v14; // r2
  int v15; // r0
  int v16; // r2
  bool v17; // zf
  int v18; // r0
  int v19; // r0
  int v20; // r2
  int v21; // r0
  int v22; // r2
  char v23; // r1
  _BYTE *v24; // r7
  int v25; // t1

  v4 = 0;
  if ( !**(_BYTE **)(dword_60CC6D78 + 140) )
  {
    v5 = *(_DWORD **)(a1 + 40);
    if ( !sub_6040E44C(LevelInfo_instance) )
    {
      v6 = FIELD_U64(dword_60CC6BE4, 200);
      v7 = (v6 - FIELD_U64(a1, 72)) / 0x3CuLL;
      if ( (unsigned int)v7 >= 0x3C )
      {
        HIDWORD(v7) = v5[11035];
        LODWORD(v7) = HIDWORD(v7) + (unsigned int)v7 / 0x3C;
        if ( (unsigned int)v7 < HIDWORD(v7) )
          LODWORD(v7) = -1;
        v5[11035] = v7;
        v8 = FIELD_U8(a1, 48);
        if ( HIDWORD(v7) != (_DWORD)v7 )
          v8 |= 1u;
        FIELD_U8(a1, 48) = v8;
        FIELD_U64(a1, 72) = v6;
      }
      v4 = 1;
      switch ( sub_603FD0B4(a2) )
      {
        case 1:
          v11 = v5[11051];
          v10 = v5 + 11051;
          v9 = v11;
          v12 = v11;
          if ( v11 != -1 )
            ++v12;
          *v10 = v12;
          v17 = v9 == v12;
          result = 1;
          v14 = FIELD_U8(a1, 48);
          if ( !v17 )
            v14 |= 1u;
          FIELD_U8(a1, 48) = v14;
          return result;
        case 2:
          v15 = v5[11052];
          v16 = v15;
          if ( v15 != -1 )
            v16 = v15 + 1;
          v5[11052] = v16;
          v17 = v15 == v16;
          v18 = 44300;
          goto LABEL_24;
        case 3:
          v19 = v5[11053];
          v20 = v19;
          if ( v19 != -1 )
            v20 = v19 + 1;
          v5[11053] = v20;
          v17 = v19 == v20;
          v18 = 44301;
          goto LABEL_24;
        case 4:
          v21 = v5[11054];
          v22 = v21;
          if ( v21 != -1 )
            v22 = v21 + 1;
          v5[11054] = v22;
          v17 = v21 == v22;
          v18 = 44302;
LABEL_24:
          v23 = FIELD_U8(a1, 48);
          if ( !v17 )
            v23 |= 1u;
          FIELD_U8(a1, 48) = v23;
          v25 = *((unsigned __int8 *)v5 + v18);
          v24 = (char *)v5 + v18;
          if ( !v25 )
          {
            v4 = 1;
            *v24 = 1;
            FIELD_U8(a1, 48) = 1;
          }
          break;
        default:
          return v4;
      }
    }
  }
  return v4;
}
