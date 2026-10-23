/* sub_60867078
 * address: 0x60867078   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60867078(int a1, int a2)
{
  unsigned int v4; // r0
  int v5; // r7
  bool v6; // zf
  int v7; // r3
  int v8; // r2
  int v9; // r4
  int v10; // r6
  unsigned __int8 *v11; // r0
  unsigned __int8 *v12; // r1
  int v13; // r0
  int v14; // r0
  unsigned int v16; // r4
  int v17; // r0
  int v18; // r2
  int v19; // r1
  int v20; // r6
  _BYTE *v21; // r7
  _BYTE *v22; // r4
  int v23; // r0
  _DWORD *v24; // r7
  int v25; // r4
  int v26; // r0
  _DWORD v27[8]; // [sp+0h] [bp-68h] BYREF
  unsigned __int8 v28[72]; // [sp+20h] [bp-48h] BYREF

  v4 = FIELD_U32(a1, 12);
  if ( (v4 & 0xC00) == 0 )
    goto LABEL_8;
  v5 = v4 & 0x30;
  v6 = (v4 & 0xC00) == 2048;
  v7 = (8 * v4) & 0x18;
  v8 = (v4 >> 6) & 8;
  v9 = 5 * ((v4 >> 2) & 3);
  v10 = FIELD_U32(a1, 20);
  v11 = (unsigned __int8 *)(v10 + v7 + v5 + v8 + 20 * ((v4 >> 2) & 3));
  v12 = v11;
  if ( v6 )
    v12 = (unsigned __int8 *)(v10 + (v5 | 4) + v7 + v8 + 4 * v9);
  if ( sub_60854EFC(v11, v12) == 7 )
  {
    v13 = sub_60855BC8(40);
    if ( v13 )
      v14 = sub_6083C510(v13);
    else
      v14 = 0;
    FIELD_U32(a1, 44) = v14;
    v16 = FIELD_U32(a1, 12);
    v17 = FIELD_U32(a1, 20);
    v18 = (8 * v16) & 0x18;
    v19 = (v16 >> 6) & 8;
    v20 = 5 * ((v16 >> 2) & 3);
    v21 = (_BYTE *)(v17 + v18 + (v16 & 0x30) + v19 + 20 * ((v16 >> 2) & 3));
    v22 = v21;
    if ( (FIELD_U32(a1, 12) & 0xC00) == 0x800 )
      v22 = (_BYTE *)(v17 + (FIELD_U32(a1, 12) & 0x30 | 4) + v18 + v19 + 4 * v20);
    memset(v28, 0, 48);
    memset(v27, 0, sizeof(v27));
    v23 = sub_60854D60((int)v28, v27, v21, v22);
    v24 = *(_DWORD **)(a1 + 44);
    v25 = v23;
    v26 = sub_60855BA4(v23, 8);
    sub_6083C52C(v24, v26, v25);
    return sub_6083C540(*(int **)(a1 + 44), a2, v28);
  }
  else
  {
LABEL_8:
    FIELD_U32(a1, 44) = 0;
    return 0;
  }
}
