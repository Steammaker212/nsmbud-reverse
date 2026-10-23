/* sub_60433F10
 * address: 0x60433F10   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60433F10(int a1, const char *a2)
{
  int v2; // r9
  int v4; // r8
  size_t v5; // r5
  int v6; // r0
  int v7; // r3
  int *v8; // r4
  int v9; // r2
  int v10; // r7
  int v11; // r1
  unsigned __int16 *v12; // r0
  size_t v13; // r7
  size_t v14; // r2
  int v15; // r0
  int v16; // r1

  v2 = FIELD_U32(a1, 32);
  v4 = -1;
  if ( !v2 )
    return v4;
  if ( a2 )
    v5 = strlen(a2);
  else
    v5 = 0;
  v6 = FIELD_U16(v2, 12);
  v8 = (int *)(v2 + 8 + 16 * v6);
  v7 = *v8;
  if ( FIELD_U32(v2, 8) < *v8 )
  {
    v9 = v2 + 8;
    do
    {
      v10 = 0;
      if ( v5 > v7 >> 3 )
        v10 = ((unsigned __int8)a2[v5 + ~(v7 >> 3)] >> (v7 & 7)) & 1;
      v11 = *(_DWORD *)(v9 + 16 * v6);
      v6 = *(unsigned __int16 *)(v9 + 16 * v6 + 2 * v10 + 4);
      v8 = (int *)(v9 + 16 * v6);
      v7 = *v8;
    }
    while ( v11 < *v8 );
  }
  v12 = (unsigned __int16 *)v8[2];
  v13 = *v12;
  v14 = v13;
  if ( v5 < v13 )
    v14 = v5;
  if ( v14 )
  {
    v15 = memcmp(v12 + 1, a2, v14);
    v16 = v15;
    if ( !v15 )
      v16 = 1;
    if ( v5 < v13 || v15 )
      goto LABEL_21;
  }
  else if ( v5 < v13 )
  {
    return v4;
  }
  v16 = 0;
  if ( v13 < v5 )
    v16 = -1;
LABEL_21:
  if ( !v16 )
    return ((int)v8 - v2 - 24) >> 4;
  return v4;
}
