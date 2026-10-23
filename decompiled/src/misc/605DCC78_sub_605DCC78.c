/* sub_605DCC78
 * address: 0x605DCC78   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DCC78(int a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r0
  char v7; // r12
  unsigned __int8 v8; // r7
  int result; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r0
  int v15; // r0

  v5 = a1;
  FIELD_U8(a1, 6336) = -1;
  FIELD_U32(a1, 6848) = 1;
  if ( a3 == 1 )
  {
    v6 = FIELD_U32(a1, 556);
  }
  else if ( a3 == 4 )
  {
    if ( a2 )
      v6 = sub_6000ADDC(a1, a2);
    else
      v6 = FIELD_U32(a1, 80);
  }
  else
  {
    if ( a2 )
      a1 = a2;
    v6 = FIELD_U32(a1, 80);
  }
  FIELD_U32(v5, 80) = v6;
  ((void (__fastcall *)(int, int))loc_605DCF40)(v5, a2);
  if ( a2 )
  {
    v8 = FIELD_U8(a2, 84);
    if ( v8 <= 3u )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 68))(v5);
      sub_605DD9D8(v5, (char)v8, 32);
    }
    if ( FIELD_U8(a2, 533) == 1 )
    {
      if ( ((unsigned int)&dword_60C7B374 & ~(1616760144 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B370) == 1 )
        Player_ReleaseCarryableEnemy((_DWORD *)a2, v5);
    }
    FIELD_F32(v5, 636) = sub_6075F8F8(a2);
  }
  sub_605DAD24(v5, 1);
  result = FIELD_U8(v5, 6805);
  if ( (result & 8) != 0 )
    JUMPOUT(0x605E6350);
  switch ( a3 )
  {
    case 0:
      v10 = sub_605D792C(v5, FIELD_U32(v5, 80));
      FIELD_U32(v5, 156) = 0;
      FIELD_U32(v5, 160) = v10;
      FIELD_U32(v5, 164) = 0;
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 384))(v5);
      break;
    case 1:
      v11 = *(_DWORD *)v5;
      v12 = 3;
      goto LABEL_26;
    case 2:
      v13 = sub_605D792C(v5, FIELD_U32(v5, 80));
      FIELD_U32(v5, 156) = 0;
      FIELD_U32(v5, 160) = v13;
      FIELD_U32(v5, 164) = 0;
      v12 = 4;
      v11 = *(_DWORD *)v5;
LABEL_26:
      result = (*(int (__fastcall **)(int, int, int))(v11 + 380))(v5, v12, a2);
      break;
    case 3:
      v14 = sub_605D792C(v5, FIELD_U32(v5, 80));
      FIELD_U32(v5, 156) = 0;
      FIELD_U32(v5, 160) = v14;
      FIELD_U32(v5, 164) = 0;
      result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 388))(v5, a2);
      break;
    case 4:
      v15 = sub_605D792C(v5, FIELD_U32(v5, 80));
      FIELD_U32(v5, 156) = 0;
      FIELD_U32(v5, 160) = v15;
      FIELD_U32(v5, 164) = 0;
      result = sub_605D9504(v5, 0, 0.0, 1.0);
      break;
    default:
      return result;
  }
  return result;
}
