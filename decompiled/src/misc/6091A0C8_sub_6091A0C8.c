/* sub_6091A0C8
 * address: 0x6091A0C8   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091A0C8(int a1, int a2, int a3)
{
  int v3; // r8
  int v4; // r5
  int v5; // r4
  int v6; // r9
  unsigned int *v7; // r5
  unsigned int v8; // r1
  _DWORD *v9; // r8
  int v10; // r3
  int v11; // r5
  int v12; // r6
  int v13; // r7
  int v14; // r3
  int v15; // r5
  int v16; // r6
  int v17; // r7
  int v18; // r9
  unsigned int *v19; // r4
  unsigned int v20; // r1
  int v22; // [sp+18h] [bp-1C0h]
  _QWORD v25[40]; // [sp+28h] [bp-1B0h] BYREF
  _DWORD v26[10]; // [sp+168h] [bp-70h] BYREF
  _DWORD v27[18]; // [sp+190h] [bp-48h] BYREF

  v3 = a1;
  sub_60913700(a2, a1);
  memset(v27, 0, 36);
  memset(v26, 0, 36);
  v4 = 0;
  v5 = 0;
  v22 = v3;
  do
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v3 + 4 * v5 + 28);
      if ( v6 )
        break;
      if ( ++v5 == 8 )
        goto LABEL_17;
    }
    sub_60916BA8(dword_60CCFC8C, a2, *(_DWORD *)(v3 + 4 * v5 + 28));
    v7 = (unsigned int *)(v6 + 272);
    v27[v5] = v6 + 64;
    do
      v8 = __ldrex(v7);
    while ( __strex(0x80000000, v7) );
    if ( v8 )
    {
      if ( v8 == 0x80000000 )
      {
        while ( *v7 == 0x80000000 )
          sub_609085CC();
      }
      else
      {
        sub_6091AD4C(v6);
      }
    }
    FIELD_U32(v6, 272) = 0;
    v26[v5] = v6 + 304;
    if ( (a3 & (1 << v5)) != 0 )
    {
      v9 = &v25[5 * v5];
      v10 = FIELD_U32(v6, 308);
      v11 = FIELD_U32(v6, 312);
      v12 = FIELD_U32(v6, 316);
      v13 = FIELD_U32(v6, 320);
      *v9 = FIELD_U32(v6, 304);
      v9[1] = v10;
      v9[2] = v11;
      v9[3] = v12;
      v9[4] = v13;
      v14 = FIELD_U32(v6, 328);
      v15 = FIELD_U32(v6, 332);
      v16 = FIELD_U32(v6, 336);
      v17 = FIELD_U32(v6, 340);
      v9[5] = FIELD_U32(v6, 324);
      v9[6] = v14;
      v9[7] = v15;
      v9[8] = v16;
      v9[9] = v17;
      if ( FIELD_U16(v6, 60) == 29 )
        dword_60CC7534(&v25[5 * v5], 56);
      v26[v5] = v9;
      v3 = v22;
    }
    v4 = ++v5;
  }
  while ( v5 != 8 );
LABEL_17:
  v18 = FIELD_U32(v3, 60);
  if ( v18 )
  {
    v19 = (unsigned int *)(v18 + 272);
    v27[8] = v18 + 64;
    do
      v20 = __ldrex(v19);
    while ( __strex(0x80000000, v19) );
    if ( v20 )
    {
      if ( v20 == 0x80000000 )
      {
        while ( *v19 == 0x80000000 )
          sub_609085CC();
      }
      else
      {
        sub_6091ADA0(v18);
      }
    }
    FIELD_U32(v18, 272) = 0;
    v26[8] = v18 + 304;
    sub_60916CB4(dword_60CCFC8C, a2, FIELD_U32(v3, 60));
  }
  return ((int (__fastcall *)(_DWORD, int, _DWORD *, _DWORD *, _DWORD, _DWORD))dword_60CC7954)(
           FIELD_U32(a2, 192),
           v4,
           v27,
           v26,
           v27[8],
           v26[8]);
}
