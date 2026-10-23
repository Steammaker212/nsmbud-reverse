/* FilterAA_ref
 * address: 0x60416F84   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall FilterAA_ref(int a1, int a2)
{
  int v4; // r9
  int v5; // r5
  unsigned __int16 *v6; // r7
  int v7; // r4
  int v8; // r10
  unsigned int v9; // r6
  int v10; // r0
  int v11; // r1
  int v12; // r10
  _WORD *v13; // r6
  int v14; // r3
  int v15; // r4
  int v16; // r5
  int v17; // r7
  int v18; // r3
  int v19; // r4
  int v20; // r5
  int v21; // r7
  int v22; // r3
  int v23; // r4
  int v24; // r5
  int v25; // r7
  __int16 v26; // r2
  unsigned int *v27; // r0
  unsigned int v28; // r1
  unsigned int v29; // r1
  unsigned int v30; // r1
  int v32; // [sp+20h] [bp-38h]
  int v33; // [sp+24h] [bp-34h]
  _DWORD v34[11]; // [sp+2Ch] [bp-2Ch] BYREF

  v4 = FIELD_U32(a2, 12);
  if ( !FIELD_U32(a1, 4048) )
  {
    v5 = FIELD_U32(a2, 40);
    v6 = *(unsigned __int16 **)(v4 + 28);
    v7 = dword_60CD09F8;
    v34[0] = &sead__SafeStringBase__vtable;
    v34[1] = "FilterAA";
    v8 = v6[30];
    v9 = v6[12];
    v10 = sub_609200A0(v6);
    v11 = v6[13];
    if ( v9 <= 1 )
      v9 = 1;
    if ( v10 > v11 )
      v11 = v10;
    v12 = sub_6093E338(v7, v5, v34, v8, v9, v11, 1, 0, 0, 1, 0);
    FIELD_U32(a1, 4048) = v12;
    v13 = (_WORD *)(a1 + 3636);
    v32 = FIELD_U16(a1, 3636);
    v33 = FIELD_U8(a1, 3638);
    v14 = FIELD_U32(v12, 4);
    v15 = FIELD_U32(v12, 8);
    v16 = FIELD_U32(v12, 12);
    v17 = FIELD_U32(v12, 16);
    FIELD_U32(a1, 3360) = *(_DWORD *)v12;
    FIELD_U32(a1, 3364) = v14;
    FIELD_U32(a1, 3368) = v15;
    FIELD_U32(a1, 3372) = v16;
    FIELD_U32(a1, 3376) = v17;
    v18 = FIELD_U32(v12, 24);
    v19 = FIELD_U32(v12, 28);
    v20 = FIELD_U32(v12, 32);
    v21 = FIELD_U32(v12, 36);
    FIELD_U32(a1, 3380) = FIELD_U32(v12, 20);
    FIELD_U32(a1, 3384) = v18;
    FIELD_U32(a1, 3388) = v19;
    FIELD_U32(a1, 3392) = v20;
    FIELD_U32(a1, 3396) = v21;
    v22 = FIELD_U32(v12, 44);
    v23 = FIELD_U32(v12, 48);
    v24 = FIELD_U32(v12, 52);
    v25 = FIELD_U32(v12, 56);
    FIELD_U32(a1, 3400) = FIELD_U32(v12, 40);
    FIELD_U32(a1, 3404) = v22;
    FIELD_U32(a1, 3408) = v23;
    FIELD_U32(a1, 3412) = v24;
    FIELD_U32(a1, 3416) = v25;
    v26 = FIELD_U16(v12, 60);
    FIELD_U8(a1, 3422) = FIELD_U8(v12, 62);
    FIELD_U16(a1, 3420) = v26;
    sub_60917754(a1 + 3424, v12 + 64);
    FIELD_U32(a1, 3624) = FIELD_U32(v12, 264);
    v27 = (unsigned int *)(a1 + 3632);
    do
      v28 = __ldrex(v27);
    while ( __strex(v28 | 4, v27) );
    if ( (unsigned __int16)*v13 != v32 )
    {
      do
        v29 = __ldrex(v27);
      while ( __strex(v29 | 2, v27) );
      *v13 = v32;
    }
    if ( FIELD_U8(a1, 3638) != v33 )
    {
      do
        v30 = __ldrex(v27);
      while ( __strex(v30 | 1, v27) );
      FIELD_U8(a1, 3638) = v33;
    }
    sub_6091AC94(a1 + 3360);
  }
  FIELD_U32(a1, 4052) = FIELD_U32(v4, 28);
  FIELD_U32(v4, 28) = a1 + 3360;
  return sub_6090B260(v4, FIELD_U32(a2, 40));
}
