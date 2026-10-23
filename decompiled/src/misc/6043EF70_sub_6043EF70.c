/* sub_6043EF70
 * address: 0x6043EF70   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6043EF70(int a1, const char **a2)
{
  int v3; // r8
  int v4; // r9
  const char *v5; // r5
  size_t v6; // r4
  int result; // r0
  int v8; // r0
  int v9; // r3
  int *v10; // r6
  int v11; // r2
  int v12; // r7
  int v13; // r1
  unsigned __int16 *v14; // r0
  size_t v15; // r7
  size_t v16; // r2
  int v17; // r0
  int v18; // r1
  int v19; // r1

  v3 = FIELD_U32(a1, 24);
  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  v4 = FIELD_U32(v3, 24);
  if ( !v4 )
    return 0;
  v5 = a2[1];
  if ( v5 )
    v6 = strlen(a2[1]);
  else
    v6 = 0;
  v8 = FIELD_U16(v4, 12);
  v10 = (int *)(v4 + 8 + 16 * v8);
  v9 = *v10;
  if ( FIELD_U32(v4, 8) < *v10 )
  {
    v11 = v4 + 8;
    do
    {
      v12 = 0;
      if ( v6 > v9 >> 3 )
        v12 = ((unsigned __int8)v5[v6 + ~(v9 >> 3)] >> (v9 & 7)) & 1;
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
  if ( v6 < v15 )
    v16 = v6;
  if ( v16 )
  {
    v17 = memcmp(v14 + 1, v5, v16);
    v18 = v17;
    if ( !v17 )
      v18 = 1;
    if ( v6 < v15 || v17 )
      goto LABEL_22;
  }
  else
  {
    result = 0;
    if ( v6 < v15 )
      return result;
  }
  v18 = 0;
  if ( v15 < v6 )
    v18 = -1;
LABEL_22:
  result = 0;
  if ( !v18 )
  {
    v19 = (int)v10 - v4 - 24;
    if ( v19 >> 4 != -1 )
      return FIELD_U32(v3, 16) + 232 * (v19 >> 4);
  }
  return result;
}
