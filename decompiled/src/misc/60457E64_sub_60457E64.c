/* sub_60457E64
 * address: 0x60457E64   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60457E64(int a1)
{
  char v1; // r12
  int v3; // r5
  char v4; // r0
  int v5; // r4
  int *i; // r7
  int v7; // r6
  int v8; // r0
  int v9; // r4
  int (__fastcall ****v10)(_DWORD, int *); // r5
  int v11; // r7
  int (__fastcall ***v12)(_DWORD, int *); // r6
  int v13; // r0

  FIELD_U32(a1, 272) = 0;
  v3 = FIELD_U32(a1, 360);
  if ( (v3 | 4) == 4 )
  {
    v4 = 1;
  }
  else
  {
    v5 = dword_60CCF448;
    if ( FIELD_U32(dword_60CCF448, 212) )
    {
      for ( i = *(int **)(dword_60CCF448 + 220); i != (int *)(FIELD_U32(v5, 220) + 4 * FIELD_U32(v5, 212)); ++i )
      {
        v7 = *i;
        if ( ((unsigned int)&dword_60C8C224 & ~(1615167224 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
        {
          dword_60C8C220 = (int)&off_60BD84A8;
          _cxa_guard_release(&dword_60C8C224);
        }
        v8 = (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C8C220);
        if ( v7 && v8 == 1 )
        {
          if ( !v3 )
          {
            v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7);
            goto LABEL_15;
          }
          --v3;
        }
      }
    }
    v4 = 0;
  }
LABEL_15:
  FIELD_U8(a1, 348) = v4;
  FIELD_U32(a1, 356) = 0;
  FIELD_U32(a1, 388) = FIELD_U32(a1, 376);
  FIELD_U32(a1, 392) = FIELD_U32(a1, 380);
  FIELD_U32(a1, 396) = FIELD_U32(a1, 384);
  FIELD_U32(a1, 272) = 0;
  FIELD_U8(a1, 448) = 0;
  v9 = dword_60CCF448;
  if ( !FIELD_U32(dword_60CCF448, 212) )
    goto LABEL_27;
  v10 = *(int (__fastcall *****)(_DWORD, int *))(dword_60CCF448 + 220);
  v11 = FIELD_U32(a1, 360);
  while ( 1 )
  {
    v12 = *v10;
    if ( ((unsigned int)&dword_60C8C224 & ~(1615167512 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v13 = (**v12)(v12, &dword_60C8C220);
    if ( v12 && v13 == 1 )
    {
      if ( !v11 )
      {
        sub_604580E0(a1, v12);
LABEL_27:
        JUMPOUT(0x604587EC);
      }
      --v11;
    }
    if ( ++v10 == (int (__fastcall ****)(_DWORD, int *))(FIELD_U32(v9, 220) + 4 * FIELD_U32(v9, 212)) )
      goto LABEL_27;
  }
}
