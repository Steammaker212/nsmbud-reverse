/* sub_605C95B8
 * address: 0x605C95B8   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605C95B8(int a1, int a2)
{
  char v2; // r12
  _DWORD *v3; // r4
  int v5; // r6
  bool v6; // zf

  v3 = *(_DWORD **)(a1 + 144);
  if ( ((unsigned int)&dword_60C8F38C & ~(1616680404 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F38C) )
  {
    dword_60C8F388 = (int)&off_60BDE36C;
    _cxa_guard_release(&dword_60C8F38C);
  }
  if ( v3 && (*(int (__fastcall **)(_DWORD *, int *))*v3)(v3, &dword_60C8F388) == 1 )
  {
    v5 = FIELD_U32(a2, 2196);
    v6 = (FIELD_U8(a2, 2544) & 0x40) == 0;
    if ( (FIELD_U8(a2, 2544) & 0x40) == 0 )
      v6 = (FIELD_U32(a2, 2548) & 0x18000) == 0;
    if ( v6 || (*(int (__fastcall **)(_DWORD *, int))(*v3 + 308))(v3, a2) != 1 )
    {
      switch ( FIELD_U8(v5, 533) )
      {
        case 0:
          (*(void (__fastcall **)(_DWORD *, int))(*v3 + 288))(v3, v5);
          break;
        case 1:
          (*(void (__fastcall **)(_DWORD *, int))(*v3 + 276))(v3, v5);
          break;
        case 2:
          (*(void (__fastcall **)(_DWORD *, int))(*v3 + 280))(v3, v5);
          break;
        case 3:
          (*(void (__fastcall **)(_DWORD *, int))(*v3 + 284))(v3, v5);
          break;
        default:
          return;
      }
    }
    else
    {
      FIELD_U32(a2, 2224) |= 0x4000u;
      *(_BYTE *)(v3[1536] + 220) = 1;
    }
  }
}
