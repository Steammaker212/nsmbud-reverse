/* sub_60943810
 * address: 0x60943810   size: 888   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60943810(_DWORD *a1, _DWORD *a2, _DWORD *a3, float a4)
{
  int v8; // r4
  int v9; // r8
  int v10; // r4
  float v12; // s18
  float v13; // s18
  float *v14; // r4
  float *v15; // r6
  float *v16; // r0
  float *v17; // r4
  float *v18; // r6
  float *v19; // r0
  float *v20; // r7
  float *v21; // r4
  float *v22; // r0
  float *v23; // r4
  float *v24; // r6
  float *v25; // r0
  int v26; // r4
  int v27; // r6
  int v28; // r0

  v8 = (*(int (__fastcall **)(_DWORD *, float))(*a1 + 28))(a1, a4);
  v9 = 0;
  if ( v8 == (*(int (__fastcall **)(_DWORD *))(*a2 + 28))(a2) && a1[1] == a2[1] )
  {
    v10 = (*(int (__fastcall **)(_DWORD *))(*a1 + 28))(a1);
    if ( v10 == (*(int (__fastcall **)(_DWORD *))(*a3 + 28))(a3) && a1[1] == a3[1] )
    {
      v9 = 1;
      switch ( (*(int (__fastcall **)(_DWORD *))(*a1 + 28))(a1) )
      {
        case 0:
        case 2:
        case 7:
        case 8:
        case 15:
        case 17:
          (*(void (__fastcall **)(_DWORD *, _DWORD *))(*a1 + 12))(a1, a2);
          break;
        case 1:
          v12 = *(float *)(*(int (__fastcall **)(_DWORD *))(*a2 + 32))(a2);
          v13 = v12 + (float)((float)(*(float *)(*(int (__fastcall **)(_DWORD *))(*a3 + 32))(a3) - v12) * a4);
          *(float *)(*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1) = v13;
          break;
        case 3:
          v14 = (float *)(*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1);
          v15 = (float *)(*(int (__fastcall **)(_DWORD *))(*a2 + 32))(a2);
          v16 = (float *)(*(int (__fastcall **)(_DWORD *))(*a3 + 32))(a3);
          *v14 = *v15 + (float)((float)(*v16 - *v15) * a4);
          v14[1] = v15[1] + (float)((float)(v16[1] - v15[1]) * a4);
          break;
        case 4:
          v17 = (float *)(*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1);
          v18 = (float *)(*(int (__fastcall **)(_DWORD *))(*a2 + 32))(a2);
          v19 = (float *)(*(int (__fastcall **)(_DWORD *))(*a3 + 32))(a3);
          *v17 = *v18 + (float)((float)(*v19 - *v18) * a4);
          v17[1] = v18[1] + (float)((float)(v19[1] - v18[1]) * a4);
          v17[2] = v18[2] + (float)((float)(v19[2] - v18[2]) * a4);
          break;
        case 5:
          v20 = (float *)(*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1);
          v21 = (float *)(*(int (__fastcall **)(_DWORD *))(*a2 + 32))(a2);
          v22 = (float *)(*(int (__fastcall **)(_DWORD *))(*a3 + 32))(a3);
          *v20 = *v21 + (float)((float)(*v22 - *v21) * a4);
          v20[1] = v21[1] + (float)((float)(v22[1] - v21[1]) * a4);
          v20[2] = v21[2] + (float)((float)(v22[2] - v21[2]) * a4);
          v20[3] = v21[3] + (float)((float)(v22[3] - v21[3]) * a4);
          break;
        case 6:
          v23 = (float *)(*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1);
          v24 = (float *)(*(int (__fastcall **)(_DWORD *))(*a2 + 32))(a2);
          v25 = (float *)(*(int (__fastcall **)(_DWORD *))(*a3 + 32))(a3);
          sead_Color4f_setLerp(v23, v24, v25, a4);
          break;
        case 16:
          v26 = (*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1);
          v27 = (*(int (__fastcall **)(_DWORD *))(*a2 + 32))(a2);
          v28 = (*(int (__fastcall **)(_DWORD *))(*a3 + 32))(a3);
          ((void (__fastcall *)(int, int, int, float))loc_60943C90)(v26, v27, v28, a4);
          break;
        default:
          return v9;
      }
    }
  }
  return v9;
}
