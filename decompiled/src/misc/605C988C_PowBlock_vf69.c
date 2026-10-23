/* PowBlock_vf69
 * address: 0x605C988C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall PowBlock_vf69(int a1, int a2)
{
  char v4; // r12

  if ( (FIELD_U8(a1, 2872) & 1) == 0 )
  {
    FIELD_U32(a1, 6116) = 1;
    FIELD_U32(a1, 120) = dword_60B057D4[sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 1];
    FIELD_U32(a1, 124) = 1080033280;
    FIELD_U32(a1, 128) = 0;
    if ( ((unsigned int)&dword_60C7B37C & ~(1616681212 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( a2 )
    {
      if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B378) == 1 )
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 1168))(a2, a1, 19);
    }
  }
}
