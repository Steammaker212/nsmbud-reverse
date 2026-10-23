/* sub_604AA80C
 * address: 0x604AA80C   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AA80C(int a1)
{
  int i; // r5
  int v3; // r11
  char v4; // r0
  int v5; // r10
  int v6; // r1
  int v7; // r0
  _DWORD *v8; // r2
  char v9; // r3
  int v10; // r1
  int v11; // r0
  int v12; // r5
  const void *v14; // [sp+0h] [bp-C0h]
  _BYTE v15[184]; // [sp+8h] [bp-B8h] BYREF

  FIELD_U8(a1, 279728) = 1;
  v14 = (const void *)(a1 + 277524);
  sub_60834AE0(a1 + 3732, 4, a1 + 277524, 6);
  for ( i = 0; i != 6; ++i )
  {
    v3 = a1 + 24 * i;
    v4 = 0;
    if ( FIELD_U8(v3, 277524) )
    {
      v4 = 0;
      if ( FIELD_U32(v3, 277544) == 6 )
      {
        v5 = 0;
        v6 = FIELD_U32(v3, 277540);
        v7 = 0;
        if ( v6 >= 0 )
          v7 = sub_60834674(v6);
        v8 = (_DWORD *)(a1 + 97804);
        while ( 1 )
        {
          v9 = 0;
          if ( *(v8 - 543) == 8 )
          {
            v9 = 4;
            if ( *v8 == v7 )
            {
              v6 = v5;
              v9 = 1;
            }
          }
          if ( (v9 & 3 | 4) != 4 )
            break;
          ++v5;
          v8 += 747;
          if ( v5 >= 61 )
          {
            v4 = 0;
            goto LABEL_16;
          }
        }
        v4 = 0;
        if ( (unsigned int)v6 <= 0x3C )
        {
          v10 = *(_DWORD *)(a1 + 2988 * v6 + 95272);
          if ( v10 )
            v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
        }
      }
    }
LABEL_16:
    FIELD_U8(v3, 277525) = v4;
  }
  qmemcpy(v15, v14, 0x90u);
  v11 = sub_60834718(v15, 6);
  v12 = sub_60834614(v11);
  if ( FIELD_U32(v12, 32) == 6 && FIELD_U8(v12, 48) )
    sub_6081F2B8(dword_60CC6D78, 0, FIELD_U32(v12, 44));
  if ( FIELD_U32(v12, 104) == 6 && FIELD_U8(v12, 120) )
    sub_6081F2B8(dword_60CC6D78, 1, FIELD_U32(v12, 116));
  if ( FIELD_U32(v12, 176) == 6 && FIELD_U8(v12, 192) )
    sub_6081F2B8(dword_60CC6D78, 2, FIELD_U32(v12, 188));
  if ( FIELD_U32(v12, 248) == 6 && FIELD_U8(v12, 264) )
    sub_6081F2B8(dword_60CC6D78, 3, FIELD_U32(v12, 260));
  if ( FIELD_U32(v12, 320) == 6 && FIELD_U8(v12, 336) )
    sub_6081F2B8(dword_60CC6D78, 4, FIELD_U32(v12, 332));
  if ( FIELD_U32(v12, 392) == 6 && FIELD_U8(v12, 408) )
    sub_6081F2B8(dword_60CC6D78, 5, FIELD_U32(v12, 404));
  FIELD_U8(a1, 279732) = 0;
  return 279732;
}
