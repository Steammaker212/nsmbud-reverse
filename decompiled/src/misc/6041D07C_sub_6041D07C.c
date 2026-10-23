/* sub_6041D07C
 * address: 0x6041D07C   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041D07C(int a1)
{
  _WORD *v2; // r5
  int v3; // r8
  int v4; // r11
  int v5; // r9
  int v6; // r0
  int v7; // r3
  int v8; // r4
  int v9; // r6
  int v10; // r7
  int v11; // r3
  int v12; // r4
  int v13; // r6
  int v14; // r7
  int v15; // r3
  int v16; // r4
  int v17; // r6
  int v18; // r7
  __int16 v19; // r2
  unsigned int *v20; // r0
  unsigned int v21; // r1
  unsigned int v22; // r1
  unsigned int v23; // r1
  _WORD *v24; // r4
  int v25; // r8
  _BYTE *v26; // r11
  int v27; // r3
  int v28; // r5
  int v29; // r6
  int v30; // r7
  int v31; // r3
  int v32; // r5
  int v33; // r6
  int v34; // r7
  int v35; // r3
  int v36; // r5
  int v37; // r6
  int v38; // r7
  __int16 v39; // r2
  unsigned int *v40; // r0
  unsigned int v41; // r1
  unsigned int v42; // r1
  unsigned int v43; // r1
  int result; // r0
  int v45; // [sp+0h] [bp-30h]
  int v46; // [sp+8h] [bp-28h]

  v2 = (_WORD *)(a1 + 3916);
  v3 = FIELD_U16(a1, 3916);
  v4 = FIELD_U8(a1, 3918);
  v5 = a1 + 3640;
  v46 = a1 + 2640;
  v6 = a1 + 3640;
  v7 = FIELD_U32(v46, 4);
  v8 = FIELD_U32(v46, 8);
  v9 = FIELD_U32(v46, 12);
  v10 = FIELD_U32(v46, 16);
  *(_DWORD *)v6 = *(_DWORD *)v46;
  FIELD_U32(v6, 4) = v7;
  FIELD_U32(v6, 8) = v8;
  FIELD_U32(v6, 12) = v9;
  FIELD_U32(v6, 16) = v10;
  v6 += 20;
  v11 = FIELD_U32(v46, 24);
  v12 = FIELD_U32(v46, 28);
  v13 = FIELD_U32(v46, 32);
  v14 = FIELD_U32(v46, 36);
  *(_DWORD *)v6 = FIELD_U32(v46, 20);
  FIELD_U32(v6, 4) = v11;
  FIELD_U32(v6, 8) = v12;
  FIELD_U32(v6, 12) = v13;
  FIELD_U32(v6, 16) = v14;
  v6 += 20;
  v15 = FIELD_U32(v46, 44);
  v16 = FIELD_U32(v46, 48);
  v17 = FIELD_U32(v46, 52);
  v18 = FIELD_U32(v46, 56);
  *(_DWORD *)v6 = FIELD_U32(v46, 40);
  FIELD_U32(v6, 4) = v15;
  FIELD_U32(v6, 8) = v16;
  FIELD_U32(v6, 12) = v17;
  FIELD_U32(v6, 16) = v18;
  v6 += 20;
  v19 = FIELD_U16(v46, 60);
  FIELD_U8(v6, 2) = FIELD_U8(v46, 62);
  *(_WORD *)v6 = v19;
  sub_60917754(v2 - 106, v2 - 606);
  *((_DWORD *)v2 - 3) = *((_DWORD *)v2 - 253);
  v20 = (unsigned int *)(v2 - 2);
  do
    v21 = __ldrex(v20);
  while ( __strex(v21 | 4, v20) );
  if ( (unsigned __int16)*v2 != v3 )
  {
    do
      v22 = __ldrex(v20);
    while ( __strex(v22 | 2, v20) );
    *v2 = v3;
  }
  if ( FIELD_U8(a1, 3918) != v4 )
  {
    do
      v23 = __ldrex(v20);
    while ( __strex(v23 | 1, v20) );
    FIELD_U8(a1, 3918) = v4;
  }
  sub_6091AC94(v5);
  v24 = (_WORD *)(a1 + 4260);
  v25 = FIELD_U16(a1, 4260);
  v26 = (_BYTE *)(a1 + 4262);
  v45 = FIELD_U8(a1, 4262);
  v27 = FIELD_U32(a1, 2916);
  v28 = FIELD_U32(a1, 2920);
  v29 = FIELD_U32(a1, 2924);
  v30 = FIELD_U32(a1, 2928);
  FIELD_U32(a1, 3984) = FIELD_U32(a1, 2912);
  FIELD_U32(a1, 3988) = v27;
  FIELD_U32(a1, 3992) = v28;
  FIELD_U32(a1, 3996) = v29;
  FIELD_U32(a1, 4000) = v30;
  v31 = FIELD_U32(a1, 2936);
  v32 = FIELD_U32(a1, 2940);
  v33 = FIELD_U32(a1, 2944);
  v34 = FIELD_U32(a1, 2948);
  FIELD_U32(a1, 4004) = FIELD_U32(a1, 2932);
  FIELD_U32(a1, 4008) = v31;
  FIELD_U32(a1, 4012) = v32;
  FIELD_U32(a1, 4016) = v33;
  FIELD_U32(a1, 4020) = v34;
  v35 = FIELD_U32(a1, 2956);
  v36 = FIELD_U32(a1, 2960);
  v37 = FIELD_U32(a1, 2964);
  v38 = FIELD_U32(a1, 2968);
  FIELD_U32(a1, 4024) = FIELD_U32(a1, 2952);
  FIELD_U32(a1, 4028) = v35;
  FIELD_U32(a1, 4032) = v36;
  FIELD_U32(a1, 4036) = v37;
  FIELD_U32(a1, 4040) = v38;
  v39 = FIELD_U16(a1, 2972);
  FIELD_U8(a1, 4046) = FIELD_U8(a1, 2974);
  FIELD_U16(a1, 4044) = v39;
  sub_60917754(a1 + 4048, a1 + 2976);
  FIELD_U32(a1, 4248) = FIELD_U32(a1, 3176);
  v40 = (unsigned int *)(a1 + 4256);
  do
    v41 = __ldrex(v40);
  while ( __strex(v41 | 4, v40) );
  if ( (unsigned __int16)*v24 != v25 )
  {
    do
      v42 = __ldrex(v40);
    while ( __strex(v42 | 2, v40) );
    *v24 = v25;
  }
  if ( (unsigned __int8)*v26 != v45 )
  {
    do
      v43 = __ldrex(v40);
    while ( __strex(v43 | 1, v40) );
    *v26 = v45;
  }
  sub_6091ACB0(a1 + 3984);
  FIELD_U32(a1, 4356) = v5;
  FIELD_U32(a1, 4388) = a1 + 3984;
  sub_60919F98(a1 + 4328, 0);
  result = dword_60C9BAF4;
  FIELD_U32(dword_60C9BAF4, 3108) = v46;
  return result;
}
