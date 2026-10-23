/* sub_602276B8
 * address: 0x602276B8   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int **__fastcall sub_602276B8(_DWORD *a1, const char **a2)
{
  int v4; // r4
  int v5; // r10
  const char *v6; // r6
  size_t v7; // r7
  int **v8; // r6
  int v9; // r0
  int v10; // r3
  int *v11; // r5
  int v12; // r2
  int v13; // r5
  int v14; // r4
  unsigned __int16 *v15; // r0
  size_t v16; // r4
  size_t v17; // r2
  int v18; // r0
  int v19; // r1
  int v21; // r0
  int v22; // r0
  bool v23; // zf
  int v24; // r1
  unsigned int v25; // r0
  int v26; // r0
  int v27; // r0
  _DWORD v28[10]; // [sp+0h] [bp-28h] BYREF

  v4 = *(_DWORD *)(LoadResource(ResourceMgrRelated_instance, a1 + 448) + 20);
  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  v5 = FIELD_U32(v4, 48);
  if ( !v5 )
    return 0;
  v6 = a2[1];
  if ( v6 )
    v7 = strlen(a2[1]);
  else
    v7 = 0;
  v9 = FIELD_U16(v5, 12);
  v11 = (int *)(v5 + 8 + 16 * v9);
  v10 = *v11;
  if ( FIELD_U32(v5, 8) < *v11 )
  {
    v12 = v5 + 8;
    do
    {
      v13 = 0;
      if ( v7 > v10 >> 3 )
        v13 = ((unsigned __int8)v6[v7 + ~(v10 >> 3)] >> (v10 & 7)) & 1;
      v14 = *(_DWORD *)(v12 + 16 * v9);
      v9 = *(unsigned __int16 *)(v12 + 16 * v9 + 2 * v13 + 4);
      v11 = (int *)(v12 + 16 * v9);
      v10 = *v11;
    }
    while ( v14 < *v11 );
  }
  v15 = (unsigned __int16 *)v11[2];
  v16 = *v15;
  v17 = v16;
  if ( v7 < v16 )
    v17 = v7;
  if ( !v17 )
  {
    v8 = 0;
    if ( v7 < v16 )
      return v8;
    goto LABEL_20;
  }
  v18 = memcmp(v15 + 1, v6, v17);
  v19 = v18;
  if ( !v18 )
    v19 = 1;
  if ( v7 >= v16 && !v18 )
  {
LABEL_20:
    v19 = 0;
    if ( v16 < v7 )
      v19 = -1;
  }
  v8 = 0;
  if ( v19 || (int)v11 - v5 - 24 < 0 )
    return v8;
  v8 = (int **)operator_new(0x44u);
  v21 = sub_60221178((int)v8, (int)a1, a2);
  sub_6022135C(v21);
  v22 = a1[441];
  v23 = v22 == 4;
  if ( v22 == 4 )
    v23 = a1[442] == 0;
  if ( !v23 )
  {
    v24 = **v8;
LABEL_29:
    v25 = FIELD_U32(v24, 316) | 0x10;
    goto LABEL_30;
  }
  v28[0] = &sead__SafeStringBase__vtable;
  v28[1] = "Fog";
  v27 = sub_6018506C(a2, v28);
  v24 = **v8;
  if ( v27 == -1 )
    goto LABEL_29;
  v25 = FIELD_U32(v24, 316) & 0xFFFFFFEF;
LABEL_30:
  FIELD_U32(v24, 316) = v25;
  v26 = a1[165];
  if ( v26 < a1[166] )
  {
    *(_DWORD *)(a1[167] + 4 * v26) = v8;
    ++a1[165];
  }
  return v8;
}
