/* sub_609149F0
 * address: 0x609149F0   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_609149F0(int a1, int a2, int a3, int *a4, int a5, int a6)
{
  int v7; // r8
  int v9; // r6
  unsigned int result; // r0
  _DWORD v11[10]; // [sp+0h] [bp-28h] BYREF
  _BYTE v12[64]; // [sp+28h] [bp+0h] BYREF
  _BYTE v13[8]; // [sp+68h] [bp+40h] BYREF

  v7 = *a4;
  dword_60CC73C4(v12);
  dword_60CC73C0(v12, FIELD_U32(dword_60CCF464, 24));
  v9 = v7 & 0xFFFFDF8 | 0x201;
  dword_60CC73CC(v12, v9);
  dword_60CC73C8(v12, 0, a3);
  sub_6091718C(dword_60CCFC8C, a1, v12);
  v11[0] = a5;
  memset(&v11[2], 0, 16);
  v11[7] = 0;
  v11[6] = a3;
  v11[8] = a6;
  nn__os__GetSystemTick((nn__os *)v13);
  nn__os__GetSystemTick((nn__os *)v13);
  ((void (__fastcall *)(int, int, _DWORD *))dword_60CC73F8)(a1, 1, v11);
  result = v7 & 0x70000000 | v9 | 0x80000000;
  FIELD_U32(a1, 256) = result;
  return result;
}
