/* sub_602173E8
 * address: 0x602173E8   size: 2276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602173E8(int *a1)
{
  int v2; // r5
  int v3; // r10
  int v4; // r7
  char v5; // r12
  int v6; // r6
  unsigned int v7; // r0
  int v8; // r1
  int v9; // r0
  char v10; // r12
  int v11; // r0
  int v12; // r0
  char v13; // r12
  int v14; // r0
  signed int *v15; // r0
  signed int v16; // r1
  signed int v17; // r2
  int *v18; // r0
  int v19; // r1
  int v20; // r2
  signed int *v21; // r0
  signed int *v22; // r1
  char v23; // r12
  signed int *v24; // r0
  signed int v25; // r1
  int v26; // r2
  char v27; // r12
  __int16 *v28; // r7
  int result; // r0
  int v30; // r6
  int v31; // r0
  char v32; // r12
  int v33; // r1
  int v34; // r5
  int v35; // [sp+0h] [bp-80h] BYREF
  int v36; // [sp+4h] [bp-7Ch]
  int v37; // [sp+8h] [bp-78h]
  _DWORD v38[4]; // [sp+30h] [bp-50h] BYREF
  signed int v39[4]; // [sp+40h] [bp-40h] BYREF
  signed int v40; // [sp+50h] [bp-30h] BYREF
  int v41; // [sp+54h] [bp-2Ch]
  int v42; // [sp+58h] [bp-28h]
  int v43; // [sp+5Ch] [bp-24h]

  v2 = dword_60C8996C;
  v3 = dword_60C8AEF0;
  v4 = sub_601CF9C0(dword_60C8AEF0);
  v43 = sub_6019112C(v2);
  if ( FIELD_U8(v2, 1384) )
  {
    if ( v43 > 220 )
    {
      switch ( v43 )
      {
        case 223:
          if ( sub_601916F4(v2) && sub_601916F4(v2) != 2 )
          {
            if ( sub_601916F4(v2) == 1 )
              a1[76] = 536870910;
          }
          else
          {
            v7 = sub_6000F7B8(FIELD_F32(v4, 120), FIELD_F32(v4, 200));
            v8 = 715827882;
            v9 = 0x40000000 - v7;
            if ( v9 < 715827882 )
              v8 = v9;
            a1[76] = v8;
          }
          a1[77] = 0;
          break;
        case 222:
          sub_601E4C88((_DWORD *)dword_60C8B13C, 68, a1 + 20);
          switch ( sub_601916F4(v2) )
          {
            case 0:
              a1[45] = sub_608332B0(a1 + 20, v4 + 980);
              if ( ((unsigned int)&dword_60C8D2D0[1] & ~(1612805736 << v10) & 1) == 0
                && _cxa_guard_acquire(&dword_60C8D2D0[1]) )
              {
                dword_60C8D2FC = (int)&sead__SafeStringBase__vtable;
                dword_60C8D300 = (int)"cobCannonAppear";
                dword_60C8D304 = (int)&sead__SafeStringBase__vtable;
                dword_60C8D308 = (int)"cobCannonGrow";
                dword_60C8D30C = (int)&sead__SafeStringBase__vtable;
                dword_60C8D310 = (int)"cobCannonShot";
                sub_60000288();
                _cxa_guard_release(&dword_60C8D2D0[1]);
              }
              v11 = a1[69];
              goto LABEL_46;
            case 1:
              v35 = -1;
              v36 = -1;
              v37 = -1;
              sub_601E06F0(0, &v35);
              v12 = sub_601E0040((int)&v35);
              a1[45] = sub_608332B0(a1 + 20, v12);
              if ( ((unsigned int)&dword_60C8D2D0[1] & ~(1612805996 << v13) & 1) == 0
                && _cxa_guard_acquire(&dword_60C8D2D0[1]) )
              {
                dword_60C8D2FC = (int)&sead__SafeStringBase__vtable;
                dword_60C8D300 = (int)"cobCannonAppear";
                dword_60C8D304 = (int)&sead__SafeStringBase__vtable;
                dword_60C8D308 = (int)"cobCannonGrow";
                dword_60C8D30C = (int)&sead__SafeStringBase__vtable;
                dword_60C8D310 = (int)"cobCannonShot";
                sub_60000288();
                _cxa_guard_release(&dword_60C8D2D0[1]);
              }
              v11 = a1[69];
              goto LABEL_46;
            case 2:
              v35 = -1;
              v36 = -1;
              v37 = -1;
              v14 = FIELD_U32(dword_60CC6D78, 412);
              if ( v14 == 8 )
              {
                sub_601E0AB8(&v35);
              }
              else if ( v14 == 7 )
              {
                sub_601E0A30(&v35);
              }
              v24 = (signed int *)sub_601E0040((int)&v35);
              v25 = *v24;
              v26 = v24[1];
              v42 = v24[2];
              v41 = v26;
              v40 = v25;
              a1[45] = sub_608332B0(&v40, v4 + 980);
              if ( ((unsigned int)&dword_60C8D2D0[1] & ~(1612806596 << v27) & 1) == 0
                && _cxa_guard_acquire(&dword_60C8D2D0[1]) )
              {
                dword_60C8D2FC = (int)&sead__SafeStringBase__vtable;
                dword_60C8D300 = (int)"cobCannonAppear";
                dword_60C8D304 = (int)&sead__SafeStringBase__vtable;
                dword_60C8D308 = (int)"cobCannonGrow";
                dword_60C8D30C = (int)&sead__SafeStringBase__vtable;
                dword_60C8D310 = (int)"cobCannonShot";
                sub_60000288();
                _cxa_guard_release(&dword_60C8D2D0[1]);
              }
              v11 = a1[69];
              goto LABEL_46;
            case 3:
              v35 = -1;
              v36 = -1;
              v40 = -1;
              v41 = -1;
              v37 = -1;
              v42 = -1;
              sub_601E0A30(&v35);
              sub_601E0AB8(&v40);
              v15 = (signed int *)sub_601E0040((int)&v35);
              v16 = *v15;
              v17 = v15[1];
              v39[2] = v15[2];
              v39[1] = v17;
              v39[0] = v16;
              v18 = (int *)sub_601E0040((int)&v40);
              v19 = *v18;
              v20 = v18[1];
              v38[2] = v18[2];
              v38[1] = v20;
              v38[0] = v19;
              if ( FIELD_U32(v4, 1208) == 7 )
              {
                v21 = v38;
                v22 = v39;
              }
              else
              {
                v21 = v39;
                v22 = v38;
              }
              a1[45] = sub_608332B0(v21, v22);
              if ( ((unsigned int)&dword_60C8D2D0[1] & ~(1612806372 << v23) & 1) == 0
                && _cxa_guard_acquire(&dword_60C8D2D0[1]) )
              {
                dword_60C8D2FC = (int)&sead__SafeStringBase__vtable;
                dword_60C8D300 = (int)"cobCannonAppear";
                dword_60C8D304 = (int)&sead__SafeStringBase__vtable;
                dword_60C8D308 = (int)"cobCannonGrow";
                dword_60C8D30C = (int)&sead__SafeStringBase__vtable;
                dword_60C8D310 = (int)"cobCannonShot";
                sub_60000288();
                _cxa_guard_release(&dword_60C8D2D0[1]);
              }
              v11 = a1[69];
LABEL_46:
              sub_6040F4B8(v11, &dword_60C8D304, 0);
              break;
            default:
              goto LABEL_47;
          }
          break;
        case 221:
          v6 = a1[74];
          if ( v6 == sub_601916F4(v2) )
            *(_DWORD *)(**(_DWORD **)(a1[69] + 12) + 24) = 1065353216;
          break;
      }
    }
    else if ( (unsigned int)(v43 - 111) <= 5 && ((1 << (v43 - 111)) & 0x2B) != 0 )
    {
      sub_601E4C88((_DWORD *)dword_60C8B13C, 69, a1 + 20);
      (*(void (__fastcall **)(_DWORD, int, int *))(**(_DWORD **)a1[69] + 108))(*(_DWORD *)a1[69], a1[72], &v35);
      sub_60236DF4(901, &v35, 0);
      if ( ((unsigned int)&dword_60C8D2D0[1] & ~(1612805308 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D2D0[1]) )
      {
        dword_60C8D2FC = (int)&sead__SafeStringBase__vtable;
        dword_60C8D300 = (int)"cobCannonAppear";
        dword_60C8D304 = (int)&sead__SafeStringBase__vtable;
        dword_60C8D308 = (int)"cobCannonGrow";
        dword_60C8D30C = (int)&sead__SafeStringBase__vtable;
        dword_60C8D310 = (int)"cobCannonShot";
        sub_60000288();
        _cxa_guard_release(&dword_60C8D2D0[1]);
      }
      sub_6040F4B8(a1[69], &dword_60C8D30C, 0);
      a1[75] = 0;
      a1[73] = 0;
    }
  }
LABEL_47:
  v28 = (__int16 *)sub_601CFF2C(v3, 4);
  if ( v43 > 220 )
  {
    if ( v43 == 223 )
    {
      result = a1[76];
      if ( a1[77] != result )
        return result;
    }
    else if ( v43 == 222 || v43 == 221 && (v30 = a1[74], v30 == sub_601916F4(v2)) )
    {
LABEL_57:
      result = *(unsigned __int8 *)(**(_DWORD **)(a1[69] + 12) + 28);
      if ( (result & 0x20) == 0 )
        return result;
    }
    return (*(int (__fastcall **)(int *))(*a1 + 72))(a1);
  }
  if ( (unsigned int)(v43 - 111) > 5 || ((1 << (v43 - 111)) & 0x2B) == 0 )
    return (*(int (__fastcall **)(int *))(*a1 + 72))(a1);
  ++a1[73];
  result = a1[75];
  switch ( result )
  {
    case 0:
      result = *(unsigned __int8 *)(**(_DWORD **)(a1[69] + 12) + 28);
      if ( (result & 0x20) == 0 )
        return result;
      result = 1;
      break;
    case 1:
      v31 = sub_601916F4(v2);
      v33 = 30;
      if ( !v31 )
      {
        v34 = *v28;
        v33 = v34 * sub_601CFE3C(v3) + 30;
      }
      result = a1[73];
      if ( result > v33 )
      {
        if ( ((unsigned int)&dword_60C8D2D0[1] & ~(1612807088 << v32) & 1) == 0 )
        {
          if ( _cxa_guard_acquire(&dword_60C8D2D0[1]) )
          {
            dword_60C8D2FC = (int)&sead__SafeStringBase__vtable;
            dword_60C8D300 = (int)"cobCannonAppear";
            dword_60C8D304 = (int)&sead__SafeStringBase__vtable;
            dword_60C8D308 = (int)"cobCannonGrow";
            dword_60C8D30C = (int)&sead__SafeStringBase__vtable;
            dword_60C8D310 = (int)"cobCannonShot";
            sub_60000288();
            _cxa_guard_release(&dword_60C8D2D0[1]);
          }
        }
        sub_6040F4B8(a1[69], &dword_60C8D304, 0);
        sub_6041838C((ModelAnimation *)(**(_DWORD **)(a1[69] + 12) + 4));
        a1[75] = 4;
        a1[76] = 0;
        return 4;
      }
      return result;
    case 2:
      v35 = 0;
      v40 = 301989888;
      v39[0] = 16842752;
      sub_608322C0(a1 + 77, &v35, &v40, v39);
      result = a1[77];
      if ( result )
        return result;
      result = 3;
      break;
    case 3:
      goto LABEL_57;
    case 4:
      return (*(int (__fastcall **)(int *))(*a1 + 72))(a1);
    default:
      return result;
  }
  a1[75] = result;
  return result;
}
