/* sub_6085C0E0
 * address: 0x6085C0E0   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085C0E0(int a1, int a2, int a3)
{
  int v5; // r6
  int v6; // r5
  int v7; // r7
  int v8; // r7
  int v9; // r0
  _BYTE *v10; // r0
  int FirstBlock; // r0
  int v12; // r1
  bool v13; // zf
  int v14; // r5
  int v15; // r0
  int v16; // r6
  int v17; // r0

  v5 = *(_DWORD *)(nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)a1) + 28);
  if ( v5 >= 1 )
  {
    v6 = 0;
    if ( a3 )
    {
      do
      {
        v7 = sub_6083CA00(FIELD_U32(a1, 8) + v6);
        sub_6083CD6C((_BYTE *)(FIELD_U32(a1, 8) + v6));
        sub_60855BF0(v7);
        v6 += 32;
        --v5;
      }
      while ( v5 );
    }
    else
    {
      do
      {
        v8 = sub_6083CA00(FIELD_U32(a1, 8) + v6);
        sub_6083CD6C((_BYTE *)(FIELD_U32(a1, 8) + v6));
        sub_60855BF0(v8);
        v9 = *(_DWORD *)(*(_DWORD *)(nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)a1) + 32)
                       + dword_60BF9D80[FIELD_U32(a1, 4)]
                       + 2 * v6);
        if ( v9 )
        {
          v10 = *(_BYTE **)(v9 + 104);
          if ( *v10 )
            sub_6083BD18((int)v10);
        }
        v6 += 32;
        --v5;
      }
      while ( v5 );
    }
  }
  if ( !a3 )
  {
    FirstBlock = nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)a1);
    v12 = FIELD_U32(FirstBlock, 40);
    v13 = v12 == 0;
    if ( v12 )
    {
      v12 = FIELD_U32(v12, 32);
      v13 = v12 == 0;
    }
    if ( !v13 && FIELD_U8(v12, 272) == 1 )
      sub_6083B278(FirstBlock);
  }
  v14 = FIELD_U32(a1, 8);
  v15 = nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)a1);
  if ( v14 )
  {
    v16 = FIELD_U32(v15, 28);
    if ( v16 >= 1 )
    {
      do
      {
        nullsub_1342();
        --v16;
      }
      while ( v16 );
    }
    sub_60855BF0(v14);
  }
  sub_60855BF0(FIELD_U32(a1, 12));
  v17 = FIELD_U32(a1, 16);
  if ( v17 )
    sub_60855BF0(v17);
  sub_60855BF0(FIELD_U32(a1, 20));
  return sub_60855BF0(FIELD_U32(a1, 24));
}
