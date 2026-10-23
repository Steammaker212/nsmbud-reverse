/* sub_601B32F0
 * address: 0x601B32F0   size: 1820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B32F0(_DWORD *a1)
{
  int *v2; // r9
  int v3; // r4
  _DWORD *v4; // r7
  int v5; // r4
  int v6; // r6
  char v7; // r12
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r1
  bool v13; // zf
  int v14; // r0
  int *v15; // r7
  char v16; // r12
  int *v17; // r8
  int v18; // r4
  bool v19; // zf
  int *v20; // r4
  char v21; // r12
  int *v22; // r5
  int v23; // r7
  int v24; // r0
  bool v25; // zf
  int v26; // r0
  int v27; // r1
  int v28; // r1
  int v29; // r0
  int v30; // r7
  char v31; // r12
  int v32; // r11
  int v33; // r5
  int v34; // r0
  int (__fastcall ***v35)(_DWORD, int *); // r4
  char v36; // r12
  int v37; // r5
  int v38; // r0
  int result; // r0
  int v40; // [sp+18h] [bp-80h] BYREF
  int v41; // [sp+1Ch] [bp-7Ch] BYREF
  int v42[30]; // [sp+20h] [bp-78h] BYREF

  v2 = a1 + 258;
  v3 = sub_601DFFE4(a1 + 258);
  v42[0] = 0;
  memset(&v42[2], 0, 72);
  sub_601905DC(v42);
  v4 = (_DWORD *)(v3 + 4);
  v41 = a1[258];
  v40 = sub_6040D864(v3 + 4);
  v5 = sub_6019A120(v40);
  v6 = sub_60169544(v4);
  if ( ((unsigned int)&dword_60C88AA0 & ~(1612395372 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
  {
    dword_60C88A9C = (int)&off_60BD4BB0;
    _cxa_guard_release(&dword_60C88AA0);
  }
  if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C88A9C) == 1 )
  {
    switch ( v5 )
    {
      case 1:
        v8 = sub_6019AF60(FIELD_U32(v6, 240), FIELD_U32(v6, 252));
        v9 = 23;
        if ( v8 )
          v9 = 24;
        v42[0] = v9;
        v42[3] = FIELD_U32(v6, 8);
        v10 = FIELD_U32(v6, 256);
        if ( v10 )
          v42[4] = FIELD_U32(v10, 8);
        break;
      case 2:
        if ( sub_6019AF60(FIELD_U32(v6, 240), FIELD_U32(v6, 252)) == 1 )
        {
          v42[0] = 9;
          goto LABEL_81;
        }
        v42[0] = 7;
        if ( sub_6019B154(FIELD_U32(v6, 240), FIELD_U32(v6, 252)) )
          goto LABEL_81;
        v30 = sub_601693A0(885);
        v32 = FIELD_U32(ActorMgr__instance, 27180);
        do
        {
          v33 = *(_DWORD *)v30;
          if ( ((unsigned int)&dword_60C88AA0 & ~(1612396584 << v31) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
          {
            dword_60C88A9C = (int)&off_60BD4BB0;
            _cxa_guard_release(&dword_60C88AA0);
          }
          if ( v33
            && (**(int (__fastcall ***)(int, int *))v33)(v33, &dword_60C88A9C) == 1
            && FIELD_U32(v33, 240) == *v2
            && FIELD_U32(v33, 248) == a1[260] )
          {
            v38 = *(_DWORD *)(*(_DWORD *)v30 + 8);
            goto LABEL_80;
          }
          if ( v30 == v32 )
            break;
          v30 = sub_601693C0(885, v30 + 4);
        }
        while ( v30 != v32 );
        goto LABEL_81;
      case 3:
        v26 = sub_6019AF60(FIELD_U32(v6, 240), FIELD_U32(v6, 252));
        v27 = 8;
        if ( v26 )
          v27 = 9;
        v42[0] = v27;
        goto LABEL_81;
      case 7:
        v28 = FIELD_U32(v6, 252);
        v29 = FIELD_U32(v6, 240);
        if ( v28 == 41 )
        {
          if ( sub_6019B154(v29, 0x29u) != 1 )
          {
            v42[0] = 67;
            goto LABEL_81;
          }
          goto LABEL_72;
        }
        if ( sub_6019AF60(v29, v28) == 1 )
        {
LABEL_72:
          v42[0] = 68;
          goto LABEL_81;
        }
        v42[0] = 67;
        v35 = *(int (__fastcall ****)(_DWORD, int *))sub_601693A0(906);
        if ( ((unsigned int)dword_60C89C94 & ~(1612396804 << v36) & 1) == 0 && _cxa_guard_acquire(dword_60C89C94) )
        {
          dword_60C89C90 = (int)&off_60BD4BA4;
          _cxa_guard_release(dword_60C89C94);
        }
        v37 = (int)(v35 + 2);
        if ( !(**v35)(v35, &dword_60C89C90) )
          v37 = 8;
        v38 = *(_DWORD *)v37;
LABEL_80:
        v42[4] = v38;
LABEL_81:
        v42[3] = FIELD_U32(v6, 8);
        break;
      default:
        break;
    }
  }
  else
  {
    v11 = *v2;
    if ( *v2 != 4 )
      goto LABEL_16;
    v12 = a1[259];
    v13 = v12 == 1;
    if ( v12 == 1 )
      v13 = a1[260] == 16;
    if ( v13 )
    {
      v15 = (int *)sub_601693A0(883);
      v17 = *(int **)(ActorMgr__instance + 27180);
      while ( 1 )
      {
        v18 = *v15;
        if ( ((unsigned int)&dword_60C88AA0 & ~(1612395844 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
        {
          dword_60C88A9C = (int)&off_60BD4BB0;
          _cxa_guard_release(&dword_60C88AA0);
        }
        if ( v18
          && (**(int (__fastcall ***)(int, int *))v18)(v18, &dword_60C88A9C) == 1
          && FIELD_U32(v18, 240) == *v2
          && FIELD_U32(v18, 248) == a1[260] )
        {
          break;
        }
        if ( v15 != v17 )
        {
          v15 = (int *)sub_601693C0(883, (int)(v15 + 1));
          if ( v15 != v17 )
            continue;
        }
        goto LABEL_84;
      }
      v34 = *v15;
LABEL_83:
      v42[4] = FIELD_U32(v34, 8);
    }
    else
    {
LABEL_16:
      switch ( v5 )
      {
        case 0:
        case 5:
        case 8:
          if ( v11 == 8 && !sub_6022C144(dword_60C8D864, v4) )
            goto LABEL_47;
          goto LABEL_19;
        case 4:
          if ( sub_6019B154(v11, v40) )
          {
LABEL_47:
            v14 = 0;
            goto LABEL_85;
          }
          v42[0] = 1;
          sub_601E1A20(v2, &v41, &v40);
          goto LABEL_86;
        default:
          v19 = v5 == 1;
          if ( v5 == 1 )
            v19 = v11 == 2;
          if ( !v19 )
          {
            if ( sub_6040E404((unsigned __int8)v40) == 1 )
            {
LABEL_19:
              v14 = 1;
              goto LABEL_85;
            }
            goto LABEL_86;
          }
          v20 = (int *)sub_601693A0(883);
          v22 = *(int **)(ActorMgr__instance + 27180);
          do
          {
            v23 = *v20;
            if ( ((unsigned int)&dword_60C88AA0 & ~(1612396128 << v21) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
            {
              dword_60C88A9C = (int)&off_60BD4BB0;
              _cxa_guard_release(&dword_60C88AA0);
            }
            if ( v23 )
            {
              v24 = (**(int (__fastcall ***)(int, int *))v23)(v23, &dword_60C88A9C);
              v25 = v24 == 1;
              if ( v24 == 1 )
                v25 = FIELD_U32(v23, 240) == 2;
              if ( v25 )
              {
                v34 = *v20;
                goto LABEL_83;
              }
            }
            if ( v20 == v22 )
              break;
            v20 = (int *)sub_601693C0(883, (int)(v20 + 1));
          }
          while ( v20 != v22 );
          break;
      }
    }
LABEL_84:
    v14 = 27;
LABEL_85:
    v42[0] = v14;
  }
LABEL_86:
  result = v42[0];
  if ( v42[0] )
  {
    FIELD_U32(dword_60CC6D78, 32) = 1;
    sub_601D99F8(a1, v41, v40);
    sub_601721FC(dword_60C88BC8);
    v42[1] = sub_601916C8(dword_60C8996C, v42[0]);
    return sub_60191160((_DWORD *)dword_60C8996C, v42);
  }
  return result;
}
