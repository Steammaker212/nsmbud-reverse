/* sub_609588DC
 * address: 0x609588DC   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609588DC(int a1, int a2)
{
  _BYTE *v4; // r6
  _DWORD *v5; // r7
  int v6; // r5
  _DWORD v8[12]; // [sp+8h] [bp-3D8h] BYREF
  _BYTE v9[256]; // [sp+38h] [bp-3A8h] BYREF
  _BYTE v10[680]; // [sp+138h] [bp-2A8h] BYREF

  FIELD_U16(a1, 2) = 0;
  sub_6083C9C8((_DWORD *)(a1 + 200));
  memset(v10, 0, 640);
  memset(v9, 0, sizeof(v9));
  if ( a2 >= 1 )
  {
    v4 = v10;
    v5 = v9;
    v6 = a2;
    do
    {
      sub_6083D774((int)v4);
      sub_6083D798(v5);
      v4 += 40;
      v5 += 4;
      --v6;
    }
    while ( v6 );
  }
  memset(v8, 0, sizeof(v8));
  v8[2] = v10;
  LOWORD(v8[0]) = a2;
  v8[4] = v9;
  HIWORD(v8[0]) = a2;
  FIELD_U16(a1, 362) = sub_6083C978((unsigned __int16 *)v8);
  *(_BYTE *)a1 = 0;
  memset((void *)(a1 + 4), 0, 192);
  FIELD_U16(a1, 360) = 0;
  return a1;
}
