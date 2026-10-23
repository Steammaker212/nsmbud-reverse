/* sub_60400F18
 * address: 0x60400F18   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60400F18(int a1)
{
  unsigned int v2; // r5
  unsigned int v3; // r1
  int v4; // r8
  int v5; // r9
  unsigned int v6; // r4
  unsigned int v7; // r0
  int v8; // r7
  _DWORD *v9; // r7
  int v10; // t1
  unsigned int v11; // r5
  int v12; // r0
  unsigned int v13; // r1
  int v14; // r2
  int v15; // r1
  signed int result; // r0
  int v17; // r0
  int v18; // r1
  unsigned int v19; // r2
  unsigned int v20; // r3
  int v21; // r3
  int v22; // r6
  bool v23; // zf
  unsigned int v24; // r2
  int v25; // r2
  unsigned int v26; // r2
  int v27; // r2
  int v28; // r1
  unsigned int v29; // r0
  int v30; // r2
  int v31; // r0
  int v32; // r0
  int v33; // r1
  unsigned int v34; // r2
  unsigned int v35; // r3
  int v36; // r3
  int v37; // r6
  bool v38; // zf
  int v39; // [sp+8h] [bp-30h]
  signed int v40; // [sp+Ch] [bp-2Ch]
  _DWORD v41[10]; // [sp+10h] [bp-28h] BYREF

  v2 = 0;
  v3 = FIELD_U32(dword_60C99E2C, 615720);
  if ( v3 >= 0xA )
    v3 = 0;
  v4 = dword_60C99DEC;
  v5 = FIELD_U8(dword_60C99DEC, 528);
  v39 = FIELD_U8(dword_60C99DEC, 529);
  v6 = sub_604D2F10(dword_60C99E2C + 52644 * v3 + 89268);
  v7 = 0;
  if ( v6 < 0xB )
    v7 = v6;
  v8 = a1 + 4 * v7;
  v10 = FIELD_U32(v8, 20);
  v9 = (_DWORD *)(v8 + 20);
  v40 = FIELD_U32(v10, 24);
  memset((void *)(v4 + 540), 255, 0x28u);
  if ( v6 == v5 )
  {
    v11 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v41[0] = -1;
        sub_604011B4(*v9, v41);
        if ( FIELD_U8(v4, 531) >= 2u )
          break;
        v12 = v41[0];
        if ( v41[0] != v39 )
        {
          v13 = 0;
          if ( v11 < 5 )
            v13 = v11;
          ++v11;
          v14 = dword_60C99DEC;
          v15 = dword_60C99DEC + 4 * v13;
          FIELD_U32(v15, 540) = v6;
          FIELD_U32(v15, 560) = v12;
          result = FIELD_U8(v14, 531);
LABEL_24:
          if ( (int)v11 >= result )
            return result;
        }
      }
      v17 = dword_60C99DEC;
      v18 = v41[0];
      if ( (int)v11 >= v40 || !v11 )
      {
LABEL_21:
        v24 = 0;
        if ( v11 < 5 )
          v24 = v11;
        ++v11;
        v25 = dword_60C99DEC + 4 * v24;
        FIELD_U32(v25, 540) = v6;
        FIELD_U32(v25, 560) = v18;
        result = FIELD_U8(v17, 531);
        goto LABEL_24;
      }
      v19 = 0;
      while ( 1 )
      {
        v20 = 0;
        if ( v19 < 5 )
          v20 = v19;
        v21 = dword_60C99DEC + 4 * v20;
        v22 = FIELD_U32(v21, 540);
        v23 = v22 == v6;
        if ( v22 == v6 )
          v23 = FIELD_U32(v21, 560) == v41[0];
        if ( v23 )
          break;
        if ( ++v19 >= v11 )
          goto LABEL_21;
      }
    }
  }
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v41[0] = -1;
        sub_604011B4(*v9, v41);
        if ( FIELD_U8(v4, 531) > 1u )
          break;
        v28 = dword_60C99DEC;
        v29 = 0;
        v30 = v41[0];
        if ( v2 < 5 )
          v29 = v2;
        ++v2;
        v31 = dword_60C99DEC + 4 * v29;
        FIELD_U32(v31, 540) = v6;
        FIELD_U32(v31, 560) = v30;
        result = FIELD_U8(v28, 531);
        if ( (int)v2 >= result )
          return result;
      }
      v32 = dword_60C99DEC;
      v33 = v41[0];
      if ( (int)v2 >= v40 || !v2 )
        break;
      v34 = 0;
      while ( 1 )
      {
        v35 = 0;
        if ( v34 < 5 )
          v35 = v34;
        v36 = dword_60C99DEC + 4 * v35;
        v37 = FIELD_U32(v36, 540);
        v38 = v37 == v6;
        if ( v37 == v6 )
          v38 = FIELD_U32(v36, 560) == v41[0];
        if ( v38 )
          break;
        if ( ++v34 >= v2 )
          goto LABEL_27;
      }
    }
LABEL_27:
    v26 = 0;
    if ( v2 < 5 )
      v26 = v2;
    ++v2;
    v27 = dword_60C99DEC + 4 * v26;
    FIELD_U32(v27, 540) = v6;
    FIELD_U32(v27, 560) = v33;
    result = FIELD_U8(v32, 531);
  }
  while ( (int)v2 < result );
  return result;
}
