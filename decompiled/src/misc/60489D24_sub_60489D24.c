/* sub_60489D24
 * address: 0x60489D24   size: 1108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60489D24(_DWORD *a1)
{
  unsigned int v2; // r6
  _DWORD *v3; // r5
  int v4; // r7
  _DWORD *v5; // r11
  unsigned int v6; // r0
  unsigned int v7; // r0
  int v8; // r7
  unsigned int v9; // r0
  unsigned int v10; // r0
  int v11; // r7
  unsigned int v12; // r0
  unsigned int v13; // r0
  int v14; // r7
  unsigned int v15; // r0
  _DWORD *v16; // r0
  int v17; // r0
  _DWORD *v19; // [sp+8h] [bp-48h]
  unsigned int v20; // [sp+24h] [bp-2Ch] BYREF
  const char *v21; // [sp+28h] [bp-28h]

  v2 = 0;
  v3 = a1 + 9;
  sub_604734E4(a1 + 9, 0);
  sub_60475C8C((int)v3);
  v20 = (unsigned int)&sead__SafeStringBase__vtable;
  v21 = "ChallengeSelect.bflyt";
  message_ref(v3, &v20, (int)(a1 + 952), 0, 0);
  v20 = 0;
  v4 = operator_new(0x70u);
  *(_DWORD *)v4 = &off_60BFDA14;
  FIELD_U32(v4, 4) = &off_60BFDA24;
  FIELD_U32(v4, 8) = &off_60BFDA48;
  FIELD_U32(v4, 12) = v4;
  FIELD_U32(v4, 16) = 0;
  StateMgr_ctor((StateMgr *)(v4 + 20), (StateExecuter *)(v4 + 4), (StateBase *)&dword_60C9F780);
  v5 = a1 + 11950;
  *(_DWORD *)v4 = &off_60BFDA04;
  FIELD_U16(v4, 64) = 0;
  FIELD_U32(v4, 60) = 0;
  FIELD_U32(v4, 56) = 0;
  FIELD_U32(v4, 52) = 0;
  FIELD_U32(v4, 48) = 0;
  FIELD_U32(v4, 44) = 0;
  FIELD_U32(v4, 40) = 0;
  FIELD_U32(v4, 36) = 0;
  FIELD_U32(v4, 80) = 0;
  FIELD_U32(v4, 76) = 0;
  FIELD_U32(v4, 72) = 0;
  FIELD_U32(v4, 68) = 0;
  FIELD_U32(v4, 84) = 1;
  FIELD_U32(v4, 100) = 0;
  FIELD_U32(v4, 104) = 0;
  FIELD_U32(v4, 108) = 0;
  FIELD_U32(v4, 96) = 0;
  FIELD_U32(v4, 92) = 0;
  FIELD_U32(v4, 88) = 0;
  v6 = v20;
  if ( v20 >= 4 )
    v6 = 0;
  v5[v6] = v4;
  v7 = 0;
  if ( v20 < 4 )
    v7 = v20;
  sub_6048D088(v5[v7], v3);
  v20 = 1;
  v8 = operator_new(0x70u);
  *(_DWORD *)v8 = &off_60BFDA14;
  FIELD_U32(v8, 4) = &off_60BFDA24;
  FIELD_U32(v8, 8) = &off_60BFDA48;
  FIELD_U32(v8, 12) = v8;
  FIELD_U32(v8, 16) = 0;
  StateMgr_ctor((StateMgr *)(v8 + 20), (StateExecuter *)(v8 + 4), (StateBase *)&dword_60C9F780);
  *(_DWORD *)v8 = &off_60BFDA04;
  FIELD_U16(v8, 64) = 0;
  FIELD_U32(v8, 60) = 0;
  FIELD_U32(v8, 56) = 0;
  FIELD_U32(v8, 52) = 0;
  FIELD_U32(v8, 48) = 0;
  FIELD_U32(v8, 44) = 0;
  FIELD_U32(v8, 40) = 0;
  FIELD_U32(v8, 36) = 0;
  FIELD_U32(v8, 80) = 0;
  FIELD_U32(v8, 76) = 0;
  FIELD_U32(v8, 72) = 0;
  FIELD_U32(v8, 68) = 0;
  FIELD_U32(v8, 84) = 1;
  FIELD_U32(v8, 100) = 0;
  FIELD_U32(v8, 104) = 0;
  FIELD_U32(v8, 108) = 0;
  FIELD_U32(v8, 96) = 0;
  FIELD_U32(v8, 92) = 0;
  FIELD_U32(v8, 88) = 0;
  v9 = v20;
  v19 = a1 + 11950;
  if ( v20 >= 4 )
    v9 = 0;
  v5[v9] = v8;
  v10 = 0;
  if ( v20 < 4 )
    v10 = v20;
  sub_6048D088(v5[v10], v3);
  v20 = 2;
  v11 = operator_new(0x70u);
  *(_DWORD *)v11 = &off_60BFDA14;
  FIELD_U32(v11, 4) = &off_60BFDA24;
  FIELD_U32(v11, 8) = &off_60BFDA48;
  FIELD_U32(v11, 12) = v11;
  FIELD_U32(v11, 16) = 0;
  StateMgr_ctor((StateMgr *)(v11 + 20), (StateExecuter *)(v11 + 4), (StateBase *)&dword_60C9F780);
  *(_DWORD *)v11 = &off_60BFDA04;
  FIELD_U16(v11, 64) = 0;
  FIELD_U32(v11, 60) = 0;
  FIELD_U32(v11, 56) = 0;
  FIELD_U32(v11, 52) = 0;
  FIELD_U32(v11, 48) = 0;
  FIELD_U32(v11, 44) = 0;
  FIELD_U32(v11, 40) = 0;
  FIELD_U32(v11, 36) = 0;
  FIELD_U32(v11, 80) = 0;
  FIELD_U32(v11, 76) = 0;
  FIELD_U32(v11, 72) = 0;
  FIELD_U32(v11, 68) = 0;
  FIELD_U32(v11, 84) = 1;
  FIELD_U32(v11, 100) = 0;
  FIELD_U32(v11, 104) = 0;
  FIELD_U32(v11, 108) = 0;
  FIELD_U32(v11, 96) = 0;
  FIELD_U32(v11, 92) = 0;
  FIELD_U32(v11, 88) = 0;
  v12 = v20;
  if ( v20 >= 4 )
    v12 = 0;
  v19[v12] = v11;
  v13 = 0;
  if ( v20 < 4 )
    v13 = v20;
  sub_6048D088(v19[v13], v3);
  v20 = 3;
  v14 = operator_new(0x70u);
  *(_DWORD *)v14 = &off_60BFDA14;
  FIELD_U32(v14, 4) = &off_60BFDA24;
  FIELD_U32(v14, 8) = &off_60BFDA48;
  FIELD_U32(v14, 12) = v14;
  FIELD_U32(v14, 16) = 0;
  StateMgr_ctor((StateMgr *)(v14 + 20), (StateExecuter *)(v14 + 4), (StateBase *)&dword_60C9F780);
  *(_DWORD *)v14 = &off_60BFDA04;
  FIELD_U16(v14, 64) = 0;
  FIELD_U32(v14, 60) = 0;
  FIELD_U32(v14, 56) = 0;
  FIELD_U32(v14, 52) = 0;
  FIELD_U32(v14, 48) = 0;
  FIELD_U32(v14, 44) = 0;
  FIELD_U32(v14, 40) = 0;
  FIELD_U32(v14, 36) = 0;
  FIELD_U32(v14, 80) = 0;
  FIELD_U32(v14, 76) = 0;
  FIELD_U32(v14, 72) = 0;
  FIELD_U32(v14, 68) = 0;
  FIELD_U32(v14, 84) = 1;
  FIELD_U32(v14, 100) = 0;
  FIELD_U32(v14, 104) = 0;
  FIELD_U32(v14, 108) = 0;
  FIELD_U32(v14, 96) = 0;
  FIELD_U32(v14, 92) = 0;
  FIELD_U32(v14, 88) = 0;
  v15 = v20;
  if ( v20 >= 4 )
    v15 = 0;
  v19[v15] = v14;
  if ( v20 < 4 )
    v2 = v20;
  sub_6048D088(v19[v2], v3);
  v16 = (_DWORD *)a1[956];
  if ( v16 != a1 + 955 )
  {
    do
      v16 = (_DWORD *)v16[1];
    while ( (char *)v16 - a1[958] != (char *)a1 - a1[958] + 3820 );
  }
  v17 = operator_new(0xE24u);
  a1[3559] = sub_60506DB0(v17);
  v20 = (unsigned int)&sead__SafeStringBase__vtable;
  v21 = "Pa_Icon_00";
  return sub_60506F20();
}
