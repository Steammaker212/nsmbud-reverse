/* sub_600DEC28
 * address: 0x600DEC28   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

double __fastcall sub_600DEC28(_DWORD *a1)
{
  _DWORD **v1; // r4
  float *v2; // r6
  int v3; // r5
  _DWORD *v4; // t1
  float v5; // s4
  float v6; // s0
  float v7; // s16
  float v8; // s18
  _DWORD v10[3]; // [sp+4h] [bp-9Ch] BYREF
  _BYTE v11[48]; // [sp+10h] [bp-90h] BYREF
  float v12[3]; // [sp+40h] [bp-60h] BYREF
  float v13; // [sp+4Ch] [bp-54h]
  float v14; // [sp+50h] [bp-50h]
  float v15; // [sp+54h] [bp-4Ch]
  float v16; // [sp+58h] [bp-48h]
  float v17; // [sp+5Ch] [bp-44h]
  float v18; // [sp+60h] [bp-40h]
  float v19; // [sp+64h] [bp-3Ch]
  float v20; // [sp+68h] [bp-38h]
  float v21; // [sp+6Ch] [bp-34h]

  v1 = (_DWORD **)a1;
  v2 = (float *)(a1 + 2032);
  v10[0] = a1[2032];
  v10[1] = v10[0];
  v10[2] = v10[0];
  v3 = (*(int (__fastcall **)(_DWORD *))(*a1 + 1120))(a1);
  v4 = v1[1774];
  v1 += 1774;
  (*(void (__fastcall **)(_DWORD, int, _BYTE *))(*(_DWORD *)*v4 + 108))(*v4, v3, v11);
  sub_604302C8(**v1, v3, v12);
  v5 = *v2 * 4.0;
  v6 = *v2 * -2.2;
  v13 = v13 + (float)((float)((float)(v5 * v12[1]) + (float)(v12[0] * v6)) + (float)(v12[2] * 0.0));
  v17 = v17 + (float)((float)((float)(v5 * v15) + (float)(v6 * v14)) + (float)(v16 * 0.0));
  v21 = v21 + (float)((float)((float)(v5 * v19) + (float)(v6 * v18)) + (float)(v20 * 0.0));
  (*(void (__fastcall **)(_DWORD, int, float *, _DWORD *))(*(_DWORD *)**v1 + 96))(**v1, v3, v12, v10);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v1 + 56))(**v1);
  (*(void (__fastcall **)(_DWORD, int, float *))(*(_DWORD *)**v1 + 108))(**v1, v3, v12);
  v7 = v13;
  v8 = v17;
  (*(void (__fastcall **)(_DWORD, int, _BYTE *))(*(_DWORD *)**v1 + 104))(**v1, v3, v11);
  return COERCE_DOUBLE(__PAIR64__(LODWORD(v8), LODWORD(v7)));
}
