/* sub_608A4798
 * address: 0x608A4798   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A4798(int a1, const char *a2)
{
  int v4; // r9
  size_t v5; // r5
  int result; // r0
  int v7; // r0
  int v8; // r3
  int *v9; // r4
  int v10; // r2
  int v11; // r7
  int v12; // r1
  unsigned __int16 *v13; // r0
  size_t v14; // r7
  size_t v15; // r2
  int v16; // r0
  int v17; // r1
  int v18; // r1

  v4 = FIELD_U32(a1, 24);
  if ( !v4 )
    return 0;
  if ( a2 )
    v5 = strlen(a2);
  else
    v5 = 0;
  v7 = FIELD_U16(v4, 12);
  v9 = (int *)(v4 + 8 + 16 * v7);
  v8 = *v9;
  if ( FIELD_U32(v4, 8) < *v9 )
  {
    v10 = v4 + 8;
    do
    {
      v11 = 0;
      if ( v5 > v8 >> 3 )
        v11 = ((unsigned __int8)a2[v5 + ~(v8 >> 3)] >> (v8 & 7)) & 1;
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
  if ( v5 < v14 )
    v15 = v5;
  if ( v15 )
  {
    v16 = memcmp(v13 + 1, a2, v15);
    v17 = v16;
    if ( !v16 )
      v17 = 1;
    if ( v5 < v14 || v16 )
      goto LABEL_22;
  }
  else
  {
    result = 0;
    if ( v5 < v14 )
      return result;
  }
  v17 = 0;
  if ( v14 < v5 )
    v17 = -1;
LABEL_22:
  result = 0;
  if ( !v17 )
  {
    v18 = (int)v9 - v4 - 24;
    if ( v18 >> 4 != -1 )
      return FIELD_U32(a1, 16) + 16 * (v18 >> 4);
  }
  return result;
}
