/* sub_608422AC
 * address: 0x608422AC   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608422AC(int result, unsigned __int8 *a2)
{
  int v2; // r3
  int v3; // r4
  int v4; // r2
  int v5; // r12
  int v6; // lr
  int v7; // r5
  int v8; // r2
  unsigned __int8 v9; // [sp+1h] [bp-13h]
  unsigned __int8 v10; // [sp+2h] [bp-12h]
  unsigned __int8 v11; // [sp+3h] [bp-11h]

  v2 = FIELD_U8(result, 16);
  if ( !FIELD_U8(result, 16)
    || FIELD_U32(result, 4)
    || !FIELD_U8(result, 17)
    || FIELD_U32(result, 8) != 1
    || !FIELD_U8(result, 18)
    || FIELD_U32(result, 12) != 2 )
  {
    v3 = *a2;
    v9 = *a2;
    v4 = a2[1];
    v10 = a2[1];
    v5 = a2[2];
    v11 = a2[2];
    if ( v2 )
    {
      LOBYTE(v6) = 127;
      if ( v3 != 128 )
        v6 = -v3;
    }
    else
    {
      LOBYTE(v6) = v3;
    }
    if ( FIELD_U8(result, 17) )
    {
      LOBYTE(v7) = 127;
      if ( v4 != 128 )
        v7 = -v4;
    }
    else
    {
      LOBYTE(v7) = v4;
    }
    if ( FIELD_U8(result, 18) )
    {
      LOBYTE(v8) = 127;
      if ( v5 != 128 )
        v8 = -v5;
    }
    else
    {
      LOBYTE(v8) = v5;
    }
    *(&v9 + FIELD_U32(result, 4)) = v6;
    *(&v9 + FIELD_U32(result, 8)) = v7;
    *(&v9 + FIELD_U32(result, 12)) = v8;
    *a2 = v9;
    a2[1] = v10;
    result = v11;
    a2[2] = v11;
  }
  return result;
}
