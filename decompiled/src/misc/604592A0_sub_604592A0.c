/* sub_604592A0
 * address: 0x604592A0   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604592A0(int a1, int a2)
{
  char v2; // r12
  int v4; // r5
  int *v5; // r7
  int v6; // r6
  int v7; // r0

  v4 = dword_60CCF448;
  if ( !FIELD_U32(dword_60CCF448, 212) )
    return 0;
  v5 = *(int **)(dword_60CCF448 + 220);
  while ( 1 )
  {
    v6 = *v5;
    if ( ((unsigned int)&dword_60C8C224 & ~(1615172368 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v7 = (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C8C220);
    if ( !v6 || v7 != 1 )
      goto LABEL_10;
    if ( !a2 )
      return (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6) != 0;
    --a2;
LABEL_10:
    if ( ++v5 == (int *)(FIELD_U32(v4, 220) + 4 * FIELD_U32(v4, 212)) )
      return 0;
  }
}
