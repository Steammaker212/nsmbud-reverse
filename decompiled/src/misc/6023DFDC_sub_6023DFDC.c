/* sub_6023DFDC
 * address: 0x6023DFDC   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6023DFDC(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r7
  int v6; // r6
  int (__fastcall ***v7)(_DWORD, int *); // r7
  int v8; // r0
  bool v9; // zf
  unsigned int v10; // r0
  int v11; // r1
  int v12; // r0

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)dword_60C8DB00 & ~(1612963836 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8DB00) )
  {
    dword_60C8DAFC = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C8DB00);
  }
  if ( v5 )
  {
    v6 = (**v5)(v5, &dword_60C8DAFC);
    if ( v6 )
      v6 = (int)v5;
  }
  else
  {
    v6 = 0;
  }
  v7 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1612963968 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v7 )
  {
    v8 = (**v7)(v7, &StageActor_RTTI);
    if ( v8 )
      v8 = (int)v7;
    v9 = v6 == 0;
    if ( v6 )
      v9 = v8 == 0;
    if ( !v9 )
    {
      if ( FIELD_U8(v8, 533) == 1 )
      {
        v10 = FIELD_U8(v8, 84);
        v11 = v6;
        if ( v10 < 4 )
          v11 = v6 + (char)v10;
        FIELD_U8(v11, 12752) = 1;
      }
      v12 = FIELD_U32(a2, 140);
      if ( v12 == 1 )
      {
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 316))(v6, a1, a2);
        v12 = FIELD_U32(a2, 140);
      }
      if ( v12 == 2 )
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 320))(v6, a1, a2);
    }
  }
}
