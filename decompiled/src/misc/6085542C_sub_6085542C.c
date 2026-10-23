/* sub_6085542C
 * address: 0x6085542C   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085542C(int *a1, int (__fastcall *a2)(int, int), int a3)
{
  int v6; // r7
  int v7; // r4
  int result; // r0

  sub_6084B720(a1[16], a2);
  v6 = 88;
  v7 = 0;
  do
  {
    ((void (__fastcall *)(int, int, int))a2)(a1[135] + v6 - 88, a1[134] + v7, a3);
    ((void (__fastcall *)(int, int, int))a2)(a1[135] + v6 - 80, a1[134] + v7 + 120, a3);
    ((void (__fastcall *)(int, int, int))a2)(a1[135] + v6 - 72, a1[134] + v7 + 240, a3);
    ((void (__fastcall *)(int, int, int))a2)(a1[135] + v6 - 64, a1[134] + v7 + 360, a3);
    ((void (__fastcall *)(int, int, int))a2)(a1[135] + v6 - 56, a1[134] + v7 + 480, a3);
    ((void (__fastcall *)(int, int, int))a2)(a1[135] + v6 - 48, a1[134] + v7 + 600, a3);
    ((void (__fastcall *)(int, int, int))a2)(a1[135] + v6 - 40, a1[134] + v7 + 720, a3);
    ((void (__fastcall *)(int, int, int))a2)(a1[135] + v6 - 32, a1[134] + v7 + 840, a3);
    ((void (__fastcall *)(int, int, int))a2)(a1[135] + v6 - 24, a1[134] + v7 + 960, a3);
    ((void (__fastcall *)(int, int, int))a2)(a1[135] + v6 - 16, a1[134] + v7 + 1080, a3);
    ((void (__fastcall *)(int, int, int))a2)(a1[135] + v6 - 8, a1[134] + v7 + 1200, a3);
    result = ((int (__fastcall *)(int, int, int))a2)(a1[135] + v6, a1[134] + v7 + 1320, a3);
    v6 += 96;
    v7 += 1440;
  }
  while ( v6 != 376 );
  return result;
}
