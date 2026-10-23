/* sub_60460DD0
 * address: 0x60460DD0   size: 1232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60460DD0(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r5
  int v6; // r4
  int (__fastcall ***v7)(_DWORD, int *); // r6
  int v8; // r5
  bool v9; // zf
  int v10; // r0
  char v11; // r12
  char v12; // r12
  float v13; // s16
  int v14; // r4
  char v15; // r12
  int v16; // r0
  char v17; // r12
  int v18; // r0
  char v19; // r12

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1615203828 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v5 )
  {
    v6 = (**v5)(v5, &StageActor_RTTI);
    if ( v6 )
      v6 = (int)v5;
  }
  else
  {
    v6 = 0;
  }
  v7 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)&dword_60C7B418 & ~(1615203960 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B418) )
  {
    dword_60C7B414 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C7B418);
  }
  if ( v7 )
  {
    v8 = (**v7)(v7, &dword_60C7B414);
    if ( v8 )
      v8 = (int)v7;
    v9 = v6 == 0;
    if ( v6 )
      v9 = v8 == 0;
    if ( !v9 )
    {
      v10 = FIELD_U8(v6, 533);
      if ( v10 == 3 )
      {
        if ( Actor__getProfileId((Actor *)v6) == 222 )
          FIELD_U8(v8, 6200) = 1;
        if ( Actor__getProfileId((Actor *)v6) == 510 )
        {
          if ( ((unsigned int)&dword_60C8E02C & ~(1615204504 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E02C) )
          {
            dword_60C8E028 = (int)&off_60BC04AC;
            _cxa_guard_release(&dword_60C8E02C);
          }
          v16 = (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C8E028);
          if ( v16 )
            v16 = v6;
          if ( sub_60256CFC(v16, a2, *(float **)(a1 + 64)) )
            FIELD_U8(v8, 6255) = 1;
        }
        v10 = FIELD_U8(v6, 533);
      }
      else if ( !FIELD_U8(v6, 533) )
      {
        if ( Actor__getProfileId((Actor *)v6) == 591 )
        {
          if ( ((unsigned int)&dword_60C7B418 & ~(1615204140 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B418) )
          {
            dword_60C7B414 = (int)&off_60BC00C8;
            _cxa_guard_release(&dword_60C7B418);
          }
          if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B414) == 1
            && !FIELD_U32(v6, 6192)
            && !FIELD_U32(v8, 6192)
            && FIELD_F32(a1, 260) >= 0.0 )
          {
            v13 = FIELD_F32(a1, 196);
            v14 = FIELD_U32(a1, 64);
            if ( ((unsigned int)&dword_60C7B364 & ~(1615204300 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
            {
              StageActor_RTTI = (int)&off_60BC0098;
              _cxa_guard_release(&dword_60C7B364);
            }
            if ( v14 )
            {
              if ( (**(int (__fastcall ***)(int, int *))v14)(v14, &StageActor_RTTI) == 1 )
                FIELD_F32(v14, 108) = FIELD_F32(v14, 108) + (float)(v13 * 0.25);
            }
          }
        }
        return;
      }
      if ( v10 == 1 )
        goto LABEL_62;
      if ( v10 != 2 )
        return;
      if ( FIELD_U32(a2, 140) == 15 )
      {
        FIELD_U32(v8, 6208) = -1;
        return;
      }
      if ( Actor__getProfileId((Actor *)v8) != 601 )
        goto LABEL_62;
      if ( ((unsigned int)&dword_60C7B408 & ~(1615204720 << v17) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
      {
        dword_60C7B404 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B408);
      }
      if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B404) != 1
        || (v18 = sub_607D6C28(v6)) == 0
        || sub_6075EE0C(v18) == 1 )
      {
LABEL_62:
        if ( FIELD_U8(v6, 533) != 1 || Actor__getProfileId((Actor *)v8) != 601 )
          goto LABEL_63;
        if ( ((unsigned int)&dword_60C7B374 & ~(1615204896 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B370) == 1 && sub_6075EE0C(v6) == 1 )
LABEL_63:
          FIELD_U32(v8, 6208) = FIELD_S8(v6, 84);
      }
    }
  }
}
