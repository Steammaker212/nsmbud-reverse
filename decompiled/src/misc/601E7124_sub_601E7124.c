/* sub_601E7124
 * address: 0x601E7124   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601E7124()
{
  int v0; // r5
  int v1; // r6
  int v2; // r4
  int result; // r0
  int v4; // r0
  int v5; // r2
  _BOOL4 v6; // r4
  __int16 v7; // r1
  unsigned __int8 v8; // r2
  int v9; // r1
  unsigned __int8 v10; // r1
  unsigned __int8 v11; // r1

  v0 = dword_60CC6D78;
  v1 = FIELD_U32(dword_60CC6D78, 32);
  v2 = (unsigned __int8)FIELD_U32(dword_60CC6D78, 440);
  result = sub_6040E368(v2);
  if ( result )
    return result;
  result = sub_6040E404(v2);
  if ( v1 == 1 )
    return result;
  if ( result )
    return result;
  result = FIELD_U8(v0, 509);
  if ( !FIELD_U8(v0, 509) )
    return result;
  result = FIELD_U8(v0, 44);
  if ( (result & 8) != 0 )
    return result;
  v4 = sub_603FD44C(dword_60C99DEC + 16);
  v5 = 0;
  v6 = 0;
  if ( !v4 )
  {
    v5 = FIELD_U32(v0, 528) | 1;
    v6 = v5 == 3;
    if ( v5 != 1 )
      v5 = 0;
  }
  v7 = FIELD_U16(v0, 520);
  if ( (v7 & 4) != 0 )
  {
    if ( v5 != 1 )
    {
      result = FIELD_U8(v0, 525);
      if ( (result & 3) != 0 )
        goto LABEL_17;
      v8 = FIELD_U8(v0, 526) + 1;
      if ( v8 < 4u )
        goto LABEL_16;
      result = (2 - (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) & 1)) | FIELD_U8(v0, 525);
      FIELD_U8(v0, 525) = result;
      v7 = FIELD_U16(v0, 520);
      goto LABEL_15;
    }
    result = FIELD_U8(v0, 525) & ~(1 << FIELD_U32(v0, 528));
    goto LABEL_14;
  }
  result = FIELD_U8(v0, 525);
  if ( v5 == 1 )
  {
    result &= 0xFEu;
LABEL_14:
    FIELD_U8(v0, 525) = result;
    FIELD_U32(v0, 528) = 4;
LABEL_15:
    v8 = 0;
    goto LABEL_16;
  }
  if ( (result & 1) != 0 )
    goto LABEL_17;
  v8 = FIELD_U8(v0, 526) + 1;
  if ( v8 >= 2u )
  {
    result |= 1u;
    FIELD_U8(v0, 525) = result;
    goto LABEL_15;
  }
LABEL_16:
  FIELD_U8(v0, 526) = v8;
LABEL_17:
  v9 = v7 & 0x28;
  switch ( v9 )
  {
    case 40:
      if ( !v6 )
      {
        if ( (result & 0xC) != 0 )
          return result;
        result = FIELD_U8(v0, 527) + 1;
        if ( (unsigned __int8)result < 4u )
          goto LABEL_34;
        FIELD_U8(v0, 525) |= ((4 * (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) & 1)) ^ 4) + 4;
LABEL_33:
        result = 0;
LABEL_34:
        FIELD_U8(v0, 527) = result;
        return result;
      }
      result &= ~(1 << FIELD_U32(v0, 528));
LABEL_32:
      FIELD_U8(v0, 525) = result;
      FIELD_U32(v0, 528) = 4;
      goto LABEL_33;
    case 32:
      if ( v6 )
      {
        LOBYTE(result) = result & 0xF7;
        goto LABEL_32;
      }
      if ( (result & 8) == 0 )
      {
        v11 = FIELD_U8(v0, 527) + 1;
        if ( v11 >= 2u )
        {
          result |= 8u;
          v11 = 0;
          FIELD_U8(v0, 525) = result;
        }
        FIELD_U8(v0, 527) = v11;
      }
      break;
    case 8:
      if ( v6 )
      {
        LOBYTE(result) = result & 0xFB;
        goto LABEL_32;
      }
      if ( (result & 4) == 0 )
      {
        v10 = FIELD_U8(v0, 527) + 1;
        if ( v10 >= 2u )
        {
          result |= 4u;
          v10 = 0;
          FIELD_U8(v0, 525) = result;
        }
        FIELD_U8(v0, 527) = v10;
      }
      break;
    default:
      return result;
  }
  return result;
}
