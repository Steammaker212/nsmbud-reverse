/* sub_60630E00
 * address: 0x60630E00   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60630E00(int *a1, float a2, float a3)
{
  int v5; // r5
  int v6; // r6
  int v7; // r5
  float v8; // s0
  int (__fastcall ***v9)(_DWORD, _DWORD, _DWORD *, int *, int *); // r0
  int (__fastcall *v10)(_DWORD, _DWORD, _DWORD *, int *, int *); // r6
  _DWORD v12[2]; // [sp+4h] [bp-24h] BYREF
  int v13; // [sp+Ch] [bp-1Ch] BYREF

  sub_60630FE0(a3, a3);
  v5 = *(_DWORD *)a1[1];
  a1[19] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 84))(v5, &dword_60CB41D0);
  a1[35] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 84))(v5, &dword_60CB41D8);
  a1[51] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 84))(v5, &dword_60CB41E0);
  a1[67] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 84))(v5, &dword_60CB41E8);
  a1[83] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 84))(v5, &dword_60CB41F0);
  a1[99] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 84))(v5, &dword_60CB41F8);
  a1[115] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 84))(v5, &dword_60CB4200);
  a1[131] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 84))(v5, &dword_60CB4208);
  a1[147] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 84))(v5, &dword_60CB4210);
  a1[163] = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 84))(v5, &dword_60CB41C0);
  a1[179] = (*(int (__fastcall **)(int, void *))(*(_DWORD *)v5 + 84))(v5, &unk_60CB41C8);
  v6 = *a1;
  v7 = *(_DWORD *)a1[1];
  a1[2] = (*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 124))(v7, *a1 + 8);
  a1[3] = (*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 124))(v7, v6 + 16);
  v8 = FIELD_F32(v6, 32);
  v12[0] = 1065353216;
  *(float *)&v12[1] = (float)(1.0 / v8) * a2;
  v9 = (int (__fastcall ***)(_DWORD, _DWORD, _DWORD *, int *, int *))(*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 132))(
                                                                       v7,
                                                                       a1[2]);
  v10 = **v9;
  v13 = 0;
  return v10(v9, 0, v12, &v13, &dword_60B3B944);
}
