/* sub_60145684
 * address: 0x60145684   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60145684(int a1, int *a2)
{
  _DWORD *v2; // r12
  _DWORD *v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r4
  int v7; // r5
  int v8; // r6
  int v9; // r7
  int v10; // r3
  int v11; // r4
  int v12; // r5
  int v13; // r6
  int v14; // r7
  _DWORD **v15; // r8

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  v8 = a2[4];
  v9 = a2[5];
  v3 = a2 + 6;
  *v2 = v4;
  v2[1] = v5;
  v2[2] = v6;
  v2[3] = v7;
  v2[4] = v8;
  v2[5] = v9;
  v10 = v3[1];
  v11 = v3[2];
  v12 = v3[3];
  v13 = v3[4];
  v14 = v3[5];
  v2[6] = *v3;
  v2[7] = v10;
  v2[8] = v11;
  v2[9] = v12;
  v2[10] = v13;
  v2[11] = v14;
  v15 = (_DWORD **)(a1 + 6472);
  (*(void (__fastcall **)(_DWORD, _DWORD *))(***(_DWORD ***)(a1 + 6472) + 60))(**(_DWORD **)(a1 + 6472), v2);
  return (*(int (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)**v15 + 68))(**v15, v15 - 1582);
}
