/* sub_600A8F84
 * address: 0x600A8F84   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A8F84(_DWORD **a1, float *a2)
{
  _DWORD **v2; // r5
  int v4; // r6
  _DWORD *v5; // t1
  _BYTE v7[48]; // [sp+0h] [bp-80h] BYREF
  float v8[3]; // [sp+30h] [bp-50h] BYREF
  float v9; // [sp+3Ch] [bp-44h]
  float v10; // [sp+40h] [bp-40h]
  float v11; // [sp+44h] [bp-3Ch]
  float v12; // [sp+48h] [bp-38h]
  float v13; // [sp+4Ch] [bp-34h]
  float v14; // [sp+50h] [bp-30h]
  float v15; // [sp+54h] [bp-2Ch]
  float v16; // [sp+58h] [bp-28h]
  float v17; // [sp+5Ch] [bp-24h]

  v2 = a1;
  ((void (__fastcall *)(_DWORD **))(*a1)[261])(a1);
  v4 = ((int (__fastcall *)(_DWORD **))(*v2)[280])(v2);
  v5 = v2[1774];
  v2 += 1774;
  (*(void (__fastcall **)(_DWORD, int, _BYTE *))(*(_DWORD *)*v5 + 108))(*v5, v4, v7);
  sub_604302C8(**v2, v4, v8);
  v9 = v9 + (float)((float)((float)(v8[1] * 20.0) + (float)(v8[0] * 0.0)) + (float)(v8[2] * 0.0));
  v13 = v13 + (float)((float)((float)(v11 * 20.0) + (float)(v10 * 0.0)) + (float)(v12 * 0.0));
  v17 = v17 + (float)((float)((float)(v15 * 20.0) + (float)(v14 * 0.0)) + (float)(v16 * 0.0));
  (*(void (__fastcall **)(_DWORD, int, float *, int *))(*(_DWORD *)**v2 + 96))(**v2, v4, v8, &dword_60B3B98C);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v2 + 56))(**v2);
  (*(void (__fastcall **)(_DWORD, int, float *))(*(_DWORD *)**v2 + 108))(**v2, v4, v8);
  *a2 = v9;
  a2[1] = v13;
  a2[2] = v17;
  return (*(int (__fastcall **)(_DWORD, int, _BYTE *))(*(_DWORD *)**v2 + 104))(**v2, v4, v7);
}
