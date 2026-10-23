/* sub_603405F4
 * address: 0x603405F4   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_603405F4(int a1)
{
  int **v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, int (***)()); // r2
  int v5; // r0
  int v6; // r0
  int (__fastcall *v7)(int, int (***)()); // r2
  int v8; // r0
  int v9; // r0
  int (__fastcall *v10)(int, int (***)()); // r2
  int v11; // r0
  int v12; // r0
  int (__fastcall *v13)(int, int (***)()); // r2
  int v14; // r0
  int *result; // r0
  int (**v16)(); // [sp+0h] [bp-40h] BYREF
  const char *v17; // [sp+4h] [bp-3Ch]
  int *v18; // [sp+Ch] [bp-34h]
  int *v19; // [sp+1Ch] [bp-24h]
  int *v20; // [sp+2Ch] [bp-14h]

  v2 = *(int **)(a1 + 6304);
  v1 = (int **)(a1 + 6304);
  v3 = *v2;
  v4 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)*v2 + 84);
  v16 = &sead__SafeStringBase__vtable;
  v17 = "leg_left";
  v5 = v4(v3, &v16);
  (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v1 + 108))(**v1, v5, &v16);
  v1[5] = v18;
  v1[6] = v19;
  v1[7] = v20;
  v6 = **v1;
  v7 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v6 + 84);
  v16 = &sead__SafeStringBase__vtable;
  v17 = "leg_right";
  v8 = v7(v6, &v16);
  (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v1 + 108))(**v1, v8, &v16);
  v1[8] = v18;
  v1[9] = v19;
  v1[10] = v20;
  v9 = **v1;
  v10 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v9 + 84);
  v16 = &sead__SafeStringBase__vtable;
  v17 = "brow";
  v11 = v10(v9, &v16);
  (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v1 + 108))(**v1, v11, &v16);
  v1[11] = v18;
  v1[12] = v19;
  v1[13] = v20;
  v12 = **v1;
  v13 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v12 + 84);
  v16 = &sead__SafeStringBase__vtable;
  v17 = "mouth";
  v14 = v13(v12, &v16);
  (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v1 + 108))(**v1, v14, &v16);
  v1[17] = v18;
  v1[18] = v19;
  result = v20;
  v1[19] = v20;
  return result;
}
