/* sub_601BBC60
 * address: 0x601BBC60   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601BBC60(_DWORD *a1)
{
  _DWORD *v1; // r7
  int v2; // r1
  int v3; // r4
  _DWORD *v4; // r5
  int v5; // r1
  int v6; // r0
  bool v7; // vf
  int v8; // r1
  bool v9; // zf
  int v10; // r0
  bool v11; // zf
  int v12; // r0
  bool v13; // zf
  int v14; // r9
  int v15; // r8
  char *v16; // r0
  int i; // r2
  char *v18; // r0
  int j; // r2
  char *v20; // r0
  int k; // r3
  bool v23; // zf

  v2 = a1[286];
  v3 = 0;
  if ( !v2 )
    return v3;
  v4 = (_DWORD *)a1[283];
  if ( v2 >= 1 )
  {
    v5 = a1[284];
    v6 = a1[285];
    v7 = __OFSUB__(v6, v5);
    v8 = v6 - v5;
    if ( v8 < 0 != v7 )
      v8 = v6;
    v4 += 15 * v8;
  }
  v9 = *v4 == -1;
  if ( *v4 != -1 )
    v9 = v4[1] == -1;
  if ( v9 )
    return v3;
  v10 = v4[2];
  v11 = v10 == -1;
  if ( v10 != -1 )
  {
    v1 = v4 + 3;
    v11 = v4[3] == -1;
  }
  if ( v11 )
    return v3;
  v12 = v4[4];
  v13 = v12 == -1;
  if ( v12 != -1 )
    v13 = v4[5] == -1;
  if ( v13 )
    return v3;
  v14 = sub_601DFFE4(v4);
  v15 = sub_601E0070(v4, v1);
  (*(void (__fastcall **)(int))(FIELD_U32(v14, 4) + 12))(v14 + 4);
  (*(void (__fastcall **)(int))(FIELD_U32(v14, 4) + 12))(v14 + 4);
  v16 = *(char **)(v14 + 8);
  if ( v16 == "W403" )
  {
LABEL_21:
    if ( (unsigned int)(v15 - 3) < 2 )
      return 1;
  }
  else
  {
    for ( i = 0; i < 524289; ++i )
    {
      if ( v16[i] != aW403[i] )
        break;
      if ( !v16[i] )
        goto LABEL_21;
    }
  }
  (*(void (__fastcall **)(int))(FIELD_U32(v14, 4) + 12))(v14 + 4);
  (*(void (__fastcall **)(int))(FIELD_U32(v14, 4) + 12))(v14 + 4);
  v18 = *(char **)(v14 + 8);
  if ( v18 == "W405" )
  {
LABEL_28:
    if ( v15 != 4 )
      goto LABEL_29;
    return 1;
  }
  for ( j = 0; j < 524289; ++j )
  {
    if ( v18[j] != aW405[j] )
      break;
    if ( !v18[j] )
      goto LABEL_28;
  }
LABEL_29:
  (*(void (__fastcall **)(int))(FIELD_U32(v14, 4) + 12))(v14 + 4);
  (*(void (__fastcall **)(int))(FIELD_U32(v14, 4) + 12))(v14 + 4);
  v20 = *(char **)(v14 + 8);
  if ( v20 == "W4G0" )
  {
LABEL_35:
    v23 = v15 == 5;
    if ( v15 != 5 )
      v23 = v15 == 2;
    if ( !v23 )
      return v3;
    return 1;
  }
  for ( k = 0; k < 524289; ++k )
  {
    if ( v20[k] != aW4g0[k] )
      break;
    if ( !v20[k] )
      goto LABEL_35;
  }
  return 0;
}
