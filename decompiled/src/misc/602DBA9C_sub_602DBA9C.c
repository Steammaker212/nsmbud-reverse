/* sub_602DBA9C
 * address: 0x602DBA9C   size: 1016   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_602DBA9C(int a1)
{
  char v1; // r12
  float v2; // s16
  int v4; // r3
  int *v5; // r1
  int *result; // r0
  int v7; // r7
  int v8; // r7
  int v9; // r6
  int v10; // r6
  bool v11; // vf
  int v12; // r3
  int v13; // r6
  int v14; // r3
  int v15; // r6
  int v16; // r3
  int v17; // r7
  int v18; // r6
  int v19; // r6
  int v20; // r3
  int v21; // r6
  int v22; // r3
  int v23; // r2
  int v24; // r3
  int v25; // r3
  int v26; // r1
  int v27; // r7
  int v28; // r2
  int v29; // r5
  int v30; // r7
  int v31; // r7
  int v32; // r7
  int v33; // r7
  int v34; // r7
  _BYTE v35[28]; // [sp+0h] [bp-58h] BYREF
  float v36; // [sp+1Ch] [bp-3Ch]

  if ( ((unsigned int)&dword_60C91D68 & ~(1613609664 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C91D68) )
  {
    dword_60C91D88 = (int)&sead__SafeStringBase__vtable;
    dword_60C91D8C = (int)"foot_L";
    dword_60C91D90 = (int)&sead__SafeStringBase__vtable;
    dword_60C91D94 = (int)"foot_R";
    dword_60C91D98 = (int)&sead__SafeStringBase__vtable;
    dword_60C91D9C = (int)"hand_L";
    dword_60C91DA0 = (int)&sead__SafeStringBase__vtable;
    dword_60C91DA4 = (int)"hand_R";
    dword_60C91DA8 = (int)&sead__SafeStringBase__vtable;
    dword_60C91DAC = (int)"tail";
    sub_60000288();
    _cxa_guard_release(&dword_60C91D68);
  }
  v4 = FIELD_U32(a1, 6356);
  v5 = (int *)(a1 + 6352);
  result = (int *)(a1 + 6364);
  v7 = FIELD_U32(a1, 6364);
  if ( v7 < v4 )
  {
    v8 = v7 + 1;
    v9 = FIELD_U32(a1, 6360);
    if ( v9 < 1 )
      v9 = FIELD_U32(a1, 6356);
    v10 = v9 - 1;
    FIELD_U32(a1, 6360) = v10;
    *result = v8;
    v11 = __OFSUB__(v10, v4);
    v12 = v10 - v4;
    if ( v12 < 0 != v11 )
      v12 = v10;
    v13 = *v5;
    v14 = 3 * v12;
    *(_DWORD *)(*v5 + 4 * v14) = FIELD_U32(a1, 108);
    v15 = v13 + 4 * v14;
    v16 = FIELD_U32(a1, 112);
LABEL_18:
    FIELD_U32(v15, 4) = v16;
    FIELD_U32(v15, 8) = FIELD_U32(a1, 116);
    goto LABEL_19;
  }
  if ( v7 >= 1 )
    *result = --v7;
  if ( v7 < v4 )
  {
    v17 = v7 + 1;
    v18 = FIELD_U32(a1, 6360);
    if ( v18 < 1 )
      v18 = v4;
    v19 = v18 - 1;
    FIELD_U32(a1, 6360) = v19;
    *result = v17;
    v11 = __OFSUB__(v19, v4);
    v20 = v19 - v4;
    if ( v20 < 0 != v11 )
      v20 = v19;
    v21 = *v5;
    v22 = 3 * v20;
    *(_DWORD *)(*v5 + 4 * v22) = FIELD_U32(a1, 108);
    v15 = v21 + 4 * v22;
    v16 = FIELD_U32(a1, 112);
    goto LABEL_18;
  }
LABEL_19:
  if ( (unsigned int)(FIELD_U32(a1, 6304) - 1) <= 1 )
  {
    v23 = FIELD_U32(a1, 6356);
    v24 = *result;
    if ( *result >= v23 )
    {
      if ( v24 >= 1 )
      {
        v25 = v24 - 1;
        v26 = *v5;
        v27 = FIELD_U32(a1, 6360) + v25;
        v11 = __OFSUB__(v27, v23);
        v28 = v27 - v23;
        if ( v28 < 0 != v11 )
          v28 = FIELD_U32(a1, 6360) + v25;
        v2 = *(float *)(v26 + 12 * v28 + 4);
        *result = v25;
      }
      v29 = **(_DWORD **)(a1 + 6300);
      v30 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v29 + 84))(v29, &dword_60C91D88);
      (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v29 + 108))(v29, v30, v35);
      v36 = v2 + (float)(v36 - FIELD_F32(a1, 112));
      (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v29 + 104))(v29, v30, v35);
      v31 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v29 + 84))(v29, &dword_60C91D90);
      (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v29 + 108))(v29, v31, v35);
      v36 = v2 + (float)(v36 - FIELD_F32(a1, 112));
      (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v29 + 104))(v29, v31, v35);
      v32 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v29 + 84))(v29, &dword_60C91D98);
      (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v29 + 108))(v29, v32, v35);
      v36 = v2 + (float)(v36 - FIELD_F32(a1, 112));
      (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v29 + 104))(v29, v32, v35);
      v33 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v29 + 84))(v29, &dword_60C91DA0);
      (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v29 + 108))(v29, v33, v35);
      v36 = v2 + (float)(v36 - FIELD_F32(a1, 112));
      (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v29 + 104))(v29, v33, v35);
      v34 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v29 + 84))(v29, &dword_60C91DA8);
      (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v29 + 108))(v29, v34, v35);
      v36 = v2 + (float)(v36 - FIELD_F32(a1, 112));
      return (int *)(*(int (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v29 + 104))(v29, v34, v35);
    }
  }
  return result;
}
