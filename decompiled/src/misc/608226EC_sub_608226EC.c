/* sub_608226EC
 * address: 0x608226EC   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608226EC(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // r6
  int v8; // r10
  int v9; // r11
  int v10; // r0
  int v11; // r2
  int v12; // r3
  bool v13; // cc
  _DWORD *v14; // r0
  int v15; // r0
  int v16; // r0
  int v18; // [sp+4h] [bp-2Ch] BYREF
  int v19; // [sp+8h] [bp-28h]

  v4 = *(_DWORD **)(a1 + 20);
  v8 = 0;
  if ( !v4 )
  {
LABEL_14:
    v15 = 0;
    goto LABEL_15;
  }
  while ( 2 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v9 = a2[1];
    (*(void (__fastcall **)(_DWORD *))(v4[4] + 12))(v4 + 4);
    v10 = v4[5];
    if ( v9 != v10 )
    {
      v11 = 0;
      while ( 1 )
      {
        v12 = *(unsigned __int8 *)(a2[1] + v11);
        v13 = v12 - *(unsigned __int8 *)(v10 + v11) < 0;
        if ( v12 != *(unsigned __int8 *)(v10 + v11) )
          break;
        if ( *(_BYTE *)(a2[1] + v11) )
        {
          if ( ++v11 < 0x80000 )
            continue;
        }
        if ( !v4 )
          goto LABEL_14;
        goto LABEL_13;
      }
      v14 = v4 + 2;
      if ( v13 )
        v14 = v4 + 1;
      v4 = (_DWORD *)*v14;
      if ( *v14 )
        continue;
      goto LABEL_14;
    }
    break;
  }
LABEL_13:
  v15 = *(_DWORD *)(v4[6] + 60);
LABEL_15:
  v18 = 0;
  v19 = 0;
  v16 = (*(int (__fastcall **)(int, int, int *))(*(_DWORD *)v15 + 24))(v15, a3, &v18);
  if ( v16 )
  {
    v8 = v16;
    if ( a4 )
      *a4 = v19;
  }
  return v8;
}
