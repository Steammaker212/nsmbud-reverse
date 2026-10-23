/* sub_609189A0
 * address: 0x609189A0   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609189A0(_DWORD *a1, int a2, int a3, const char **a4)
{
  int v8; // r10
  const char *v9; // r7
  size_t v10; // r6
  int v11; // r0
  int v12; // r3
  int *v13; // r4
  int v14; // r2
  int v15; // r5
  int v16; // r1
  unsigned __int16 *v17; // r0
  size_t v18; // r5
  size_t v19; // r2
  int v20; // r0
  int v21; // r1
  char *v22; // r0
  int v24; // r1
  char *v25; // r1
  int v26; // t1
  int v27; // r5
  int v28; // r6

  (*((void (__fastcall **)(const char **))*a4 + 3))(a4);
  v8 = FIELD_U32(a2, 80);
  if ( !v8 )
    goto LABEL_23;
  v9 = a4[1];
  if ( v9 )
    v10 = strlen(a4[1]);
  else
    v10 = 0;
  v11 = FIELD_U16(v8, 12);
  v13 = (int *)(v8 + 8 + 16 * v11);
  v12 = *v13;
  if ( FIELD_U32(v8, 8) < *v13 )
  {
    v14 = v8 + 8;
    do
    {
      v15 = 0;
      if ( v10 > v12 >> 3 )
        v15 = ((unsigned __int8)v9[v10 + ~(v12 >> 3)] >> (v12 & 7)) & 1;
      v16 = *(_DWORD *)(v14 + 16 * v11);
      v11 = *(unsigned __int16 *)(v14 + 16 * v11 + 2 * v15 + 4);
      v13 = (int *)(v14 + 16 * v11);
      v12 = *v13;
    }
    while ( v16 < *v13 );
  }
  v17 = (unsigned __int16 *)v13[2];
  v18 = *v17;
  v19 = v18;
  if ( v10 < v18 )
    v19 = v10;
  if ( !v19 )
  {
    if ( v10 < v18 )
    {
LABEL_23:
      *a1 = -1;
      return -1;
    }
    goto LABEL_19;
  }
  v20 = memcmp(v17 + 1, v9, v19);
  v21 = v20;
  if ( !v20 )
    v21 = 1;
  if ( v10 >= v18 && !v20 )
  {
LABEL_19:
    v21 = 0;
    if ( v18 < v10 )
      v21 = -1;
  }
  if ( v21 )
    goto LABEL_23;
  v22 = (char *)v13 - v8 - 24;
  if ( v22 == (char *)-16 )
    goto LABEL_23;
  v24 = FIELD_U32(a3, 8);
  v26 = *(_DWORD *)&v22[v24];
  v25 = &v22[v24];
  v27 = *((_DWORD *)v25 + 1);
  v28 = *((_DWORD *)v25 + 2);
  sub_6091B420(a1, 0, v26);
  sub_6091B420(a1, 2, v27);
  return sub_6091B420(a1, 1, v28);
}
