/* sub_60499498
 * address: 0x60499498   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60499498(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r1
  _DWORD *v5; // r7
  int *v6; // r0
  int v7; // r0
  int *v8; // r0
  int v9; // r0
  int v10; // r5
  int v11; // r1
  int *v12; // r0
  int v13; // r0
  int *v14; // r0
  int v15; // r0
  int v16; // r5
  int v17; // r1
  int *v18; // r0
  int v19; // r0
  int *v20; // r0
  int v21; // r0

  sub_6047F4A0((int *)(a1 + 146876));
  if ( (FIELD_U8(a1, 16) & 1) != 0 )
  {
    FIELD_U8(a1, 56) = 1;
    StateMgr__changeState((StateMgr *)(a1 + 40), &stru_60CA05C0);
  }
  if ( FIELD_U8(a1, 56) )
  {
    FIELD_U32(a1, 60) = 0;
    FIELD_U8(a1, 56) = 0;
  }
  StateMgr__execute((StateMgr *)(a1 + 40));
  v2 = FIELD_U32(a1, 60);
  if ( v2 != 0x7FFFFFFF )
    FIELD_U32(a1, 60) = v2 + 1;
  sub_6050229C(a1 + 3648);
  sub_6050A8A4(a1 + 87952);
  sub_6050B744(a1 + 95168);
  v3 = 0;
  sub_60473B58((_DWORD *)(a1 + 64), FIELD_U32(a1, 146836), 0);
  sub_60499778(a1, FIELD_U32(a1, 146836), FIELD_U32(a1, 146864));
  v4 = 0;
  v5 = (_DWORD *)(a1 + 146840);
  if ( dword_60CD0B40 )
  {
    v6 = *(int **)(dword_60CD0B40 + 36);
    if ( FIELD_U32(dword_60CD0B40, 32) > *v5 )
      v6 += *v5;
    v4 = 0;
    v7 = *v6;
    if ( v7 )
      v4 = FIELD_U32(v7, 72);
  }
  sub_603FF76C(a1 + 128764, v4);
  sub_60402E34(a1 + 128764);
  if ( dword_60CD0B40 )
  {
    v8 = *(int **)(dword_60CD0B40 + 36);
    if ( FIELD_U32(dword_60CD0B40, 32) > *v5 )
      v8 += *v5;
    v9 = *v8;
    if ( v9 )
      v3 = FIELD_U32(v9, 72);
  }
  sub_603FF76C(a1 + 131752, v3);
  sub_60402E34(a1 + 131752);
  v10 = 0;
  v11 = 0;
  if ( dword_60CD0B40 )
  {
    v12 = *(int **)(dword_60CD0B40 + 36);
    if ( FIELD_U32(dword_60CD0B40, 32) > *v5 )
      v12 += *v5;
    v11 = 0;
    v13 = *v12;
    if ( v13 )
      v11 = FIELD_U32(v13, 72);
  }
  sub_603FF76C(a1 + 134740, v11);
  sub_60402E34(a1 + 134740);
  if ( dword_60CD0B40 )
  {
    v14 = *(int **)(dword_60CD0B40 + 36);
    if ( FIELD_U32(dword_60CD0B40, 32) > *v5 )
      v14 += *v5;
    v15 = *v14;
    if ( v15 )
      v10 = FIELD_U32(v15, 72);
  }
  sub_603FF76C(a1 + 137728, v10);
  sub_60402E34(a1 + 137728);
  v16 = 0;
  v17 = 0;
  if ( dword_60CD0B40 )
  {
    v18 = *(int **)(dword_60CD0B40 + 36);
    if ( FIELD_U32(dword_60CD0B40, 32) > *v5 )
      v18 += *v5;
    v17 = 0;
    v19 = *v18;
    if ( v19 )
      v17 = FIELD_U32(v19, 72);
  }
  sub_603FF76C(a1 + 140716, v17);
  sub_60402E34(a1 + 140716);
  if ( dword_60CD0B40 )
  {
    v20 = *(int **)(dword_60CD0B40 + 36);
    if ( FIELD_U32(dword_60CD0B40, 32) > *v5 )
      v20 += *v5;
    v21 = *v20;
    if ( v21 )
      v16 = FIELD_U32(v21, 72);
  }
  sub_603FF76C(a1 + 143704, v16);
  sub_60402E34(a1 + 143704);
  FIELD_U32(a1, 16) = 0;
  return 0;
}
