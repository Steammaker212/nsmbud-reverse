/* aVertex_ref
 * address: 0x6084B190   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall aVertex_ref(int a1)
{
  int v2; // r5
  int v3; // r0
  _DWORD v5[4]; // [sp+0h] [bp-80h] BYREF
  _DWORD v6[10]; // [sp+10h] [bp-70h] BYREF
  _DWORD v7[18]; // [sp+38h] [bp-48h] BYREF

  memset(v7, 0, 48);
  sub_6083D7A8((int)v7);
  memset(v6, 0, sizeof(v6));
  sub_6083D774((int)v6);
  memset(v5, 0, sizeof(v5));
  v6[4] = "aVertex";
  LOWORD(v6[1]) = 0;
  v6[3] = 6149;
  v6[2] = 0;
  sub_6083D798(v5);
  v7[2] = v6;
  v5[0] = 28;
  v7[0] = 65537;
  v7[4] = v5;
  v2 = sub_6083C978((unsigned __int16 *)v7);
  memset(v7, 0, 32);
  sub_6083D5C0(v7);
  v3 = sub_6083650C();
  return ((v3 + 6 * ((v2 + 7) & 0xFFFFFFF8) + 33847) & -v3) + sub_6084B2A0(a1);
}
