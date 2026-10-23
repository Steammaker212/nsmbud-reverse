/* SkeletalAnim_init
 * address: 0x604486C8   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SkeletalAnim_init(int this, int modelPtr, int archive, int *unk, int heap)
{
  char v6; // r7
  int v7; // r0
  int v8; // r1
  int v9; // r1
  int v10; // r6
  int v11; // r2
  int v12; // r4
  int v13; // r5
  bool v14; // zf
  int v15; // lr
  int v16; // r12
  int v17; // r4
  int v18; // r5
  int v19; // r4
  int v20; // r3
  int v21; // r2
  unsigned int v22; // r7
  int v23; // r0
  int v25; // [sp+4h] [bp-7Ch] BYREF
  int v26; // [sp+8h] [bp-78h]
  int v27; // [sp+Ch] [bp-74h]
  char v28; // [sp+10h] [bp-70h]
  char v29; // [sp+11h] [bp-6Fh]
  char v30; // [sp+12h] [bp-6Eh]
  char v31; // [sp+13h] [bp-6Dh]
  int v32; // [sp+14h] [bp-6Ch]
  int v33; // [sp+18h] [bp-68h]
  char v34; // [sp+1Ch] [bp-64h]
  char v35; // [sp+1Dh] [bp-63h]
  char v36; // [sp+1Eh] [bp-62h]
  char v37; // [sp+1Fh] [bp-61h]
  char v38; // [sp+20h] [bp-60h]
  char v39; // [sp+21h] [bp-5Fh]
  char v40; // [sp+22h] [bp-5Eh]
  char v41; // [sp+23h] [bp-5Dh]
  int v42; // [sp+24h] [bp-5Ch]
  int v43; // [sp+28h] [bp-58h]
  int v44; // [sp+2Ch] [bp-54h]
  int v45; // [sp+30h] [bp-50h]
  int v46; // [sp+34h] [bp-4Ch]
  int v47; // [sp+38h] [bp-48h]
  int v48; // [sp+3Ch] [bp-44h]
  int v49; // [sp+40h] [bp-40h]
  int v50; // [sp+44h] [bp-3Ch]
  int v51; // [sp+48h] [bp-38h]
  int v52; // [sp+4Ch] [bp-34h]
  int v53; // [sp+50h] [bp-30h]
  int v54; // [sp+54h] [bp-2Ch]
  int v55; // [sp+58h] [bp-28h]
  int v56; // [sp+5Ch] [bp-24h]

  v6 = 1;
  v7 = 0;
  v28 = 1;
  v37 = 0;
  v40 = 0;
  v39 = 0;
  v36 = 0;
  v35 = 0;
  v31 = 0;
  v38 = 0;
  v34 = 0;
  v33 = 0;
  v32 = 0;
  v41 = 0;
  v42 = 8;
  v43 = 0;
  v44 = -1;
  v45 = 0;
  v46 = 8;
  v47 = 0;
  v48 = -1;
  v49 = 0;
  v50 = 8;
  v51 = 0;
  v52 = -1;
  v53 = 0;
  v54 = 8;
  v55 = 0;
  v56 = -1;
  v30 = 0;
  v8 = *(_DWORD *)(FIELD_U32(modelPtr, 40) + 32);
  v25 = FIELD_U16(v8, 76);
  v32 = v8;
  v26 = 0;
  v27 = 0;
  v29 = 1;
  v9 = 0;
  v10 = FIELD_U32(archive, 20);
  v11 = FIELD_U16(v10, 190);
  if ( FIELD_U16(v10, 190) )
  {
    v6 = 1;
    v9 = 0;
    v10 = FIELD_U32(v10, 56) + 72;
    v7 = 0;
    do
    {
      v12 = *(_DWORD *)v10;
      if ( v7 < FIELD_U32(v10, 8) )
        v7 = FIELD_U32(v10, 8);
      v13 = FIELD_U16(v10, 16);
      v10 += 96;
      if ( v9 < v13 )
        v9 = v13;
      --v11;
      v6 |= (v12 & 1) == 0;
    }
    while ( v11 );
    v26 = v9;
    v27 = v7;
    v29 = v6;
  }
  v14 = unk == 0;
  if ( unk )
  {
    v10 = *unk;
    v14 = *unk == 0;
  }
  if ( !v14 )
  {
    v15 = unk[2];
    v16 = v15 + 4 * v10;
    do
    {
      v17 = *(_DWORD *)(*(_DWORD *)v15 + 20);
      v18 = FIELD_U16(v17, 190);
      if ( FIELD_U16(v17, 190) )
      {
        v19 = FIELD_U32(v17, 56) + 72;
        do
        {
          v20 = *(_DWORD *)v19;
          if ( v7 < FIELD_U32(v19, 8) )
            v7 = FIELD_U32(v19, 8);
          v21 = FIELD_U16(v19, 16);
          v19 += 96;
          if ( v9 < v21 )
            v9 = v21;
          --v18;
          v6 |= (v20 & 1) == 0;
        }
        while ( v18 );
        v26 = v9;
        v27 = v7;
        v29 = v6;
      }
      v15 += 4;
    }
    while ( v15 != v16 );
  }
  SkeletalAnim_init_helper(&v25);
  v22 = (v33 + 15) & 0xFFFFFFF0;
  v23 = operator_new_8DE2C8(v22, heap, 16);
  FIELD_U32(this, 124) = v23;
  return SkeletalAnim_init_helper_877EB0((_DWORD *)(this + 0x20), &v25, v23, v22);
}
