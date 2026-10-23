/* sub_60871AE0
 * address: 0x60871AE0   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60871AE0(int a1, _DWORD *a2, int a3)
{
  __int16 v5; // r0
  int v6; // r8
  bool v7; // zf
  int v8; // r0
  int v9; // r6
  int v10; // r5
  int v11; // r7
  int v12; // r9
  int v13; // r0
  int v14; // r1
  int v15; // r0
  int v16; // r2
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r6
  int FirstBlock; // r7
  int v22; // r5
  int v23; // r7
  int v24; // r6
  int v25; // r0
  int v26; // r1
  int v27; // r0
  int v28; // r2
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int result; // r0

  FIELD_U32(a1, 40) = sub_60871D44;
  v5 = FIELD_U16(a1, 66);
  v6 = FIELD_U16(a1, 64);
  v7 = (v5 & 2) == 0;
  if ( (v5 & 2) != 0 )
    v7 = v6 == 0;
  if ( v7 || (v5 & 8) != 0 )
  {
    if ( !FIELD_U16(a1, 64) )
      goto LABEL_28;
  }
  else
  {
    v20 = FIELD_U32(a1, 16);
    if ( FIELD_U16(v20, 216) )
    {
      FirstBlock = nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)(v20 + 152));
      sub_6083B088(FirstBlock, a2, 0, 0);
      v22 = sub_60870F24(FIELD_U32(v20, 120), a2);
      sub_6083B278(FirstBlock);
      if ( v22 == 1 )
        FIELD_U16(a1, 66) |= 8u;
    }
  }
  v8 = a3;
  if ( a3 )
  {
    v9 = 0;
    do
    {
      v10 = FIELD_U32(a1, 16);
      v11 = v8;
      nn__os__InitializeMutex(v8, 0, 0);
      v12 = v10 + 232 * v9;
      v13 = nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)(v12 + 152));
      sub_6083B088(v13, a2, 0, 0);
      v14 = FIELD_U16(v12, 216);
      if ( FIELD_U16(v12, 216) )
      {
        v15 = v12 + 120;
        v16 = 0;
        if ( (v14 & 1) != 0 )
        {
          *(_WORD *)(*(_DWORD *)v15 + 44) |= 1u;
          v16 = 1;
        }
        if ( v14 != 1 )
        {
          v17 = v14 - v16;
          v18 = 56 * v16;
          do
          {
            v17 -= 2;
            *(_WORD *)(*(_DWORD *)v15 + v18 + 44) |= 1u;
            v19 = *(_DWORD *)v15 + v18;
            v18 += 112;
            FIELD_U16(v19, 100) |= 1u;
          }
          while ( v17 );
        }
      }
      ++v9;
      v8 = v11 + 20;
      FIELD_U32(v12, 160) = v11;
    }
    while ( v9 != v6 );
  }
  else
  {
    v23 = 0;
    do
    {
      v24 = FIELD_U32(a1, 16) + 232 * v23;
      v25 = nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)(v24 + 152));
      sub_6083B088(v25, a2, 0, 0);
      v26 = FIELD_U16(v24, 216);
      if ( FIELD_U16(v24, 216) )
      {
        v27 = v24 + 120;
        v28 = 0;
        if ( (v26 & 1) != 0 )
        {
          *(_WORD *)(*(_DWORD *)v27 + 44) |= 1u;
          v28 = 1;
        }
        if ( v26 != 1 )
        {
          v29 = v26 - v28;
          v30 = 56 * v28;
          do
          {
            v29 -= 2;
            *(_WORD *)(*(_DWORD *)v27 + v30 + 44) |= 1u;
            v31 = *(_DWORD *)v27 + v30;
            v30 += 112;
            FIELD_U16(v31, 100) |= 1u;
          }
          while ( v29 );
        }
      }
      ++v23;
      FIELD_U32(v24, 160) = 0;
    }
    while ( v23 != v6 );
  }
LABEL_28:
  FIELD_U32(a1, 48) = a3;
  result = FIELD_U16(a1, 66) | 0x80;
  FIELD_U16(a1, 66) = result;
  return result;
}
