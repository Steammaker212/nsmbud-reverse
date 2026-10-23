/* sub_607FAD24
 * address: 0x607FAD24   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607FAD24(int a1, bool *a2, int a3, int a4)
{
  char v4; // r12
  int v7; // r6
  int v8; // r6
  int v9; // r0

  if ( a3 )
  {
    if ( !a4 )
      sub_607FAF84(a1);
  }
  else
  {
    if ( a4 != 1 )
      goto LABEL_29;
    v7 = FIELD_U32(dword_60C995D0, 32);
    if ( ((unsigned int)dword_60C8DC30 & ~(1618980212 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C8DC30) )
    {
      dword_60C8DC2C = (int)&off_60BD94B0;
      _cxa_guard_release(dword_60C8DC30);
    }
    if ( v7 && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v7 + 8))(v7, &dword_60C8DC2C) )
      goto LABEL_15;
    v8 = FIELD_U32(dword_60C995D0, 32);
    if ( ((unsigned int)&dword_60C995C8 & ~(1618980344 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C995C8) )
    {
      dword_60C995C4 = (int)&off_60BD94B0;
      _cxa_guard_release(&dword_60C995C8);
    }
    if ( v8 && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v8 + 8))(v8, &dword_60C995C4) == 1 )
    {
LABEL_15:
      v9 = FIELD_U32(a1, 16);
      if ( v9 >= 1 )
      {
        if ( v9 >= 60 )
          v9 = 60;
        FIELD_U32(a1, 24) = v9;
      }
    }
    else
    {
LABEL_29:
      if ( !FIELD_U32(a1, 24) && FIELD_S32(a1, 16) >= 1 )
      {
        FIELD_U32(a1, 16) = 0;
        FIELD_U32(a1, 24) = 0;
        if ( FIELD_S32(a1, 20) >= 1 )
        {
          FIELD_U32(a1, 20) = 0;
          if ( AreaRumbleMgr_instance )
            FIELD_U32(AreaRumbleMgr_instance, 36) = 0;
        }
      }
    }
  }
  *a2 = FIELD_F32(a1, 8) == 2.4;
  if ( FIELD_S32(a1, 16) <= 0 )
    return FIELD_F32(a1, 8);
  else
    return 4.0;
}
