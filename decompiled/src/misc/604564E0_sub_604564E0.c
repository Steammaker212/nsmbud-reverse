/* sub_604564E0
 * address: 0x604564E0   size: 1076   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604564E0(int a1, unsigned __int8 *a2)
{
  int v4; // r1
  bool v5; // zf
  int v6; // r0
  int v7; // r6
  unsigned __int16 v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r1
  int v12; // r2
  int v13; // r1
  int v14; // r2
  int v15; // r9
  int v16; // r1
  int v17; // r8
  int v18; // r7
  int v19; // r5
  int v20; // r1
  int v21; // r9
  int v22; // r0
  __int16 v23; // r5
  int result; // r0
  int v25; // r6
  char v26; // r8
  int v27; // r7
  int v28; // r11
  int v29; // r0
  unsigned __int8 *v30; // [sp+14h] [bp-2Ch]

  *(_DWORD *)a1 = 0;
  v4 = FIELD_U8(a1, 158);
  v5 = FIELD_U16(a1, 154) == FIELD_U16(a1, 152);
  v6 = v4;
  if ( v5 )
  {
    v6 = 1;
    if ( !v4 )
    {
      v7 = 0;
      if ( !FIELD_U8(a1, 159) )
      {
        v8 = 0;
        goto LABEL_7;
      }
      v6 = 0;
    }
  }
  v7 = 4;
  if ( !v6 )
    v7 = 2;
  v8 = 1;
  if ( FIELD_U8(a1, 159) )
    v7 += 2;
LABEL_7:
  v9 = FIELD_U8(a1, 166);
  if ( FIELD_U16(a1, 162) != FIELD_U16(a1, 160)
    || (v5 = v9 == 0, v9 = 1, !v5)
    || (v9 = 0, FIELD_U8(a1, 167)) )
  {
    v10 = 4;
    v8 |= 2u;
    if ( !v9 )
      v10 = 2;
    v7 += v10;
    if ( FIELD_U8(a1, 167) )
      v7 += 2;
  }
  v11 = FIELD_U8(a1, 174);
  if ( FIELD_U16(a1, 170) != FIELD_U16(a1, 168)
    || (v5 = v11 == 0, v11 = 1, !v5)
    || (v11 = 0, FIELD_U8(a1, 175)) )
  {
    v12 = 4;
    v8 |= 4u;
    if ( !v11 )
      v12 = 2;
    v7 += v12;
    if ( FIELD_U8(a1, 175) )
      v7 += 2;
  }
  v13 = FIELD_U8(a1, 182);
  if ( FIELD_U16(a1, 178) != FIELD_U16(a1, 176)
    || (v5 = v13 == 0, v13 = 1, !v5)
    || (v13 = 0, FIELD_U8(a1, 183)) )
  {
    v14 = 4;
    v8 |= 8u;
    if ( !v13 )
      v14 = 2;
    v7 += v14;
    if ( FIELD_U8(a1, 183) )
      v7 += 2;
  }
  if ( FIELD_U8(a1, 184) != FIELD_U8(a1, 188)
    || FIELD_U8(a1, 185) != FIELD_U8(a1, 189)
    || FIELD_U16(a1, 186) != FIELD_U16(a1, 190) )
  {
    v7 += 4;
    v8 |= 0x20u;
  }
  if ( FIELD_U16(a1, 196) != FIELD_U16(a1, 204)
    || FIELD_U16(a1, 198) != FIELD_U16(a1, 206)
    || FIELD_U16(a1, 192) != FIELD_U16(a1, 200)
    || FIELD_U16(a1, 194) != FIELD_U16(a1, 202) )
  {
    v7 += 8;
    v8 |= 0x40u;
  }
  v15 = FIELD_U8(a1, 223);
  if ( a2 )
    v7 += 8;
  v16 = FIELD_U8(a1, 226);
  v17 = FIELD_U8(a1, 228);
  v18 = FIELD_U8(a1, 225);
  v19 = FIELD_U8(a1, 227);
  if ( v15 != 255 )
    v7 += 2;
  if ( v18 != v16 )
    ++v7;
  if ( v19 != v17 )
    ++v7;
  if ( a2 )
    v8 |= 0x80u;
  if ( v15 != 255 )
    v8 |= 0x100u;
  v5 = v18 == v16;
  v20 = FIELD_U16(a1, 220);
  if ( !v5 )
    v8 |= 0x200u;
  if ( v19 != v17 )
    v8 |= 0x400u;
  v21 = v8;
  if ( v8 )
  {
    v30 = a2;
    if ( FIELD_U16(a1, 220) )
    {
      while ( 1 )
      {
        v22 = FIELD_U32(a1, 12);
        if ( (unsigned int)(FIELD_U32(v22, 28) + 2) > 0xD2F81 )
          break;
        if ( (unsigned __int16)v20 >= 0x7FFFu )
          LOWORD(v20) = 0x7FFF;
        v23 = v20;
        sub_60905584(v22, (unsigned __int16)v20 | 0x8000);
        LOWORD(v20) = FIELD_U16(a1, 220) - v23;
        FIELD_U16(a1, 220) = v20;
        if ( !(_WORD)v20 )
          goto LABEL_67;
      }
      FIELD_U16(a1, 220) = 0;
    }
LABEL_67:
    result = FIELD_U32(a1, 12);
    if ( (unsigned int)(v7 + FIELD_U32(result, 28)) <= 0xD2F81 )
    {
      sub_60905584(result, v21);
      result = 0x80C128u;
      v25 = 0;
      v26 = 0;
      do
      {
        if ( (v21 & (1 << v26)) != 0 )
        {
          v27 = a1 + v25;
          v28 = *(unsigned __int16 *)(a1 + v25 + 154);
          if ( *(_BYTE *)(a1 + v25 + 158) )
          {
            v5 = !sub_60454C78(dword_60C9CF0C);
            v29 = 0x4000;
            if ( !v5 )
              v29 = 0x2000;
            v28 |= v29;
          }
          if ( FIELD_U8(v27, 159) )
            v28 |= 0x8000u;
          sub_60905584(FIELD_U32(a1, 12), v28);
          if ( FIELD_U8(v27, 158) )
            sub_60905584(FIELD_U32(a1, 12), FIELD_U16(v27, 156));
          result = FIELD_U8(v27, 159);
          if ( FIELD_U8(v27, 159) )
            result = sub_60905584(FIELD_U32(a1, 12), FIELD_U16(v27, 152));
        }
        v25 += 8;
        ++v26;
      }
      while ( v25 != 32 );
      if ( (v21 & 0x20) != 0 )
        result = sub_60455B20(FIELD_U32(a1, 12), (unsigned __int8 *)(a1 + 184));
      if ( (v21 & 0x40) != 0 )
        result = sub_60455B88(FIELD_U32(a1, 12), (__int16 *)(a1 + 192));
      if ( v30 )
        result = sub_60455C08(FIELD_U32(a1, 12), v30);
      if ( (v21 & 0x100) != 0 )
        result = sub_60455C70(FIELD_U32(a1, 12), (unsigned __int8 *)(a1 + 223));
      if ( (v21 & 0x200) != 0 )
        result = sub_60455C98(FIELD_U32(a1, 12), (unsigned __int8 *)(a1 + 225));
      if ( (v21 & 0x400) != 0 )
        return sub_60455CA4(FIELD_U32(a1, 12), (unsigned __int8 *)(a1 + 227));
    }
  }
  else
  {
    FIELD_U16(a1, 220) = v20 + 1;
    return v20 + 1;
  }
  return result;
}
