/* sub_60595520
 * address: 0x60595520   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60595520(int a1, int a2)
{
  char v2; // r12
  int v4; // r4
  int v5; // r0
  char v6; // r12
  bool v7; // zf
  char v8; // r12
  int (__fastcall ***v9)(_DWORD, int *); // r5
  unsigned int v10; // r0
  int v11; // r1
  unsigned __int8 *v12; // r0
  _BYTE *v13; // r0
  int v14; // t1
  float v15; // s0

  v4 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1616467260 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v4 )
  {
    v5 = (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI);
    v7 = v5 == 1;
    if ( v5 == 1 )
      v7 = FIELD_U8(v4, 533) == 1;
    if ( v7 )
    {
      if ( ((unsigned int)&dword_60C7B37C & ~(1616467384 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378) == 1 )
      {
        v9 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
        if ( ((unsigned int)&dword_60C9D3DC & ~(1616467496 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3DC) )
        {
          dword_60C9D3D8 = (int)&off_60BC00C8;
          _cxa_guard_release(&dword_60C9D3DC);
        }
        if ( v9 && (**v9)(v9, &dword_60C9D3D8) == 1 )
        {
          v10 = FIELD_U8(v4, 84);
          v11 = 0;
          if ( v10 < 4 )
            v11 = (char)v10;
          v12 = (unsigned __int8 *)&v9[2 * v11];
          v14 = v12[6113];
          v13 = v12 + 6113;
          if ( !v14 )
          {
            *v13 = 1;
            if ( FIELD_U32(v4, 1320) == 5 || sub_6075EE0C(v4) || sub_6075EDF8(v4) == 1 )
              v15 = 2.0;
            else
              v15 = 4.0;
            (*(void (__fastcall **)(int, int, _DWORD, _DWORD, float, float))(*(_DWORD *)v4 + 748))(
              v4,
              1,
              0,
              0,
              v15,
              0.0);
          }
        }
      }
    }
  }
}
