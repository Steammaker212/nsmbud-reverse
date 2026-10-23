/* sub_606C2F80
 * address: 0x606C2F80   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C2F80(int a1)
{
  int result; // r0
  char v3; // r12
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r5
  int v7; // r0

  result = FIELD_U32(a1, 7436);
  if ( !result )
  {
    result = dword_60CC6484;
    if ( FIELD_F32(a1, 112) >= (float)((float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108))
                                       + -48.0) )
    {
      result = sub_605B4CC4(a1);
      if ( result == 2 )
      {
        FIELD_U8(a1, 6846) = 2;
        FIELD_U32(a1, 6864) = 3;
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB0558);
      }
      else if ( result == 1 )
      {
        v4 = 0;
        v5 = FIELD_U8(a1, 6850);
        if ( v5 < 4 )
          v4 = (char)v5;
        v6 = *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 48);
        if ( ((unsigned int)&dword_60C7B37C & ~(1617702940 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( v6 )
        {
          if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378) == 1 )
          {
            v7 = FIELD_U32(v6, 1212);
            if ( (v7 & 0xC) != 0 || FIELD_U32(v6, 1208) & 0x8000000 | v7 & 0x1000000 )
              FIELD_U8(a1, 7440) = 1;
          }
        }
        FIELD_U8(a1, 6846) = 1;
        FIELD_U32(a1, 6864) = 2;
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB0534);
      }
    }
  }
  return result;
}
