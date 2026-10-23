/* sub_609424C4
 * address: 0x609424C4   size: 1100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609424C4(int a1, int a2, float a3)
{
  void *v6; // r8
  int v7; // r6
  unsigned int v8; // r7
  size_t v9; // r2
  int v10; // r5
  int (__fastcall *v11)(int, int, int); // r6
  int v12; // r0
  bool v14; // r5
  float v15; // s18
  float *v16; // r0
  float v17; // s18
  float v18; // s20
  float *v19; // r0
  float v20; // s18
  float v21; // s20
  float v22; // s22
  float *v23; // r0
  float v24; // s18
  float v25; // s20
  float v26; // s22
  float v27; // s24
  float *v28; // r0
  float v29; // s1
  float v30; // s2
  float v31; // s3
  float *v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  float v36[4]; // [sp+0h] [bp-78h] BYREF
  float v37[4]; // [sp+10h] [bp-68h] BYREF
  float v38; // [sp+20h] [bp-58h] BYREF
  float v39; // [sp+24h] [bp-54h]
  float v40; // [sp+28h] [bp-50h]
  float v41; // [sp+2Ch] [bp-4Ch]
  _DWORD v42[17]; // [sp+34h] [bp-44h] BYREF

  v42[0] = a2;
  switch ( (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 28))(a1, a3) )
  {
    case 0:
      v14 = *(_DWORD *)(a2 + ((4 * FIELD_U32(a2, 4)) & 0x3FFFFFC)) != 0;
      *(_BYTE *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1) = v14;
      break;
    case 1:
      qmemcpy(
        &v38,
        (const void *)(a2 + ((4 * FIELD_U32(a2, 4)) & 0x3FFFFFC)),
        (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1));
      v15 = v38;
      v16 = (float *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
      *v16 = *v16 + (float)(v15 * a3);
      break;
    case 2:
    case 7:
    case 8:
    case 15:
    case 17:
      goto LABEL_3;
    case 3:
      qmemcpy(
        &v38,
        (const void *)(a2 + ((4 * FIELD_U32(a2, 4)) & 0x3FFFFFC)),
        (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1));
      v17 = v38;
      v18 = v39;
      v19 = (float *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
      *v19 = *v19 + (float)(v17 * a3);
      v19[1] = v19[1] + (float)(v18 * a3);
      break;
    case 4:
      qmemcpy(
        &v38,
        (const void *)(a2 + ((4 * FIELD_U32(a2, 4)) & 0x3FFFFFC)),
        (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1));
      v20 = v38;
      v21 = v39;
      v22 = v40;
      v23 = (float *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
      *v23 = *v23 + (float)(v20 * a3);
      v23[1] = v23[1] + (float)(v21 * a3);
      v23[2] = v23[2] + (float)(v22 * a3);
      break;
    case 5:
      qmemcpy(
        &v38,
        (const void *)(a2 + ((4 * FIELD_U32(a2, 4)) & 0x3FFFFFC)),
        (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1));
      v24 = v38;
      v25 = v39;
      v26 = v40;
      v27 = v41;
      v28 = (float *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
      *v28 = *v28 + (float)(v24 * a3);
      v28[1] = v28[1] + (float)(v25 * a3);
      v28[2] = v28[2] + (float)(v26 * a3);
      v28[3] = v28[3] + (float)(v27 * a3);
      break;
    case 6:
      v38 = 0.0;
      v39 = 0.0;
      v40 = 0.0;
      v41 = 1.0;
      qmemcpy(
        &v38,
        (const void *)(a2 + ((4 * FIELD_U32(a2, 4)) & 0x3FFFFFC)),
        (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1));
      v36[0] = a3;
      v36[1] = a3;
      v36[2] = a3;
      v36[3] = a3;
      v37[0] = sub_6090B1A4(&v38, v36);
      v37[1] = v29;
      v37[2] = v30;
      v37[3] = v31;
      v32 = (float *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
      sub_6090B160(v32, v37);
      break;
    case 13:
    case 14:
    case 18:
    case 19:
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1) == 1 )
      {
LABEL_3:
        v6 = (void *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
        v7 = (4 * FIELD_U32(a2, 4)) & 0x3FFFFFC;
        v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1);
        v9 = sub_60951610(v42);
        if ( v8 < v9 )
          v9 = v8;
        qmemcpy(v6, (const void *)(a2 + v7), v9);
      }
      break;
    case 16:
      qmemcpy(
        &v38,
        (const void *)(a2 + ((4 * FIELD_U32(a2, 4)) & 0x3FFFFFC)),
        (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1));
      v33 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
      ((void (__fastcall *)(int, int, float *, float))loc_60943C90)(v33, v33, &v38, a3);
      break;
    case 20:
      v34 = FIELD_U32(a2, 4);
      v38 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
      LODWORD(v39) = a2 + ((4 * v34) & 0x3FFFFFC);
      v35 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 44))(a1);
      (*(void (__fastcall **)(int, float *))(*(_DWORD *)v35 + 8))(v35, &v38);
      break;
    default:
      break;
  }
  v10 = v42[0] + ((4 * *(_DWORD *)(v42[0] + 4)) & 0x3FFFFFC);
  v11 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 60);
  v12 = sub_60951610(v42);
  return v11(a1, v10, v12);
}
