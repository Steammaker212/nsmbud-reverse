/* sub_60816F60
 * address: 0x60816F60   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60816F60(int a1, unsigned int a2)
{
  int result; // r0
  bool v4; // zf
  int v5; // r2
  int v6; // r3
  unsigned int v7; // r5
  int v8; // r2
  _BOOL4 v9; // r3
  char v10; // r12
  bool v11; // zf
  bool v12; // zf
  bool v13; // zf
  int v14; // r1
  bool v15; // zf
  int v16; // r1

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
      }
      else if ( a2 != 1 && v5 == 16 )
      {
        return result;
      }
      v6 = FIELD_U16(a1, 24);
      v7 = v6 & ~a2;
      FIELD_U16(a1, 24) = v7;
      if ( (v7 & 1) != 0 )
      {
        FIELD_U8(a1, 52) = (v7 & 0x10) != 0;
        if ( (v6 & 0xEF) != (v7 & 0xEF) )
        {
          v10 = 7;
          if ( (v7 & 0x80) != 0 )
            goto LABEL_23;
          v10 = 6;
          if ( (v7 & 0xC0) == 0x40 )
            goto LABEL_23;
          v10 = 5;
          v11 = (v7 & 0xE0) == 32;
          if ( (v7 & 0xE0) != 0x20 )
          {
            v10 = 3;
            v11 = (v7 & 0xE8) == 8;
          }
          if ( v11 )
            goto LABEL_23;
          v10 = 2;
          v12 = (v7 & 0xEC) == 4;
          if ( (v7 & 0xEC) != 4 )
          {
            v10 = 1;
            v12 = (v7 & 0xEE) == 2;
          }
          if ( v12 || (v10 = 0, (v7 & 0xEF) == 1) )
LABEL_23:
            FIELD_U8(a1, 27) = 1 << v10;
        }
        v9 = (v7 & 8) == 0;
        v8 = (v7 >> 8) | 1;
      }
      else
      {
        LOBYTE(v8) = 0;
        FIELD_U16(a1, 24) = 0;
        FIELD_U8(a1, 27) = 0;
        FIELD_U8(a1, 26) = -1;
        v9 = 1;
      }
      v13 = (a2 & 4) == 0;
      FIELD_U8(a1, 28) = v8;
      if ( (a2 & 4) != 0 )
        v13 = v9;
      if ( v13 && (a2 != 16 || !FIELD_U8(dword_60CC6D8C, 17)) )
      {
        if ( (a2 & 0x600) != 0 )
        {
          return STRM_BGM_ref_4(result);
        }
        else
        {
          v14 = FIELD_U8(a1, 26);
          if ( v14 == FIELD_U8(a1, 27) )
          {
            if ( (v14 & 8) != 0 )
              return STRM_BGM_ref_3((_DWORD *)result, 0);
          }
          else
          {
            v15 = FIELD_U8(dword_60CC6D8C, 17) == 0;
            if ( FIELD_U8(dword_60CC6D8C, 17) )
              v15 = v14 == 255;
            v16 = !v15;
            STRM_BGM_ref_3((_DWORD *)result, v16);
            result = FIELD_U8(a1, 27);
            FIELD_U8(a1, 26) = result;
          }
        }
      }
    }
  }
  return result;
}
