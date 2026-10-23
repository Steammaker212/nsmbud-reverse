/* sub_6033048C
 * address: 0x6033048C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6033048C(int a1, int a2)
{
  _BOOL4 v4; // r5
  char v5; // r8
  char v6; // r12
  int v7; // r6
  int v8; // r7
  int result; // r0
  _DWORD v10[5]; // [sp+0h] [bp-38h] BYREF
  char v11; // [sp+14h] [bp-24h]
  _BOOL4 v12; // [sp+18h] [bp-20h]
  char v13; // [sp+1Ch] [bp-1Ch]

  v4 = sub_6000ADDC(a1, a2);
  v5 = FIELD_U8(a2, 84);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613956280 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  v7 = a2 + 1313;
  v8 = (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B378);
  memset(v10, 0, 12);
  v10[3] = -1103101952;
  v10[4] = &unk_60C93E60;
  v11 = -1;
  v12 = v4;
  v13 = v5;
  sub_602A852C(a1 + 6104, v10);
  if ( !v8 )
    v7 = 1313;
  result = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 204))(a1, *(char *)v7 - 1);
  if ( result == 1 )
    return SE_SYS_NICE_S_ref();
  return result;
}
