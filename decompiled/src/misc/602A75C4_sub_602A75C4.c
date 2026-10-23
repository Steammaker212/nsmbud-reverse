/* sub_602A75C4
 * address: 0x602A75C4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A75C4(int a1, int a2)
{
  char v2; // r3
  _DWORD v4[5]; // [sp+0h] [bp-28h] BYREF
  char v5; // [sp+14h] [bp-14h]
  int v6; // [sp+18h] [bp-10h]
  char v7; // [sp+1Ch] [bp-Ch]

  v2 = -1;
  if ( a2 )
    v2 = FIELD_U8(a2, 84);
  memset(v4, 0, 16);
  v4[4] = &stru_60C907A0;
  v5 = -1;
  v6 = 0;
  v7 = v2;
  return sub_602A852C(a1 + 6104, v4);
}
