/* sub_6075C4E0
 * address: 0x6075C4E0   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075C4E0(int a1, int a2, int *a3, int a4)
{
  char v4; // r12
  int v7; // r4
  int v8; // r7
  int v9; // r7
  int *v10; // r6
  int v11; // t1
  int v12; // r1

  v7 = 0;
  if ( a3 )
  {
    v8 = *a3;
    if ( ((unsigned int)&dword_60C80400 & ~(1618330892 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
    {
      dword_60C803FC = (int)&off_60BC3228;
      _cxa_guard_release(&dword_60C80400);
    }
    if ( v8 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C803FC) == 1 )
      {
        v9 = sub_60431E14(FIELD_U32(v8, 440));
        if ( v9 )
        {
          v10 = &dword_60CBF2B0[2 * a4];
          v11 = v10[16];
          v10 += 16;
          (*(void (__fastcall **)(int *))(v11 + 12))(v10);
          if ( sub_609183B4(v9, (const char *)v10[1]) != -1 )
          {
            v12 = sub_609184C4(v9);
            if ( v12 )
            {
              sub_60959954(a2, v12);
              return 1;
            }
          }
        }
      }
    }
  }
  return v7;
}
