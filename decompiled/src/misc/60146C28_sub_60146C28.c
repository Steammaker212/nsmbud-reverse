/* sub_60146C28
 * address: 0x60146C28   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60146C28(int a1)
{
  float *v2; // r0
  float v3; // r3
  float v4; // r4
  float v5; // r5
  float v6; // r6
  float v7; // r7
  float v8; // r12
  float v9; // r4
  float v10; // r5
  float v11; // r6
  float v12; // r7
  float v13; // r12
  int result; // r0
  float v15[18]; // [sp+0h] [bp-48h] BYREF

  v2 = (float *)(*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6300) + 64))(**(_DWORD **)(a1 + 6300));
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = v2[3];
  v7 = v2[4];
  v8 = v2[5];
  v2 += 6;
  v15[0] = v3;
  v15[1] = v4;
  v15[2] = v5;
  v15[3] = v6;
  v15[4] = v7;
  v15[5] = v8;
  v9 = v2[1];
  v10 = v2[2];
  v11 = v2[3];
  v12 = v2[4];
  v13 = v2[5];
  v15[6] = *v2;
  v15[7] = v9;
  v15[8] = v10;
  v15[9] = v11;
  v15[10] = v12;
  v15[11] = v13;
  sub_6083316C((int *)(a1 + 156), v15);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 644))(a1);
  result = FIELD_U32(a1, 6148) | 2;
  FIELD_U32(a1, 6148) = result;
  return result;
}
