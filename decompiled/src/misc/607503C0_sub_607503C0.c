/* sub_607503C0
 * address: 0x607503C0   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607503C0(int **a1)
{
  int result; // r0
  int v3; // r7
  float v4; // s0
  ModelWrapper *v5; // r0
  void *model; // r7
  float v7; // s0
  float v8; // [sp+0h] [bp-60h] BYREF
  float v9; // [sp+4h] [bp-5Ch]
  int v10; // [sp+8h] [bp-58h]
  int v11; // [sp+Ch] [bp-54h] BYREF
  int v12; // [sp+10h] [bp-50h]
  int v13; // [sp+14h] [bp-4Ch]
  int *v14; // [sp+18h] [bp-48h]
  int v15; // [sp+1Ch] [bp-44h]
  int v16; // [sp+20h] [bp-40h]
  int v17; // [sp+24h] [bp-3Ch]
  int *v18; // [sp+28h] [bp-38h]
  int v19; // [sp+2Ch] [bp-34h]
  int v20; // [sp+30h] [bp-30h]
  int v21; // [sp+34h] [bp-2Ch]
  int *v22; // [sp+38h] [bp-28h]

  result = *((unsigned __int8 *)a1 + 20);
  if ( result )
  {
    v3 = **a1;
    ModelWrapper_updateAnims((ModelWrapper *)*a1);
    v11 = 1065353216;
    v12 = 0;
    v13 = 0;
    v15 = 0;
    v16 = 1065353216;
    v17 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 1065353216;
    v14 = a1[2];
    v18 = a1[3];
    v22 = a1[4];
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 60))(v3, &v11);
    v4 = FIELD_F32(dword_60CC6484, 16);
    v8 = v4 * *(float *)&dword_60CBEAD8;
    v9 = v4 * *(float *)&dword_60CBEADC;
    v10 = dword_60CBEAE0;
    (*(void (__fastcall **)(int, float *))(*(_DWORD *)v3 + 68))(v3, &v8);
    ModelWrapper_updateModel((ModelWrapper *)*a1);
    v5 = (ModelWrapper *)a1[1];
    model = FIELD_U32(v5, 0x0);
    ModelWrapper_updateAnims(v5);
    v11 = 1065353216;
    v12 = 0;
    v13 = 0;
    v15 = 0;
    v16 = 1065353216;
    v17 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 1065353216;
    v14 = a1[2];
    v18 = a1[3];
    v22 = a1[4];
    (*(void (__fastcall **)(void *, int *))(*(_DWORD *)model + 60))(model, &v11);
    v7 = FIELD_F32(dword_60CC6484, 16);
    v8 = v7 * *(float *)&dword_60CBEAD8;
    v9 = v7 * *(float *)&dword_60CBEADC;
    v10 = dword_60CBEAE0;
    (*(void (__fastcall **)(void *, float *))(*(_DWORD *)model + 68))(model, &v8);
    ModelWrapper_updateModel((ModelWrapper *)a1[1]);
    result = *(unsigned __int8 *)(*(_DWORD *)(*a1)[3] + 28);
    if ( (result & 0x20) != 0 )
      *((_BYTE *)a1 + 20) = 0;
  }
  return result;
}
