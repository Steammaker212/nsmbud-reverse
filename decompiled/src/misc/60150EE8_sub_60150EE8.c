/* sub_60150EE8
 * address: 0x60150EE8   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60150EE8(int a1, int a2, int a3)
{
  _BOOL4 result; // r0
  int v5; // r4
  int v6; // r1
  int v7; // r1
  int v8; // r2
  int v9; // r1
  int v10; // r3
  int v11; // r2
  bool v12; // zf
  int v13; // r1
  bool v14; // zf
  int v15; // r2
  int v16; // r2
  int v17; // r1
  int v18; // r2

  result = 1;
  if ( (FIELD_U32(a2, 308) & 0xF) != 0 )
  {
    v5 = FIELD_U32(a2, 304);
    v6 = *(__int64 *)(a2 + 304) >> 16;
    switch ( (__int16)v5 )
    {
      case 5:
      case 7:
        v8 = a1 + 8 * a3;
        v9 = FIELD_U32(v8, 2528);
        if ( (v9 & 0x80) != 0 )
        {
          if ( (v9 & 0x1000000) == 0 )
            goto LABEL_38;
        }
        else if ( (FIELD_U32(v8, 2532) & 0x8000) == 0 || (v9 & 0x1000000) == 0 )
        {
          goto LABEL_38;
        }
        break;
      case 6:
        v10 = a1 + 8 * a3;
        v11 = FIELD_U32(v10, 2528);
        v12 = (v11 & 0x80) == 0;
        if ( (v11 & 0x80) == 0 )
          v12 = (FIELD_U8(v10, 2533) & 0x80) == 0;
        if ( v12 )
        {
          if ( (v11 & 0x40) == 0 || (_BYTE)v6 || (v11 & 0x1000000) == 0 )
            goto LABEL_38;
        }
        else if ( (v11 & 0x1000000) == 0 )
        {
          goto LABEL_38;
        }
        break;
      case 10:
        if ( a3 == 2 && (FIELD_U8(a1, 2544) & 0x20) != 0 )
          goto LABEL_38;
        break;
      case 16:
        v13 = a1 + 8 * a3;
        v14 = (FIELD_U8(v13, 2533) & 0x80) == 0;
        if ( (FIELD_U8(v13, 2533) & 0x80) != 0 )
          v14 = (FIELD_U8(v13, 2531) & 0x20) == 0;
        if ( v14 )
          goto LABEL_38;
        break;
      case 24:
        if ( (unsigned __int8)v6 == 1 )
        {
          v18 = a1 + 8 * a3;
          if ( !(FIELD_U32(v18, 2532) & 0x8000 | FIELD_U32(v18, 2528) & 0x400) )
            goto LABEL_38;
          result = (FIELD_U32(v18, 2528) & 0x8000000) != 0;
        }
        else
        {
          if ( (_BYTE)v6 )
            goto LABEL_38;
          v15 = a1 + 8 * a3;
          if ( !(FIELD_U32(v15, 2532) & 0x8000 | FIELD_U32(v15, 2528) & 0x200)
            || (FIELD_U32(v15, 2528) & 0x4000000) == 0 )
          {
            goto LABEL_38;
          }
        }
        break;
      case 31:
        v16 = a1 + 8 * a3;
        v17 = FIELD_U32(v16, 2528);
        if ( (v17 & 0x800) != 0 )
        {
          if ( (v17 & 0x10000000) == 0 )
            goto LABEL_38;
        }
        else if ( (FIELD_U32(v16, 2532) & 0x8000) == 0 || (v17 & 0x10000000) == 0 )
        {
          goto LABEL_38;
        }
        break;
      case 34:
      case 35:
      case 36:
        v7 = a1 + 8 * a3;
        if ( (FIELD_U8(v7, 2533) & 0x80) == 0 || (FIELD_U8(v7, 2531) & 2) == 0 )
          goto LABEL_38;
        break;
      default:
LABEL_38:
        result = 0;
        break;
    }
  }
  return result;
}
