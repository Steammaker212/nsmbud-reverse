/* sub_6064DC38
 * address: 0x6064DC38   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064DC38(int a1, int a2, int *a3)
{
  int v3; // r1
  int v4; // r0
  int v5; // r2
  _DWORD v7[4]; // [sp+0h] [bp-10h] BYREF

  v3 = FIELD_U32(a2, 144);
  v4 = *a3;
  v5 = a3[1];
  v7[0] = v4;
  v7[1] = v5;
  ((void (__fastcall *)(int, int, _DWORD *, float, float))sub_606E9E8C)(dword_60CBC000, v3, v7, 0.0, -20.0);
  return 1;
}
