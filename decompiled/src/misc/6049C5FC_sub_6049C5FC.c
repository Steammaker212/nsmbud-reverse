/* sub_6049C5FC
 * address: 0x6049C5FC   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6049C5FC(int a1)
{
  _DWORD *v1; // r11
  int v2; // r5
  int i; // r10
  int v4; // r2
  _DWORD *v5; // r1
  unsigned int v6; // r0
  _DWORD *v7; // r4
  int v8; // r3
  int v9; // r0
  int v10; // r3
  _DWORD *j; // r6
  int v12; // r0
  int v13; // r2
  int v14; // r0
  int v15; // r6
  _DWORD *v17; // [sp+4h] [bp-2Ch]

  FIELD_U32(a1, 20288) = 0;
  FIELD_U32(a1, 20284) = 0;
  FIELD_U32(a1, 20280) = 0;
  FIELD_U32(a1, 20276) = 0;
  v17 = (_DWORD *)(a1 + 25056);
  v1 = (_DWORD *)(a1 + 25872);
  v2 = sub_60834614();
  for ( i = 0; i != 4; ++i )
  {
    v4 = 0;
    v5 = (_DWORD *)(v2 + 72 * i);
    v6 = v5[8];
    if ( v6 > 6 )
      goto LABEL_11;
    if ( v6 != 6 )
    {
      v4 = dword_60B02C50[v6];
LABEL_11:
      v10 = 0;
      for ( j = v1; *(j - 747) != v4; j += 1494 )
      {
        v9 = v10 + 1;
        if ( v10 + 1 >= 61 )
          goto LABEL_22;
        if ( *j == v4 )
          goto LABEL_18;
        v10 += 2;
      }
      v9 = v10;
      goto LABEL_18;
    }
    v7 = v17;
    v8 = 0;
    while ( *(v7 - 543) != 8 || *v7 != v5[11] )
    {
      ++v8;
      v7 += 747;
      if ( v8 >= 61 )
        goto LABEL_22;
    }
    v9 = v8;
LABEL_18:
    if ( v9 >= 0 )
    {
      if ( (unsigned int)v9 >= 0x3D )
        v9 = 0;
      v12 = a1 + 2988 * v9;
      v13 = a1 + 4 * i;
      FIELD_U32(v13, 20276) = v12 + 22508;
      FIELD_U32(v12, 25052) = i;
      v14 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(v13, 20276) + 16) + 12);
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v14 + 180))(v14, v5[9]);
    }
LABEL_22:
    ;
  }
  v15 = dword_60C99DEC;
  memset((void *)(a1 + 22332), 0, 56);
  if ( FIELD_U8(v15, 522) )
  {
    if ( FIELD_U8(v15, 36) )
    {
      FIELD_U32(a1, 22332) = FIELD_U32(v15, 56);
      FIELD_U32(a1, 22360) = FIELD_U32(v15, 56);
    }
    if ( FIELD_U8(v15, 108) )
    {
      FIELD_U32(a1, 22336) = FIELD_U32(v15, 128);
      FIELD_U32(a1, 22364) = FIELD_U32(v15, 128);
    }
    if ( FIELD_U8(v15, 180) )
    {
      FIELD_U32(a1, 22340) = FIELD_U32(v15, 200);
      FIELD_U32(a1, 22368) = FIELD_U32(v15, 200);
    }
    if ( FIELD_U8(v15, 252) )
    {
      FIELD_U32(a1, 22344) = FIELD_U32(v15, 272);
      FIELD_U32(a1, 22372) = FIELD_U32(v15, 272);
    }
  }
  sub_60502548(a1 + 3636);
  FIELD_U16(a1, 4688) = 0;
  return sub_6047EABC((_DWORD *)(a1 + 3676));
}
