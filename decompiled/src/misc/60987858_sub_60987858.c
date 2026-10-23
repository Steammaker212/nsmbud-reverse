/* sub_60987858
 * address: 0x60987858   size: 1468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60987858(int a1, unsigned int a2, unsigned int a3, _WORD *a4, int a5, int a6)
{
  int v6; // r12
  int v9; // r4
  char v10; // r1
  int v11; // r8
  unsigned __int16 v12; // r0
  int v13; // r11
  unsigned int v14; // r5
  unsigned int v15; // r1
  _WORD *v16; // r5
  int *v17; // r0
  _WORD *v18; // r5
  char v19; // r12
  unsigned __int16 v20; // r2
  int *v21; // r0
  int v22; // r0
  unsigned int v23; // r0
  signed int v24; // r10
  unsigned __int16 *v25; // r5
  int v26; // r7
  unsigned int v27; // r1
  int v28; // r0
  char v29; // r2
  bool v30; // zf
  unsigned int v31; // r1
  int v32; // r0
  int v33; // r7
  unsigned __int16 *v34; // r10
  unsigned int v35; // r1
  int v36; // r0
  int v37; // r0
  char v38; // r2
  _WORD *v39; // r4
  int v41; // [sp+4h] [bp-8Ch]
  __int16 v42; // [sp+8h] [bp-88h]
  __int16 v43; // [sp+Ch] [bp-84h]
  unsigned __int16 v46; // [sp+68h] [bp-28h]

  if ( !a3 )
  {
    v10 = 1;
    return v10 & 1;
  }
  v9 = a6;
  if ( a6 || (v10 = 0, !FIELD_U8(a1, 49)) )
  {
    if ( a4 )
    {
      v11 = (*(int (__fastcall **)(_WORD *))(*(_DWORD *)a4 + 16))(a4);
      v12 = a4[19];
    }
    else
    {
      v12 = 0;
      v11 = 0;
    }
    v46 = v12;
    v13 = 1;
    v14 = 0;
    while ( 1 )
    {
      if ( v11 )
      {
        v34 = (unsigned __int16 *)(a2 + 2 * v14);
        while ( 1 )
        {
          v35 = *v34;
          if ( (v35 | 1) == 0xF )
            break;
          if ( v35 >= 0x20 )
          {
            v36 = FIELD_U32(a1, 24);
            if ( v9 )
            {
              v37 = sub_6099B0F0(v36, v35, v11, v46);
              v10 = 0;
              if ( !v37 )
                return v10 & 1;
              v38 = FIELD_U8(v37, 32);
              FIELD_U8(v37, 32) = v38 | 1;
              if ( (v38 & 2) != 0 )
                return v10 & 1;
            }
            else
            {
              v13 &= sub_6099AD8C(v36, v35, v11, v46, a5) ^ 1;
            }
          }
          ++v14;
          ++v34;
          if ( v14 >= a3 )
            goto LABEL_76;
        }
      }
      else
      {
        v34 = (unsigned __int16 *)(a2 + 2 * v14);
        while ( 1 )
        {
          v35 = *v34;
          if ( (v35 | 1) == 0xF )
            break;
          ++v14;
          ++v34;
          if ( v14 >= a3 )
            goto LABEL_76;
        }
      }
      if ( v35 == 15 )
        break;
      v39 = 0;
      if ( v35 == 14 )
      {
        v33 = (int)v34 + v34[3] + 8;
LABEL_71:
        v39 = v34;
        goto LABEL_73;
      }
      v33 = (int)v34;
LABEL_73:
      if ( v39[1] )
        goto LABEL_74;
      if ( v39[2] )
      {
        if ( v39[2] != 1 )
          goto LABEL_74;
        v15 = (unsigned __int16)v39[4];
        if ( v15 == 0xFFFF )
        {
          v16 = a4;
          v9 = a6;
          if ( !a4 )
          {
            v11 = 0;
            v46 = 0;
            goto LABEL_75;
          }
        }
        else
        {
          v16 = (_WORD *)sub_60986B34(FIELD_U32(a1, 20), v15);
          v9 = a6;
          if ( ((unsigned int)&dword_60CD0BE4 & ~(1620605452 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BE4) )
          {
            if ( ((unsigned int)&dword_60CC7F14 & ~(1620605484 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F14) )
            {
              dword_60CC7F10 = 0;
              _cxa_guard_release(&dword_60CC7F14);
            }
            dword_60CD0BE0 = (int)&dword_60CC7F10;
            _cxa_guard_release(&dword_60CD0BE4);
          }
          if ( !v16 )
            goto LABEL_75;
          v17 = (int *)(**(int (__fastcall ***)(_WORD *))v16)(v16);
          if ( !v17 )
            goto LABEL_75;
          while ( v17 != &dword_60CD0BE0 )
          {
            v17 = (int *)*v17;
            if ( !v17 )
              goto LABEL_75;
          }
        }
        v11 = (*(int (__fastcall **)(_WORD *))(*(_DWORD *)v16 + 16))(v16);
        v46 = v16[19];
      }
      else
      {
        v18 = *(_WORD **)(FIELD_U32(a1, 20) + 40);
        if ( ((unsigned int)&dword_60CD0BE4 & ~(1620605624 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BE4) )
        {
          if ( ((unsigned int)&dword_60CC7F14 & ~(1620605656 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F14) )
          {
            dword_60CC7F10 = 0;
            _cxa_guard_release(&dword_60CC7F14);
          }
          dword_60CD0BE0 = (int)&dword_60CC7F10;
          _cxa_guard_release(&dword_60CD0BE4);
        }
        v20 = v46;
        v6 = v11;
        if ( v18 )
        {
          v21 = (int *)(**(int (__fastcall ***)(_WORD *))v18)(v18);
          v20 = v46;
          v6 = v11;
          if ( v21 )
          {
            do
            {
              if ( v21 == &dword_60CD0BE0 )
              {
                v22 = (*(int (__fastcall **)(_WORD *))(*(_DWORD *)v18 + 16))(v18);
                v20 = v18[19];
                v6 = v22;
                goto LABEL_38;
              }
              v21 = (int *)*v21;
            }
            while ( v21 );
            v20 = v46;
            LOWORD(v6) = v11;
            if ( v11 )
              goto LABEL_39;
LABEL_74:
            v9 = a6;
            goto LABEL_75;
          }
        }
LABEL_38:
        if ( !v6 )
          goto LABEL_74;
LABEL_39:
        v23 = (unsigned __int16)v39[5];
        if ( !(v23 >> 1) )
          goto LABEL_74;
        v24 = v23 >> 1;
        v25 = v39 + 6;
        v9 = a6;
        v41 = v33;
        v26 = 0;
        v43 = v6;
        v42 = v20;
        if ( a6 )
        {
          while ( 1 )
          {
            v27 = *v25;
            if ( v27 >= 0x20 )
            {
              v28 = sub_6099B0F0(FIELD_U32(a1, 24), v27, v6, v20);
              v10 = 0;
              if ( !v28 )
                break;
              v29 = FIELD_U8(v28, 32);
              v30 = (v29 & 2) == 0;
              FIELD_U8(v28, 32) = v29 | 1;
              LOWORD(v6) = v43;
              v20 = v42;
              if ( !v30 )
                break;
            }
            ++v26;
            ++v25;
            if ( v26 >= v24 )
              goto LABEL_50;
          }
          return v10 & 1;
        }
        do
        {
          v31 = *v25;
          if ( v31 >= 0x20 )
          {
            v32 = sub_6099AD8C(FIELD_U32(a1, 24), v31, v6, v42, a5);
            LOWORD(v6) = v43;
            v13 &= v32 ^ 1;
          }
          ++v26;
          ++v25;
        }
        while ( v26 < v24 );
LABEL_50:
        v33 = v41;
      }
LABEL_75:
      v14 = (__int64)((unsigned int)v33 - (unsigned __int64)a2) / 2;
      if ( v14 >= a3 )
      {
LABEL_76:
        if ( (v13 & 1) != 0 )
        {
          v10 = v13;
        }
        else
        {
          v10 = v13;
          if ( !v9 )
          {
            v10 = 0;
            FIELD_U8(a1, 48) = 1;
          }
        }
        return v10 & 1;
      }
    }
    v33 = (int)(v34 + 3);
    goto LABEL_71;
  }
  return v10 & 1;
}
