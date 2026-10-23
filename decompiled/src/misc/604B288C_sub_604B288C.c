/* sub_604B288C
 * address: 0x604B288C   size: 996   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B288C(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r0
  unsigned int v7; // r0
  int v8; // r4
  int v9; // r3
  int v10; // r0
  _DWORD *v11; // r0
  int v12; // r1
  int v13; // r0
  int result; // r0
  int *v15; // r6
  int v16; // r4
  int v17; // r7
  bool v18; // zf
  int v19; // r0
  int v20; // r1
  int (**v21)(); // [sp+8h] [bp-20h] BYREF
  const char *v22; // [sp+Ch] [bp-1Ch]

  v4 = FIELD_U32(a1, 14916);
  v2 = (_DWORD *)(a1 + 14916);
  v3 = v4;
  if ( v4 )
  {
    v5 = v3 - 1;
    *v2 = v5;
    if ( !v5 )
    {
      v6 = FIELD_U32(a1, 4);
      v21 = &sead__SafeStringBase__vtable;
      v22 = "G_AreaGuide_00";
      v7 = sub_604746E4(v6, &dword_60CA1B44, &v21);
      sub_60474420(*(_DWORD **)(a1 + 4), 1u, &dword_60CA1B44, v7, 0);
    }
  }
  v8 = FIELD_U32(dword_60CBC000, 104);
  v9 = 300 - FIELD_U32(dword_60CBC000, 100);
  v21 = &sead__SafeStringBase__vtable;
  v22 = "CoinEditScene_Coin_00";
  sub_6047E0EC(&v21, FIELD_U32(a1, 588), 1, v9);
  v21 = &sead__SafeStringBase__vtable;
  v22 = "CoinEditScene_StarCoin_00";
  sub_6047E0EC(&v21, FIELD_U32(a1, 592), 1, 3 - v8);
  FIELD_U8(AreaTask_intance, 1873) = 0;
  v10 = FIELD_U32(a1, 32);
  if ( v10 )
  {
    if ( v10 != 1 )
      goto LABEL_13;
    sub_604B2094(dword_60CA1910, 1);
    v11 = *(_DWORD **)(a1 + 16);
    if ( *(_BYTE *)(*v11 + 160) )
    {
      FIELD_U8(AreaTask_intance, 1873) = 1;
      FIELD_U32(a1, 20) = 0;
      sub_604DE988(a1);
      v12 = **(_DWORD **)(a1 + 16);
LABEL_12:
      sub_6047EBB4(a1 + 24, v12);
      sub_6047EBC4(a1 + 24);
      goto LABEL_13;
    }
    if ( *(_BYTE *)(v11[1] + 160) )
    {
      FIELD_U8(AreaTask_intance, 1873) = 1;
      FIELD_U32(a1, 20) = 1;
      sub_604DE988(a1);
      v12 = *(_DWORD *)(FIELD_U32(a1, 16) + 4);
      goto LABEL_12;
    }
    if ( *(_BYTE *)(v11[2] + 160) )
    {
      v20 = 7;
LABEL_39:
      result = AreaTask_intance;
      FIELD_U32(AreaTask_intance, 1868) = v20;
      return result;
    }
    if ( *(_BYTE *)(v11[3] + 160) )
    {
      v20 = 6;
      goto LABEL_39;
    }
    if ( *(_BYTE *)(v11[4] + 160) )
    {
      v20 = 4;
      goto LABEL_39;
    }
    if ( *(_BYTE *)(v11[5] + 160) )
    {
      v20 = 5;
      goto LABEL_39;
    }
  }
  else if ( sub_604B20BC(dword_60CA1910) == 1 )
  {
    sub_604B2094(dword_60CA1910, 0);
  }
LABEL_13:
  FIELD_U32(AreaTask_intance, 1868) = 0;
  if ( sub_604B2054((unsigned __int8 *)dword_60CA1910) == 1 )
  {
    StateMgr__changeState((StateMgr *)(a1 + 516), &stru_60CA1BB4);
    goto LABEL_15;
  }
  v13 = FIELD_U32(a1, 32);
  if ( !v13 )
  {
    if ( (FIELD_U8(dword_60C9CF0C, 1364) & 2) != 0 )
      goto LABEL_15;
    v19 = FIELD_U32(a1, 14952);
    if ( (v19 & 0x100) != 0 )
    {
      FIELD_U32(a1, 20) = 0;
      sub_604DE988(a1);
      sub_6047EBB4(a1 + 24, **(_DWORD **)(a1 + 16));
      sub_6047EBC4(a1 + 24);
    }
    else
    {
      if ( (v19 & 0x10000) == 0 )
        goto LABEL_15;
      FIELD_U32(a1, 20) = 1;
      sub_604DE988(a1);
      sub_6047EBB4(a1 + 24, *(_DWORD *)(FIELD_U32(a1, 16) + 4));
      sub_6047EBC4(a1 + 24);
    }
    sub_604B1FD4(dword_60CA1910, 1);
LABEL_15:
    if ( FIELD_U32(a1, 32) != 3 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( v13 == 3 )
  {
LABEL_19:
    sub_604B1FD4(dword_60CA1910, 0);
    sub_604B5520(a1);
  }
LABEL_20:
  sub_604DEA24(a1);
  result = FIELD_U32(a1, 14928);
  v15 = (int *)(a1 + 14932);
  v16 = 3 - FIELD_U32(dword_60CBC000, 104);
  v17 = 300 - FIELD_U32(dword_60CBC000, 100);
  v18 = result == v16;
  if ( result == v16 )
  {
    result = *v15;
    v18 = *v15 == v17;
  }
  if ( !v18 )
    result = sub_604B4FF8(a1);
  FIELD_U32(a1, 14928) = v16;
  *v15 = v17;
  return result;
}
