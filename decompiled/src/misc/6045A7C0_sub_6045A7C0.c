/* sub_6045A7C0
 * address: 0x6045A7C0   size: 1432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045A7C0(int a1, int a2)
{
  char v2; // r12
  int v3; // r2
  int v4; // r4
  int v5; // r3
  int v6; // r7
  int v7; // r6
  int v8; // r0
  int *v9; // r5
  int v10; // r11
  int v11; // r0
  int v12; // r5
  int v13; // r8
  int v14; // r10
  int v15; // r4
  int *v16; // r6
  int v17; // r7
  int v18; // r0
  int v19; // r4
  int *v20; // r6
  int v21; // r7
  int v22; // r0
  int v23; // r4
  int *v24; // r6
  int v25; // r9
  int v26; // r0
  int v27; // r6
  int (__fastcall ****v28)(_DWORD, int *); // r4
  int v29; // r7
  int (__fastcall ***v30)(_DWORD, int *); // r9
  int v31; // r0
  int v33; // [sp+Ch] [bp-3Ch]
  int v34; // [sp+10h] [bp-38h]

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = dword_60CCF448;
  v8 = 0;
  if ( !FIELD_U32(dword_60CCF448, 212) )
    goto LABEL_67;
  v33 = a2;
  v9 = *(int **)(dword_60CCF448 + 220);
  while ( 1 )
  {
    v10 = *v9;
    if ( ((unsigned int)&dword_60C8C224 & ~(1615177792 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v11 = (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C8C220);
    if ( v10 )
    {
      if ( v11 == 1 )
        break;
    }
    if ( ++v9 == (int *)(FIELD_U32(v7, 220) + 4 * FIELD_U32(v7, 212)) )
    {
      v10 = 0;
      break;
    }
  }
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = dword_60CCF448;
  v34 = 0;
  if ( FIELD_U32(dword_60CCF448, 212) )
  {
    v16 = *(int **)(dword_60CCF448 + 220);
    v17 = 1;
    do
    {
      v13 = *v16;
      if ( ((unsigned int)&dword_60C8C224 & ~(1615178020 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
      {
        dword_60C8C220 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C8C224);
      }
      v18 = (**(int (__fastcall ***)(int, int *))v13)(v13, &dword_60C8C220);
      if ( v13 && v18 == 1 )
      {
        if ( !v17 )
          goto LABEL_21;
        --v17;
      }
      ++v16;
    }
    while ( v16 != (int *)(FIELD_U32(v15, 220) + 4 * FIELD_U32(v15, 212)) );
    v13 = 0;
LABEL_21:
    v19 = dword_60CCF448;
    if ( !FIELD_U32(dword_60CCF448, 212) )
    {
      v12 = 0;
      v14 = 0;
      if ( !v10 )
        goto LABEL_59;
      goto LABEL_58;
    }
    v20 = *(int **)(dword_60CCF448 + 220);
    v21 = 2;
    do
    {
      v14 = *v20;
      if ( ((unsigned int)&dword_60C8C224 & ~(1615178248 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
      {
        dword_60C8C220 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C8C224);
      }
      v22 = (**(int (__fastcall ***)(int, int *))v14)(v14, &dword_60C8C220);
      if ( v14 && v22 == 1 )
      {
        if ( !v21 )
          goto LABEL_32;
        --v21;
      }
      ++v20;
    }
    while ( v20 != (int *)(FIELD_U32(v19, 220) + 4 * FIELD_U32(v19, 212)) );
    v14 = 0;
LABEL_32:
    v23 = dword_60CCF448;
    if ( FIELD_U32(dword_60CCF448, 212) )
    {
      v24 = *(int **)(dword_60CCF448 + 220);
      v25 = 3;
      do
      {
        v12 = *v24;
        if ( ((unsigned int)&dword_60C8C224 & ~(1615178484 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
        {
          dword_60C8C220 = (int)&off_60BD84A8;
          _cxa_guard_release(&dword_60C8C224);
        }
        v26 = (**(int (__fastcall ***)(int, int *))v12)(v12, &dword_60C8C220);
        if ( v12 && v26 == 1 )
        {
          if ( !v25 )
            goto LABEL_43;
          --v25;
        }
        ++v24;
      }
      while ( v24 != (int *)(FIELD_U32(v23, 220) + 4 * FIELD_U32(v23, 212)) );
      v12 = 0;
LABEL_43:
      v27 = dword_60CCF448;
      if ( FIELD_U32(dword_60CCF448, 212) )
      {
        v28 = *(int (__fastcall *****)(_DWORD, int *))(dword_60CCF448 + 220);
        v29 = 4;
        do
        {
          v30 = *v28;
          if ( ((unsigned int)&dword_60C8C224 & ~(1615178724 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
          {
            dword_60C8C220 = (int)&off_60BD84A8;
            _cxa_guard_release(&dword_60C8C224);
          }
          v31 = (**v30)(v30, &dword_60C8C220);
          if ( v30 && v31 == 1 )
          {
            if ( !v29 )
              break;
            --v29;
          }
          ++v28;
        }
        while ( v28 != (int (__fastcall ****)(_DWORD, int *))(FIELD_U32(v27, 220) + 4 * FIELD_U32(v27, 212)) );
      }
    }
    else
    {
      v12 = 0;
    }
  }
  if ( v10 )
LABEL_58:
    v34 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 20))(v10);
LABEL_59:
  v4 = 0;
  v6 = 0;
  if ( v13 )
    v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 20))(v13);
  if ( v14 )
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 20))(v14);
  if ( v12 )
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 20))(v12);
  else
    v8 = 0;
  a2 = v33;
  v5 = v34;
  v3 = 0;
LABEL_67:
  switch ( a2 )
  {
    case 1:
      return v5;
    case 2:
      return v5 & v6;
    case 3:
      return v5 & v6 & v4;
    case 4:
      return v5 & v6 & v4 & v8;
    default:
      return v3;
  }
}
