/* mt_kusari_ref
 * address: 0x6063C948   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall mt_kusari_ref(float *a1, float *a2)
{
  float v3; // s18
  float v4; // s16
  int v5; // r4
  int (__fastcall *v6)(int, _DWORD *); // r2
  int v7; // r0
  void (__fastcall ***v8)(_DWORD, int, float *, _DWORD *, int *); // r4
  void (__fastcall *v9)(_DWORD, _DWORD, float *, _DWORD *, int *); // r5
  void (__fastcall *v10)(_DWORD, int, float *, _DWORD *, int *); // r5
  int (__fastcall *v11)(_DWORD, int, float *, _DWORD *, int *); // r5
  float v13[2]; // [sp+4h] [bp-44h] BYREF
  float v14; // [sp+Ch] [bp-3Ch] BYREF
  int v15; // [sp+10h] [bp-38h]
  int v16; // [sp+14h] [bp-34h]
  _DWORD v17[12]; // [sp+18h] [bp-30h] BYREF

  v3 = *a2 + a1[1];
  v4 = a2[1] + a1[2];
  *((_DWORD *)a1 + 4) = sub_6000F7B8(-v4, -v3);
  v14 = sqrtf((float)(v4 * v4) + (float)(v3 * v3)) * 0.125;
  v15 = 1065353216;
  v16 = 1065353216;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)a1 + 68))(**(_DWORD **)a1, &v14);
  v13[0] = v14;
  LODWORD(v13[1]) = v15;
  v5 = **(_DWORD **)a1;
  v6 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 124);
  v17[0] = &sead__SafeStringBase__vtable;
  v17[1] = "mt_kusari";
  v7 = v6(v5, v17);
  v8 = (void (__fastcall ***)(_DWORD, int, float *, _DWORD *, int *))(*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 132))(
                                                                       v5,
                                                                       v7);
  v9 = **v8;
  v17[0] = 0;
  v9(v8, 0, v13, v17, &dword_60B3B944);
  v10 = **v8;
  v17[0] = 0;
  v10(v8, 1, v13, v17, &dword_60B3B944);
  v11 = (int (__fastcall *)(_DWORD, int, float *, _DWORD *, int *))**v8;
  v17[0] = 0;
  return v11(v8, 2, v13, v17, &dword_60B3B944);
}
