/* sub_605DDB40
 * address: 0x605DDB40   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DDB40(int a1, int a2, int a3)
{
  char v3; // r12
  int v5; // r0
  int v6; // r4
  bool v7; // zf
  int v8; // r6
  unsigned int v9; // r0
  unsigned int v10; // r0

  v5 = FIELD_U32(a3, 140);
  v6 = 0;
  if ( v5 && (FIELD_U32(a2, 148) & (1 << v5)) != 0 )
  {
    v7 = v5 == 13;
    if ( v5 != 13 )
      v7 = v5 == 7;
    if ( v7 )
    {
      v8 = FIELD_U32(a3, 64);
      if ( ((unsigned int)&dword_60C7B37C & ~(1616763784 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v8 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B378) == 1 )
        {
          v9 = FIELD_S8(v8, 84);
          if ( (v9 > 3 || !*(_WORD *)(a1 + 4 * v9 + 6928)) && !sub_6075F914(v8) )
          {
            v10 = FIELD_S8(v8, 84);
            v6 = 1;
            if ( v10 <= 3 )
              *(_DWORD *)(a1 + 4 * v10 + 6928) = 32;
            (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 380))(a1, 1, v8);
          }
        }
      }
    }
  }
  return v6;
}
