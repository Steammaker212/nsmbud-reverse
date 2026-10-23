/* sub_600B0668
 * address: 0x600B0668   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600B0668(int a1, int a2)
{
  char v2; // r12
  int v5; // r6
  unsigned __int8 *v6; // r4
  char v7; // r12
  int v8; // r0
  int v9; // r0
  char v10; // r12

  v5 = FIELD_U32(a1, 64);
  v6 = *(unsigned __int8 **)(a2 + 64);
  if ( ((unsigned int)dword_60C83160 & ~(1611335308 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C83160) )
  {
    dword_60C8315C = (int)&off_60BC763C;
    _cxa_guard_release(dword_60C83160);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C8315C) == 1 )
  {
    if ( (unsigned int)v6[533] - 1 > 1 )
    {
      v9 = FIELD_U32(a2, 140);
      if ( v9 == 2 )
      {
        FIELD_U8(a1, 110) |= 2u;
        SE_BOSS_CMN_MAGIC_EXTINCT_ref_2(v5);
        if ( ((unsigned int)&dword_60C823CC & ~(1611335636 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C823CC) )
        {
          dword_60C823C8 = (int)&off_60BC7C30;
          _cxa_guard_release(&dword_60C823CC);
        }
        if ( (**(int (__fastcall ***)(unsigned __int8 *, int *))v6)(v6, &dword_60C823C8) == 1 )
          SE_OBJ_PNGN_ICEBALL_DISAPP_ref((int)v6);
        v9 = FIELD_U32(a2, 140);
      }
      if ( v9 == 1 )
      {
        if ( ((unsigned int)&dword_60C823BC & ~(1611335764 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C823BC) )
        {
          dword_60C823B8 = (int)&off_60BC7C24;
          _cxa_guard_release(&dword_60C823BC);
        }
        if ( v6 && (**(int (__fastcall ***)(unsigned __int8 *, int *))v6)(v6, &dword_60C823B8) == 1 )
        {
          (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v6 + 240))(v6);
          sub_601362A0(v6);
        }
      }
    }
    else
    {
      if ( ((unsigned int)&dword_60C7B374 & ~(1611335440 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( (**(int (__fastcall ***)(unsigned __int8 *, int *))v6)(v6, &dword_60C7B370) == 1 )
      {
        v8 = sub_6075EDF8(v6);
        FIELD_U8(a1, 110) |= 2u;
        if ( v8 == 1 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 288))(v5);
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 244))(v5);
        }
        else
        {
          (*(void (__fastcall **)(unsigned __int8 *, int, int))(*(_DWORD *)v6 + 1164))(v6, a1, a2);
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 288))(v5);
        }
      }
    }
  }
}
