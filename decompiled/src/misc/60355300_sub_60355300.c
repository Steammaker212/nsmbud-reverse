/* sub_60355300
 * address: 0x60355300   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60355300(int a1)
{
  int result; // r0
  int *v3; // r5
  _DWORD *v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r1
  unsigned int v10; // r2
  unsigned int v11; // r0
  int v12; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  v3 = (int *)(a1 + 6312);
  result = FIELD_U32(a1, 6312);
  if ( result == 1 )
  {
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95138);
    }
    else
    {
      target = 715827882;
      v12 = 59652323;
      result = moveValueTo((int *)(a1 + 156), &target, &v12);
      if ( FIELD_F32(a1, 124) < -0.8 )
      {
        v4 = *(_DWORD **)(a1 + 6332);
        v5 = v4[3];
        v6 = v4[2];
        v7 = v4[17];
        if ( v6 > v7 )
          v5 += 4 * v7;
        result = *(unsigned __int8 *)(*(_DWORD *)v5 + 28);
        if ( (result & 0x20) != 0 )
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95098);
      }
    }
  }
  else if ( !result )
  {
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    {
      v8 = *(_DWORD **)(a1 + 6332);
      v9 = (_DWORD *)v8[3];
      v10 = v8[2];
      v11 = v8[17];
      if ( v10 > v11 )
        v9 += v11;
      result = sub_60418548(*v9 + 4);
      if ( result == 1 )
      {
        FIELD_U32(a1, 124) = 1075838976;
        FIELD_F32(a1, 120) = *(float *)&dword_60AF1EC0[FIELD_U32(a1, 80)] * 0.5;
        FIELD_U32(a1, 100) = -1103101952;
        FIELD_U8(a1, 6460) = 0;
        result = *v3 + 1;
        *v3 = result;
      }
    }
    else
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C950F8);
    }
  }
  return result;
}
