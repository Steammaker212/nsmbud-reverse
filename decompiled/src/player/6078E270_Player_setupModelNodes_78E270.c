/* Player_setupModelNodes_78E270
 * address: 0x6078E270   size: 524   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall Player_setupModelNodes_78E270(int a1)
{
  int *result; // r0
  int v3; // r5
  void (__fastcall *v4)(int, float32x2_t *, unsigned int *); // r3
  int v5; // r0
  int *v6; // r6
  int v7; // r0
  void (__fastcall *v8)(int, int, float32x2_t *); // r7
  int v9; // r0
  float v10; // s0
  int (__fastcall *v11)(int, int, float32x2_t *); // r7
  int v12; // r0
  float32x2_t v13; // [sp+0h] [bp-50h] BYREF
  float v14; // [sp+8h] [bp-48h]
  float v15; // [sp+10h] [bp-40h]
  float v16; // [sp+14h] [bp-3Ch]
  float v17; // [sp+18h] [bp-38h]
  float v18; // [sp+20h] [bp-30h]
  float v19; // [sp+24h] [bp-2Ch]
  float v20; // [sp+28h] [bp-28h]
  unsigned int v21[8]; // [sp+30h] [bp-20h] BYREF

  result = *(int **)(a1 + 292);
  if ( result )
  {
    v3 = *result;
    v4 = *(void (__fastcall **)(int, float32x2_t *, unsigned int *))(*(_DWORD *)a1 + 144);
    v21[0] = (unsigned int)&sead__SafeStringBase__vtable;
    v21[1] = (unsigned int)"face_1";
    v4(a1, &v13, v21);
    v6 = (int *)(a1 + 484);
    v5 = FIELD_U32(a1, 484);
    if ( v5 < 0 && v5 != 0x80000000 )
      v5 = -v5;
    v21[0] = (int)(float)((float)(unsigned int)v5 * -0.12);
    Mtx34_rotateZ(&v13, v21);
    v7 = *v6;
    if ( *v6 < 0 && v7 != 0x80000000 )
      v7 = -v7;
    v21[0] = (int)(float)((float)(unsigned int)v7 * -0.02);
    Mtx34_rotateX(&v13, v21);
    Mtx34_rotateY(&v13, (unsigned int *)(a1 + 484));
    (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v3 + 60))(v3, &v13);
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 56))(v3);
    result = *(int **)(a1 + 300);
    if ( result == (int *)2 )
    {
      v8 = *(void (__fastcall **)(int, int, float32x2_t *))(*(_DWORD *)v3 + 108);
      v9 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 264))(a1);
      v8(v3, v9, &v13);
      Mtx34_rotateY(&v13, (unsigned int *)(a1 + 504));
      v10 = FIELD_F32(a1, 512);
      v13.n64_f32[0] = v10 * v13.n64_f32[0];
      v15 = v10 * v15;
      v18 = v10 * v18;
      v13.n64_f32[1] = v10 * v13.n64_f32[1];
      v16 = v10 * v16;
      v19 = v10 * v19;
      v14 = v10 * v14;
      v17 = v10 * v17;
      v20 = v10 * v20;
      v11 = *(int (__fastcall **)(int, int, float32x2_t *))(*(_DWORD *)v3 + 104);
      v12 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 264))(a1);
      return (int *)v11(v3, v12, &v13);
    }
  }
  return result;
}
