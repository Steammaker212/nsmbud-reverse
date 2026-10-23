/* sub_6078CB08
 * address: 0x6078CB08   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6078CB08(int a1, int a2)
{
  char v2; // r12
  int v4; // r11
  _WORD *v5; // r10
  int v6; // r4
  int v7; // r9
  int *v8; // r0
  int v9; // r4

  v4 = 0;
  v5 = (_WORD *)(a1 + 304);
  do
  {
    if ( (*v5 & (unsigned __int16)(1 << v4)) != 0 )
    {
      v6 = a1 + 4 * v4;
      v7 = **(_DWORD **)(v6 + 240);
      if ( ((unsigned int)&dword_60C80400 & ~(1618529248 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
      {
        dword_60C803FC = (int)&off_60BC3228;
        _cxa_guard_release(&dword_60C80400);
      }
      if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C803FC) == 1 )
        FIELD_U32(v7, 312) = a2;
      v8 = *(int **)(v6 + 264);
      if ( v8 )
      {
        v9 = *v8;
        if ( ((unsigned int)&dword_60C80400 & ~(1618529356 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
        {
          dword_60C803FC = (int)&off_60BC3228;
          _cxa_guard_release(&dword_60C80400);
        }
        if ( v9 )
        {
          if ( (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C803FC) == 1 )
            FIELD_U32(v9, 312) = a2;
        }
      }
    }
    ++v4;
  }
  while ( v4 != 6 );
}
