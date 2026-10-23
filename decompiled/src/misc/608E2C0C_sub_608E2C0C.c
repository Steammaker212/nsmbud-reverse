/* sub_608E2C0C
 * address: 0x608E2C0C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E2C0C(int a1, unsigned int *a2, int a3, int a4, unsigned int a5)
{
  int v8; // r6
  int v9; // r5
  int v10; // r0
  int v11; // r3
  int v12; // t1
  int v13; // r0
  _DWORD v15[9]; // [sp+Ch] [bp-24h] BYREF

  v8 = sub_608E78F8(a1, a3);
  v9 = 0;
  v10 = *(_DWORD *)v8;
  v11 = FIELD_U32(v8, 12);
  v12 = FIELD_U32(v8, 8);
  v15[0] = 0;
  v13 = nn__fs__WriteFile(v10, v15, v12, v11, a4, a5, v15);
  FIELD_U32(a1, 80) = v13;
  if ( v13 )
  {
    FIELD_U8(v8, 17) = 1;
  }
  else
  {
    v9 = 1;
    FIELD_U64(v8, 8) += a5;
    if ( a2 )
      *a2 = a5;
  }
  return v9;
}
