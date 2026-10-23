/* sub_6094A4A0
 * address: 0x6094A4A0   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6094A4A0(int a1, unsigned int a2, int a3)
{
  int v5; // r6
  unsigned int v6; // r6
  _BOOL4 result; // r0
  unsigned int i; // r11
  int v9; // r7
  unsigned int v10; // r10
  int v11; // r4
  int v12; // r9
  int v13; // r7
  _DWORD v15[3]; // [sp+1Ch] [bp-54h] BYREF
  _DWORD v16[3]; // [sp+28h] [bp-48h] BYREF
  _DWORD v17[3]; // [sp+34h] [bp-3Ch] BYREF
  int v18; // [sp+40h] [bp-30h] BYREF

  v5 = a1 + 2096;
  sub_60913D88(a1 + 2096, 32 * a2 + 32, a3, 4, 0);
  sub_60913A6C(&v18, v5, 0);
  sub_60913A6C(v17, v5, 0);
  sub_6094CD80(a1 + 2376, v17, a2);
  v6 = a2;
  LOBYTE(result) = 1;
  for ( i = 0; i != 3; result = i < 3 )
  {
    v9 = result;
    v10 = v6 >> i;
    if ( result )
      v9 = i;
    v11 = a1 + 84 * v9 + 2124;
    sub_60913D88(v11, 6 * (v6 >> i), a3, 4, 0);
    sub_60913A6C(v16, v11, 0);
    sub_60913A6C(v15, v11, 0);
    v12 = a1 + 240 * v9;
    sub_6094CF0C(v12 + 2648, v15, v6, 0, i);
    v13 = a1 + 84 * v9;
    sub_60913D88(v13 + 2152, 8 * v10, a3, 4, 0);
    sub_60913A6C(v16, v13 + 2152, 0);
    sub_60913A6C(v15, v13 + 2152, 0);
    sub_6094CF0C(v12 + 2728, v15, v6, 1, i);
    sub_60913D88(v13 + 2180, 2 * v10, a3, 4, 0);
    sub_60913A6C(v16, v13 + 2180, 0);
    sub_60913A6C(v15, v13 + 2180, 0);
    sub_6094CF0C(v12 + 2808, v15, v6, 2, i++);
  }
  return result;
}
