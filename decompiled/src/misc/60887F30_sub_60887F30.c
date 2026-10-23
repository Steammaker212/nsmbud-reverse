/* sub_60887F30
 * address: 0x60887F30   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60887F30(int a1, __int64 a2)
{
  int v3; // r6
  int v4; // r10
  bool v5; // zf
  int v6; // r0
  int v7; // r9
  const void *v8; // r8
  size_t v9; // r5
  int v10; // r0
  int v11; // r3
  int *v12; // r7
  int v13; // r2
  int v14; // r7
  int v15; // r1
  unsigned __int16 *v16; // r0
  size_t v17; // r6
  size_t v18; // r2
  int v19; // r0
  int v20; // r1
  int v22; // r0

  if ( ((unsigned int)a2 & HIDWORD(a2)) == 0xFFFFFFFF )
    return 0;
  v4 = FIELD_U32(a1, 88);
  v5 = v4 == 0;
  if ( v4 )
  {
    v3 = FIELD_U32(a1, 92);
    v5 = v3 == 0;
  }
  if ( v5 )
    return 0;
  while ( *(_QWORD *)v3 != a2 )
  {
    v6 = FIELD_U32(v3, 8);
    if ( v6 )
      v6 += v3;
    v3 = v6;
    if ( !v6 )
      return 0;
  }
  v7 = FIELD_U32(v4, 56);
  v8 = (const void *)(v3 + 16);
  v9 = strlen((const char *)(v3 + 16));
  v10 = FIELD_U16(v7, 12);
  v12 = (int *)(v7 + 8 + 16 * v10);
  v11 = *v12;
  if ( FIELD_U32(v7, 8) < *v12 )
  {
    v13 = v7 + 8;
    do
    {
      v14 = 0;
      if ( v9 > v11 >> 3 )
        v14 = (*(unsigned __int8 *)(v3 + v9 + ~(v11 >> 3) + 16) >> (v11 & 7)) & 1;
      v15 = *(_DWORD *)(v13 + 16 * v10);
      v10 = *(unsigned __int16 *)(v13 + 16 * v10 + 2 * v14 + 4);
      v12 = (int *)(v13 + 16 * v10);
      v11 = *v12;
    }
    while ( v15 < *v12 );
  }
  v16 = (unsigned __int16 *)v12[2];
  v17 = *v16;
  v18 = v17;
  if ( v9 < v17 )
    v18 = v9;
  if ( !v18 )
  {
    if ( v9 < v17 )
      return 0;
    goto LABEL_24;
  }
  v19 = memcmp(v16 + 1, v8, v18);
  v20 = v19;
  if ( !v19 )
    v20 = 1;
  if ( v9 >= v17 && !v19 )
  {
LABEL_24:
    v20 = 0;
    if ( v17 < v9 )
      v20 = -1;
  }
  if ( v20 )
    return 0;
  v22 = (int)v12 - v7 - 24;
  if ( v22 >> 4 == -1 )
    return 0;
  return *(_DWORD *)(FIELD_U32(v4, 40) + 8 * (v22 >> 4));
}
