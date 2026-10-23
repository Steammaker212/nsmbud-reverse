/* sub_605B4110
 * address: 0x605B4110   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B4110(int a1, unsigned __int8 *a2, int a3)
{
  int v6; // r5
  int v7; // r8
  char v8; // r12
  int v9; // r1
  char v10; // r0
  bool v11; // zf
  int result; // r0
  bool v13; // zf
  int v14; // r1
  char v15; // r0

  sub_605B434C();
  v6 = FIELD_U32(a1, 144);
  v7 = (*(int (__fastcall **)(unsigned __int8 *, int, int))(*(_DWORD *)a2 + 32))(a2, a1, a3);
  if ( ((unsigned int)&dword_60C7B384 & ~(1616593240 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
  {
    dword_60C7B380 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C7B384);
  }
  if ( !v6 || (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B380) != 1 )
    goto LABEL_27;
  if ( (a2[2534] & 1) != 0 && (a2[2542] & 1) != 0 )
    FIELD_U32(v6, 6824) = 2;
  if ( (unsigned __int8)(FIELD_U8(v7, 533) - 1) <= 1u )
  {
    FIELD_U8(v6, 552) = 1;
    v9 = FIELD_S8(v7, 84);
    v10 = v9;
    if ( (unsigned __int8)v9 != 255 )
    {
      if ( (unsigned __int8)v9 >= 4u )
        v9 = 0;
      *(_BYTE *)(v6 + 12 * v9 + 6918) = v10;
    }
    v11 = (a2[2533] & 0x80) == 0;
    if ( (a2[2533] & 0x80) != 0 )
      v11 = (a2[2541] & 0x80) == 0;
    if ( !v11 )
    {
      FIELD_U32(v6, 6824) = 2;
      FIELD_U8(v6, 6843) = 1;
      FIELD_U8(v6, 6841) = 1;
    }
    result = a2[2528];
    v13 = (result & 0x40) == 0;
    if ( (result & 0x40) != 0 )
    {
      result = a2[2536];
      v13 = (result & 0x40) == 0;
    }
    if ( !v13 )
    {
      FIELD_U8(v6, 6845) = 3;
      v14 = FIELD_S8(v7, 84);
      v15 = v14;
      if ( (unsigned __int8)v14 != 255 )
      {
        if ( (unsigned __int8)v14 >= 4u )
          v14 = 0;
        *(_BYTE *)(v6 + 12 * v14 + 6918) = v15;
        FIELD_U8(v6, 6840) = v15;
      }
      if ( FIELD_U8(v6, 6876) )
      {
        FIELD_U32(v6, 6824) = a3;
        FIELD_U8(v6, 6849) = a3;
        FIELD_U8(v6, 6844) = 1;
        result = 6841;
      }
      else
      {
        FIELD_U8(v6, 6849) = a3;
        result = 6844;
      }
      *(_BYTE *)(v6 + result) = 1;
    }
  }
  else
  {
LABEL_27:
    result = sub_605B4548(v6, v7, a1, a2, a3);
    if ( !result )
      return sub_605B4930(a1, a2, a3);
  }
  return result;
}
