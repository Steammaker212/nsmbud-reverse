/* sub_609183B4
 * address: 0x609183B4   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609183B4(int a1, const char *a2)
{
  int v3; // r0
  int v4; // r9
  int v5; // r8
  size_t v6; // r6
  int v7; // r0
  int v8; // r3
  int *v9; // r7
  int v10; // r2
  int v11; // r7
  int v12; // r4
  unsigned __int16 *v13; // r0
  size_t v14; // r4
  size_t v15; // r2
  int v16; // r0
  int v17; // r1

  v3 = textures_bntx_ref_918268(a1);
  v4 = -1;
  if ( !v3 )
    return v4;
  v5 = FIELD_U32(v3, 56);
  if ( a2 )
    v6 = strlen(a2);
  else
    v6 = 0;
  v7 = FIELD_U16(v5, 12);
  v9 = (int *)(v5 + 8 + 16 * v7);
  v8 = *v9;
  if ( FIELD_U32(v5, 8) < *v9 )
  {
    v10 = v5 + 8;
    do
    {
      v11 = 0;
      if ( v6 > v8 >> 3 )
        v11 = ((unsigned __int8)a2[v6 + ~(v8 >> 3)] >> (v8 & 7)) & 1;
      v12 = *(_DWORD *)(v10 + 16 * v7);
      v7 = *(unsigned __int16 *)(v10 + 16 * v7 + 2 * v11 + 4);
      v9 = (int *)(v10 + 16 * v7);
      v8 = *v9;
    }
    while ( v12 < *v9 );
  }
  v13 = (unsigned __int16 *)v9[2];
  v14 = *v13;
  v15 = v14;
  if ( v6 < v14 )
    v15 = v6;
  if ( v15 )
  {
    v16 = memcmp(v13 + 1, a2, v15);
    v17 = v16;
    if ( !v16 )
      v17 = 1;
    if ( v6 < v14 || v16 )
      goto LABEL_21;
  }
  else if ( v6 < v14 )
  {
    return v4;
  }
  v17 = 0;
  if ( v14 < v6 )
    v17 = -1;
LABEL_21:
  if ( !v17 )
    return ((int)v9 - v5 - 24) >> 4;
  return v4;
}
