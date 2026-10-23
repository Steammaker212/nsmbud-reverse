/* sub_60120C5C
 * address: 0x60120C5C   size: 936   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60120C5C(int *a1)
{
  _BYTE *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r5
  int (__fastcall ***v7)(_DWORD, int *); // r5
  char v8; // r12
  int v9; // r6
  int v10; // r0
  StateBase *CurrentState; // r0
  int v12; // r5
  StateBase *v13; // r0
  int v14; // r5
  int v15; // r0
  int v16; // r5
  char v17; // r1
  int v18; // r0
  unsigned int v19; // r2
  int v20; // r1
  int result; // r0

  a1[2247] = a1[27];
  a1[2248] = a1[28];
  a1[2249] = a1[29];
  if ( !*((_BYTE *)a1 + 9322) && (*(int (__fastcall **)(int *))(*a1 + 628))(a1) )
  {
    v2 = a1 + 2317;
    v3 = (*(int (__fastcall **)(int *))(*a1 + 628))(a1);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 724))(v3) == 1 )
    {
      *v2 = 1;
      if ( !*((_BYTE *)a1 + 9327) )
      {
        v4 = *a1;
        v5 = 1;
LABEL_8:
        (*(void (__fastcall **)(int *, int))(v4 + 780))(a1, v5);
      }
    }
    else
    {
      *v2 = 0;
      if ( !*((_BYTE *)a1 + 9327) )
      {
        v4 = *a1;
        v5 = 0;
        goto LABEL_8;
      }
    }
    *((_WORD *)a1 + 3139) = 120;
  }
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a1[1524] + 8))(a1[1524]);
  if ( v6 != (*(int (**)(void))(dword_60C86C04 + 8))() && (*(int (__fastcall **)(int *))(*a1 + 628))(a1) )
  {
    v7 = (int (__fastcall ***)(_DWORD, int *))(*(int (__fastcall **)(int *))(*a1 + 628))(a1);
    if ( ((unsigned int)&dword_60C86B28 & ~(1611795884 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B28) )
    {
      dword_60C86B24 = (int)&off_60BC2CB4;
      _cxa_guard_release(&dword_60C86B28);
    }
    if ( v7 )
    {
      v9 = (**v7)(v7, &dword_60C86B24);
      if ( v9 )
        v9 = (int)v7;
    }
    else
    {
      v9 = 0;
    }
    v10 = (*(int (__fastcall **)(int *))(*a1 + 628))(a1);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v10 + 6084));
    v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v12 != (*(int (**)(void))(dword_60C86C24 + 8))() )
    {
      v13 = StateMgr__getCurrentState((StateMgr *)(v9 + 6084));
      v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
      if ( v14 != (*(int (**)(void))(dword_60C869A4 + 8))() )
      {
        v15 = (*(int (__fastcall **)(int *))(*a1 + 628))(a1);
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v15 + 192))(v15, &dword_60C84148);
      }
    }
  }
  if ( *((_BYTE *)a1 + 9323) )
  {
    *((_BYTE *)a1 + 9323) = 0;
    switch ( a1[2334] )
    {
      case 0:
        a1[2225] = 0x80000000;
        goto LABEL_32;
      case 1:
        a1[2225] = 0x80000000;
        goto LABEL_34;
      case 2:
        a1[2225] = -65536;
LABEL_32:
        v20 = 0x40000000;
        goto LABEL_35;
      case 3:
        a1[2225] = -65536;
LABEL_34:
        v20 = -1073741824;
LABEL_35:
        a1[2227] = v20;
        break;
      default:
        break;
    }
  }
  else
  {
    v16 = (*(int (__fastcall **)(int))(*(_DWORD *)a1[1524] + 8))(a1[1524]);
    if ( v16 == (*(int (**)(void))(dword_60C86C04 + 8))() )
    {
      v17 = 1;
      v18 = 0x40000000;
      v19 = 0x80000000;
    }
    else
    {
      v19 = a1[2226];
      v18 = a1[2228];
      v17 = 0;
    }
    a1[2225] = v19;
    a1[2227] = v18;
    *((_BYTE *)a1 + 9317) = v17;
  }
  result = 0;
  a1[25] = 0;
  a1[2335] = 0;
  *((_BYTE *)a1 + 9321) = 0;
  if ( !a1[1738] )
    a1[1738] = 120;
  *((_BYTE *)a1 + 9242) = 0;
  return result;
}
