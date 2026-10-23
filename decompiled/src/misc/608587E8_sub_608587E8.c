/* sub_608587E8
 * address: 0x608587E8   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608587E8(int a1, int a2)
{
  char v2; // r12
  _BYTE *v3; // r8
  _DWORD *v5; // r9
  _BYTE *v6; // r0
  _DWORD *v7; // r1
  int v8; // r2
  _DWORD *v9; // r7
  char v10; // r12
  int *v11; // r0
  int v12; // r4
  int v13; // r0
  int result; // r0

  v3 = (_BYTE *)(a1 + 16);
  v5 = *(_DWORD **)(a1 + 20);
  if ( v5 != (_DWORD *)(a1 + 16) )
  {
    do
    {
      v6 = v5;
      v7 = v5;
      v5 = (_DWORD *)v5[1];
      if ( v6 != v3 )
      {
        v8 = *v5;
        *(_DWORD *)(*(_DWORD *)v6 + 4) = v5;
        *v5 = *v7;
        FIELD_U32(v8, 4) = v6;
        *(_DWORD *)v6 = v8;
      }
      if ( (v6[60] & 8) == 0 )
      {
        v9 = v6 - 4;
        if ( ((unsigned int)&dword_60C9DA0C & ~(1619364028 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA0C) )
        {
          if ( ((unsigned int)&dword_60C9D9D4 & ~(1619364060 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
          {
            dword_60C9D9D0 = 0;
            _cxa_guard_release(&dword_60C9D9D4);
          }
          dword_60C9DA08 = (int)&dword_60C9D9D0;
          _cxa_guard_release(&dword_60C9DA0C);
        }
        v11 = (int *)(*(int (__fastcall **)(_DWORD *))(*v9 + 8))(v9);
        if ( !v11 )
          goto LABEL_17;
        while ( v11 != &dword_60C9DA08 )
        {
          v11 = (int *)*v11;
          if ( !v11 )
            goto LABEL_17;
        }
        v12 = v9[45];
        if ( v12 )
        {
          sub_60855C88((_DWORD *)v9[45], a2);
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 4))(v12);
          v13 = v12;
        }
        else
        {
LABEL_17:
          (*(void (__fastcall **)(_DWORD *, int))(*v9 + 12))(v9, a2);
          (*(void (__fastcall **)(_DWORD *))*v9)(v9);
          v13 = (int)v9;
        }
        sub_60855BF0(v13);
      }
    }
    while ( v5 != (_DWORD *)v3 );
  }
  result = FIELD_U8(a1, 68);
  if ( (result & 4) != 0 )
    return sub_60855BF0(FIELD_U32(a1, 132));
  return result;
}
