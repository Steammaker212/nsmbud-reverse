/* sub_601B0B88
 * address: 0x601B0B88   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B0B88(int a1)
{
  signed int v2; // r5
  int v3; // r8
  int v4; // r0
  int v5; // r1
  int v6; // r6
  int v7; // r0
  int v8; // r9
  unsigned int v9; // r7
  int v10; // r0
  int v11; // r5
  int v12; // r0
  int v13; // r1
  _DWORD *v14; // r0
  int result; // r0
  _DWORD v16[2]; // [sp+4h] [bp-2Ch] BYREF
  signed int v17; // [sp+Ch] [bp-24h]

  FIELD_U16(a1, 16) = 0;
  FIELD_U16(a1, 20) = 0;
  FIELD_U16(a1, 24) = 0;
  FIELD_U16(a1, 28) = 0;
  FIELD_U16(a1, 32) = 0;
  v2 = 0;
  v16[0] = 3;
  v16[1] = 0;
  v3 = sub_601A443C(dword_60C89E18, 3, 0);
  v17 = 0;
  if ( FIELD_S32(v3, 28) >= 1 )
  {
    do
    {
      if ( sub_60183038(v3, v2, 0x4000) )
        v17 = v2;
      ++v2;
    }
    while ( v2 < FIELD_U32(v3, 28) );
  }
  v4 = sub_601DFFE4(v16);
  v5 = FIELD_U32(a1, 36);
  if ( v5 < FIELD_U32(a1, 40) )
  {
    *(_DWORD *)(FIELD_U32(a1, 44) + 4 * v5) = v4;
    ++FIELD_U32(a1, 36);
  }
  v6 = sub_60178694(v4, 2u);
  v7 = FIELD_U32(a1, 36);
  if ( v7 < FIELD_U32(a1, 40) )
  {
    *(_DWORD *)(FIELD_U32(a1, 44) + 4 * v7) = v6;
    ++FIELD_U32(a1, 36);
  }
  v8 = 1;
  v9 = 0;
  while ( 1 )
  {
    v10 = sub_60178694(v6, v9);
    v11 = v10;
    if ( v10 )
    {
      if ( !sub_60183038(v3, FIELD_U32(v10, 96), 0x8000) )
        goto LABEL_18;
      v12 = FIELD_U32(a1, 44);
      if ( FIELD_U32(v11, 96) != *(_DWORD *)(*(_DWORD *)(v12 + 4 * v8 - 4) + 96) )
        break;
    }
LABEL_10:
    if ( (int)++v9 >= 6 )
      v9 = 0;
  }
  v13 = FIELD_U32(a1, 36);
  if ( v13 < FIELD_U32(a1, 40) )
  {
    *(_DWORD *)(v12 + 4 * v13) = v11;
    ++FIELD_U32(a1, 36);
  }
  ++v8;
  v6 = v11;
LABEL_18:
  v14 = *(_DWORD **)(a1 + 44);
  if ( FIELD_U32(v6, 96) == *(_DWORD *)(v14[1] + 96) )
    goto LABEL_10;
  result = *(_DWORD *)(*v14 + 96);
  if ( FIELD_U32(v11, 96) != result )
    goto LABEL_10;
  FIELD_U32(a1, 176) = v8;
  return result;
}
