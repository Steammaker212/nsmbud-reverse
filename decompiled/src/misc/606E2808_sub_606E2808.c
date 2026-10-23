/* sub_606E2808
 * address: 0x606E2808   size: 1040   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606E2808(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v4)(_DWORD, int *); // r6
  int v5; // r4
  int (__fastcall ***v6)(_DWORD, int *); // r6
  int v7; // r5
  char v8; // r12
  bool v9; // zf
  int v10; // r0
  float v11; // s1
  int v12; // r0
  int v13; // r0
  _WORD *v14; // r0
  int v15; // t1
  int v16; // r0
  float v17; // s0

  v4 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1617831976 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v4 )
  {
    v5 = (**v4)(v4, &StageActor_RTTI);
    if ( v5 )
      v5 = (int)v4;
  }
  else
  {
    v5 = 0;
  }
  v6 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)&dword_60C83FB4 & ~(1617832108 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C83FB4) )
  {
    dword_60C83FB0 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C83FB4);
  }
  if ( v6 )
  {
    v7 = (**v6)(v6, &dword_60C83FB0);
    if ( v7 )
      v7 = (int)v6;
    v9 = v5 == 0;
    if ( v5 )
      v9 = v7 == 0;
    if ( !v9 )
    {
      v10 = FIELD_U8(v5, 533);
      if ( (unsigned int)(v10 - 1) < 2 )
      {
        v12 = FIELD_S8(v5, 84);
        if ( (unsigned __int8)v12 == 255 )
        {
          if ( ((unsigned int)&dword_60C7B37C & ~(1617832760 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) == 1 )
          {
            if ( FIELD_U32(v7, 6908) == 1 )
              v17 = -6.0;
            else
              v17 = 6.0;
            (*(void (__fastcall **)(int, int, int, _DWORD, float, float, _DWORD))(*(_DWORD *)v5 + 752))(
              v5,
              1,
              2,
              0,
              v17,
              0.0,
              0);
          }
        }
        else
        {
          if ( (unsigned __int8)v12 >= 4u )
            v12 = 0;
          v13 = v7 + 2 * v12;
          v15 = FIELD_U16(v13, 6948);
          v14 = (_WORD *)(v13 + 6948);
          if ( !v15 )
          {
            if ( FIELD_U32(v7, 6908) == 1 )
            {
              if ( ((unsigned int)&dword_60C7B37C & ~(1617832468 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
              {
                dword_60C7B378 = (int)&off_60BC00BC;
                _cxa_guard_release(&dword_60C7B37C);
              }
              if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) == 1 )
                (*(void (__fastcall **)(int, int, int, _DWORD, float, float, _DWORD))(*(_DWORD *)v5 + 752))(
                  v5,
                  1,
                  2,
                  0,
                  -6.0,
                  0.0,
                  0);
            }
            else
            {
              *v14 = 1;
              FIELD_U8(v7, 6963) = 1;
            }
          }
        }
      }
      else if ( v10 == 3 )
      {
        if ( ((unsigned int)dword_60C7B430 & ~(1617832596 << v8) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
        {
          Enemy_RTTI = (int)&off_60BC00C8;
          _cxa_guard_release(dword_60C7B430);
        }
        if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &Enemy_RTTI) == 1
          && (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 196))(v5) == 1 )
        {
          if ( FIELD_U32(v7, 6908) == 1 )
            v16 = -1073741824;
          else
            v16 = 0x40000000;
          FIELD_U32(v5, 124) = v16;
        }
      }
      else if ( v10 == 4 )
      {
        if ( ((unsigned int)&dword_60C7B410 & ~(1617832272 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
        {
          dword_60C7B40C = (int)&off_60BC00D4;
          _cxa_guard_release(&dword_60C7B410);
        }
        if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B40C) == 1 )
        {
          if ( FIELD_U32(v7, 6908) == 1 )
            v11 = -2.0;
          else
            v11 = 2.0;
          sub_605D9550(v5, 0, 0.0, v11);
        }
      }
    }
  }
}
