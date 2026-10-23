/* sub_601C100C
 * address: 0x601C100C   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C100C(_DWORD *a1)
{
  int v2; // r5
  _DWORD *v3; // r6
  __int16 *v4; // r5
  _DWORD *v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // s2
  int v9; // r0
  bool v10; // zf
  float v11; // s18
  int v12; // r5
  int v13; // r0
  unsigned __int64 v15; // [sp+0h] [bp-38h] BYREF
  int v16; // [sp+8h] [bp-30h]

  v2 = dword_60C8AEF0;
  v3 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
  v4 = (__int16 *)sub_601CFF2C(v2, 4);
  sub_6019EC34(a1 + 271, v3 + 258);
  v5 = (_DWORD *)sub_601E0040(a1 + 271);
  a1[246] = *v5;
  a1[247] = v5[1];
  a1[248] = v5[2];
  a1[20] = v3[20];
  a1[21] = v3[21];
  a1[22] = v3[22];
  v6 = v3[246];
  v7 = v3[247];
  LODWORD(v15) = v3[245];
  HIDWORD(v15) = v6;
  v16 = v7;
  v15 = sub_601BA56C((int)a1, (float *)&v15, v3[45]).n64_u64[0];
  v16 = v8;
  v9 = a1[271];
  v10 = v9 == 8;
  if ( v9 == 8 )
    v10 = a1[272] == 1;
  if ( v10 )
    v11 = 2.0;
  else
    v11 = 20.0;
  v12 = *v4;
  v13 = sub_601C5EEC(a1);
  ((void (__fastcall *)(_DWORD *, _DWORD *, unsigned __int64 *, int, float, float, float, float))sub_601C4B8C)(
    a1,
    a1 + 20,
    &v15,
    v12 * v13,
    v11,
    0.0,
    2.3,
    2.3);
  a1[367] = 4;
  sub_601BA0F8((int)a1, 15, 0.0, 0.0);
  a1[262] = 0;
  return 0;
}
