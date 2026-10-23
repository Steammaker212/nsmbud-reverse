/* sub_605B3E18
 * address: 0x605B3E18   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605B3E18(int a1, _BYTE *a2)
{
  int v4; // r0
  char v5; // r12
  int v6; // r4
  int v7; // r0
  bool v8; // zf
  int v9; // r5
  char v10; // r12
  int v11; // r0
  bool v12; // zf
  signed int v13; // r2
  _BOOL4 v14; // r0

  v4 = (*(int (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 2);
  v6 = v4;
  if ( v4 )
  {
    v7 = FIELD_U8(v4, 533);
    v8 = v7 == 3;
    if ( v7 != 3 )
      v8 = v7 == 0;
    if ( v8 && (a2[2546] & 0x20) != 0 )
    {
      v9 = FIELD_U32(a1, 144);
      if ( ((unsigned int)&dword_60C7B384 & ~(1616592504 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
      {
        dword_60C7B380 = (int)&off_60BC00C8;
        _cxa_guard_release(&dword_60C7B384);
      }
      if ( v9
        && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C7B380) == 1
        && FIELD_U8(v9, 6845)
        && !FIELD_U32(v6, 544) )
      {
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v6 + 68))(v6, FIELD_S8(v9, 84));
        if ( FIELD_U8(v6, 533) == 3 )
        {
          if ( ((unsigned int)dword_60C7B430 & ~(1616592680 << v10) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
          {
            Enemy_RTTI = (int)&off_60BC00C8;
            _cxa_guard_release(dword_60C7B430);
          }
          v11 = (**(int (__fastcall ***)(int, int *))v6)(v6, &Enemy_RTTI);
          v12 = v11 == 1;
          if ( v11 == 1 )
          {
            v11 = FIELD_U32(v6, 568);
            v12 = (v11 & 4) == 0;
          }
          if ( v12 )
          {
            FIELD_U32(v6, 568) = v11 | 4;
            v13 = FIELD_U32(v9, 6900) + 1;
            FIELD_U32(v9, 6900) = v13;
            sub_6028573C((int *)(v6 + 6292), v6, v13, FIELD_S8(v6, 84));
          }
        }
        v14 = sub_6000AED0(v9, v6);
        FIELD_U32(v6, 544) = 8;
        FIELD_U32(v6, 548) = v14;
        FIELD_U8(v6, 552) = FIELD_U8(v9, 552);
      }
    }
  }
}
