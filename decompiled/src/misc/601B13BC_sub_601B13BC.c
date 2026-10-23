/* sub_601B13BC
 * address: 0x601B13BC   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601B13BC(int a1, int a2)
{
  int v2; // r0
  int v3; // r4
  char v4; // r12
  int v5; // r4
  char v6; // r12
  char v7; // r12
  int a5; // [sp+0h] [bp-20h] BYREF
  int v9; // [sp+4h] [bp-1Ch]
  int v10; // [sp+8h] [bp-18h]
  int v11; // [sp+Ch] [bp-14h] BYREF
  int v12; // [sp+10h] [bp-10h]
  int v13; // [sp+14h] [bp-Ch]

  v2 = sub_6018691C(a2);
  switch ( v2 )
  {
    case 3:
      v5 = *(_DWORD *)sub_601693A0(898);
      if ( ((unsigned int)&dword_60C8A8C8 & ~(1612387544 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C8A8C8) )
      {
        dword_60C8A8C4 = (int)&off_60BD4EC8;
        _cxa_guard_release(&dword_60C8A8C8);
      }
      if ( v5
        && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C8A8C4) == 1
        && !(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 116))(v5) )
      {
        StateMgr__changeState((StateMgr *)(v5 + 284), &stru_60C8CCAC);
      }
      break;
    case 2:
      v11 = 3;
      v12 = 0;
      v13 = 0;
      a5 = -1;
      v9 = -1;
      v10 = -1;
      sub_6021F6E0(dword_60C8D4EC, &a5, &v11, 1);
      v3 = sub_60169A30(&a5);
      if ( ((unsigned int)dword_60C8A890 & ~(1612387788 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60C8A890) )
      {
        dword_60C8A88C = (int)&off_60BD4EC8;
        _cxa_guard_release(dword_60C8A890);
      }
      if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C8A88C) == 1 )
        goto LABEL_22;
      break;
    case 1:
      v11 = 3;
      v12 = 0;
      v13 = 0;
      a5 = -1;
      v9 = -1;
      v10 = -1;
      sub_6021F6E0(dword_60C8D4EC, &a5, &v11, 2);
      v3 = sub_60169A30(&a5);
      if ( ((unsigned int)dword_60C8A890 & ~(1612387396 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C8A890) )
      {
        dword_60C8A88C = (int)&off_60BD4EC8;
        _cxa_guard_release(dword_60C8A890);
      }
      if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C8A88C) == 1 )
LABEL_22:
        StateMgr__changeState((StateMgr *)(v3 + 284), (StateBase *)&unk_60C8A78C);
      break;
  }
}
