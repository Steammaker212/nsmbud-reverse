/* sub_60638F7C
 * address: 0x60638F7C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60638F7C(int **a1, int a2, float *a3, float *a4, int a5)
{
  int v7; // r5
  int v8; // r0
  void (__fastcall ***v9)(_DWORD, int, float *, int *, float *); // r0
  float v10; // s0
  float v11; // s4
  float v12; // s2
  float v13; // s6
  void (__fastcall ***v14)(_DWORD, int, float *, int *, float *); // r5
  int result; // r0
  int v16; // [sp+4h] [bp-24h] BYREF
  float v17[8]; // [sp+8h] [bp-20h] BYREF

  v7 = **a1;
  v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 124))(v7);
  v9 = (void (__fastcall ***)(_DWORD, int, float *, int *, float *))(*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 132))(
                                                                      v7,
                                                                      v8);
  v10 = *a3;
  v11 = *a4;
  v12 = a3[1];
  v13 = a4[1];
  v14 = v9;
  v16 = 0;
  v17[0] = v11 - (float)(v11 * v10);
  v17[1] = v13 - (float)(v13 * v12);
  (**v9)(v9, 0, a3, &v16, v17);
  result = a5;
  if ( !a5 )
  {
    v16 = 0;
    (**v14)(v14, 1, a3, &v16, v17);
    v16 = 0;
    return ((int (__fastcall *)(_DWORD, int, float *, int *, float *))**v14)(v14, 2, a3, &v16, v17);
  }
  return result;
}
