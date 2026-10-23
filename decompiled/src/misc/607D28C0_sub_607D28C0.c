/* sub_607D28C0
 * address: 0x607D28C0   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607D28C0(int a1, int a2)
{
  char v2; // r12
  int v4; // r4
  int v5; // r6
  int ProfileId; // r0
  char v7; // r12
  int v8; // r1

  v4 = FIELD_U32(a2, 64);
  v5 = FIELD_U32(a1, 64);
  FIELD_U8(a1, 110) |= 2u;
  if ( (unsigned int)FIELD_U8(v4, 533) - 1 > 1 )
  {
    ProfileId = Actor__getProfileId((Actor *)v4);
    v8 = FIELD_U32(v5, 648);
    if ( v8 == 1 )
    {
      if ( ProfileId == 763 || ProfileId == 477 )
      {
        if ( ((unsigned int)&dword_60C823C4 & ~(1618815640 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C823C4) )
        {
          FireballBase_RTTI = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C823C4);
        }
        if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &FireballBase_RTTI) == 1 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 240))(v4);
          sub_601362A0(v4);
        }
      }
    }
    else if ( !v8 && (ProfileId == 765 || ProfileId == 475) )
    {
      if ( ((unsigned int)&dword_60C823D4 & ~(1618815460 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C823D4) )
      {
        dword_60C823D0 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C823D4);
      }
      if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C823D0) == 1 )
        SE_OBJ_PNGN_ICEBALL_DISAPP_ref(v4);
    }
  }
  else
  {
    if ( FIELD_U8(v5, 84) == FIELD_U8(v4, 84) )
      goto LABEL_8;
    if ( ((unsigned int)&dword_60C7B37C & ~(1618815244 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378) == 1
      && (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1156))(v4) == 1 )
    {
LABEL_8:
      FIELD_U32(a1, 92) &= ~1u;
    }
    else
    {
      sub_607D2B74(v5);
    }
  }
}
