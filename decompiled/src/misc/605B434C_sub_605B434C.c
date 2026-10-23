/* sub_605B434C
 * address: 0x605B434C   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605B434C(int a1, int a2, int a3)
{
  int v6; // r0
  char v7; // r12
  int v8; // r4
  int v9; // r0
  bool v10; // zf
  int v11; // r5
  char v12; // r12
  int v13; // r0
  bool v14; // zf
  signed int v15; // r2
  _BOOL4 v16; // r0

  v6 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 32))(a2, a1);
  v8 = v6;
  if ( v6 )
  {
    v9 = FIELD_U8(v6, 533);
    v10 = v9 == 3;
    if ( v9 != 3 )
      v10 = v9 == 0;
    if ( v10 && (*(_BYTE *)(a2 + 8 * a3 + 2530) & 4) != 0 )
    {
      v11 = FIELD_U32(a1, 144);
      if ( ((unsigned int)&dword_60C7B384 & ~(1616593840 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
      {
        dword_60C7B380 = (int)&off_60BC00C8;
        _cxa_guard_release(&dword_60C7B384);
      }
      if ( v11
        && (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C7B380) == 1
        && FIELD_U8(v11, 6845)
        && !FIELD_U32(v8, 544) )
      {
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v8 + 68))(v8, FIELD_S8(v11, 84));
        if ( FIELD_U8(v8, 533) == 3 )
        {
          if ( ((unsigned int)dword_60C7B430 & ~(1616594016 << v12) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
          {
            Enemy_RTTI = (int)&off_60BC00C8;
            _cxa_guard_release(dword_60C7B430);
          }
          v13 = (**(int (__fastcall ***)(int, int *))v8)(v8, &Enemy_RTTI);
          v14 = v13 == 1;
          if ( v13 == 1 )
          {
            v13 = FIELD_U32(v8, 568);
            v14 = (v13 & 4) == 0;
          }
          if ( v14 )
          {
            FIELD_U32(v8, 568) = v13 | 4;
            v15 = FIELD_U32(v11, 6900) + 1;
            FIELD_U32(v11, 6900) = v15;
            sub_6028573C((int *)(v8 + 6292), v8, v15, FIELD_S8(v8, 84));
          }
        }
        v16 = sub_6000AED0(v11, v8);
        FIELD_U32(v8, 544) = 8;
        FIELD_U32(v8, 548) = v16;
        FIELD_U8(v8, 552) = FIELD_U8(v11, 552);
      }
    }
  }
}
