/* sub_60924BFC
 * address: 0x60924BFC   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60924BFC(_DWORD *a1)
{
  _DWORD *v2; // r5
  int result; // r0
  unsigned int v4; // r2
  int v5; // r1
  unsigned int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r8
  unsigned int v9; // r9
  int v10; // r11
  int v11; // r0
  bool v12; // zf
  int v13; // r10
  int v14; // r0
  _DWORD *v15; // r7
  int v16; // r5
  int v17; // r0
  int i; // r2
  int v19; // [sp+4h] [bp-2Ch]
  unsigned int v20; // [sp+8h] [bp-28h]

  v2 = a1 + 7;
  sub_60940EA4(a1 + 7);
  result = a1[192];
  switch ( result )
  {
    case 0:
      return sub_60941410(v2, (a1[121] >> 8) & 1);
    case 2:
      return sub_6094152C(v2, (a1[121] >> 8) & 1);
    case 1:
      result = a1[193];
      v19 = result;
      if ( result )
      {
        v4 = 0;
        do
        {
          v5 = a1[4];
          v20 = v4;
          if ( a1[3] > v4 )
            v5 += 4 * v4;
          if ( FIELD_U16(v5, 2) )
          {
            sub_60923F9C(a1 + 137, v4);
            v6 = a1[141];
            v7 = a1[142];
            if ( a1[140] > v20 )
              v6 += 4 * v20;
            v8 = *(unsigned __int16 *)v6;
            v9 = FIELD_U16(v6, 2) + v8;
            if ( v7 < v9 )
              v9 = a1[142];
            if ( v7 < v8 )
              v8 = a1[142];
            if ( v8 != v9 )
            {
              v10 = a1[143];
              do
              {
                v11 = *(_DWORD *)(v10 + 4 * v8);
                v12 = v11 == 0;
                if ( v11 )
                {
                  v6 = a1[20];
                  v12 = v6 == -1;
                }
                if ( !v12 )
                {
                  v13 = a1[12];
                  v14 = v11 + 28;
                  if ( a1[11] > v6 )
                    v13 += 324 * v6;
                  v15 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v14 + 16))(v14);
                  (*(void (__fastcall **)(int))(FIELD_U32(v13, 12) + 12))(v13 + 12);
                  (*(void (__fastcall **)(int))(FIELD_U32(v13, 12) + 12))(v13 + 12);
                  v16 = FIELD_U32(v13, 16);
                  (*(void (__fastcall **)(_DWORD *))(*v15 + 12))(v15);
                  v17 = v15[1];
                  if ( v16 != v17 )
                  {
                    v6 = FIELD_U32(v13, 16);
                    for ( i = 0; i <= 0x80000; ++i )
                    {
                      if ( *(unsigned __int8 *)(v6 + i) != *(unsigned __int8 *)(v17 + i) )
                        break;
                      if ( !*(_BYTE *)(v6 + i) )
                        break;
                    }
                  }
                }
                ++v8;
              }
              while ( v8 != v9 );
            }
          }
          result = v19;
          v4 = v20 + 1;
        }
        while ( v20 + 1 != v19 );
      }
      break;
  }
  return result;
}
