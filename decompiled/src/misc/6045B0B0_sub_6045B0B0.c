/* sub_6045B0B0
 * address: 0x6045B0B0   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6045B0B0(int a1, int a2, int a3)
{
  char v3; // r12
  int v4; // r6
  int v5; // r10
  int *v6; // r8
  int v7; // r5
  int v8; // r0
  int v9; // r6
  int *v10; // r4
  int v11; // r7
  int v12; // r0
  int v15; // [sp+4h] [bp-34h]

  v4 = dword_60CCF448;
  if ( FIELD_U32(dword_60CCF448, 212) )
  {
    v15 = a1;
    v5 = a2;
    v6 = *(int **)(dword_60CCF448 + 220);
    do
    {
      v7 = *v6;
      if ( ((unsigned int)&dword_60C8C224 & ~(1615180076 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
      {
        dword_60C8C220 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C8C224);
      }
      v8 = (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C8C220);
      if ( v7 && v8 == 1 )
      {
        if ( !v5 )
          goto LABEL_12;
        --v5;
      }
      ++v6;
    }
    while ( v6 != (int *)(FIELD_U32(v4, 220) + 4 * FIELD_U32(v4, 212)) );
    v7 = 0;
LABEL_12:
    a1 = v15;
    if ( a2 )
      goto LABEL_27;
  }
  else
  {
    v7 = 0;
    if ( a2 )
      goto LABEL_27;
  }
  if ( FIELD_U8(a1, 81) )
  {
    v9 = dword_60CCF448;
    if ( FIELD_U32(dword_60CCF448, 212) )
    {
      v10 = *(int **)(dword_60CCF448 + 220);
      v11 = 4;
      do
      {
        v7 = *v10;
        if ( ((unsigned int)&dword_60C8C224 & ~(1615180340 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
        {
          dword_60C8C220 = (int)&off_60BD84A8;
          _cxa_guard_release(&dword_60C8C224);
        }
        v12 = (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C8C220);
        if ( v7 && v12 == 1 )
        {
          if ( !v11 )
            goto LABEL_27;
          --v11;
        }
        ++v10;
      }
      while ( v10 != (int *)(FIELD_U32(v9, 220) + 4 * FIELD_U32(v9, 212)) );
    }
    return 0;
  }
LABEL_27:
  if ( v7 && (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7) == 1 )
    return (unsigned int)sub_609094B8(v7, a3) > 0xB4;
  return 0;
}
