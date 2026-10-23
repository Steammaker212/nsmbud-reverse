/* sub_604C6B78
 * address: 0x604C6B78   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C6B78(int a1)
{
  unsigned int v2; // r11
  unsigned int *v3; // r6
  _BYTE *v4; // r7
  unsigned int *v5; // r10
  int v6; // r0
  unsigned int v7; // r1
  unsigned int v8; // r0
  unsigned int v9; // r0
  char v10; // r2
  _BYTE *v11; // r5
  _BYTE *v12; // r5
  int *v14; // [sp+8h] [bp-48h]
  _BYTE *v15; // [sp+Ch] [bp-44h]
  int *v16; // [sp+10h] [bp-40h]
  _DWORD *v17; // [sp+1Ch] [bp-34h]

  v2 = -11;
  v3 = (unsigned int *)(a1 + 13960);
  v4 = (_BYTE *)(a1 + 14004);
  v16 = (int *)(a1 + 13768);
  v15 = (_BYTE *)(a1 + 14167);
  v14 = (int *)(a1 + 14144);
  v17 = (_DWORD *)(a1 + 48);
  v5 = (unsigned int *)&dword_60B02EE8;
  do
  {
    v7 = *v5;
    v8 = v2 + 11;
    if ( v4[11] )
    {
      if ( *v4 )
        goto LABEL_26;
      if ( v2 == -1 )
        goto LABEL_24;
      if ( v2 == -8 )
      {
        if ( !*v15 || *v14 < 0 || (v9 = *v14 - 24, v9 <= 0xD) && ((1 << v9) & 0x207F) != 0 )
        {
          v6 = *v16;
          v10 = *(_BYTE *)(*v16 + 64) & 0xFE;
LABEL_23:
          FIELD_U8(v6, 64) = v10;
LABEL_24:
          v12 = (_BYTE *)(a1 + v7 + 13892);
          if ( !*v12 )
          {
            *v4 = 1;
            sub_604742D0(v17, v7, &dword_60CA2AD4, *v3, 1.0, 0);
            *v12 = 1;
          }
          goto LABEL_26;
        }
        v6 = *v16;
      }
      else
      {
        if ( v8 >= 0xA )
          v8 = 0;
        v6 = *(_DWORD *)(a1 + 4 * v8 + 13756);
      }
      v10 = FIELD_U8(v6, 64) | 1;
      goto LABEL_23;
    }
    if ( *v4 )
    {
      v11 = (_BYTE *)(a1 + v7 + 13892);
      if ( !*v11 )
      {
        *v4 = 0;
        sub_60474420(v17, v7, &dword_60CA2AD4, *v3, 0);
        *v11 = 1;
      }
    }
    else if ( v2 + 2 >= v2 )
    {
      if ( v8 >= 0xA )
        v8 = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 4 * v8 + 13756) + 64) &= ~1u;
    }
LABEL_26:
    ++v5;
    ++v3;
    ++v4;
    ++v2;
  }
  while ( v2 );
  FIELD_U8(a1, 13902) = 0;
  return 13902;
}
