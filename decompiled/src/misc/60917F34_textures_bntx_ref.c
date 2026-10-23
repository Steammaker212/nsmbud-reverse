/* textures_bntx_ref
 * address: 0x60917F34   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall textures_bntx_ref(int a1)
{
  int v2; // r9
  int v3; // r0
  int *v4; // r6
  int v5; // r7
  int v6; // r5
  int v7; // r6
  int v8; // r4
  unsigned __int16 *v9; // r0
  unsigned int v10; // r7
  size_t v11; // r2
  int v12; // r0
  int v13; // r1
  int v15; // r0
  _DWORD *v16; // r0

  v2 = FIELD_U32(a1, 160);
  if ( !v2 )
    return 0;
  v3 = FIELD_U16(v2, 12);
  v4 = (int *)(v2 + 8 + 16 * v3);
  v5 = *v4;
  if ( FIELD_U32(v2, 8) < *v4 )
  {
    v6 = v2 + 8;
    do
    {
      v7 = 0;
      if ( (unsigned int)(v5 >> 3) <= 0xC )
        v7 = ((unsigned __int8)aTexturesBntx[12 - (v5 >> 3)] >> (v5 & 7)) & 1;
      v8 = *(_DWORD *)(v6 + 16 * v3);
      v3 = *(unsigned __int16 *)(v6 + 16 * v3 + 2 * v7 + 4);
      v4 = (int *)(v6 + 16 * v3);
      v5 = *v4;
    }
    while ( v8 < *v4 );
  }
  v9 = (unsigned __int16 *)v4[2];
  v10 = *v9;
  v11 = v10;
  if ( v10 >= 0xD )
    v11 = 13;
  if ( !v11 )
  {
    if ( v10 > 0xD )
      return 0;
    goto LABEL_16;
  }
  v12 = memcmp(v9 + 1, "textures.bntx", v11);
  v13 = v12;
  if ( !v12 )
    v13 = 1;
  if ( v10 <= 0xD && !v12 )
  {
LABEL_16:
    v13 = 0;
    if ( v10 < 0xD )
      v13 = -1;
  }
  if ( v13 )
    return 0;
  v15 = (int)v4 - v2 - 24;
  if ( v15 >> 4 == -1 )
    return 0;
  v16 = (_DWORD *)(FIELD_U32(a1, 152) + 16 * (v15 >> 4));
  if ( !v16 )
    return 0;
  return sub_60998E80(*v16);
}
