/* sub_60436074
 * address: 0x60436074   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60436074(int a1, const char **a2)
{
  int v3; // r4
  int v4; // r9
  int v5; // r8
  const char *v6; // r6
  size_t v7; // r5
  int v8; // r0
  int v9; // r3
  int *v10; // r4
  int v11; // r2
  int v12; // r7
  int v13; // r1
  unsigned __int16 *v14; // r0
  size_t v15; // r7
  size_t v16; // r2
  int v17; // r0
  int v18; // r1

  v3 = **(_DWORD **)(a1 + 68);
  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  v4 = FIELD_U32(v3, 16);
  v5 = -1;
  if ( !v4 )
    return v5;
  v6 = a2[1];
  if ( v6 )
    v7 = strlen(a2[1]);
  else
    v7 = 0;
  v8 = FIELD_U16(v4, 12);
  v10 = (int *)(v4 + 8 + 16 * v8);
  v9 = *v10;
  if ( FIELD_U32(v4, 8) < *v10 )
  {
    v11 = v4 + 8;
    do
    {
      v12 = 0;
      if ( v7 > v9 >> 3 )
        v12 = ((unsigned __int8)v6[v7 + ~(v9 >> 3)] >> (v9 & 7)) & 1;
      v13 = *(_DWORD *)(v11 + 16 * v8);
      v8 = *(unsigned __int16 *)(v11 + 16 * v8 + 2 * v12 + 4);
      v10 = (int *)(v11 + 16 * v8);
      v9 = *v10;
    }
    while ( v13 < *v10 );
  }
  v14 = (unsigned __int16 *)v10[2];
  v15 = *v14;
  v16 = v15;
  if ( v7 < v15 )
    v16 = v7;
  if ( v16 )
  {
    v17 = memcmp(v14 + 1, v6, v16);
    v18 = v17;
    if ( !v17 )
      v18 = 1;
    if ( v7 < v15 || v17 )
      goto LABEL_21;
  }
  else if ( v7 < v15 )
  {
    return v5;
  }
  v18 = 0;
  if ( v15 < v7 )
    v18 = -1;
LABEL_21:
  if ( !v18 )
    return ((int)v10 - v4 - 24) >> 4;
  return v5;
}
