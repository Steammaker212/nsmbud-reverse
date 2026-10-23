/* sub_608FCA38
 * address: 0x608FCA38   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FCA38(int result, int a2, int a3, int a4)
{
  unsigned int v4; // r1
  char *v5; // r2
  int v6; // r12
  int v7; // r2
  int v8; // r5
  int v9; // r1
  int *v10; // lr
  int v11; // r1
  int v12; // r6
  int v13; // r7
  int *v14; // r7
  int v15; // r4
  unsigned __int8 *v16; // r5
  int v17; // r1
  int v18; // r2
  bool v19; // vf
  int v20; // r1
  int v21; // r1
  int v22; // [sp+0h] [bp-30h]

  v4 = a2 + 6 * a3;
  v5 = (char *)&unk_60B3B9DC;
  if ( v4 < 0x42 )
    v5 = (char *)&unk_60B3B9DC + v4;
  if ( *v5 < 0 )
  {
    v6 = FIELD_U32(a4, 12);
LABEL_12:
    if ( v6 )
    {
      v10 = *(int **)a4;
      v11 = FIELD_U32(a4, 8);
      v12 = v6;
      do
      {
        v13 = FIELD_U32(a4, 4);
        if ( v11 < v13 )
          v13 = 0;
        v14 = &v10[-v13];
        v15 = v14[v11];
        v16 = (unsigned __int8 *)&unk_60B3B9BC;
        if ( (unsigned int)(2 * v15) < 0x20 )
          v16 = (unsigned __int8 *)&unk_60B3B9BC + 2 * v15;
        if ( a2 == *v16 )
        {
          v21 = v14[v11];
          goto LABEL_28;
        }
        ++v11;
        --v12;
      }
      while ( v12 );
      if ( v6 >= 1 )
      {
        v17 = FIELD_U32(a4, 4);
        v18 = FIELD_U32(a4, 8);
        v19 = __OFSUB__(v18, v17);
        v20 = v18 - v17;
        if ( v20 < 0 != v19 )
          v20 = FIELD_U32(a4, 8);
        v10 += v20;
      }
      goto LABEL_25;
    }
LABEL_24:
    v10 = *(int **)a4;
LABEL_25:
    v21 = *v10;
LABEL_28:
    FIELD_U32(result, 16) = v21;
    return result;
  }
  v22 = *v5;
  v6 = FIELD_U32(a4, 12);
  if ( !v6 )
    goto LABEL_24;
  v7 = FIELD_U32(a4, 8);
  v8 = 0;
  while ( 1 )
  {
    v9 = FIELD_U32(a4, 4);
    if ( v7 + v8 < v9 )
      v9 = 0;
    if ( v22 == *(_DWORD *)(*(_DWORD *)a4 + 4 * v7 - 4 * v9 + 4 * v8) )
      break;
    if ( v6 == ++v8 )
      goto LABEL_12;
  }
  FIELD_U32(result, 16) = v22;
  return result;
}
