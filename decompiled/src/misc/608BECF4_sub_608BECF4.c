/* sub_608BECF4
 * address: 0x608BECF4   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BECF4(int result)
{
  int v1; // r5
  int v2; // r4
  int v3; // r0
  int v4; // r7
  int v5; // r2
  int v6; // r9
  _BYTE *v7; // r6
  int v8; // r1
  bool v9; // zf
  int v10; // t1
  int v11; // r10
  int v12; // r11
  bool v13; // zf
  unsigned __int8 v14; // r8
  int v15; // r1
  int v16; // r5
  _DWORD *v17; // r7
  int v18; // r1

  if ( !FIELD_U8(result, 186) && !FIELD_U8(result, 37) )
  {
    v2 = result;
    v3 = FIELD_U32(result, 1000);
    if ( v3 >= 1 )
    {
      v4 = 0;
      v5 = 54272;
      v6 = v2 + 54276;
      do
      {
        v7 = (_BYTE *)(v2 + 112 * v4);
        v8 = (unsigned __int8)v7[54272];
        v9 = v8 == 0;
        if ( v7[54272] )
        {
          v10 = (unsigned __int8)v7[54284];
          v7 += 54284;
          LOBYTE(v8) = v10;
          v9 = v10 == 0;
        }
        if ( !v9 )
        {
          v11 = 0;
          v12 = v6;
          do
          {
            v13 = *(_DWORD *)v12 == 0;
            if ( *(_DWORD *)v12 )
            {
              v1 = *(_DWORD *)(*(_DWORD *)v12 + 4);
              v13 = v1 == 0;
            }
            if ( !v13 )
            {
              sub_608C9AB8(v1, FIELD_U32(v2, 252), v5);
              sub_608C9AF8(v1, FIELD_U32(v2, 256));
              FIELD_U32(v1, 552) = FIELD_U32(v2, 55168);
              sub_608CA470(v1, FIELD_U32(v2, 32));
              sub_608C938C(v1);
              LOBYTE(v8) = *v7;
            }
            ++v11;
            v12 += 4;
          }
          while ( v11 < (unsigned __int8)v8 );
          v3 = FIELD_U32(v2, 1000);
          v5 = 54272;
        }
        ++v4;
        v6 += 112;
      }
      while ( v4 < v3 );
    }
    v14 = FIELD_U8(v2, 181) | FIELD_U8(v2, 38);
    if ( v14 != FIELD_U8(v2, 180) )
    {
      v15 = FIELD_U32(v2, 996);
      if ( v15 >= 1 )
      {
        v16 = 0;
        v17 = (_DWORD *)(v2 + 1028);
        do
        {
          if ( *v17 )
          {
            v18 = v14;
            if ( v14 )
              v18 = 1;
            sub_608C9520(*v17, v18);
            v15 = FIELD_U32(v2, 996);
          }
          ++v16;
          v17 += 832;
        }
        while ( v16 < v15 );
      }
      FIELD_U8(v2, 180) = v14;
    }
    FIELD_U8(v2, 37) = 1;
    return 1;
  }
  return result;
}
