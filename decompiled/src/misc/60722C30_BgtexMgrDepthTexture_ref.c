/* BgtexMgrDepthTexture_ref
 * address: 0x60722C30   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BgtexMgrDepthTexture_ref(int a1, int a2)
{
  int v3; // r6
  int v4; // r7
  unsigned int v5; // r5
  int v6; // r0
  int v7; // r1
  int v8; // r9
  _WORD *v9; // r5
  int v10; // r10
  int v11; // r3
  int v12; // r4
  int v13; // r6
  int v14; // r7
  int v15; // r3
  int v16; // r4
  int v17; // r6
  int v18; // r7
  int v19; // r3
  int v20; // r4
  int v21; // r6
  int v22; // r7
  __int16 v23; // r2
  unsigned int *v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r1
  unsigned int v27; // r1
  int v28; // r0
  int v30; // [sp+1Ch] [bp-44h]
  _DWORD v32[15]; // [sp+24h] [bp-3Ch] BYREF

  v3 = FIELD_U32(a2, 40);
  v4 = dword_60CD09F8;
  v32[0] = &sead__SafeStringBase__vtable;
  v32[1] = "BgtexMgrDepthTexture";
  v5 = FIELD_U16(a1, 48);
  v6 = sub_609200A0(a1 + 24);
  v7 = FIELD_U16(a1, 50);
  if ( v5 <= 1 )
    v5 = 1;
  if ( v6 > v7 )
    v7 = v6;
  v8 = sub_6093E338(v4, v3, v32, 59, v5, v7, 1, 0, 0, 1, 0);
  FIELD_U32(a1, 2552) = v8;
  v9 = (_WORD *)(a1 + 2836);
  v10 = FIELD_U16(a1, 2836);
  v30 = FIELD_U8(a1, 2838);
  v11 = FIELD_U32(v8, 4);
  v12 = FIELD_U32(v8, 8);
  v13 = FIELD_U32(v8, 12);
  v14 = FIELD_U32(v8, 16);
  FIELD_U32(a1, 2560) = *(_DWORD *)v8;
  FIELD_U32(a1, 2564) = v11;
  FIELD_U32(a1, 2568) = v12;
  FIELD_U32(a1, 2572) = v13;
  FIELD_U32(a1, 2576) = v14;
  v15 = FIELD_U32(v8, 24);
  v16 = FIELD_U32(v8, 28);
  v17 = FIELD_U32(v8, 32);
  v18 = FIELD_U32(v8, 36);
  FIELD_U32(a1, 2580) = FIELD_U32(v8, 20);
  FIELD_U32(a1, 2584) = v15;
  FIELD_U32(a1, 2588) = v16;
  FIELD_U32(a1, 2592) = v17;
  FIELD_U32(a1, 2596) = v18;
  v19 = FIELD_U32(v8, 44);
  v20 = FIELD_U32(v8, 48);
  v21 = FIELD_U32(v8, 52);
  v22 = FIELD_U32(v8, 56);
  FIELD_U32(a1, 2600) = FIELD_U32(v8, 40);
  FIELD_U32(a1, 2604) = v19;
  FIELD_U32(a1, 2608) = v20;
  FIELD_U32(a1, 2612) = v21;
  FIELD_U32(a1, 2616) = v22;
  v23 = FIELD_U16(v8, 60);
  FIELD_U8(a1, 2622) = FIELD_U8(v8, 62);
  FIELD_U16(a1, 2620) = v23;
  sub_60917754(a1 + 2624, v8 + 64);
  FIELD_U32(a1, 2824) = FIELD_U32(v8, 264);
  v24 = (unsigned int *)(a1 + 2832);
  do
    v25 = __ldrex(v24);
  while ( __strex(v25 | 4, v24) );
  if ( (unsigned __int16)*v9 != v10 )
  {
    do
      v26 = __ldrex(v24);
    while ( __strex(v26 | 2, v24) );
    *v9 = v10;
  }
  if ( FIELD_U8(a1, 2838) != v30 )
  {
    do
      v27 = __ldrex(v24);
    while ( __strex(v27 | 1, v24) );
    FIELD_U8(a1, 2838) = v30;
  }
  sub_6091ACB0(a1 + 2560);
  FIELD_U32(a1, 2964) = a1 + 2560;
  sub_6090B260(a1 + 2904, FIELD_U32(a2, 40));
  v28 = ((int (__fastcall *)(_DWORD *, int))loc_6090E438)(v32, a1 + 2904);
  sub_6090E560(v28, FIELD_U32(a2, 40), a1 + 2904);
  return sub_60726F28(dword_60CBD894, a2);
}
