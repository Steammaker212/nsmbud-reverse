/* sub_6047A05C
 * address: 0x6047A05C   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047A05C(int result)
{
  int v1; // r4
  int v2; // r5
  char v3; // r12
  char v4; // r12
  int *v5; // r0

  v1 = result;
  v2 = FIELD_U32(result, 36);
  if ( v2 )
  {
    (*(void (__fastcall **)(_DWORD, int (*)(), _DWORD))(*(_DWORD *)v2 + 16))(FIELD_U32(result, 36), sub_60990A58, 0);
    if ( ((unsigned int)&dword_60C9DA64 & ~(1615306908 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA64) )
    {
      if ( ((unsigned int)&dword_60C9DA14 & ~(1615306948 << v4) & 1) == 0 )
      {
        if ( _cxa_guard_acquire(&dword_60C9DA14) )
        {
          dword_60C9DA10 = 0;
          _cxa_guard_release(&dword_60C9DA14);
        }
      }
      dword_60C9DA60 = (int)&dword_60C9DA10;
      _cxa_guard_release(&dword_60C9DA64);
    }
    v5 = (int *)(**(int (__fastcall ***)(int))v2)(v2);
    if ( v5 )
    {
      while ( v5 != &dword_60C9DA60 )
      {
        v5 = (int *)*v5;
        if ( !v5 )
          goto LABEL_13;
      }
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v2 + 20))(v2, FIELD_U32(dword_60CCF464, 36));
    }
LABEL_13:
    FIELD_U32(v1, 36) = 0;
    return 0;
  }
  return result;
}
