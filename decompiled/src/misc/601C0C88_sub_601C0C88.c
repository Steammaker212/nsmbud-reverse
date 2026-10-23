/* sub_601C0C88
 * address: 0x601C0C88   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C0C88(int *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int result; // r0
  int v6; // r5
  float *v7; // r0
  int v8; // s2
  int v9; // s2
  int v10; // r0
  bool v11; // zf
  double v12; // [sp+8h] [bp-60h] BYREF
  int v13; // [sp+10h] [bp-58h]
  unsigned __int64 v14; // [sp+14h] [bp-54h] BYREF
  int v15; // [sp+1Ch] [bp-4Ch]
  _DWORD v16[3]; // [sp+20h] [bp-48h] BYREF
  int v17; // [sp+2Ch] [bp-3Ch] BYREF
  int v18; // [sp+30h] [bp-38h]
  int v19; // [sp+34h] [bp-34h]

  memset(v16, 255, sizeof(v16));
  a1[277] &= ~0x20u;
  v2 = sub_601916F4(dword_60C8996C);
  if ( v2 == 7 )
  {
    v3 = *a1;
    v4 = 7;
LABEL_3:
    (*(void (__fastcall **)(int *, int, _DWORD *))(v3 + 116))(a1, v4, v16);
    result = a1[277] & 0xFFFFFFEF;
LABEL_10:
    a1[277] = result;
    return result;
  }
  if ( (a1[66] | 1) == 7 )
  {
    v17 = -1;
    v18 = -1;
    v19 = -1;
    v6 = sub_601CF9C0(dword_60C8AEF0);
    sub_6019EC34(&v17, (_DWORD *)(v6 + 1032));
    v7 = (float *)sub_601E0040(&v17);
    v14 = sub_601BA56C((int)a1, v7, FIELD_U32(v6, 180)).n64_u64[0];
    v15 = v8;
    v12 = sub_6019B6EC(a1[274]);
    v13 = v9;
    ((void (__fastcall *)(int *, unsigned __int64 *, _DWORD, int, float, float, float, int, double *))loc_60185F9C)(
      a1,
      &v14,
      0,
      15,
      8.0,
      1.0 * 2.3,
      2.3 * 1.0,
      15,
      &v12);
    result = a1[277] | 0x20;
    goto LABEL_10;
  }
  result = sub_601C43E0(a1, v2);
  if ( result == 1 )
  {
    if ( (unsigned int)(v2 - 9) <= 1 )
      sub_601C518C(a1, v2);
    v10 = sub_601CF9C0(dword_60C8AEF0);
    v17 = -1;
    v18 = -1;
    v19 = -1;
    sub_6019EC34(&v17, (_DWORD *)(v10 + 1032));
    sub_601C4288(a1, v2, &v17);
    result = a1[277] | 0x10;
    goto LABEL_10;
  }
  v11 = v2 == 11;
  if ( v2 != 11 )
    v11 = v2 == 8;
  if ( v11 )
  {
    sub_601C518C(a1, v2);
    v3 = *a1;
    v4 = v2;
    goto LABEL_3;
  }
  return result;
}
