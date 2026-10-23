/* sub_608555E0
 * address: 0x608555E0   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608555E0(int *a1, void (__fastcall *a2)(int, int), int a3)
{
  int v6; // r4
  int v7; // r5
  int v8; // r7
  int v9; // r7
  int v10; // r7
  int v11; // r7
  int v12; // r7
  int v13; // r7
  int v14; // r7
  int v15; // r7
  int v16; // r7
  int v17; // r7
  int v18; // r7
  _DWORD *v19; // r7
  int result; // r0

  sub_6084B734(a1[16], a2);
  v6 = 88;
  v7 = 0;
  do
  {
    v8 = a1[135] + v6;
    ((void (__fastcall *)(int, int, int))a2)(v8 - 88, a1[134] + v7, a3);
    *(_DWORD *)(v8 - 88) = -1;
    *(_DWORD *)(v8 - 84) = -1;
    v9 = a1[135] + v6;
    ((void (__fastcall *)(int, int, int))a2)(v9 - 80, a1[134] + v7 + 120, a3);
    *(_DWORD *)(v9 - 80) = -1;
    *(_DWORD *)(v9 - 76) = -1;
    v10 = a1[135] + v6;
    ((void (__fastcall *)(int, int, int))a2)(v10 - 72, a1[134] + v7 + 240, a3);
    *(_DWORD *)(v10 - 72) = -1;
    *(_DWORD *)(v10 - 68) = -1;
    v11 = a1[135] + v6;
    ((void (__fastcall *)(int, int, int))a2)(v11 - 64, a1[134] + v7 + 360, a3);
    *(_DWORD *)(v11 - 64) = -1;
    *(_DWORD *)(v11 - 60) = -1;
    v12 = a1[135] + v6;
    ((void (__fastcall *)(int, int, int))a2)(v12 - 56, a1[134] + v7 + 480, a3);
    *(_DWORD *)(v12 - 56) = -1;
    *(_DWORD *)(v12 - 52) = -1;
    v13 = a1[135] + v6;
    ((void (__fastcall *)(int, int, int))a2)(v13 - 48, a1[134] + v7 + 600, a3);
    *(_DWORD *)(v13 - 48) = -1;
    *(_DWORD *)(v13 - 44) = -1;
    v14 = a1[135] + v6;
    ((void (__fastcall *)(int, int, int))a2)(v14 - 40, a1[134] + v7 + 720, a3);
    *(_DWORD *)(v14 - 40) = -1;
    *(_DWORD *)(v14 - 36) = -1;
    v15 = a1[135] + v6;
    ((void (__fastcall *)(int, int, int))a2)(v15 - 32, a1[134] + v7 + 840, a3);
    *(_DWORD *)(v15 - 32) = -1;
    *(_DWORD *)(v15 - 28) = -1;
    v16 = a1[135] + v6;
    ((void (__fastcall *)(int, int, int))a2)(v16 - 24, a1[134] + v7 + 960, a3);
    *(_DWORD *)(v16 - 24) = -1;
    *(_DWORD *)(v16 - 20) = -1;
    v17 = a1[135] + v6;
    ((void (__fastcall *)(int, int, int))a2)(v17 - 16, a1[134] + v7 + 1080, a3);
    *(_DWORD *)(v17 - 16) = -1;
    *(_DWORD *)(v17 - 12) = -1;
    v18 = a1[135] + v6;
    ((void (__fastcall *)(int, int, int))a2)(v18 - 8, a1[134] + v7 + 1200, a3);
    *(_DWORD *)(v18 - 8) = -1;
    *(_DWORD *)(v18 - 4) = -1;
    v19 = (_DWORD *)(a1[135] + v6);
    result = ((int (__fastcall *)(_DWORD *, int, int))a2)(v19, a1[134] + v7 + 1320, a3);
    *v19 = -1;
    v6 += 96;
    v7 += 1440;
    v19[1] = -1;
  }
  while ( v6 != 376 );
  return result;
}
