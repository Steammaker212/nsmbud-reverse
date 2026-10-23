/* fishbone_all_ref
 * address: 0x602B0F2C   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall fishbone_all_ref(int a1)
{
  int v2; // r5
  int (__fastcall *v3)(int, int (***)()); // r2
  void (__fastcall *v4)(int, int, float *); // r7
  int v5; // r0
  float v6; // s2
  int (__fastcall *v7)(int, int (***)()); // r2
  void (__fastcall *v8)(int, int, float *); // r7
  int v9; // r0
  float v10; // s14
  float v11; // s2
  int (**v13)(); // [sp+0h] [bp-60h] BYREF
  const char *v14; // [sp+4h] [bp-5Ch]
  float v15; // [sp+8h] [bp-58h] BYREF
  float v16; // [sp+Ch] [bp-54h]
  float v17; // [sp+10h] [bp-50h]
  float v18; // [sp+14h] [bp-4Ch]
  float v19; // [sp+18h] [bp-48h]
  float v20; // [sp+1Ch] [bp-44h]
  float v21; // [sp+20h] [bp-40h]
  float v22; // [sp+24h] [bp-3Ch]
  float v23; // [sp+28h] [bp-38h]
  float v24; // [sp+2Ch] [bp-34h]
  float v25; // [sp+30h] [bp-30h]
  float v26; // [sp+34h] [bp-2Ch]

  v2 = **(_DWORD **)(a1 + 6300);
  v3 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v2 + 84);
  v4 = *(void (__fastcall **)(int, int, float *))(*(_DWORD *)v2 + 108);
  v13 = &sead__SafeStringBase__vtable;
  v14 = "fishbone_all";
  v5 = v3(v2, &v13);
  v4(v2, v5, &v15);
  v18 = v18 + (float)((float)((float)(v16 * 0.0) + (float)(v15 * 0.0)) + (float)(v17 * 4.0));
  v22 = v22 + (float)((float)((float)(v20 * 0.0) + (float)(v19 * 0.0)) + (float)(v21 * 4.0));
  v26 = v26 + (float)((float)((float)(v24 * 0.0) + (float)(v23 * 0.0)) + (float)(v25 * 4.0));
  v6 = v22 - FIELD_F32(a1, 112);
  FIELD_F32(a1, 304) = v18 - FIELD_F32(a1, 108);
  FIELD_F32(a1, 308) = v6;
  v7 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v2 + 84);
  v8 = *(void (__fastcall **)(int, int, float *))(*(_DWORD *)v2 + 108);
  v13 = &sead__SafeStringBase__vtable;
  v14 = "fishbone_all";
  v9 = v7(v2, &v13);
  v8(v2, v9, &v15);
  v18 = v18 + (float)((float)((float)(v16 * 0.0) + (float)(v15 * 0.0)) - (float)(v17 * 8.0));
  v10 = FIELD_F32(a1, 112);
  v11 = v22 + (float)((float)((float)(v20 * 0.0) + (float)(v19 * 0.0)) - (float)(v21 * 8.0));
  FIELD_F32(a1, 6624) = v18 - FIELD_F32(a1, 108);
  FIELD_F32(a1, 6628) = v11 - v10;
  return v11 - v10;
}
