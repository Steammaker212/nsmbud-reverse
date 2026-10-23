/* sub_607B9614
 * address: 0x607B9614   size: 1264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B9614(int a1)
{
  int v2; // r5
  int v3; // r0
  _DWORD *v4; // r6
  int v5; // r0
  int v6; // r1
  bool v7; // zf
  _BYTE *v8; // r8
  bool v9; // zf
  int v10; // r0
  bool v11; // zf
  int v12; // r0
  unsigned int v14; // r8
  int v15; // r0
  unsigned int v16; // r0
  int v17; // r2
  int v18; // r1
  int *v19; // r0
  unsigned int v20; // r5
  int v21; // r0
  unsigned int v22; // r0
  int v23; // r1
  int v24; // r0

  v2 = 0;
  v3 = FIELD_U32(a1, 1220);
  if ( (v3 & 0x400000) == 0 || (v3 & 0x2000000) != 0 && (FIELD_U32(a1, 12088) || FIELD_U32(a1, 12092)) )
    return v2;
  v4 = (_DWORD *)(a1 + 12084);
  if ( FIELD_U32(a1, 12084) )
    return v2;
  if ( (FIELD_U8(a1, 6902) & 4) != 0 )
    return v2;
  if ( (FIELD_U8(a1, 1225) & 4) == 0 )
    return v2;
  v5 = sub_60766708(a1);
  if ( v5 )
    return v2;
  v6 = FIELD_U32(a1, 1204);
  v7 = (v6 & 0x80000) == 0;
  if ( (v6 & 0x80000) == 0 )
  {
    v5 = FIELD_U32(a1, 1220);
    v7 = (v5 & 0x80000) == 0;
  }
  if ( !v7 )
    return v2;
  if ( FIELD_U32(a1, 1216) & 0x4000000 | v6 & 0x40000000 | FIELD_U32(a1, 1216) & 0x10 )
  {
    if ( ((int (__fastcall *)(int))loc_60763E28)(a1) )
      return v2;
    v5 = FIELD_U32(a1, 1220);
  }
  v8 = (_BYTE *)(a1 + 6900);
  if ( (v5 & 0x2000000) != 0 )
  {
    v10 = sub_60454FDC(dword_60C9CF0C);
    v11 = v10 == 1;
    if ( v10 == 1 )
      v11 = (*v8 & 1) == 0;
    if ( !v11 )
      return v2;
    if ( dword_60CBEA44 )
      sub_6074E5B0(dword_60CBEA44 + 20);
    FIELD_U32(a1, 12088) = 30;
    SE_PLY_SPIN_ONCE_ref_2(a1);
    if ( !sub_6079C784(a1) )
    {
      v2 = 1;
      if ( sub_6079DD80(a1) || sub_6079DE44(a1) || sub_6079DB30(a1) )
        return v2;
      v14 = FIELD_U32(a1, 1320);
      v15 = sub_6079D894(a1);
      if ( v15 )
      {
        v14 = FIELD_U32(v15, 1320);
      }
      else if ( v14 <= 9 && ((1 << v14) & 0x390) != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1) )
      {
        goto LABEL_33;
      }
      v16 = v14 - 4;
      if ( (v14 | 1) == 9 )
        v16 = 3;
      if ( v16 <= 5 && v16 - 1 > 1 )
        return v2;
    }
LABEL_33:
    *v4 = 30;
    return 1;
  }
  *v4 = 30;
  FIELD_U32(a1, 12104) = 0;
  if ( sub_60235E50(a1 + 13840) == 1 )
    sub_602360C0(a1 + 13840);
  SE_PLY_SPIN_ONCE_ref();
  *v4 = 0;
  v9 = (FIELD_U8(a1, 1223) & 1) == 0;
  if ( (FIELD_U8(a1, 1223) & 1) != 0 )
    v9 = (*v8 & 1) == 0;
  if ( !v9 )
  {
    Player_changeState(a1, (StateBase *)&dword_60CC4E0C, 256);
    return 0;
  }
  if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 640))(a1, 6) != 1 )
  {
    sub_6079C784(a1);
    if ( sub_6079DD80(a1) )
    {
LABEL_35:
      v12 = sub_6079B3CC(a1);
      goto LABEL_36;
    }
    if ( sub_6079DE44(a1) )
    {
LABEL_51:
      *v4 = 0;
      sub_6079C40C(a1);
      return 1;
    }
    if ( sub_6079DB30(a1) )
    {
LABEL_55:
      v12 = SE_PLY_PRPL_LETDOWN_SPIN_ref(a1);
LABEL_36:
      v2 = 1;
      if ( v12 )
        return v2;
      goto LABEL_37;
    }
    v20 = FIELD_U32(a1, 1320);
    v21 = sub_6079D894(a1);
    if ( v21 )
    {
      v20 = FIELD_U32(v21, 1320);
    }
    else if ( v20 <= 9 && ((1 << v20) & 0x390) != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1) )
    {
      goto LABEL_74;
    }
    v22 = v20 - 4;
    if ( (v20 | 1) == 9 )
      v22 = 3;
    if ( v22 <= 5 )
    {
      switch ( dword_60B0CED0[v22] )
      {
        case 0:
          goto LABEL_74;
        case 1:
          goto LABEL_55;
        case 2:
          goto LABEL_35;
        case 3:
          goto LABEL_51;
        case 5:
          if ( sub_607AB4A8(a1) != 1 )
            goto LABEL_37;
          v2 = 1;
          if ( !dword_60CBEA44 )
            return v2;
          v23 = sub_60786B2C(a1 + 688);
          v24 = dword_60CBEA44 + 20;
          if ( v23 == 1 )
            sub_6074E5D8(v24);
          else
            sub_6074E5C4(v24);
          break;
        default:
          goto LABEL_37;
      }
      return 1;
    }
LABEL_74:
    if ( (FIELD_U8(a1, 1219) & 1) != 0 )
    {
      v2 = 1;
      if ( sub_607B74E0(a1, 3.428, 0.0) )
        return v2;
    }
    if ( (*v8 & 1) != 0 )
    {
      v17 = 256;
      goto LABEL_53;
    }
LABEL_37:
    if ( (FIELD_U8(a1, 1208) & 0x10) == 0 )
    {
      if ( FIELD_U32(a1, 12088) )
      {
        *v4 = 0;
        return 0;
      }
      FIELD_U32(a1, 12088) = 30;
      SE_PLY_SPIN_ONCE_ref_2(a1);
      v2 = 1;
      if ( dword_60CBEA44 )
      {
        v18 = sub_60786B2C(a1 + 688);
        v19 = (int *)(dword_60CBEA44 + 20);
        if ( v18 == 1 )
          sub_6074E59C((int)v19);
        else
          sub_6074E588(v19);
        return 1;
      }
      return v2;
    }
    v17 = 257;
LABEL_53:
    Player_changeState(a1, (StateBase *)&dword_60CC4E0C, v17);
    return 1;
  }
  SE_PLY_SPIN_ONCE_ref_2(a1);
  return 1;
}
