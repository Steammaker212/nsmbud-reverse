/* sub_6085BA78
 * address: 0x6085BA78   size: 948   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085BA78(int a1, _DWORD *a2, nn__util__BinaryFileHeader *a3, int a4, _DWORD *a5, int a6)
{
  nn__util__BinaryFileHeader *v10; // r0
  int FirstBlock; // r8
  int v12; // r0
  bool v13; // zf
  _DWORD *v14; // r2
  int v15; // r3
  int v16; // r4
  int v17; // r2
  _BYTE *v18; // r0
  int v19; // r2
  _BYTE *v20; // r0
  int v21; // r4
  int v22; // r6
  int v23; // r2
  _BYTE *v24; // r0
  int v25; // r6
  _DWORD *v26; // r0
  _DWORD *v27; // r4
  int v28; // r7
  int v29; // r6
  int v30; // r7
  int v31; // r10
  int v32; // r11
  int v33; // r9
  int v34; // r4
  _DWORD *v36; // [sp+4h] [bp-44h]
  int v37; // [sp+8h] [bp-40h]

  v10 = sub_6083D5D4(a3);
  *(_DWORD *)a1 = v10;
  FirstBlock = nn__util__BinaryFileHeader__GetFirstBlock(v10);
  v12 = FIELD_U32(FirstBlock, 40);
  v13 = v12 == 0;
  if ( v12 )
  {
    v12 = FIELD_U32(v12, 32);
    v13 = v12 == 0;
  }
  if ( v13 || FIELD_U8(v12, 272) != 1 )
  {
    v14 = a5;
    if ( a5 )
    {
      v15 = a6 - (_DWORD)a3 + FirstBlock;
    }
    else
    {
      v14 = 0;
      v15 = 0;
    }
    sub_6083B088(FirstBlock, a2, v14, v15);
  }
  v16 = FIELD_U32(FirstBlock, 32);
  v17 = *(_DWORD *)(v16 + dword_60BF9D80[0]);
  FIELD_U32(a1, 4) = 0;
  if ( !v17 || (v18 = *(_BYTE **)(v17 + 104), !*v18) && sub_6083B4F8((int)v18, a2, v17) )
  {
    v19 = *(_DWORD *)(v16 + dword_60BF9D88);
    FIELD_U32(a1, 4) = 2;
    if ( v19 )
    {
      v20 = *(_BYTE **)(v19 + 104);
      if ( *v20 )
        goto LABEL_17;
    }
    else
    {
      v20 = (_BYTE *)IMAGE32(0x68);
    }
    sub_6083B4F8((int)v20, a2, v19);
  }
LABEL_17:
  v21 = *(_DWORD *)(nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)a1) + 28);
  if ( v21 >= 2 )
  {
    v22 = 1;
    while ( 1 )
    {
      v23 = *(_DWORD *)(FIELD_U32(FirstBlock, 32) + dword_60BF9D80[FIELD_U32(a1, 4)] + (v22 << 6));
      if ( !v23 )
        break;
      v24 = *(_BYTE **)(v23 + 104);
      if ( !*v24 )
        goto LABEL_23;
LABEL_24:
      if ( v21 == ++v22 )
        goto LABEL_25;
    }
    v24 = (_BYTE *)IMAGE32(0x68);
LABEL_23:
    sub_6083B4F8((int)v24, a2, v23);
    goto LABEL_24;
  }
LABEL_25:
  v25 = *(_DWORD *)(nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)a1) + 28);
  v26 = (_DWORD *)sub_60855BC8(32 * v25);
  v27 = v26;
  v37 = a4;
  v36 = a2;
  if ( v26 )
  {
    if ( v25 >= 1 )
    {
      v28 = v25;
      do
      {
        v26 = sub_6083C9C8(v26) + 8;
        --v28;
      }
      while ( v28 );
    }
  }
  else
  {
    v27 = 0;
  }
  FIELD_U32(a1, 8) = v27;
  FIELD_U32(a1, 12) = sub_60855BC8(4 * v25);
  FIELD_U32(a1, 16) = sub_60855BC8(4 * v25);
  FIELD_U32(a1, 20) = sub_60855BC8(4 * v25);
  FIELD_U32(a1, 24) = sub_60855BC8(12 * v25);
  v29 = *(_DWORD *)(nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)a1) + 28);
  if ( v29 >= 1 )
  {
    v30 = 0;
    do
    {
      v31 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)a1)
                                              + 32)
                                  + dword_60BF9D80[FIELD_U32(a1, 4)]
                                  + 16 * v30)
                      + 104);
      v32 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)a1)
                                              + 32)
                                  + dword_60BF9D80[FIELD_U32(a1, 4)]
                                  + 16 * v30)
                      + 104);
      v33 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)a1)
                                              + 32)
                                  + dword_60BF9D80[FIELD_U32(a1, 4)]
                                  + 16 * v30)
                      + 104);
      *(_DWORD *)(FIELD_U32(a1, 12) + v30) = sub_6083BDB8(v31, 0, 3, "uConstantBufferForVertexShader");
      *(_DWORD *)(FIELD_U32(a1, 16) + v30) = sub_6083BDB8(v32, 3, 3, "uConstantBufferForGeometryShader");
      *(_DWORD *)(FIELD_U32(a1, 20) + v30) = sub_6083BDB8(v33, 4, 3, "uConstantBufferForPixelShader");
      v34 = 3 * v30;
      *(_DWORD *)(FIELD_U32(a1, 24) + 3 * v30) = sub_6083BDB8(v33, 4, 2, "uTexture0");
      *(_DWORD *)(FIELD_U32(a1, 24) + v34 + 4) = sub_6083BDB8(v33, 4, 2, "uTexture1");
      --v29;
      v30 += 4;
      *(_DWORD *)(FIELD_U32(a1, 24) + v34 + 8) = sub_6083BDB8(v33, 4, 2, "uTexture2");
    }
    while ( v29 );
  }
  sub_6085BE54(a1, v36);
  FIELD_U32(a1, 28) = v37;
  return v37;
}
