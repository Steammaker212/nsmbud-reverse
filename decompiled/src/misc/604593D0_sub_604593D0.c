/* sub_604593D0
 * address: 0x604593D0   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604593D0(int a1, int a2)
{
  char v2; // r12
  int v3; // r6
  int *v4; // r5
  int v5; // r8
  int v6; // r4
  int v7; // r0
  _BOOL4 result; // r0
  int v9; // r5
  int *v10; // r4
  int v11; // r6
  int v12; // r7
  int v13; // r0
  int v14; // r1

  v3 = dword_60CCF448;
  if ( !FIELD_U32(dword_60CCF448, 212) )
    goto LABEL_11;
  v4 = *(int **)(dword_60CCF448 + 220);
  v5 = a2;
  while ( 1 )
  {
    v6 = *v4;
    if ( ((unsigned int)&dword_60C8C224 & ~(1615172676 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v7 = (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C8C220);
    if ( !v6 || v7 != 1 )
      goto LABEL_10;
    if ( !v5 )
      break;
    --v5;
LABEL_10:
    if ( ++v4 == (int *)(FIELD_U32(v3, 220) + 4 * FIELD_U32(v3, 212)) )
      goto LABEL_11;
  }
  v14 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6);
  result = 1;
  if ( !v14 )
  {
LABEL_11:
    result = 0;
    if ( a2 )
      return result;
    v9 = dword_60CCF448;
    if ( !FIELD_U32(dword_60CCF448, 212) )
      return 0;
    v10 = *(int **)(dword_60CCF448 + 220);
    v11 = 4;
    while ( 1 )
    {
      v12 = *v10;
      if ( ((unsigned int)&dword_60C8C224 & ~(1615172908 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
      {
        dword_60C8C220 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C8C224);
      }
      v13 = (**(int (__fastcall ***)(int, int *))v12)(v12, &dword_60C8C220);
      if ( v12 && v13 == 1 )
      {
        if ( !v11 )
          return (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 20))(v12) != 0;
        --v11;
      }
      if ( ++v10 == (int *)(FIELD_U32(v9, 220) + 4 * FIELD_U32(v9, 212)) )
        return 0;
    }
  }
  return result;
}
