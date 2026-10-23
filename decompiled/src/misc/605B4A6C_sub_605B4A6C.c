/* sub_605B4A6C
 * address: 0x605B4A6C   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605B4A6C(int a1, int a2, int a3)
{
  int v5; // r4
  unsigned int v6; // r1
  char v7; // r12
  int v8; // r0
  bool v9; // zf
  bool v10; // zf
  bool v11; // zf

  v5 = FIELD_U32(a1, 144);
  v6 = (unsigned __int8)(*(_BYTE *)((*(int (__fastcall **)(int))(*(_DWORD *)a2 + 32))(a2) + 533) - 1);
  v8 = FIELD_U32(a2, 2532) & 0x8000;
  if ( v6 > 1 )
  {
    v10 = v8 == 0;
    if ( v8 )
      v10 = (FIELD_U8(a2, 2541) & 0x80) == 0;
    if ( !v10 )
    {
      if ( ((unsigned int)&dword_60C7B384 & ~(1616595952 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
      {
        dword_60C7B380 = (int)&off_60BC00C8;
        _cxa_guard_release(&dword_60C7B384);
      }
      if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B380) == 1 )
      {
        FIELD_U32(v5, 6824) = a3 != 0;
        FIELD_U8(v5, 6843) = 1;
        FIELD_U8(v5, 6841) = 1;
      }
    }
    v11 = (FIELD_U8(a2, 2534) & 1) == 0;
    if ( (FIELD_U8(a2, 2534) & 1) != 0 )
      v11 = (FIELD_U8(a2, 2542) & 1) == 0;
    if ( !v11 )
    {
      if ( ((unsigned int)&dword_60C7B384 & ~(1616595800 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
      {
        dword_60C7B380 = (int)&off_60BC00C8;
        _cxa_guard_release(&dword_60C7B384);
      }
      if ( v5 )
        goto LABEL_21;
    }
  }
  else
  {
    v9 = v8 == 0;
    if ( v8 )
      v9 = (FIELD_U8(a2, 2541) & 0x80) == 0;
    if ( !v9 )
    {
      if ( ((unsigned int)&dword_60C7B384 & ~(1616595660 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
      {
        dword_60C7B380 = (int)&off_60BC00C8;
        _cxa_guard_release(&dword_60C7B384);
      }
      if ( v5 )
      {
LABEL_21:
        if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B380) == 1 )
        {
          FIELD_U32(v5, 6824) = 2;
          FIELD_U8(v5, 6843) = 1;
          FIELD_U8(v5, 6841) = 1;
        }
      }
    }
  }
}
