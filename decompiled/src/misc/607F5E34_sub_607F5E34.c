/* sub_607F5E34
 * address: 0x607F5E34   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F5E34(int a1)
{
  int v2; // r0
  int v4[2]; // [sp+0h] [bp-98h] BYREF
  _DWORD v5[36]; // [sp+8h] [bp-90h] BYREF

  v4[0] = 2;
  v4[1] = (int)BootScene_create;
  sub_608EF048(v5, v4);
  BYTE1(v5[5 * v5[22] + 6]) = 1;
  v5[25] = **(_DWORD **)(a1 + 104);
  v5[28] = a1 + 16;
  v2 = v5[0];
  FIELD_U32(a1, 96) = v5[1];
  FIELD_U32(a1, 92) = v2;
  FIELD_U32(a1, 108) = 0;
  return sub_608EFF80(FIELD_U32(a1, 100), v5);
}
