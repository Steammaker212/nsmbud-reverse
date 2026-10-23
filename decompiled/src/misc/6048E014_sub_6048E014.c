/* sub_6048E014
 * address: 0x6048E014   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048E014(_DWORD *a1)
{
  unsigned int v2; // r1
  int v3; // r0
  _DWORD *v4; // r5
  int v5; // r1
  int v6; // r6
  int v7; // r1
  int v8; // r2
  int v9; // r1
  _DWORD *v10; // r7
  int v11; // r3
  int v12; // r3
  char v13; // r0
  int v14; // r0
  int v15; // r0
  char v16; // r1
  int v17; // r0
  int v18; // r0
  char v19; // r2
  int v21; // [sp+4h] [bp-24h]
  int v22; // [sp+8h] [bp-20h] BYREF
  int v23; // [sp+Ch] [bp-1Ch]

  v2 = a1[11947];
  v3 = 0;
  if ( v2 >= 4 )
    v2 = 0;
  v4 = (_DWORD *)a1[v2 + 3450];
  v22 = 0;
  v5 = dword_60C9FDD0[0];
  if ( dword_60C9FDD0[0] >= 3u )
    v5 = 0;
  if ( (*(_BYTE *)(v4[v5 + 905] + 64) & 1) != 0 )
    goto LABEL_29;
  v22 = 1;
  if ( (unsigned int)dword_60C9FDD4 < 3 )
    v3 = dword_60C9FDD4;
  if ( (*(_BYTE *)(v4[v3 + 905] + 64) & 1) != 0 )
    goto LABEL_29;
  v6 = 2;
  v22 = 2;
  v7 = dword_60C9FDD8;
  if ( (unsigned int)dword_60C9FDD8 >= 3 )
    v7 = 0;
  if ( (*(_BYTE *)(v4[v7 + 905] + 64) & 1) != 0 )
  {
LABEL_29:
    v22 = (int)&sead__SafeStringBase__vtable;
    v23 = sub_60492F00(6);
    sub_60473DE4(v4, 2u, &v22, 0);
    v6 = 1;
  }
  else
  {
    v8 = 0;
    v9 = a1[11946];
    if ( v9 == 3 )
      v8 = 2;
    if ( v9 == 4 )
      v8 = 1;
    v10 = v4 + 905;
    v21 = v8;
    v11 = dword_60C9FDD0[0];
    if ( dword_60C9FDD0[0] >= 3u )
      v11 = 0;
    v12 = v10[v11];
    v13 = FIELD_U8(v12, 64) & 0xFE;
    if ( !v8 )
      v13 |= 1u;
    FIELD_U8(v12, 64) = v13;
    v14 = dword_60C9FDD4;
    if ( (unsigned int)dword_60C9FDD4 >= 3 )
      v14 = 0;
    v15 = v10[v14];
    v16 = FIELD_U8(v15, 64) & 0xFE;
    if ( v8 == 1 )
      v16 |= 1u;
    FIELD_U8(v15, 64) = v16;
    v17 = dword_60C9FDD8;
    if ( (unsigned int)dword_60C9FDD8 >= 3 )
      v17 = 0;
    v18 = v10[v17];
    v19 = FIELD_U8(v18, 64) & 0xFE;
    if ( v21 == 2 )
      v19 |= 1u;
    FIELD_U8(v18, 64) = v19;
    v22 = (int)&sead__SafeStringBase__vtable;
    v23 = sub_60492F00(4);
    sub_60473DE4(v4, 2u, &v22, 0);
    sub_60473B58(a1 + 9, 0xEu, 0);
  }
  a1[11949] = v6;
  return 47796;
}
