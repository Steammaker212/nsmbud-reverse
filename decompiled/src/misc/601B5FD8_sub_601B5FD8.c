/* sub_601B5FD8
 * address: 0x601B5FD8   size: 1192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601B5FD8(_DWORD *a1, int a2)
{
  int v4; // r7
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  int v15; // r0
  _BOOL4 v16; // r7
  int v17; // r0
  int v18; // r0
  _DWORD *v19; // r5
  _DWORD *v20; // r0
  int v21; // r0
  int v23; // [sp+8h] [bp-30h] BYREF
  int v24; // [sp+Ch] [bp-2Ch]
  int v25; // [sp+10h] [bp-28h]

  sub_601C3FC0();
  *a1 = off_60BD695C;
  a1[221] = &off_60BD6B08;
  a1[222] = &off_60BD6B18;
  a1[223] = &off_60BD6B3C;
  a1[224] = a1;
  a1[225] = 0;
  StateMgr_ctor((StateMgr *)(a1 + 226), (StateExecuter *)(a1 + 222), &NullState);
  a1[221] = &off_60BD6AF8;
  a1[236] = 0;
  a1[237] = 0;
  a1[238] = 0;
  a1[239] = 0;
  a1[240] = 0;
  a1[241] = 0;
  a1[242] = 0;
  a1[243] = 0;
  a1[244] = 0;
  a1[245] = 0;
  a1[246] = 0;
  a1[247] = 0;
  a1[248] = 0;
  a1[249] = 0;
  a1[250] = 0;
  a1[251] = 0;
  a1[252] = 0;
  a1[253] = 0;
  a1[254] = 0;
  memset(a1 + 255, 0, 40);
  a1[265] = 184;
  a1[266] = -1;
  a1[267] = 3;
  a1[268] = 3;
  a1[269] = 10;
  a1[270] = 0;
  a1[271] = -1;
  a1[272] = -1;
  a1[273] = -1;
  a1[274] = 6;
  a1[275] = 6;
  *((_BYTE *)a1 + 1104) = 0;
  a1[277] = 0;
  a1[278] = 0;
  a1[281] = 0;
  a1[280] = 0;
  a1[279] = 0;
  a1[285] = 0;
  a1[286] = 0;
  a1[284] = 0;
  a1[283] = 0;
  a1[282] = 0;
  a1[287] = -1;
  a1[292] = -1;
  a1[291] = -1;
  a1[290] = -1;
  a1[289] = -1;
  a1[288] = -1;
  *((_BYTE *)a1 + 1200) = 0;
  a1[366] = 6;
  a1[367] = 0;
  a1[235] = 0;
  a1[234] = 0;
  a1[233] = 0;
  a1[232] = 0;
  a1[231] = 0;
  a1[230] = 0;
  a1[369] = -1;
  a1[368] = 0;
  v4 = a1[66];
  if ( v4 < 6 )
  {
    a1[369] = v4;
    v5 = 0;
    if ( (unsigned int)v4 < 6 )
      v5 = v4;
    v6 = *(_DWORD *)(dword_60C99DEC + 72 * v5 + 48);
    a1[368] = v6;
    a1[66] = v6;
    v7 = operator_new(0x10u);
    a1[230] = sub_60794B48(v7);
    v8 = operator_new(0x10u);
    a1[231] = sub_60794B48(v8);
    v9 = operator_new(0x10u);
    a1[232] = sub_60794B48(v9);
    v10 = operator_new(0x10u);
    a1[233] = sub_60794B48(v10);
    v11 = operator_new(0x10u);
    a1[234] = sub_60794B48(v11);
    v12 = operator_new(0x10u);
    a1[235] = sub_60794B48(v12);
  }
  a1[277] = 0;
  a1[287] = -1;
  a1[288] = -1;
  a1[289] = -1;
  a1[290] = -1;
  a1[291] = -1;
  a1[292] = -1;
  *((_BYTE *)a1 + 1200) = 0;
  a1[299] = 0;
  a1[298] = 0;
  a1[297] = 0;
  a1[296] = 0;
  a1[295] = 0;
  a1[294] = 0;
  a1[293] = 0;
  a1[301] = -1;
  v13 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
  a1[32] = v13[32];
  a1[33] = v13[33];
  a1[34] = v13[34];
  a1[255] = v13[45];
  sub_6019EC34(a1 + 271, v13 + 258);
  v14 = (_DWORD *)sub_601E0040(a1 + 271);
  a1[246] = *v14;
  a1[247] = v14[1];
  a1[248] = v14[2];
  v15 = a1[66];
  if ( (v15 | 1) == 7 )
  {
    v16 = v15 != 6;
    v17 = operator_new(0xBCu);
    a1[236] = sub_605EA200(v17, v16, 1);
    v15 = a1[66];
  }
  if ( (v15 | 1) == 7 )
  {
    if ( (FIELD_U8(a2, 2) & 1) != 0 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a1 + 124))(a1);
    }
    else
    {
      v18 = sub_601C38F0(a1);
      v23 = -1;
      v24 = -1;
      v25 = -1;
      sub_601DAF58(&v23, v18);
      v19 = (_DWORD *)sub_601DFFE4(&v23);
      if ( v19 )
      {
        a1[45] = 0x40000000;
        sub_601C503C(a1);
        a1[271] = v19[21];
        a1[272] = v19[22];
        a1[273] = v19[24];
        sub_601C308C(a1, a1 + 20);
        v20 = (_DWORD *)sub_601E0040(a1 + 271);
        a1[246] = *v20;
        a1[247] = v20[1];
        a1[248] = v20[2];
      }
      (*(void (__fastcall **)(_DWORD *))(*a1 + 128))(a1);
    }
  }
  v21 = sub_601CF9C0(dword_60C8AEF0);
  v23 = -1;
  v24 = -1;
  v25 = -1;
  sub_6019EC34(&v23, (_DWORD *)(v21 + 1032));
  if ( sub_601DA01C(&v23) == 1 && (*(int (__fastcall **)(_DWORD *))(*a1 + 92))(a1) == 1 )
    a1[277] |= 8u;
  return a1;
}
