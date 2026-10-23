/* UpperMouse_ref
 * address: 0x603E0C74   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall UpperMouse_ref(float *a1)
{
  float *v1; // r4
  int *v2; // t1
  int v3; // r0
  int (__fastcall *v4)(int, float *); // r2
  unsigned __int8 v5; // r0
  float result; // s0
  float v7; // [sp+0h] [bp-38h] BYREF
  float v8; // [sp+4h] [bp-34h]
  float v9; // [sp+8h] [bp-30h]
  float v10; // [sp+Ch] [bp-2Ch]
  float v11; // [sp+10h] [bp-28h]
  float v12; // [sp+14h] [bp-24h]
  float v13; // [sp+18h] [bp-20h]
  float v14; // [sp+1Ch] [bp-1Ch]

  a1[1577] = a1[37] * 192.0;
  v2 = *((int **)a1 + 1890);
  v1 = a1 + 1890;
  v3 = *v2;
  v4 = *(int (__fastcall **)(int, float *))(*(_DWORD *)*v2 + 84);
  v7 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v8 = COERCE_FLOAT("UpperMouse");
  v5 = v4(v3, &v7);
  (*(void (__fastcall **)(_DWORD, _DWORD, float *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, v5, &v7);
  v10 = v10 + (float)((float)((float)(v8 * 8.0) + (float)(v7 * 0.0)) + (float)(v9 * 0.0));
  result = (float)(v14 + (float)((float)((float)(v12 * 8.0) + (float)(v11 * 0.0)) + (float)(v13 * 0.0))) - *(v1 - 1862);
  v1[164] = result;
  return result;
}
