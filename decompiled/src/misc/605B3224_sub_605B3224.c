/* sub_605B3224
 * address: 0x605B3224   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B3224(int a1, _BYTE *a2)
{
  int v3; // r4
  int v4; // r5
  char v5; // r12
  int result; // r0
  bool v7; // zf
  int v8; // r6
  int v9; // r0
  int v10; // r1
  bool v11; // zf
  char v12; // r12
  int v13; // r0
  bool v14; // zf
  int v15; // t1
  _BOOL4 v16; // r0

  v3 = FIELD_U32(a1, 144);
  v4 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a2 + 32))(a2);
  result = FIELD_U8(v4, 533);
  v7 = result == 3;
  if ( result != 3 )
    v7 = result == 0;
  if ( v7 )
  {
    if ( ((unsigned int)&dword_60C7B384 & ~(1616589420 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
    if ( v3 )
    {
      v8 = (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B380);
      if ( v8 )
        v8 = v3;
    }
    else
    {
      v8 = 0;
    }
    result = sub_605B2DE8(FIELD_U32(v4, 8));
    if ( !result )
    {
      if ( (a2[2557] & 0x80) != 0 )
      {
        if ( (a2[2555] & 1) != 0 )
        {
          v9 = 6824;
          v10 = 2;
        }
        else
        {
          v9 = 6828;
          v10 = 1;
        }
        *(_DWORD *)(v8 + v9) = v10;
      }
      if ( (a2[2558] & 1) != 0 )
        FIELD_U32(v8, 6824) = 2;
      result = FIELD_U8(v8, 6846);
      v11 = result == 1;
      if ( result == 1 )
      {
        result = FIELD_U32(v4, 544);
        v11 = result == 0;
      }
      if ( v11 )
      {
        if ( FIELD_U8(v8, 6844) )
          FIELD_U8(v8, 6844) = 0;
        result = Actor__getProfileId((Actor *)v4);
        if ( result != 370 )
        {
          (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v4 + 68))(v4, FIELD_S8(v3, 84));
          if ( FIELD_U8(v4, 533) == 3 )
          {
            if ( ((unsigned int)dword_60C7B430 & ~(1616589732 << v12) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
            {
              Enemy_RTTI = (int)&off_60BC00C8;
              _cxa_guard_release(dword_60C7B430);
            }
            v13 = (**(int (__fastcall ***)(int, int *))v4)(v4, &Enemy_RTTI);
            v14 = v13 == 1;
            if ( v13 == 1 )
            {
              v13 = FIELD_U32(v4, 568);
              v14 = (v13 & 4) == 0;
            }
            if ( v14 )
            {
              FIELD_U32(v4, 568) = v13 | 4;
              v15 = FIELD_U32(v8, 6900);
              FIELD_U32(v8, 6900) = v15 + 1;
              sub_6028573C((int *)(v4 + 6292), v4, v15 + 1, FIELD_S8(v4, 84));
            }
          }
          v16 = sub_6000AED0(v3, v4);
          FIELD_U32(v4, 544) = 8;
          FIELD_U32(v4, 548) = v16;
          result = FIELD_U8(v3, 552);
          FIELD_U8(v4, 552) = result;
        }
      }
    }
  }
  return result;
}
