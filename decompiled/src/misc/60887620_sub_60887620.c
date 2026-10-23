/* sub_60887620
 * address: 0x60887620   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60887620(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  int v3; // r5
  int v4; // r6
  int v6; // r7
  const void *v7; // r9
  int v8; // r11
  int v9; // r0
  int v10; // r8
  size_t v11; // r4
  int v12; // r0
  int v13; // r1
  int v14; // r3
  int *v15; // r8
  int v16; // r2
  int v17; // r1
  int v18; // r7
  unsigned __int16 *v19; // r0
  size_t v20; // r11
  size_t v21; // r2
  int v22; // r0
  int v23; // r1
  int v24; // r0
  int v25; // r1
  int result; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r3
  int v30; // [sp+0h] [bp-30h]
  int v31; // [sp+4h] [bp-2Ch]
  _DWORD *v32; // [sp+8h] [bp-28h]

  v3 = HIDWORD(a3);
  v4 = a3;
  if ( ((unsigned int)a3 & HIDWORD(a3)) == 0xFFFFFFFF )
    return 0;
  v6 = a1[22];
  v7 = 0;
  if ( !v6 )
    goto LABEL_27;
  v8 = a1[23];
  v7 = 0;
  if ( !v8 )
    goto LABEL_27;
  while ( *(_QWORD *)v8 != a3 )
  {
    v9 = FIELD_U32(v8, 8);
    if ( v9 )
      v9 += v8;
    v8 = v9;
    if ( !v9 )
    {
      v7 = 0;
      goto LABEL_27;
    }
  }
  v32 = a2;
  v30 = v6;
  v7 = (const void *)(v8 + 16);
  v10 = FIELD_U32(v6, 56);
  v11 = strlen((const char *)(v8 + 16));
  v12 = FIELD_U16(v10, 12);
  v31 = v10;
  v13 = FIELD_U32(v10, 8);
  v15 = (int *)(v10 + 8 + 16 * v12);
  v14 = *v15;
  if ( v13 < *v15 )
  {
    v16 = v31 + 8;
    do
    {
      v17 = 0;
      if ( v11 > v14 >> 3 )
        v17 = (*(unsigned __int8 *)(v8 + v11 + ~(v14 >> 3) + 16) >> (v14 & 7)) & 1;
      v18 = *(_DWORD *)(v16 + 16 * v12);
      v12 = *(unsigned __int16 *)(v16 + 16 * v12 + 2 * v17 + 4);
      v15 = (int *)(v16 + 16 * v12);
      v14 = *v15;
    }
    while ( v18 < *v15 );
  }
  v19 = (unsigned __int16 *)v15[2];
  v20 = *v19;
  v21 = v20;
  if ( v11 < v20 )
    v21 = v11;
  if ( v21 )
  {
    v22 = memcmp(v19 + 1, v7, v21);
    v23 = v22;
    if ( !v22 )
      v23 = 1;
    if ( v11 < v20 || v22 )
      goto LABEL_25;
  }
  else if ( v11 < v20 )
  {
LABEL_26:
    a2 = v32;
    goto LABEL_27;
  }
  v23 = 0;
  if ( v20 < v11 )
    v23 = -1;
LABEL_25:
  if ( v23 )
    goto LABEL_26;
  v27 = (int)v15 - v31 - 24;
  a2 = v32;
  if ( v27 >> 4 != -1 )
  {
    v28 = *(_DWORD *)(FIELD_U32(v30, 40) + 8 * (v27 >> 4));
    v29 = FIELD_U32(v28, 148);
    *v32 = FIELD_U32(v28, 144);
    v32[1] = v29;
    return 1;
  }
LABEL_27:
  v24 = a1[247];
  if ( v24 )
  {
    v25 = sub_60887620(v24, a2, v4, v3);
    result = 1;
    if ( v25 )
      return result;
    debugPrintRelated("Appointed Texture is not found from Resident Resource.\n");
    if ( v7 )
      debugPrintRelated("The Texture which was not found is %s.\n");
  }
  return 0;
}
