/* sub_601FF340
 * address: 0x601FF340   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FF340(int a1, unsigned int a2)
{
  char v2; // r12
  int v3; // r7
  int *v4; // r6
  int v5; // r4
  int v6; // r0
  bool v7; // zf
  unsigned int v8; // r2

  v3 = dword_60CCF448;
  if ( !FIELD_U32(dword_60CCF448, 212) )
    return a1 + 2788;
  v4 = *(int **)(dword_60CCF448 + 220);
  while ( 1 )
  {
    v5 = *v4;
    if ( ((unsigned int)&dword_60C8C224 & ~(1612706736 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v6 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C8C220);
    v7 = v5 == 0;
    if ( v5 )
      v7 = (v6 ^ 1) == 1;
    if ( !v7 )
      break;
    if ( ++v4 == (int *)(FIELD_U32(v3, 220) + 4 * FIELD_U32(v3, 212)) )
      return a1 + 2788;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5) != 1 )
    return a1 + 2788;
  v8 = a2;
  if ( a2 >= 4 )
    v8 = 0;
  return a1 + 404 * v8 + 1172;
}
