/* sub_607EC8F8
 * address: 0x607EC8F8   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_607EC8F8()
{
  int v0; // r2
  int result; // r0
  int v2; // r1
  char v3; // r1
  int v4; // r2
  bool v5; // zf
  int v6; // r1
  char v7; // r1
  int v8; // r1

  v0 = FIELD_U8(dword_60CC6D8C, 17);
  result = dword_60C99DEC;
  FIELD_U32(dword_60C99DEC, 76) = 0;
  FIELD_U32(result, 80) = 0;
  v2 = FIELD_U32(result, 48);
  if ( v0 )
  {
    if ( v2 )
    {
      if ( v2 == 1 )
        FIELD_U8(result, 36) = 1;
    }
    else
    {
      FIELD_U8(result, 36) = 0;
    }
    v3 = 0;
    FIELD_U32(result, 148) = 0;
    FIELD_U32(result, 152) = 0;
    v4 = FIELD_U32(result, 120);
    v5 = v4 == 0;
    if ( v4 )
    {
      v3 = 1;
      v5 = v4 == 1;
    }
    if ( v5 )
      FIELD_U8(result, 108) = v3;
    FIELD_U32(result, 220) = 0;
    FIELD_U32(result, 224) = 0;
    v6 = FIELD_U32(result, 192);
    if ( v6 == 1 )
    {
      v7 = 1;
    }
    else
    {
      if ( v6 )
        goto LABEL_26;
      v7 = 0;
    }
    FIELD_U8(result, 180) = v7;
LABEL_26:
    FIELD_U32(result, 292) = 0;
    FIELD_U32(result, 296) = 0;
    v8 = FIELD_U32(result, 264);
    if ( v8 == 1 )
    {
      FIELD_U8(result, 252) = 1;
    }
    else if ( !v8 )
    {
      FIELD_U8(result, 252) = 0;
    }
    return result;
  }
  if ( v2 == 1 )
    FIELD_U8(result, 36) = 0;
  FIELD_U32(result, 148) = 0;
  FIELD_U32(result, 152) = 0;
  if ( FIELD_U32(result, 120) == 1 )
    FIELD_U8(result, 108) = 0;
  FIELD_U32(result, 220) = 0;
  FIELD_U32(result, 224) = 0;
  if ( FIELD_U32(result, 192) == 1 )
    FIELD_U8(result, 180) = 0;
  FIELD_U32(result, 292) = 0;
  FIELD_U32(result, 296) = 0;
  if ( FIELD_U32(result, 264) == 1 )
    FIELD_U8(result, 252) = 0;
  return result;
}
