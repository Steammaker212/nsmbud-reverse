/* sub_605C9710
 * address: 0x605C9710   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605C9710(int a1, int a2, int a3)
{
  char v3; // r12
  _DWORD *v4; // r5
  int v7; // r0
  int v8; // r7
  bool v9; // zf

  v4 = *(_DWORD **)(a1 + 144);
  if ( ((unsigned int)&dword_60C8F38C & ~(1616680752 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F38C) )
  {
    dword_60C8F388 = (int)&off_60BDE36C;
    _cxa_guard_release(&dword_60C8F38C);
  }
  if ( v4 && (*(int (__fastcall **)(_DWORD *, int *))*v4)(v4, &dword_60C8F388) == 1 )
  {
    v7 = a2 + 8 * a3;
    v8 = FIELD_U32(a2, 2196);
    v9 = (FIELD_U8(v7, 2528) & 0x40) == 0;
    if ( (FIELD_U8(v7, 2528) & 0x40) == 0 )
      v9 = (FIELD_U32(v7, 2532) & 0x18000) == 0;
    if ( v9 || (*(int (__fastcall **)(_DWORD *, int))(*v4 + 308))(v4, a2) != 1 )
    {
      switch ( FIELD_U8(v8, 533) )
      {
        case 0:
          (*(void (__fastcall **)(_DWORD *, int, int))(*v4 + 304))(v4, v8, a3);
          break;
        case 1:
          (*(void (__fastcall **)(_DWORD *, int, int))(*v4 + 292))(v4, v8, a3);
          break;
        case 2:
          (*(void (__fastcall **)(_DWORD *, int, int))(*v4 + 296))(v4, v8, a3);
          break;
        case 3:
          (*(void (__fastcall **)(_DWORD *, int, int))(*v4 + 300))(v4, v8, a3);
          break;
        default:
          return;
      }
    }
    else
    {
      FIELD_U32(a2, 2224) |= 0x1000000u;
      *(_BYTE *)(v4[1536] + 220) = 1;
    }
  }
}
