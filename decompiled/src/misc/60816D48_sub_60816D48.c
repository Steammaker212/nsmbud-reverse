/* sub_60816D48
 * address: 0x60816D48   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60816D48(int a1, unsigned int a2)
{
  int result; // r0
  bool v4; // zf
  int v5; // r2
  int v6; // r3
  __int16 v7; // r5
  int v8; // r2
  char v9; // r12
  bool v10; // zf
  bool v11; // zf
  int v12; // r1
  _DWORD *v13; // r0
  int v14; // r1

  result = FIELD_U32(a1, 20);
  v4 = result == 24;
  if ( result != 24 )
    v4 = result == 17;
  if ( v4 )
  {
    result = 4097;
    if ( a2 <= 0x1001 )
    {
      result = dword_60CC6B0C;
      v5 = FIELD_U32(dword_60CC6B0C, 16);
      if ( v5 == 22 )
      {
        if ( a2 != 1 )
          return result;
LABEL_8:
        v6 = FIELD_U16(a1, 24);
        v7 = v6 | a2;
        FIELD_U16(a1, 24) = v6 | a2;
        if ( ((v6 | a2) & 1) != 0 )
        {
          FIELD_U8(a1, 52) = (v7 & 0x10) != 0;
          if ( (v6 & 0xEF) != (v7 & 0xEF) )
          {
            v9 = 7;
            if ( (v7 & 0x80) != 0 )
              goto LABEL_23;
            v9 = 6;
            if ( (v7 & 0xC0) == 0x40 )
              goto LABEL_23;
            v9 = 5;
            v10 = (v7 & 0xE0) == 32;
            if ( (v7 & 0xE0) != 0x20 )
            {
              v9 = 3;
              v10 = (v7 & 0xE8) == 8;
            }
            if ( v10 )
              goto LABEL_23;
            v9 = 2;
            v11 = (v7 & 0xEC) == 4;
            if ( (v7 & 0xEC) != 4 )
            {
              v9 = 1;
              v11 = (v7 & 0xEE) == 2;
            }
            if ( v11 || (v9 = 0, (v7 & 0xEF) == 1) )
LABEL_23:
              FIELD_U8(a1, 27) = 1 << v9;
            if ( a2 == 4 && FIELD_U8(a1, 27) == 8 )
              FIELD_U8(a1, 27) = 4;
          }
          v8 = ((unsigned __int16)(v7 & 0xFE00) >> 8) | 1;
        }
        else
        {
          LOBYTE(v8) = 0;
          FIELD_U16(a1, 24) = 0;
          FIELD_U16(a1, 26) = 255;
        }
        FIELD_U8(a1, 28) = v8;
        if ( a2 == 1 )
        {
          FIELD_U8(a1, 64) = 0;
          if ( FIELD_U8(a1, 27) == 1 )
            FIELD_U8(a1, 26) = -1;
        }
        else if ( a2 == 16 )
        {
          FIELD_U8(a1, 52) = 1;
          STRM_BGM_MG_BTL_ref(result);
        }
        else if ( (a2 & 0x600) != 0 )
        {
          return STRM_BGM_ref_4(result);
        }
        v12 = FIELD_U8(a1, 26);
        result = FIELD_U8(a1, 27);
        if ( v12 == result )
        {
          if ( (v12 & 8) != 0 )
            return STRM_BGM_ref_3((_DWORD *)dword_60CC6B0C, 0);
          return result;
        }
        if ( FIELD_U8(dword_60CC6D8C, 17) )
        {
          v13 = (_DWORD *)dword_60CC6B0C;
          if ( v12 != 255 )
          {
            v14 = 1;
LABEL_45:
            STRM_BGM_ref_3(v13, v14);
            result = FIELD_U8(a1, 27);
            FIELD_U8(a1, 26) = result;
            return result;
          }
        }
        else
        {
          v13 = (_DWORD *)dword_60CC6B0C;
        }
        v14 = 0;
        goto LABEL_45;
      }
      if ( a2 == 1 || v5 != 16 )
        goto LABEL_8;
    }
  }
  return result;
}
