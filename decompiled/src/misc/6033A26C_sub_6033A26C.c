/* sub_6033A26C
 * address: 0x6033A26C   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6033A26C(__int64 a1)
{
  int v1; // r4
  _BYTE *v2; // r6
  _DWORD *v3; // r0
  int v4; // r2
  unsigned int v5; // r3
  unsigned int v6; // r0
  _BYTE *v7; // r5
  _DWORD *v8; // r0
  int v9; // r7
  int *v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r0
  int v13; // r0
  int v14; // r1
  int *v15; // r6
  int v16; // r1
  unsigned int v17; // r0
  int *v18; // r1
  unsigned int v19; // r0
  int v20; // r0
  int v21; // r1
  unsigned int v22; // r0
  int v23; // r4
  int v24; // t1
  int v25; // r1
  _DWORD *v26; // r0
  int v27; // r7
  int *v28; // r1
  unsigned int v29; // r2
  unsigned int v30; // r0
  int v31; // r0
  int v32; // r1
  int *v33; // r9
  int v34; // r1
  unsigned int v35; // r0
  int *v36; // r1
  unsigned int v37; // r0
  int v38; // r0
  int v39; // r1
  unsigned int v40; // r0
  int v41; // r4
  int v42; // t1
  int v43; // r1
  int (**v45)(); // [sp+4h] [bp-2Ch] BYREF
  const char *v46; // [sp+8h] [bp-28h]

  v1 = a1;
  v2 = (_BYTE *)(a1 + 6840);
  if ( FIELD_U8(a1, 6840) )
  {
    v3 = *(_DWORD **)(a1 + 6304);
    v4 = v3[3];
    v5 = v3[2];
    v6 = v3[17];
    if ( v5 > v6 )
      v4 += 4 * v6;
    if ( (*(_BYTE *)(*(_DWORD *)v4 + 28) & 0x30) != 0 )
    {
      LODWORD(a1) = 0;
      *v2 = 0;
      FIELD_U8(v1, 6837) = 0;
    }
    else
    {
      LODWORD(a1) = 1;
    }
  }
  else
  {
    LODWORD(a1) = 0;
  }
  v7 = (_BYTE *)(v1 + 6837);
  if ( FIELD_U8(v1, 6837) != HIDWORD(a1) )
  {
    if ( HIDWORD(a1) == 2 )
    {
      sub_6040EB10(v1 + 6312);
      v27 = v1 + 6304;
      v26 = *(_DWORD **)(v1 + 6304);
      v28 = (int *)v26[3];
      v29 = v26[2];
      v30 = v26[17];
      if ( v29 > v30 )
        v28 += v30;
      v31 = *v28;
      v33 = (int *)(v1 + 6300);
      v32 = FIELD_U32(v1, 6300);
      v45 = &sead__SafeStringBase__vtable;
      v46 = "walk1";
      SkeletalAnim_play(v31, v32, (int)&v45);
      v34 = *(_DWORD *)(*(_DWORD *)v27 + 12);
      v35 = *(_DWORD *)(*(_DWORD *)v27 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v27 + 8) > v35 )
        v34 += 4 * v35;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v34 + 4), 0);
      v36 = *(int **)(*(_DWORD *)v27 + 12);
      v37 = *(_DWORD *)(*(_DWORD *)v27 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v27 + 8) > v37 )
        v36 += v37;
      v38 = *v36;
      FIELD_U32(v38, 20) = 0;
      FIELD_U32(v38, 28) |= 2u;
      v39 = *(_DWORD *)(*(_DWORD *)v27 + 12);
      v40 = *(_DWORD *)(*(_DWORD *)v27 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v27 + 8) > v40 )
        v39 += 4 * v40;
      *(_DWORD *)(*(_DWORD *)v39 + 24) = 0x40000000;
      FIELD_U32(v1, 6684) = 0x40000000;
      v42 = FIELD_U32(v1, 6308);
      v41 = v1 + 6308;
      v43 = *v33;
      v45 = &sead__SafeStringBase__vtable;
      v46 = "walk1";
      TexAnim_play(v42, v43, &v45);
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v41 + 4), 0);
      LODWORD(a1) = *(_DWORD *)v41;
      FIELD_U32(a1, 20) = 0;
      FIELD_U32(a1, 28) |= 2u;
      *(_DWORD *)(*(_DWORD *)v41 + 24) = 0x40000000;
      *v7 = 2;
      *v2 = 1;
      LODWORD(a1) = 1;
    }
    else if ( a1 == 0x100000000LL )
    {
      sub_6040EB10(v1 + 6312);
      v9 = v1 + 6304;
      v8 = *(_DWORD **)(v1 + 6304);
      v10 = (int *)v8[3];
      v11 = v8[2];
      v12 = v8[17];
      if ( v11 > v12 )
        v10 += v12;
      v13 = *v10;
      v15 = (int *)(v1 + 6300);
      v14 = FIELD_U32(v1, 6300);
      v45 = &sead__SafeStringBase__vtable;
      v46 = "walk0";
      SkeletalAnim_play(v13, v14, (int)&v45);
      v16 = *(_DWORD *)(*(_DWORD *)v9 + 12);
      v17 = *(_DWORD *)(*(_DWORD *)v9 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v9 + 8) > v17 )
        v16 += 4 * v17;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v16 + 4), 1);
      v18 = *(int **)(*(_DWORD *)v9 + 12);
      v19 = *(_DWORD *)(*(_DWORD *)v9 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v9 + 8) > v19 )
        v18 += v19;
      v20 = *v18;
      FIELD_U32(v20, 20) = 0;
      FIELD_U32(v20, 28) |= 2u;
      v21 = *(_DWORD *)(*(_DWORD *)v9 + 12);
      v22 = *(_DWORD *)(*(_DWORD *)v9 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v9 + 8) > v22 )
        v21 += 4 * v22;
      *(_DWORD *)(*(_DWORD *)v21 + 24) = 0x40000000;
      FIELD_U32(v1, 6684) = 0x40000000;
      v24 = FIELD_U32(v1, 6308);
      v23 = v1 + 6308;
      v25 = *v15;
      v45 = &sead__SafeStringBase__vtable;
      v46 = "walk0";
      TexAnim_play(v24, v25, &v45);
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v23 + 4), 1);
      LODWORD(a1) = *(_DWORD *)v23;
      FIELD_U32(a1, 20) = 0;
      FIELD_U32(a1, 28) |= 2u;
      LODWORD(a1) = *(_DWORD *)v23;
      *(_DWORD *)(*(_DWORD *)v23 + 24) = 0x40000000;
      *v7 = 1;
    }
  }
  return a1;
}
