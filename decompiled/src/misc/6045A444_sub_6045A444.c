/* sub_6045A444
 * address: 0x6045A444   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045A444(int a1, int a2)
{
  int v4; // r0
  int v5; // r1
  _BYTE v7[4]; // [sp+4h] [bp-234h] BYREF
  int v8; // [sp+8h] [bp-230h]
  char v9; // [sp+Ch] [bp-22Ch] BYREF
  char v10; // [sp+Dh] [bp-22Bh]
  char v11; // [sp+Eh] [bp-22Ah]
  char v12; // [sp+Fh] [bp-229h]
  char v13; // [sp+10h] [bp-228h]
  char v14; // [sp+11h] [bp-227h]
  char v15; // [sp+12h] [bp-226h]
  char v16; // [sp+23h] [bp-215h]

  v9 = 0;
  v10 = 4;
  v11 = 1;
  v12 = 1;
  v13 = 1;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( a2 <= 1 )
  {
    v14 = 1;
  }
  else
  {
    v9 = a2;
    v10 = a2;
  }
  v4 = nn__hid__ShowControllerSupport(v7, &v9);
  if ( FIELD_S32(a1, 24) <= 1 && v4 && FIELD_U8(a1, 81) )
    FIELD_U8(a1, 85) = 1;
  v5 = 0;
  FIELD_U8(a1, 81) = 0;
  if ( a2 <= 1 && v8 == 32 )
    FIELD_U8(a1, 81) = 1;
  if ( !v4 )
    return 1;
  return v5;
}
