/* sub_6098E7C4
 * address: 0x6098E7C4   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6098E7C4(int a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r5
  _DWORD *v6; // r0
  int v7; // r5
  _DWORD *v8; // r0
  const char **v9; // r7
  const char **v10; // r5
  int v11; // r6
  char v12; // r12
  char v13; // r12
  int *v14; // r0
  int v15; // r7
  int v16; // r5
  int v17; // r8
  int i; // r6
  int v19; // r0

  v4 = sub_60990CDC(a1);
  v5 = (_DWORD *)v4;
  if ( !a1 )
  {
    sub_60990A9C(v4);
    return;
  }
  v6 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
  if ( v6 )
  {
    while ( v6 != v5 )
    {
      v6 = (_DWORD *)*v6;
      if ( !v6 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v7 = sub_60990A9C(v6);
    v8 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
    if ( !v8 )
      return;
    while ( v8 != (_DWORD *)v7 )
    {
      v8 = (_DWORD *)*v8;
      if ( !v8 )
        return;
    }
  }
  v9 = sub_6085982C(a1, "CaptureUseName");
  if ( v9 )
  {
    v10 = sub_6085982C(a1, "CaptureUseIndex");
    if ( v10 )
    {
      v11 = sub_6098EA0C(&v9[1][(_DWORD)v9], a2, 0);
      if ( ((unsigned int)&dword_60CD0BBC & ~(1620633772 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BBC) )
      {
        if ( ((unsigned int)&dword_60C9D9D4 & ~(1620633812 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
        {
          dword_60C9D9D0 = 0;
          _cxa_guard_release(&dword_60C9D9D4);
        }
        dword_60CD0BB8 = (int)&dword_60C9D9D0;
        _cxa_guard_release(&dword_60CD0BBC);
      }
      if ( v11 )
      {
        v14 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
        if ( v14 )
        {
          while ( v14 != &dword_60CD0BB8 )
          {
            v14 = (int *)*v14;
            if ( !v14 )
              return;
          }
          v15 = *(_DWORD *)&v10[1][(_DWORD)v10];
          v16 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
          if ( v16 )
          {
            v17 = v11 + 184;
            for ( i = 0; i != v16; ++i )
            {
              v19 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 44))(a1, i);
              if ( (FIELD_U32(v19, 16) & 3) > v15 )
                *(_DWORD *)(FIELD_U32(v19, 20) + 8 * v15 + 4) = v17;
            }
          }
        }
      }
    }
  }
}
