/* sub_60531DEC
 * address: 0x60531DEC   size: 1576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60531DEC(int a1)
{
  int v1; // r10
  int v2; // r0
  int v3; // r1
  _DWORD *v4; // r7
  unsigned int v5; // r3
  int v6; // r4
  int v7; // r1
  void (*v8)(void); // r1
  int v9; // r0
  int v10; // r1
  unsigned int v11; // r3
  int v12; // r4
  int v13; // r5
  int v14; // r1
  void (*v15)(void); // r1
  unsigned int v16; // r3
  unsigned int v17; // r0
  float v18; // s16
  int v19; // r0
  unsigned int v20; // r3
  int v21; // r4
  int v22; // r1
  void (*v23)(void); // r1
  unsigned int v24; // r3
  int v25; // r4
  int v26; // r1
  void (*v27)(void); // r1
  unsigned int v28; // r3
  unsigned int v29; // r3
  int v30; // r0
  int i; // r9
  unsigned int v32; // r4
  int v33; // r0
  unsigned int v34; // r3
  int v35; // r11
  int v36; // r10
  int v37; // r1
  void (*v38)(void); // r1
  unsigned int v39; // r3
  int v40; // r4
  int v41; // r1
  void (*v42)(void); // r1
  unsigned int v43; // r3
  int v44; // r0

  v1 = a1;
  v2 = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(FIELD_U32(a1, 52) + 12) + 48))(
         *(_DWORD *)(FIELD_U32(a1, 52) + 12),
         "T_ZankiNum_00",
         1);
  v3 = sub_604749C4(v2);
  v4 = (_DWORD *)(v1 + 36);
  if ( v3 )
    sub_6047DEC8((_DWORD *)(v1 + 36), v3, 1, FIELD_U32(v1, 3980));
  v5 = sub_604746E4(v1 + 36, &dword_60CAAD00, &dword_60CAAC1C);
  if ( v5 != -1 )
    sub_604742D0((_DWORD *)(v1 + 36), 6u, &dword_60CAAD00, v5, 1.0, 0);
  if ( sub_6047482C(v1 + 36, 6u) )
  {
    v6 = FIELD_U32(v1, 3980);
    v7 = *(_DWORD *)sub_6047482C(v1 + 36, 6u);
    if ( v6 < 99 )
      v8 = *(void (**)(void))(v7 + 104);
    else
      v8 = *(void (**)(void))(v7 + 108);
    v8();
  }
  v9 = (*(int (__fastcall **)(_DWORD, const char *, int))(**(_DWORD **)(FIELD_U32(v1, 52) + 12) + 48))(
         *(_DWORD *)(FIELD_U32(v1, 52) + 12),
         "T_GoalNum_00",
         1);
  v10 = sub_604749C4(v9);
  if ( v10 )
    sub_6047DEC8((_DWORD *)(v1 + 36), v10, 1, FIELD_U32(v1, 3984));
  v11 = sub_604746E4(v1 + 36, &dword_60CAAD00, &dword_60CAAC14);
  if ( v11 != -1 )
    sub_604742D0((_DWORD *)(v1 + 36), 5u, &dword_60CAAD00, v11, 1.0, 0);
  if ( sub_6047482C(v1 + 36, 5u) )
  {
    v12 = FIELD_U32(v1, 3984);
    v13 = FIELD_U32(v1, 4004);
    v14 = *(_DWORD *)sub_6047482C(v1 + 36, 5u);
    if ( v12 >= v13 )
      v15 = *(void (**)(void))(v14 + 108);
    else
      v15 = *(void (**)(void))(v14 + 104);
    v15();
  }
  v16 = sub_604746E4(v1 + 36, &dword_60CAACD0, &dword_60CAAC24);
  if ( v16 != -1 )
    sub_604742D0((_DWORD *)(v1 + 36), 7u, &dword_60CAACD0, v16, 1.0, 0);
  if ( sub_6047482C(v1 + 36, 7u) )
  {
    v17 = FIELD_U32(v1, 3996);
    if ( v17 > 5 )
      v18 = 0.0;
    else
      v18 = flt_60B03A10[v17];
    v19 = sub_6047482C(v1 + 36, 7u);
    (*(void (__fastcall **)(int, float))(*(_DWORD *)v19 + 96))(v19, v18);
  }
  v20 = sub_604746E4(v1 + 36, &dword_60CAACA8, &dword_60CAAC74);
  if ( v20 != -1 )
    sub_604742D0((_DWORD *)(v1 + 36), 0x11u, &dword_60CAACA8, v20, 1.0, 0);
  if ( sub_6047482C(v1 + 36, 0x11u) )
  {
    v21 = FIELD_U32(v1, 3992);
    v22 = *(_DWORD *)sub_6047482C(v1 + 36, 0x11u);
    if ( v21 )
      v23 = *(void (**)(void))(v22 + 108);
    else
      v23 = *(void (**)(void))(v22 + 104);
    v23();
  }
  v24 = sub_604746E4(v1 + 36, &dword_60CAACB0, &dword_60CAAC8C);
  if ( v24 != -1 )
    sub_604742D0((_DWORD *)(v1 + 36), 0x14u, &dword_60CAACB0, v24, 1.0, 0);
  v25 = FIELD_U32(v1, 3992);
  v26 = *(_DWORD *)sub_6047482C(v1 + 36, 0x14u);
  if ( v25 == 1 )
    v27 = *(void (**)(void))(v26 + 108);
  else
    v27 = *(void (**)(void))(v26 + 104);
  v27();
  v28 = sub_604746E4(v1 + 36, &dword_60CAACF0, &dword_60CAAC84);
  if ( v28 != -1 )
    sub_604742D0((_DWORD *)(v1 + 36), 0x13u, &dword_60CAACF0, v28, 1.0, 1);
  v29 = sub_604746E4(v1 + 36, &dword_60CAACF8, &dword_60CAABF4);
  if ( v29 != -1 )
    sub_604742D0((_DWORD *)(v1 + 36), 1u, &dword_60CAACF8, v29, 1.0, 0);
  if ( sub_6047482C(v1 + 36, 1u) )
  {
    v30 = sub_6047482C(v1 + 36, 1u);
    (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 104))(v30);
  }
  for ( i = 0; i != 8; ++i )
  {
    v32 = dword_60B039EC[i];
    v33 = 0;
    if ( v32 < 0x15 )
      v33 = dword_60B039EC[i];
    v34 = sub_604746E4((int)v4, &dword_60CAACB8, &dword_60CAABEC[2 * v33]);
    if ( v34 != -1 )
      sub_604742D0(v4, v32, &dword_60CAACB8, v34, 1.0, 0);
    if ( sub_6047482C((int)v4, v32) )
    {
      v35 = v1;
      v36 = FIELD_U8(v1, 3976) & (1 << i);
      v37 = *(_DWORD *)sub_6047482C((int)v4, v32);
      if ( (_BYTE)v36 )
        v38 = *(void (**)(void))(v37 + 108);
      else
        v38 = *(void (**)(void))(v37 + 104);
      v38();
      v1 = v35;
    }
  }
  v39 = sub_604746E4((int)v4, &dword_60CAACC0, &dword_60CAAC7C);
  if ( v39 != -1 )
    sub_604742D0(v4, 0x12u, &dword_60CAACC0, v39, 1.0, 0);
  if ( sub_6047482C((int)v4, 0x12u) )
  {
    v40 = FIELD_U8(v1, 3976);
    v41 = *(_DWORD *)sub_6047482C((int)v4, 0x12u);
    if ( v40 == 255 )
      v42 = *(void (**)(void))(v41 + 108);
    else
      v42 = *(void (**)(void))(v41 + 104);
    v42();
  }
  v43 = sub_604746E4((int)v4, &dword_60CAACC8, &dword_60CAAC2C);
  if ( v43 != -1 )
    sub_604742D0(v4, 8u, &dword_60CAACC8, v43, 1.0, 0);
  v44 = sub_6047482C((int)v4, 8u);
  return (*(int (__fastcall **)(int, float))(*(_DWORD *)v44 + 96))(v44, (float)FIELD_S32(v1, 3988));
}
