/* sub_60848144
 * address: 0x60848144   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60848144(int a1, int *a2, int a3, int a4)
{
  _DWORD v8[20]; // [sp+0h] [bp-50h] BYREF

  sub_608436C8(a1, a4, a2, (unsigned __int8 *)a3);
  memset(v8, 0, 64);
  sub_60998F30(v8);
  LOBYTE(v8[0]) = 1;
  v8[1] = FIELD_U32(a3, 12);
  v8[12] = a1;
  v8[2] = 84148994;
  LOWORD(v8[4]) = 0;
  HIWORD(v8[4]) = FIELD_U16(a3, 6);
  return sub_6083D338(a1 + 216, (int)a2, (unsigned __int8 *)v8);
}
