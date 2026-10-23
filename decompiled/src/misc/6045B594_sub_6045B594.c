/* sub_6045B594
 * address: 0x6045B594   size: 1716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6045B594()
{
  char v0; // r12
  int v1; // r5
  int *v2; // r4
  int v3; // r6
  int v4; // r7
  int v5; // r0
  const unsigned int *v6; // r2
  int v7; // r5
  int *v8; // r4
  int v9; // r6
  int v10; // r7
  int v11; // r0
  const unsigned int *v12; // r1
  int v13; // r5
  int *v14; // r4
  int v15; // r6
  int v16; // r7
  int v17; // r0
  int v18; // r5
  int *v19; // r4
  int v20; // r6
  int v21; // r7
  int v22; // r0
  int v23; // r5
  int *v24; // r4
  int v25; // r6
  int v26; // r7
  int v27; // r0
  int v28; // r5
  int result; // r0
  int *v30; // r4
  int v31; // r6
  int v32; // r7
  int v33; // r0

  v1 = dword_60CCF448;
  if ( FIELD_U32(dword_60CCF448, 212) )
  {
    v2 = *(int **)(dword_60CCF448 + 220);
    v3 = 1;
    do
    {
      v4 = *v2;
      if ( ((unsigned int)&dword_60C8C224 & ~(1615181316 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
      {
        dword_60C8C220 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C8C224);
      }
      v5 = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C8C220);
      if ( v4 && v5 == 1 )
      {
        if ( !v3 )
        {
          if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) != 1
            || (FIELD_U32(v4, 272) & 0x6000) != 0x6000
            || (FIELD_U8(v4, 5) & 0x60) == 0 )
          {
            break;
          }
LABEL_29:
          v12 = (const unsigned int *)&nn__hid__NpadId__No2;
          return nn__hid__SwapNpadAssignment((nn__hid *)&nn__hid__NpadId__No1, v12, v6);
        }
        --v3;
      }
      ++v2;
    }
    while ( v2 != (int *)(FIELD_U32(v1, 220) + 4 * FIELD_U32(v1, 212)) );
  }
  v7 = dword_60CCF448;
  if ( !FIELD_U32(dword_60CCF448, 212) )
    goto LABEL_30;
  v8 = *(int **)(dword_60CCF448 + 220);
  v9 = 1;
  while ( 1 )
  {
    v10 = *v8;
    if ( ((unsigned int)&dword_60C8C224 & ~(1615181588 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v11 = (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C8C220);
    if ( !v10 || v11 != 1 )
      goto LABEL_24;
    if ( !v9 )
      break;
    --v9;
LABEL_24:
    if ( ++v8 == (int *)(FIELD_U32(v7, 220) + 4 * FIELD_U32(v7, 212)) )
      goto LABEL_30;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 20))(v10) == 1
    && (FIELD_U32(v10, 272) & 0x24) == 0x24
    && (FIELD_U8(v10, 4) & 0x24) != 0 )
  {
    goto LABEL_29;
  }
LABEL_30:
  v13 = dword_60CCF448;
  if ( !FIELD_U32(dword_60CCF448, 212) )
    goto LABEL_44;
  v14 = *(int **)(dword_60CCF448 + 220);
  v15 = 2;
  while ( 2 )
  {
    v16 = *v14;
    if ( ((unsigned int)&dword_60C8C224 & ~(1615181880 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v17 = (**(int (__fastcall ***)(int, int *))v16)(v16, &dword_60C8C220);
    if ( !v16 || v17 != 1 )
    {
LABEL_39:
      if ( ++v14 == (int *)(FIELD_U32(v13, 220) + 4 * FIELD_U32(v13, 212)) )
        goto LABEL_44;
      continue;
    }
    break;
  }
  if ( v15 )
  {
    --v15;
    goto LABEL_39;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 20))(v16) == 1
    && (FIELD_U32(v16, 272) & 0x6000) == 0x6000
    && (FIELD_U8(v16, 5) & 0x60) != 0 )
  {
LABEL_58:
    v12 = (const unsigned int *)&nn__hid__NpadId__No3;
    return nn__hid__SwapNpadAssignment((nn__hid *)&nn__hid__NpadId__No1, v12, v6);
  }
LABEL_44:
  v18 = dword_60CCF448;
  if ( !FIELD_U32(dword_60CCF448, 212) )
    goto LABEL_59;
  v19 = *(int **)(dword_60CCF448 + 220);
  v20 = 2;
  while ( 2 )
  {
    v21 = *v19;
    if ( ((unsigned int)&dword_60C8C224 & ~(1615182152 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v22 = (**(int (__fastcall ***)(int, int *))v21)(v21, &dword_60C8C220);
    if ( !v21 || v22 != 1 )
    {
LABEL_53:
      if ( ++v19 == (int *)(FIELD_U32(v18, 220) + 4 * FIELD_U32(v18, 212)) )
        goto LABEL_59;
      continue;
    }
    break;
  }
  if ( v20 )
  {
    --v20;
    goto LABEL_53;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v21 + 20))(v21) == 1
    && (FIELD_U32(v21, 272) & 0x24) == 0x24
    && (FIELD_U8(v21, 4) & 0x24) != 0 )
  {
    goto LABEL_58;
  }
LABEL_59:
  v23 = dword_60CCF448;
  if ( !FIELD_U32(dword_60CCF448, 212) )
    goto LABEL_69;
  v24 = *(int **)(dword_60CCF448 + 220);
  v25 = 3;
  while ( 2 )
  {
    v26 = *v24;
    if ( ((unsigned int)&dword_60C8C224 & ~(1615182444 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v27 = (**(int (__fastcall ***)(int, int *))v26)(v26, &dword_60C8C220);
    if ( !v26 || v27 != 1 )
    {
LABEL_68:
      if ( ++v24 == (int *)(FIELD_U32(v23, 220) + 4 * FIELD_U32(v23, 212)) )
        goto LABEL_69;
      continue;
    }
    break;
  }
  if ( v25 )
  {
    --v25;
    goto LABEL_68;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v26 + 20))(v26) == 1
    && (FIELD_U32(v26, 272) & 0x6000) == 0x6000
    && (FIELD_U8(v26, 5) & 0x60) != 0 )
  {
LABEL_87:
    v12 = (const unsigned int *)&nn__hid__NpadId__No4;
    return nn__hid__SwapNpadAssignment((nn__hid *)&nn__hid__NpadId__No1, v12, v6);
  }
LABEL_69:
  v28 = dword_60CCF448;
  result = FIELD_U32(dword_60CCF448, 212);
  if ( !result )
    return result;
  v30 = *(int **)(dword_60CCF448 + 220);
  v31 = 3;
  while ( 2 )
  {
    v32 = *v30;
    if ( ((unsigned int)&dword_60C8C224 & ~(1615182660 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v33 = (**(int (__fastcall ***)(int, int *))v32)(v32, &dword_60C8C220);
    if ( !v32 || v33 != 1 )
    {
LABEL_78:
      ++v30;
      result = FIELD_U32(v28, 220) + 4 * FIELD_U32(v28, 212);
      if ( v30 == (int *)result )
        return result;
      continue;
    }
    break;
  }
  if ( v31 )
  {
    --v31;
    goto LABEL_78;
  }
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v32 + 20))(v32);
  if ( result == 1 )
  {
    result = FIELD_U32(v32, 272) & 0x24;
    if ( result == 36 )
    {
      result = FIELD_U8(v32, 4);
      if ( (result & 0x24) != 0 )
        goto LABEL_87;
    }
  }
  return result;
}
