/* sub_60459718
 * address: 0x60459718   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60459718(__guard *a1, int a2)
{
  char v2; // r12
  int v3; // r5
  int v4; // r9
  unsigned __int8 **v5; // r7
  unsigned __int8 *v6; // r4
  int v7; // r0
  int v8; // r10
  int v9; // r6
  unsigned __int8 **v10; // r5
  int v11; // r7
  int v12; // r0
  __guard *v15; // [sp+8h] [bp-30h]

  v3 = dword_60CCF448;
  if ( FIELD_U32(dword_60CCF448, 212) )
  {
    v15 = a1;
    v4 = a2;
    v5 = *(unsigned __int8 ***)(dword_60CCF448 + 220);
    do
    {
      v6 = *v5;
      if ( ((unsigned int)&dword_60C8C224 & ~(1615173520 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
      {
        dword_60C8C220 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C8C224);
      }
      v7 = (**(int (__fastcall ***)(unsigned __int8 *, int *))v6)(v6, &dword_60C8C220);
      if ( v6 && v7 == 1 )
      {
        if ( !v4 )
          goto LABEL_12;
        --v4;
      }
      ++v5;
    }
    while ( v5 != (unsigned __int8 **)(FIELD_U32(v3, 220) + 4 * FIELD_U32(v3, 212)) );
    v6 = 0;
LABEL_12:
    a1 = v15;
    if ( a2 )
      goto LABEL_27;
  }
  else
  {
    v6 = 0;
    if ( a2 )
    {
LABEL_27:
      v8 = 0;
      if ( v6 && (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v6 + 20))(v6) == 1 )
        return (unsigned int)v6[353] - 3 < 2;
      return v8;
    }
  }
  if ( !*((_BYTE *)a1 + 81) )
    goto LABEL_27;
  v8 = 0;
  v9 = dword_60CCF448;
  if ( FIELD_U32(dword_60CCF448, 212) )
  {
    v10 = *(unsigned __int8 ***)(dword_60CCF448 + 220);
    v11 = 4;
    do
    {
      v6 = *v10;
      if ( ((unsigned int)&dword_60C8C224 & ~(1615173792 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
      {
        dword_60C8C220 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C8C224);
      }
      v12 = (**(int (__fastcall ***)(unsigned __int8 *, int *))v6)(v6, &dword_60C8C220);
      if ( v6 && v12 == 1 )
      {
        if ( !v11 )
          goto LABEL_27;
        --v11;
      }
      ++v10;
    }
    while ( v10 != (unsigned __int8 **)(FIELD_U32(v9, 220) + 4 * FIELD_U32(v9, 212)) );
  }
  return v8;
}
