/* sub_6050103C
 * address: 0x6050103C   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050103C(int a1)
{
  char v1; // r12
  int result; // r0
  int v3; // r9
  int v4; // r8
  int *v5; // r10
  int v6; // r6
  int v7; // r4
  int v8; // r0

  result = FIELD_U8(a1, 7748);
  if ( result )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = dword_60CCF448;
      if ( !FIELD_U32(dword_60CCF448, 212) )
        goto LABEL_16;
      v5 = *(int **)(dword_60CCF448 + 220);
      v6 = v3;
      while ( 1 )
      {
        v7 = *v5;
        if ( ((unsigned int)&dword_60C8C224 & ~(1615859920 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
        {
          dword_60C8C220 = (int)&off_60BD84A8;
          _cxa_guard_release(&dword_60C8C224);
        }
        v8 = (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C8C220);
        if ( !v7 || v8 != 1 )
          goto LABEL_12;
        if ( !v6 )
          break;
        --v6;
LABEL_12:
        if ( ++v5 == (int *)(FIELD_U32(v4, 220) + 4 * FIELD_U32(v4, 212)) )
          goto LABEL_16;
      }
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7) == 1 )
        *(_DWORD *)(a1 + 4 * v3 + 7724) = *(_DWORD *)(a1 + 404 * v3 + 5704) & 0x20C0;
LABEL_16:
      if ( ++v3 == 5 )
      {
        StateMgr__execute((StateMgr *)(a1 + 24));
        sub_6050229C(a1 + 3588);
        return sub_60473B58((_DWORD *)(a1 + 40), 0x11u, 0);
      }
    }
  }
  return result;
}
