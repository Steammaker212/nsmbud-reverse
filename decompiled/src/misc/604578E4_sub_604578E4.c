/* sub_604578E4
 * address: 0x604578E4   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604578E4(int a1)
{
  int v2; // r0
  char v3; // r12
  int v4; // r4
  int v5; // r6
  int *v6; // r5
  int v7; // r9
  int v8; // r0
  int result; // r0

  v2 = sub_608EF75C(a1);
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(v2 + 32) + 28))(FIELD_U32(v2, 32), 1);
  v4 = 0;
  v5 = dword_60CCF448;
  if ( FIELD_U32(dword_60CCF448, 212) )
  {
    v6 = *(int **)(dword_60CCF448 + 220);
    v7 = FIELD_U32(a1, 232);
    do
    {
      v4 = *v6;
      if ( ((unsigned int)&dword_60C9CF14 & ~(1615165820 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CF14) )
      {
        dword_60C9CF10 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C9CF14);
      }
      v8 = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C9CF10);
      if ( v4 && v8 == 1 )
      {
        if ( !v7 )
          goto LABEL_12;
        --v7;
      }
      ++v6;
    }
    while ( v6 != (int *)(FIELD_U32(v5, 220) + 4 * FIELD_U32(v5, 212)) );
    v4 = 0;
  }
LABEL_12:
  result = sub_60457E54(v4, FIELD_U32(v4, 356));
  FIELD_U32(a1, 236) = 0;
  return result;
}
