/* sub_600A2BE0
 * address: 0x600A2BE0   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600A2BE0(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r4
  unsigned __int8 *v6; // r8
  int v7; // r7
  char v8; // r12
  bool v9; // zf
  int v10; // r0
  char v11; // r12

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  v6 = *(unsigned __int8 **)(a2 + 64);
  if ( ((unsigned int)&dword_60C82840 & ~(1611279364 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C82840) )
  {
    dword_60C8283C = (int)&off_60BC763C;
    _cxa_guard_release(&dword_60C82840);
  }
  if ( v5 )
  {
    v7 = (**v5)(v5, &dword_60C8283C);
    if ( v7 )
      v7 = (int)v5;
    v9 = v6 == 0;
    if ( v6 )
      v9 = v7 == 0;
    if ( !v9 )
    {
      if ( (unsigned int)v6[533] - 1 > 1 )
      {
        v10 = FIELD_U32(a2, 140);
        if ( v10 == 2 )
        {
          FIELD_U8(a1, 110) |= 2u;
          SE_BOSS_CMN_MAGIC_EXTINCT_ref_2(v7);
          if ( ((unsigned int)&dword_60C823CC & ~(1611279724 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C823CC) )
          {
            dword_60C823C8 = (int)&off_60BC7C30;
            _cxa_guard_release(&dword_60C823CC);
          }
          if ( (**(int (__fastcall ***)(unsigned __int8 *, int *))v6)(v6, &dword_60C823C8) == 1 )
            SE_OBJ_PNGN_ICEBALL_DISAPP_ref((int)v6);
          v10 = FIELD_U32(a2, 140);
        }
        if ( v10 == 1 )
        {
          if ( ((unsigned int)&dword_60C823BC & ~(1611279852 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C823BC) )
          {
            dword_60C823B8 = (int)&off_60BC7C24;
            _cxa_guard_release(&dword_60C823BC);
          }
          if ( (**(int (__fastcall ***)(unsigned __int8 *, int *))v6)(v6, &dword_60C823B8) == 1 )
          {
            (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v6 + 240))(v6);
            sub_601362A0(v6);
          }
        }
      }
      else
      {
        if ( ((unsigned int)&dword_60C7B374 & ~(1611279512 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( (**(int (__fastcall ***)(unsigned __int8 *, int *))v6)(v6, &dword_60C7B370) == 1 )
        {
          (*(void (__fastcall **)(unsigned __int8 *, int, int))(*(_DWORD *)v6 + 1164))(v6, a1, a2);
          FIELD_U8(a1, 110) |= 2u;
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 288))(v7);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 244))(v7);
        }
      }
    }
  }
}
