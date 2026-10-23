/* sub_601FF05C
 * address: 0x601FF05C   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FF05C(int a1, char a2)
{
  char v2; // r12
  int *v4; // r0
  int v5; // r5
  int v6; // r7
  char v7; // r12
  int *v8; // r0
  int v9; // r5
  int v10; // r6
  char v11; // r12
  int *v12; // r0
  int v13; // r5
  int v14; // r6
  int result; // r0

  v4 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 5u )
    v4 += 5;
  v5 = *v4;
  if ( ((unsigned int)&dword_60C8C214 & ~(1612705940 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C214) )
  {
    dword_60C8C210 = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C8C214);
  }
  v6 = v5 + 5448;
  if ( !(*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 8))(v5, &dword_60C8C210) )
    v6 = 5448;
  *(_BYTE *)v6 = a2;
  v8 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 3u )
    v8 += 3;
  v9 = *v8;
  if ( ((unsigned int)&dword_60C8C21C & ~(1612706092 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C21C) )
  {
    dword_60C8C218 = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C8C21C);
  }
  v10 = v9 + 1708;
  if ( !(*(int (__fastcall **)(int, int *))(*(_DWORD *)v9 + 8))(v9, &dword_60C8C218) )
    v10 = 1708;
  *(_BYTE *)v10 = a2;
  v12 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 7u )
    v12 += 7;
  v13 = *v12;
  if ( ((unsigned int)&dword_60C81740 & ~(1612706240 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  v14 = v13 + 496;
  result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v13 + 8))(v13, &dword_60C8173C);
  if ( !result )
    v14 = 496;
  *(_BYTE *)v14 = a2;
  return result;
}
