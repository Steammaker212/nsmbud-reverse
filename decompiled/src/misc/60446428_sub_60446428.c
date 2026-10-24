/* sub_60446428
 * address: 0x60446428   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60446428(_DWORD *a1, void *a2)
{
  sead_IDisposer *v4; // r6
  sead_IDisposer *v5; // r0
  float v7; // [sp+4h] [bp-34h] BYREF
  float v8; // [sp+8h] [bp-30h]
  float v9; // [sp+Ch] [bp-2Ch]
  int v10; // [sp+10h] [bp-28h] BYREF

  v4 = (sead_IDisposer *)operator_new_8DE25C(0x44u, a2, 4);
  v7 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v8 = COERCE_FLOAT("ShadowRenderObjLayer");
  v5 = sead_IDisposer_ctor(v4);
  FIELD_U32(v5 + (1) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v4 + (1) * 16, 0x4) = (int)&byte_60ABC94D;
  FIELD_U32(v4, 0x0) = (int)off_60C5E9A4;
  FIELD_U32(v4 + (1) * 16, 0x8) = 0;
  FIELD_U32(v4 + (1) * 16, 0xC) = -100;
  FIELD_U32(v4 + (2) * 16, 0x0) = 1;
  FIELD_U32(v4 + (2) * 16, 0x8) = (int)a1;
  FIELD_U32(v4 + (2) * 16, 0xC) = (int)sub_60446668;
  FIELD_U32(v4 + (3) * 16, 0x0) = 0;
  FIELD_U32(v4 + (2) * 16, 0x4) = (int)off_60BFAFD4;
  sead__SafeStringBase__operator_assign((int)&v5[1], (int)&v7);
  FIELD_U32(v4 + (1) * 16, 0x8) = 2;
  sub_609553AC(a1, v4);
  v7 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v8 = COERCE_FLOAT("ShadowRenderObjLayer__freeShadowTexture_");
  a1[1349] = a1;
  a1[1350] = sub_6044694C;
  a1[1351] = 0;
  a1[1348] = off_60BFAFD4;
  sead__SafeStringBase__operator_assign((int)(a1 + 1343), (int)&v7);
  a1[1345] = 2;
  a1[1346] = 100;
  v10 = 1;
  sub_6090B310(dword_60CCF464);
  sub_6095D8C0(a1 + 108, &v10, a2);
  sub_6090B32C(dword_60CCF464);
  a1[1216] = a1;
  a1[1217] = sub_604469A4;
  a1[1218] = 0;
  a1[1215] = off_60BFAFFC;
  a1 += 1215;
  *(a1 - 1) = a1;
  *(_DWORD *)(*(a1 - 951) + 60) = 0;
  *(a1 - 938) = 0;
  *(_DWORD *)*(a1 - 965) = 1148846080;
  *(_DWORD *)(*(a1 - 965) + 4 * *(a1 - 993)) = 1184645120;
  v7 = -0.0;
  v8 = -1.0;
  v9 = -0.0;
  *((_BYTE *)a1 - 124) = 1;
  ((void (__fastcall *)(_DWORD *, float *))loc_60966E2C)(a1 - 30, &v7);
  *((_BYTE *)a1 - 3656) = 1;
  LODWORD(v7) = 2048;
  LODWORD(v8) = 2048;
  return sub_60966DF4(a1 - 949, &v7);
}
