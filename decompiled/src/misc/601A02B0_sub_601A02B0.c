/* sub_601A02B0
 * address: 0x601A02B0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A02B0(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  int result; // r0
  _BYTE v7[12]; // [sp+8h] [bp-38h] BYREF
  int v8; // [sp+14h] [bp-2Ch]
  int v9; // [sp+24h] [bp-1Ch]
  int v10; // [sp+34h] [bp-Ch]

  sub_601A14F0(a1, a3, a4, a5, v7);
  *a2 = v8;
  a2[1] = v9;
  result = v10;
  a2[2] = v10;
  return result;
}
