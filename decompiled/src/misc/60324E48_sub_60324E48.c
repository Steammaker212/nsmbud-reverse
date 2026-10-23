/* sub_60324E48
 * address: 0x60324E48   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60324E48(int a1, int a2)
{
  int v2; // r4
  char v3; // r12

  v2 = FIELD_U32(a1, 144);
  if ( (unsigned __int8)(*(_BYTE *)((*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3) + 533) - 1) <= 1u )
  {
    if ( ((unsigned int)dword_60C93AF0 & ~(1613909648 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C93AF0) )
    {
      dword_60C93AEC = (int)&off_60BC00E0;
      _cxa_guard_release(dword_60C93AF0);
    }
    if ( v2 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C93AEC) == 1 )
      {
        FIELD_U32(v2, 7660) = FIELD_U32(v2, 7644);
        FIELD_U8(v2, 7680) = 1;
      }
    }
  }
}
