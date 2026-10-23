/* sub_60139988
 * address: 0x60139988   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60139988(int a1, _DWORD *a2)
{
  char v2; // r12
  int v5; // r7
  int (__fastcall ***v6)(_DWORD, int *); // r4
  int v7; // r5
  int result; // r0
  char v9; // r12
  int v10; // r4
  int v11; // r4

  v5 = a2[16];
  v6 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)&dword_60C823C4 & ~(1611897260 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C823C4) )
  {
    FireballBase_RTTI = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C823C4);
  }
  if ( v6 )
  {
    v7 = (**v6)(v6, &FireballBase_RTTI);
    if ( v7 )
      v7 = (int)v6;
  }
  else
  {
    v7 = 0;
  }
  result = FIELD_U8(v5, 533);
  if ( result != 3 )
  {
    result = sub_602A25C0(a1);
    if ( !result )
    {
      result = FIELD_U8(v5, 533);
      switch ( FIELD_U8(v5, 533) )
      {
        case 0:
          if ( Actor__getProfileId((Actor *)v5) == 474 )
            goto LABEL_38;
          result = Actor__getProfileId((Actor *)v5);
          if ( result == 478 )
            goto LABEL_38;
          break;
        case 1:
          if ( ((unsigned int)&dword_60C7B37C & ~(1611897528 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          v10 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378);
          if ( v10 )
            v10 = v5;
          if ( sub_6075EDF8(v10) != 1
            || (result = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 1204))(v10), result == 1) )
          {
            result = a2[34];
            if ( result != 15 )
            {
              if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v10 + 1156))(v10) )
                (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v10 + 1164))(v10, a1, a2);
              if ( (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 1204))(v10) == 1 )
                goto LABEL_38;
              goto LABEL_39;
            }
          }
          break;
        case 2:
          result = FIELD_S8(v5, 84);
          if ( result <= 3 )
          {
            result = a2[35];
            if ( result != 15 )
            {
              if ( ((unsigned int)&dword_60C7B408 & ~(1611897792 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
              {
                dword_60C7B404 = (int)&off_60BC00B0;
                _cxa_guard_release(&dword_60C7B408);
              }
              v11 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B404);
              if ( v11 )
                v11 = v5;
              if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v11 + 1156))(v11) )
                (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v11 + 1164))(v11, a1, a2);
              FIELD_U8(a1, 110) |= 2u;
              (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 240))(v7);
              result = sub_601362A0(v7);
            }
          }
          break;
        case 4:
          result = a2[35];
          if ( result == 3 )
          {
LABEL_38:
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 240))(v7);
LABEL_39:
            sub_601362A0(v7);
            result = FIELD_U8(a1, 110) | 2;
            FIELD_U8(a1, 110) = result;
          }
          break;
        default:
          return result;
      }
    }
  }
  return result;
}
