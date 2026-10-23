/* sub_606983F0
 * address: 0x606983F0   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606983F0(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r6
  int (__fastcall ***v5)(_DWORD, int *); // r5
  int v6; // r4
  char v7; // r12
  int v8; // r6
  int v9; // r0
  int v10; // r5
  _BYTE *v11; // r5
  int v12; // t1
  int v13; // r0
  signed int v14; // r0
  bool v15; // zf

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1617527820 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v3 )
  {
    v5 = (int (__fastcall ***)(_DWORD, int *))(**v3)(v3, &StageActor_RTTI);
    if ( v5 )
      v5 = v3;
  }
  else
  {
    v5 = 0;
  }
  v6 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1617527952 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v6
    && (**(int (__fastcall ***)(int, int *))v6)(v6, &StageActor_RTTI) == 1
    && (unsigned __int8)(FIELD_U8(v6, 533) - 1) <= 1u )
  {
    if ( ((unsigned int)&dword_60CB9434 & ~(1617528088 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9434) )
    {
      dword_60CB9430 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CB9434);
    }
    if ( v5 )
    {
      v8 = (**v5)(v5, &dword_60CB9430);
      if ( v8 )
        v8 = (int)v5;
    }
    else
    {
      v8 = 0;
    }
    if ( ((unsigned int)&dword_60C7B37C & ~(1617528216 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378) == 1 )
    {
      v9 = FIELD_S8(v6, 84);
      if ( (unsigned __int8)v9 != 255 )
      {
        v10 = v8;
        if ( (unsigned __int8)v9 < 4u )
          v10 = v8 + v9;
        v12 = FIELD_U8(v10, 6104);
        v11 = (_BYTE *)(v10 + 6104);
        if ( !v12 )
        {
          v13 = FIELD_U16(v8, 6124);
          if ( v13 == 4 )
          {
            if ( (FIELD_U8(v6, 1211) & 8) == 0 )
              return;
          }
          else if ( v13 == 3 )
          {
            if ( (FIELD_U8(v6, 1208) & 1) == 0 )
              return;
          }
          else if ( v13 == 1 && (FIELD_U8(v6, 1213) & 0x20) == 0 )
          {
            return;
          }
          if ( (FIELD_U32(v8, 20) & 0xC000000) != 0x4000000 || (FIELD_U8(v6, 1217) & 0x10) == 0 )
          {
            v14 = sub_60766714(v6);
            v15 = v14 == 0;
            if ( !v14 )
              v15 = (FIELD_U8(v6, 1219) & 8) == 0;
            if ( v15 && !*v11 )
              *v11 = 1;
          }
        }
      }
    }
  }
}
