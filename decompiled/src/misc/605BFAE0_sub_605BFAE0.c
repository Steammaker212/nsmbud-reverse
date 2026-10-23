/* sub_605BFAE0
 * address: 0x605BFAE0   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BFAE0(int a1, int *a2, _DWORD *a3, _DWORD *a4, float a5)
{
  int v5; // r4
  char v6; // r12
  _DWORD *v8; // r9
  int v9; // r7
  int v10; // r11
  bool v11; // zf
  unsigned int v12; // r6
  int v13; // r8
  bool v14; // zf
  int v15; // r0
  int v16; // r2
  int v17; // r1

  v8 = *(_DWORD **)(a1 + 264);
  if ( v8 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      v11 = *v8 == 0;
      if ( *v8 )
      {
        v5 = *(_DWORD *)(*v8 + 2196);
        v11 = v5 == 0;
      }
      if ( !v11 && FIELD_U8(v5, 533) == 1 )
      {
        v12 = FIELD_S8(v5, 84);
        if ( v12 <= 3 )
        {
          if ( ((unsigned int)&dword_60C7B374 & ~(1616640908 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
          {
            dword_60C7B370 = (int)&off_60BC00B0;
            _cxa_guard_release(&dword_60C7B374);
          }
          v13 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B370);
          if ( v13 )
            v13 = v5;
          v14 = (FIELD_U8(v13, 1213) & 0x10) == 0;
          if ( (FIELD_U8(v13, 1213) & 0x10) == 0 )
            v14 = (FIELD_U8(v13, 1217) & 0x10) == 0;
          if ( v14 )
          {
            v5 = 1;
            *a3 |= 1 << v12;
            sub_607B946C(v13, a5);
            if ( (FIELD_U8(v13, 1212) & 0x40) != 0 )
            {
              v9 = 2;
              v15 = FIELD_U32(v13, 12100);
              v16 = v10;
              *a4 |= 1 << v12;
              v17 = v15;
              if ( v15 < 0 )
                v17 = -v15;
              if ( v10 < 0 )
                v16 = -v10;
              if ( v17 < v16 )
                v15 = v10;
            }
            else
            {
              v15 = v10;
            }
            v10 = v15;
            if ( !v9 )
              v9 = 1;
          }
        }
      }
      v8 = (_DWORD *)v8[1];
    }
    while ( v8 );
  }
  else
  {
    v10 = 0;
    v9 = 0;
  }
  *a2 = v10;
  return v9;
}
