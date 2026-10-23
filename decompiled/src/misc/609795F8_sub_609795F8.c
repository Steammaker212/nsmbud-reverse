/* sub_609795F8
 * address: 0x609795F8   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609795F8(_DWORD *a1, unsigned int a2)
{
  int v3; // r5
  int v4; // r11
  int v5; // r10
  int result; // r0
  bool v7; // zf
  unsigned int v8; // r10
  int v9; // r7
  int v10; // r4
  int *v11; // r4
  int v12; // r6
  int v13; // t1
  int v14; // r7
  int v15; // t1
  int v16; // r1
  int i; // r2
  int v18; // r1
  unsigned int v19; // r11
  int v20; // r7
  int v21; // r4
  int *v22; // r4
  int v23; // r6
  int v24; // t1
  int v25; // r7
  int v26; // t1
  int v27; // r1
  int j; // r2
  int v29; // r1
  int v30; // r1
  int v31; // r1

  v3 = 0;
  LOBYTE(v4) = 0;
  LOBYTE(v5) = 0;
  result = (int)&byte_60B3BA34;
  do
  {
    v7 = (v5 & 1) == 0;
    v5 = 1;
    if ( v7 )
    {
      v8 = a1[403];
      v9 = a1[404];
      v10 = a1[51] + 208 * v3;
      (*(void (__fastcall **)(int))(FIELD_U32(v10, 2348) + 12))(v10 + 2348);
      (*(void (__fastcall **)(int))(FIELD_U32(v10, 2348) + 12))(v10 + 2348);
      v13 = FIELD_U32(v10, 2352);
      v11 = (int *)(v10 + 2352);
      v12 = v13;
      if ( v8 > a2 )
        v9 += 216 * a2;
      v15 = FIELD_U32(v9, 76);
      v14 = v9 + 76;
      (*(void (__fastcall **)(int))(v15 + 12))(v14);
      result = FIELD_U32(v14, 4);
      if ( v12 == result )
      {
LABEL_14:
        v18 = a1[404];
        v5 = 1;
        result = 216;
        if ( a1[403] > a2 )
          v18 += 216 * a2;
        FIELD_U8(v18, 120) = v3;
      }
      else
      {
        v16 = *v11;
        for ( i = 1; ; i += 2 )
        {
          v5 = 0;
          if ( *(unsigned __int8 *)(v16 + i - 1) != *(unsigned __int8 *)(result + i - 1) )
            break;
          if ( !*(_BYTE *)(v16 + i - 1) )
            goto LABEL_14;
          if ( i >= 524289 || *(unsigned __int8 *)(v16 + i) != *(unsigned __int8 *)(result + i) )
            break;
          if ( !*(_BYTE *)(v16 + i) )
            goto LABEL_14;
        }
      }
    }
    if ( (v4 & 1) != 0 )
      goto LABEL_31;
    v19 = a1[403];
    v20 = a1[404];
    v21 = a1[51] + 208 * v3;
    (*(void (__fastcall **)(int))(FIELD_U32(v21, 2348) + 12))(v21 + 2348);
    (*(void (__fastcall **)(int))(FIELD_U32(v21, 2348) + 12))(v21 + 2348);
    v24 = FIELD_U32(v21, 2352);
    v22 = (int *)(v21 + 2352);
    v23 = v24;
    if ( v19 > a2 )
      v20 += 216 * a2;
    v26 = FIELD_U32(v20, 136);
    v25 = v20 + 136;
    (*(void (__fastcall **)(int))(v26 + 12))(v25);
    result = FIELD_U32(v25, 4);
    if ( v23 == result )
    {
LABEL_28:
      v29 = a1[404];
      result = 216;
      if ( a1[403] > a2 )
        v29 += 216 * a2;
      FIELD_U8(v29, 180) = v3;
LABEL_31:
      v4 = 1;
      goto LABEL_32;
    }
    v27 = *v22;
    for ( j = 1; ; j += 2 )
    {
      v4 = 0;
      if ( *(unsigned __int8 *)(v27 + j - 1) != *(unsigned __int8 *)(result + j - 1) )
        break;
      if ( !*(_BYTE *)(v27 + j - 1) )
        goto LABEL_28;
      if ( j >= 524289 || *(unsigned __int8 *)(v27 + j) != *(unsigned __int8 *)(result + j) )
        break;
      if ( !*(_BYTE *)(v27 + j) )
        goto LABEL_28;
    }
LABEL_32:
    ++v3;
  }
  while ( v3 != 32 );
  if ( !v5 )
  {
    v30 = a1[404];
    result = 255;
    if ( a1[403] > a2 )
      v30 += 216 * a2;
    FIELD_U8(v30, 120) = -1;
  }
  if ( !v4 )
  {
    v31 = a1[404];
    result = 255;
    if ( a1[403] > a2 )
      v31 += 216 * a2;
    FIELD_U8(v31, 180) = -1;
  }
  return result;
}
