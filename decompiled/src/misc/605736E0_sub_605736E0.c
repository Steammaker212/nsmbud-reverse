/* sub_605736E0
 * address: 0x605736E0   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605736E0(_DWORD *a1)
{
  int v2; // r5
  int MaskForMovementType; // r0
  StateBase *CurrentState; // r0
  int v5; // r6
  int v6; // r0
  void (__fastcall *v7)(_DWORD *, int *); // r2
  int *v8; // r1
  int v9; // r0
  int v10; // r0
  void (__fastcall *v11)(_DWORD *, int *); // r2
  int *v12; // r1
  _DWORD v14[9]; // [sp+Ch] [bp-24h] BYREF

  v2 = 0;
  if ( sub_605635AC((int)a1, 0, 1) == 1 )
  {
    a1[1718] = 1;
    a1[143] = 0;
    a1[144] = 1090519040;
    a1[145] = 0;
    a1[127] = 1107296256;
    a1[128] = 1107296256;
    a1[125] = 1159479296;
    a1[126] = 1159479296;
    a1[1825] = 9;
    a1[1826] = *((unsigned __int8 *)a1 + 28);
    *((_BYTE *)a1 + 6878) = 1;
    memset(v14, 0, 12);
    MaskForMovementType = MovementHandler__getMaskForMovementType((int)(a1 + 1748), 9u);
    sub_606B0CCC(a1 + 1748, a1 + 27, MaskForMovementType, *((_BYTE *)a1 + 7304), v14, 1);
    MovementHandler__execute((MovementHandler *)(a1 + 1748));
    if ( a1[1760] != 1 || a1[1765] == 1 )
      goto LABEL_17;
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 1521));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 != (*(int (**)(void))(dword_60CAEA80 + 8))() || !a1[1791] )
    {
LABEL_13:
      a1[27] = a1[1748];
      a1[28] = a1[1749];
      if ( (*((_BYTE *)a1 + 23) & 2) != 0 )
        v9 = 0;
      else
        v9 = a1[1768];
      a1[41] = v9;
LABEL_17:
      if ( a1[1795] )
      {
        *((_BYTE *)a1 + 7312) = 0;
      }
      else
      {
        a1[1820] = 1115684864;
        a1[1821] = 1115684864;
        sub_605D0024(a1);
      }
      if ( a1[1791] )
      {
        (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CAEA80);
        return 1;
      }
      v10 = a1[1842];
      if ( v10 == 1 )
      {
        v11 = *(void (__fastcall **)(_DWORD *, int *))(*a1 + 192);
        if ( a1[1714] == 21 )
        {
          v12 = &dword_60CB111C;
LABEL_28:
          v11(a1, v12);
          return 1;
        }
      }
      else
      {
        v11 = *(void (__fastcall **)(_DWORD *, int *))(*a1 + 192);
        if ( v10 == 2 )
        {
          v12 = &dword_60CAE31C;
          goto LABEL_28;
        }
      }
      v12 = &dword_60CAE2F8;
      goto LABEL_28;
    }
    v6 = a1[1842];
    if ( v6 == 1 )
    {
      v7 = *(void (__fastcall **)(_DWORD *, int *))(*a1 + 192);
      if ( a1[1714] == 21 )
      {
        v8 = &dword_60CB111C;
LABEL_12:
        v7(a1, v8);
        goto LABEL_13;
      }
    }
    else
    {
      v7 = *(void (__fastcall **)(_DWORD *, int *))(*a1 + 192);
      if ( v6 == 2 )
      {
        v8 = &dword_60CAE31C;
        goto LABEL_12;
      }
    }
    v8 = &dword_60CAE2F8;
    goto LABEL_12;
  }
  return v2;
}
