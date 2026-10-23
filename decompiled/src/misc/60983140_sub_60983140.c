/* sub_60983140
 * address: 0x60983140   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60983140(int a1, _DWORD *a2, int a3, _BYTE *a4)
{
  unsigned int v5; // r5
  int v8; // r7
  int v9; // r6
  int v10; // r2
  unsigned int v12; // [sp+4h] [bp-134h] BYREF
  int v13; // [sp+8h] [bp-130h]
  const char *v14[3]; // [sp+Ch] [bp-12Ch] BYREF
  char v15; // [sp+18h] [bp-120h] BYREF

  v5 = 0;
  v14[0] = &v15;
  v14[1] = 0;
  v14[2] = (const char *)256;
  v15 = 0;
  LOBYTE(v12) = HIBYTE(a3);
  BYTE1(v12) = BYTE2(a3);
  BYTE2(v12) = BYTE1(a3);
  HIBYTE(v12) = a3;
  LOBYTE(v13) = 0;
  sub_608FDFB8((int)v14, &v12, 4);
  sub_608FE058((int *)v14, "/", 1);
  sub_608FE058((int *)v14, a4, -1);
  v8 = a1 + 20;
  v9 = FIELD_U32(a1, 24);
  if ( v9 != v8 )
  {
    while ( 1 )
    {
      v12 = 0;
      v13 = 0;
      v10 = sub_60864C50((_DWORD *)(v9 + 8), v14[0]);
      if ( v10 >= 0 )
      {
        v5 = sub_60864BE8((_DWORD *)(v9 + 8), &v12, v10);
        if ( v5 )
          break;
      }
      v9 = FIELD_U32(v9, 4);
      if ( v9 == v8 )
        return 0;
    }
    if ( a2 )
      *a2 = v13;
  }
  return v5;
}
