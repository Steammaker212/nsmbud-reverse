/* sub_607299E8
 * address: 0x607299E8   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607299E8(int a1, int a2, unsigned int a3)
{
  int *v4; // r9
  _BYTE *v5; // r0
  int v6; // r3
  char v7; // r6
  unsigned int v8; // r6
  int v9; // r4
  int v10; // r11
  int v11; // r4
  unsigned int v12; // r4
  int v13; // r6
  int v14; // r5
  _BYTE *v15; // r0
  char v16; // r4
  int v17; // r3
  int v18; // r5
  int v19; // r4
  int v20; // r11
  int v21; // r1
  unsigned int v22; // r6
  int v23; // r2
  int v24; // r5
  int v25; // r6
  int v26; // r0
  _BYTE *v27; // r0
  int v28; // r1
  __int64 v29; // r4
  int v30; // r6
  char v31; // r6
  unsigned int v32; // r6
  __int64 v33; // r0
  unsigned int v35; // [sp+4h] [bp-2Ch]

  v4 = (int *)(a1 + 16);
  if ( a2 )
  {
    v5 = (_BYTE *)(a1 + 32);
    v6 = 0;
    v7 = 0;
    do
    {
      if ( *((_DWORD *)v5 - 2) )
      {
        *((_DWORD *)v5 - 2) = 0;
        *((_DWORD *)v5 - 1) = 0;
        v8 = 1u >> (32 - v6);
        if ( v6 - 32 >= 0 )
          v8 = 1 << (v6 - 32);
        v9 = 1 << v6;
        if ( v6 - 32 >= 0 )
          v9 = 0;
        if ( (*v5 & 1) != 0 )
        {
          v10 = v4[1] | v8;
          v11 = *v4 | v9;
        }
        else
        {
          v10 = v4[1] & ~v8;
          v11 = *v4 & ~v9;
        }
        v7 = 1;
        *v4 = v11;
        v4[1] = v10;
        *v5 = 0;
      }
      ++v6;
      v5 += 12;
    }
    while ( v6 != 64 );
    if ( (v7 & 1) != 0 )
    {
      v12 = a3;
      sub_60816F60(dword_60CC6B68, 8);
      a3 = v12;
    }
    v13 = 0;
    do
    {
      v14 = a1 + v13;
      v13 += 96;
      FIELD_U16(v14, 808) = 0;
      FIELD_U32(v14, 804) = 0;
      FIELD_U32(v14, 800) = 0;
      FIELD_U32(v14, 796) = 0;
      FIELD_U32(v14, 792) = 0;
      FIELD_U16(v14, 832) = 0;
      FIELD_U32(v14, 828) = 0;
      FIELD_U32(v14, 824) = 0;
      FIELD_U32(v14, 820) = 0;
      FIELD_U32(v14, 816) = 0;
      FIELD_U16(v14, 856) = 0;
      FIELD_U32(v14, 852) = 0;
      FIELD_U32(v14, 848) = 0;
      FIELD_U32(v14, 844) = 0;
      FIELD_U32(v14, 840) = 0;
      FIELD_U16(v14, 880) = 0;
      FIELD_U32(v14, 864) = 0;
      FIELD_U32(v14, 868) = 0;
      FIELD_U32(v14, 872) = 0;
      FIELD_U32(v14, 876) = 0;
    }
    while ( v13 != 1536 );
    goto LABEL_35;
  }
  v15 = (_BYTE *)(a1 + 32);
  v16 = 0;
  v17 = 0;
  v35 = a3;
  do
  {
    if ( (*v15 & 0x10) != 0 )
    {
      v18 = v17 - 32;
      v19 = *v4;
      v20 = v4[1];
      v21 = 1 << v17;
      v22 = 1u >> (32 - v17);
      if ( v17 - 32 >= 0 )
        v22 = 1 << v18;
      if ( v18 >= 0 )
        v21 = 0;
      v23 = v19 & v21 | v20 & v22;
      v24 = v20 & ~v22;
      if ( !v23 )
        v24 = v20 | v22;
      v25 = v19 & ~v21;
      if ( !v23 )
        v25 = v19 | v21;
      *v4 = v25;
      v4[1] = v24;
LABEL_31:
      v16 = 1;
      *((_DWORD *)v15 - 2) = 0;
      *v15 = 0;
      *((_DWORD *)v15 - 1) = 0;
      goto LABEL_32;
    }
    if ( (*v15 & 8) != 0 )
      goto LABEL_31;
LABEL_32:
    ++v17;
    v15 += 12;
  }
  while ( v17 != 64 );
  v26 = FIELD_U32(a1, 2332);
  FIELD_U32(a1, 2332) = 0;
  FIELD_U32(a1, 2336) = 0;
  FIELD_U32(a1, 2340) = 0;
  FIELD_U32(a1, 2344) = 0;
  FIELD_U32(a1, 2348) = 0;
  FIELD_U32(a1, 2352) = 0;
  FIELD_U32(a1, 2356) = 0;
  a3 = v35;
  if ( ((v26 & 7) != 0) | v16 & 1 )
  {
    sub_60816F60(dword_60CC6B68, 8);
    a3 = v35;
  }
LABEL_35:
  v27 = (_BYTE *)(a1 + 428);
  v28 = 33;
  do
  {
    HIDWORD(v29) = v28 - 32;
    v30 = 1 << v28;
    if ( v28 - 32 >= 0 )
      v30 = 0;
    LODWORD(v29) = *v4 & ~v30;
    v31 = 32 - v28++;
    v32 = 1u >> v31;
    if ( v29 >= 0 )
      v32 = 1 << SBYTE4(v29);
    HIDWORD(v29) = v4[1] & ~v32;
    *(_QWORD *)v4 = v29;
    *((_DWORD *)v27 - 2) = 0;
    *v27 = 0;
    *((_DWORD *)v27 - 1) = 0;
    v27 += 12;
  }
  while ( v28 != 64 );
  FIELD_U8(a1, 2360) = 0;
  LODWORD(v33) = *(_DWORD *)(Level_getArea(Level_instance, a3) + 8);
  HIDWORD(v33) = FIELD_U32(v33, 4);
  if ( a2 )
  {
    LODWORD(v33) = *(_DWORD *)v33;
  }
  else
  {
    LODWORD(v33) = *v4;
    HIDWORD(v33) |= v4[1];
  }
  *(_QWORD *)v4 = v33;
  return v33;
}
