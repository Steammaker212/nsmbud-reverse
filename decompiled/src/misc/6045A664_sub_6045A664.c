/* sub_6045A664
 * address: 0x6045A664   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6045A664(int a1, int a2)
{
  char v2; // r12
  int v4; // r6
  _BOOL4 result; // r0
  int *v6; // r4
  int v7; // r7
  int v8; // r0
  int v9; // r0
  bool v10; // zf
  int v11; // r2

  v4 = dword_60CCF448;
  result = 0;
  if ( !FIELD_U32(dword_60CCF448, 212) )
    return result;
  v6 = *(int **)(dword_60CCF448 + 220);
  while ( 1 )
  {
    v7 = *v6;
    if ( ((unsigned int)&dword_60C8C224 & ~(1615177432 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v8 = (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C8C220);
    if ( !v7 || v8 != 1 )
      goto LABEL_10;
    if ( !a2 )
      break;
    --a2;
LABEL_10:
    if ( ++v6 == (int *)(FIELD_U32(v4, 220) + 4 * FIELD_U32(v4, 212)) )
      return 0;
  }
  v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7);
  v10 = v9 == 1;
  if ( v9 == 1 )
    v10 = FIELD_U8(v7, 353) == 0;
  if ( !v10 )
    return 0;
  v11 = FIELD_U32(v7, 4);
  if ( (v11 & 0xFF000C0) != 0 )
    return 0;
  return (v11 & 0xFFFFFFF) != 0;
}
