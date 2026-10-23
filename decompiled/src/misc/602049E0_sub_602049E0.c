/* sub_602049E0
 * address: 0x602049E0   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602049E0(int a1)
{
  char v2; // r12
  int v3; // r0
  int v4; // r0
  int v5; // r0
  char v6; // r12

  sub_601861EC((Actor *)a1);
  v3 = FIELD_U32(a1, 280);
  if ( v3 == 2 )
  {
    if ( sub_60418548(**(_DWORD **)(FIELD_U32(a1, 268) + 12) + 4) )
      sub_601E4C88((_DWORD *)dword_60C8B13C, 111, (_DWORD *)(a1 + 80));
    if ( (*(_BYTE *)(**(_DWORD **)(FIELD_U32(a1, 268) + 12) + 28) & 0x20) != 0 )
    {
      FIELD_U32(a1, 280) = 0;
      FIELD_U32(a1, 284) = 0;
      FIELD_U32(a1, 288) = 0;
      FIELD_U32(a1, 292) = 1065353216;
      FIELD_U32(a1, 296) = 1065353216;
    }
  }
  else if ( v3 == 1 )
  {
    if ( (*(_BYTE *)(**(_DWORD **)(FIELD_U32(a1, 268) + 12) + 28) & 0x20) != 0 )
    {
      v5 = FIELD_U32(a1, 284);
      if ( v5 < 1 )
      {
        if ( !v5 )
        {
          if ( ((unsigned int)&dword_60C8C620 & ~(1612729288 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C620) )
          {
            dword_60C8C624 = (int)&sead__SafeStringBase__vtable;
            dword_60C8C628 = (int)"cobTombOpen";
            dword_60C8C62C = (int)&sead__SafeStringBase__vtable;
            dword_60C8C630 = (int)"cobTombClose";
            dword_60C8C634 = (int)&sead__SafeStringBase__vtable;
            dword_60C8C638 = (int)"cobTombEncounter";
            sub_60000288();
            _cxa_guard_release(&dword_60C8C620);
          }
          sub_6040F4B8(FIELD_U32(a1, 268), &dword_60C8C62C, 0);
          FIELD_U32(a1, 280) = 2;
        }
      }
      else
      {
        FIELD_U32(a1, 284) = v5 - 1;
      }
    }
  }
  else if ( !v3 && FIELD_U32(a1, 284) )
  {
    v4 = FIELD_U32(a1, 288);
    if ( v4 < 1 )
    {
      sub_601E4C88((_DWORD *)dword_60C8B13C, 110, (_DWORD *)(a1 + 80));
      if ( ((unsigned int)&dword_60C8C620 & ~(1612729096 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C620) )
      {
        dword_60C8C624 = (int)&sead__SafeStringBase__vtable;
        dword_60C8C628 = (int)"cobTombOpen";
        dword_60C8C62C = (int)&sead__SafeStringBase__vtable;
        dword_60C8C630 = (int)"cobTombClose";
        dword_60C8C634 = (int)&sead__SafeStringBase__vtable;
        dword_60C8C638 = (int)"cobTombEncounter";
        sub_60000288();
        _cxa_guard_release(&dword_60C8C620);
      }
      sub_6040F4B8(FIELD_U32(a1, 268), &dword_60C8C624, 0);
      FIELD_U32(a1, 280) = 1;
    }
    else
    {
      FIELD_U32(a1, 288) = v4 - 1;
    }
  }
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 268));
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
    sub_60204858(a1);
  return 1;
}
