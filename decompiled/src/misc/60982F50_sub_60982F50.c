/* sub_60982F50
 * address: 0x60982F50   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60982F50(int a1, _BYTE *a2, _BYTE *a3, _DWORD *a4)
{
  unsigned int v5; // r4
  int v9; // r7
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r5
  _DWORD *v14; // r6
  int v15; // r2
  int v16; // r2
  unsigned int v17; // r0
  unsigned int v19; // [sp+8h] [bp-8h] BYREF
  int v20; // [sp+Ch] [bp-4h]
  const char *v21[3]; // [sp+10h] [bp+0h] BYREF
  char v22; // [sp+1Ch] [bp+Ch] BYREF

  v5 = 0;
  v9 = a1 + 20;
  v21[0] = &v22;
  v21[1] = 0;
  v21[2] = (const char *)256;
  v22 = 0;
  v10 = FIELD_U32(a1, 24);
  if ( v10 == v9 )
    goto LABEL_5;
  v11 = 1;
  v12 = v10;
  do
  {
    v12 = FIELD_U32(v12, 4);
    --v11;
  }
  while ( v12 != v9 );
  if ( v11 )
  {
LABEL_5:
    sub_608FDFB8((int)v21, "blyt/", 5);
    sub_608FE058((int *)v21, a2, -1);
    sub_608FE058((int *)v21, ".bflyt", 6);
    v13 = FIELD_U32(a1, 24);
    if ( v13 == v9 )
      return v5;
    while ( 1 )
    {
      v14 = (_DWORD *)(v13 + 8);
      v19 = 0;
      v20 = 0;
      v15 = sub_60864C50((_DWORD *)(v13 + 8), v21[0]);
      if ( v15 >= 0 )
      {
        if ( sub_60864BE8((_DWORD *)(v13 + 8), &v19, v15) )
          break;
      }
      v13 = FIELD_U32(v13, 4);
      if ( v13 == v9 )
        return 0;
    }
  }
  else
  {
    v14 = (_DWORD *)(v10 + 8);
  }
  sub_608FDFB8((int)v21, "anim/", 5);
  sub_608FE058((int *)v21, a2, -1);
  sub_608FE058((int *)v21, "_", 1);
  sub_608FE058((int *)v21, a3, -1);
  sub_608FE058((int *)v21, ".bflan", 6);
  v5 = 0;
  v19 = 0;
  v20 = 0;
  v16 = sub_60864C50(v14, v21[0]);
  if ( v16 >= 0 )
  {
    v17 = sub_60864BE8(v14, &v19, v16);
    if ( v17 )
    {
      v5 = v17;
      if ( a4 )
        *a4 = v20;
    }
  }
  return v5;
}
