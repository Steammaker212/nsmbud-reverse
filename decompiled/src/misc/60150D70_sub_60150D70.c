/* sub_60150D70
 * address: 0x60150D70   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60150D70(int a1, int a2, int a3)
{
  int v3; // r3
  int v4; // r2
  int v5; // r12
  _BOOL4 result; // r0
  int v7; // r0
  int v8; // r3

  v3 = a1 + 8 * a3;
  v4 = FIELD_U32(v3, 2532);
  if ( (v4 & 0x10000) != 0 )
    return (FIELD_U8(a2, 136) >> 4) & 1;
  v5 = FIELD_U32(a2, 304);
  switch ( (__int16)v5 )
  {
    case 5:
    case 7:
      v7 = FIELD_U32(v3, 2528) & 0x80;
      goto LABEL_20;
    case 6:
      v8 = FIELD_U32(v3, 2528);
      result = 1;
      if ( !(v8 & 0x80 | v4 & 0x8000) && ((v5 & 0xFF0000) != 0 || (v8 & 0x40) == 0) )
        return 0;
      return result;
    case 16:
    case 35:
    case 36:
      result = 1;
      if ( (v4 & 0x8000) == 0 )
        return 0;
      return result;
    case 24:
      if ( BYTE2(v5) == 1 )
      {
        v7 = FIELD_U32(v3, 2528) & 0x400;
      }
      else
      {
        if ( BYTE2(v5) )
          return 0;
        v7 = FIELD_U32(v3, 2528) & 0x200;
      }
LABEL_20:
      result = (v7 | FIELD_U32(v3, 2532) & 0x8000) != 0;
      break;
    case 31:
      v7 = FIELD_U32(v3, 2528) & 0x800;
      goto LABEL_20;
    case 34:
      result = 1;
      if ( (v4 & 0x8000) == 0 && ((v5 & 0xFF0000) != 0 || (FIELD_U32(v3, 2528) & 0x80) == 0) )
        return 0;
      return result;
    default:
      return 0;
  }
  return result;
}
