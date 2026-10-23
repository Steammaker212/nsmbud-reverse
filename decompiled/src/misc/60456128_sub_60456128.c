/* sub_60456128
 * address: 0x60456128   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60456128(int a1)
{
  int result; // r0
  __int16 v3; // r11
  int v4; // r0
  int v5; // r11
  int v6; // r8
  char v7; // r10
  int v8; // r9
  int v9; // r6
  bool v10; // zf
  int v11; // r0
  int v12; // r0
  char v13; // r0
  _DWORD *v14; // [sp+0h] [bp-30h]

  *(_DWORD *)a1 = 1;
  result = FIELD_U8(a1, 222);
  if ( !result )
  {
    if ( FIELD_U16(a1, 220) )
    {
      v3 = FIELD_U16(a1, 220) - 1;
      v14 = (_DWORD *)(a1 + 12);
    }
    else
    {
      v14 = (_DWORD *)(a1 + 12);
      v4 = sub_6090535C(FIELD_U32(a1, 12));
      v5 = v4;
      if ( (v4 & 0x8000) == 0 )
      {
        if ( (v4 & 0x10) != 0 )
        {
          FIELD_U16(a1, 152) = FIELD_U16(a1, 154);
          FIELD_U16(a1, 156) = 0;
          FIELD_U16(a1, 154) = 0;
          FIELD_U8(a1, 158) = 0;
          FIELD_U16(a1, 160) = FIELD_U16(a1, 162);
          FIELD_U16(a1, 164) = 0;
          FIELD_U16(a1, 162) = 0;
          FIELD_U8(a1, 166) = 0;
          FIELD_U16(a1, 168) = FIELD_U16(a1, 170);
          FIELD_U16(a1, 172) = 0;
          FIELD_U16(a1, 170) = 0;
          FIELD_U8(a1, 174) = 0;
          FIELD_U16(a1, 176) = FIELD_U16(a1, 178);
          FIELD_U16(a1, 180) = 0;
          FIELD_U16(a1, 178) = 0;
          FIELD_U8(a1, 182) = 0;
          FIELD_U8(a1, 222) = 1;
          return 1;
        }
LABEL_10:
        v6 = 0;
        v7 = 0;
        do
        {
          v8 = a1 + v6;
          FIELD_U16(v8, 152) = *(_WORD *)(a1 + v6 + 154);
          FIELD_U8(v8, 159) = 0;
          if ( (v5 & (1 << v7)) != 0 )
          {
            v9 = sub_6090535C(FIELD_U32(a1, 12));
            v10 = !sub_60454C78(dword_60C9CF0C);
            v11 = 0x4000;
            if ( !v10 )
              v11 = 0x2000;
            FIELD_U16(v8, 154) = v9 & ~(_WORD)v11;
            FIELD_U8(v8, 158) = 0;
            if ( (v11 & v9) != 0 )
              FIELD_U16(v8, 156) = sub_6090535C(FIELD_U32(a1, 12));
            v10 = !sub_60454C78(dword_60C9CF0C);
            v12 = -32768;
            if ( !v10 )
              v12 = 0x4000;
            if ( (v12 & v9) != 0 )
            {
              FIELD_U16(v8, 152) = sub_6090535C(*v14);
              FIELD_U8(v8, 159) = 1;
            }
          }
          else
          {
            FIELD_U8(v8, 158) = 0;
          }
          v6 += 8;
          ++v7;
        }
        while ( v6 != 32 );
        if ( (v5 & 0x20) != 0 )
          sub_60455AF4(FIELD_U32(a1, 12), a1 + 184);
        if ( (v5 & 0x40) != 0 )
          sub_60455B50(FIELD_U32(a1, 12), a1 + 192);
        v13 = 0;
        if ( (v5 & 0x80) != 0 )
        {
          sub_60455BC4(FIELD_U32(a1, 12), a1 + 212);
          v13 = 1;
        }
        FIELD_U8(a1, 208) = v13;
        if ( (v5 & 0x100) != 0 )
        {
          result = sub_60455C50(FIELD_U32(a1, 12), a1 + 223);
          if ( (v5 & 0x200) == 0 )
            goto LABEL_33;
        }
        else
        {
          result = 255;
          FIELD_U8(a1, 223) = -1;
          if ( (v5 & 0x200) == 0 )
          {
LABEL_33:
            if ( (v5 & 0x400) != 0 )
              return sub_60455CA0(FIELD_U32(a1, 12), a1 + 227);
            return result;
          }
        }
        result = sub_60455C94(FIELD_U32(a1, 12), a1 + 225);
        goto LABEL_33;
      }
      v3 = v4 & 0x7FFF;
      FIELD_U16(a1, 220) = v4 & 0x7FFF;
      if ( (v4 & 0x7FFF) != 0 )
        --v3;
    }
    FIELD_U16(a1, 220) = v3;
    v5 = 0;
    goto LABEL_10;
  }
  return result;
}
