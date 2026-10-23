/* sub_601E81AC
 * address: 0x601E81AC   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E81AC(int a1, int *a2, int a3)
{
  int v5; // r0
  unsigned int v6; // r4
  int v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  int v10; // r1
  bool v11; // zf
  int result; // r0
  int v13; // r6
  int v14; // r4
  char v15; // r12
  int *v16; // r5
  int v17; // r0
  int v18; // r7
  char v19; // r12
  int v20; // [sp+4h] [bp-94h]
  unsigned int v21; // [sp+Ch] [bp-8Ch] BYREF
  int v22; // [sp+10h] [bp-88h] BYREF
  int v23; // [sp+14h] [bp-84h] BYREF
  int v24; // [sp+18h] [bp-80h]
  int v25; // [sp+1Ch] [bp-7Ch]
  _DWORD v26[30]; // [sp+20h] [bp-78h] BYREF

  v26[0] = 0;
  memset(&v26[2], 0, 72);
  sub_601905DC(v26);
  v26[0] = a3;
  v26[1] = sub_601916C8(dword_60C8996C, a3);
  v5 = *a2;
  v23 = v5;
  v24 = a2[1];
  v25 = a2[2];
  if ( (unsigned int)(v5 - 2) >= 2 )
  {
    if ( v5 == 1 )
    {
      v6 = FIELD_U32(dword_60CC6D78, 496);
      if ( v6 != 6 )
      {
        v7 = sub_601DFFE4((int)a2);
        v8 = (_DWORD *)sub_60178694(v7, v6);
        v23 = v8[21];
        v24 = v8[22];
        v25 = v8[24];
      }
    }
  }
  else
  {
    v22 = FIELD_U32(dword_60CC6D78, 424);
    sub_6021FF78(dword_60C8D4EC, &v21, FIELD_U32(dword_60CC6D78, 412), &v22);
    if ( *a2 == 2 )
    {
      sub_60204658(dword_60C8C5E4, &v23, v21);
    }
    else
    {
      sub_601B1144(dword_60C8A8C0, (int)&v23, v21);
      if ( v21 == 3 )
      {
        v9 = (_DWORD *)sub_60186FEC(dword_60CC6D78 + 984, 3u, 4u);
        if ( *v9 != -1 )
        {
          v10 = v9[1];
          v11 = v10 == -1;
          if ( v10 != -1 )
            v11 = v9[2] == -1;
          if ( !v11 && !v9[3] )
            sub_601B1144(dword_60C8A8C0, (int)&v23, 4u);
        }
      }
    }
  }
  result = sub_60169A30(&v23);
  v13 = result;
  if ( result )
  {
    v26[2] = FIELD_U32(result, 8);
    if ( *a2 == 6 )
    {
      v16 = *(int **)(ActorMgr__instance + 27172);
      v20 = 0;
      while ( 1 )
      {
        v16 = sub_60169BD8(6, v16 + 1);
        v18 = *v16;
        if ( ((unsigned int)&dword_60C88AA8 & ~(1612612800 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA8) )
        {
          dword_60C88AA4 = (int)&off_60BD4BA4;
          _cxa_guard_release(&dword_60C88AA8);
        }
        if ( !v18 || (**(int (__fastcall ***)(int, int *))v18)(v18, &dword_60C88AA4) != 1 )
          break;
        if ( v18 != v13 )
        {
          v17 = v20 + 2;
          if ( (unsigned int)(v20 + 2) >= 0x12 )
            v17 = 0;
          ++v20;
          v26[v17 + 2] = FIELD_U32(v18, 8);
        }
      }
    }
    else if ( *a2 == 3 && sub_6018691C(result) == 3 && v26[0] != 31 )
    {
      v14 = *(_DWORD *)sub_601693A0(898);
      if ( ((unsigned int)&dword_60C8A8C8 & ~(1612612532 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C8A8C8) )
      {
        dword_60C8A8C4 = (int)&off_60BD4EC8;
        _cxa_guard_release(&dword_60C8A8C8);
      }
      if ( v14 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v14)(v14, &dword_60C8A8C4) == 1 )
          v26[4] = FIELD_U32(v14, 8);
      }
    }
    return sub_60191160((_DWORD *)dword_60C8996C, v26);
  }
  return result;
}
