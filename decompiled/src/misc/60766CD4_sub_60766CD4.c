/* sub_60766CD4
 * address: 0x60766CD4   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60766CD4(int a1)
{
  unsigned int v2; // r0
  int v3; // r1
  bool v4; // zf
  int *v5; // r6
  int v6; // r0
  int v7; // r1
  bool v8; // nf
  int *v9; // r6
  int v10; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 1228);
  if ( (v2 & 0x20) != 0 && FIELD_S8(dword_60C9CF0C, 1404) >= 0 && !FIELD_U8(dword_60C9CF0C, 1406) )
  {
    v3 = FIELD_S8(a1, 84);
    if ( v3 >= 0 && (v2 & 0x400000) != 0 )
    {
      FIELD_U32(PlayerMgr_instance, 144) &= ~(1 << v3);
      FIELD_U8(dword_60C99DE4, 29) &= ~(1 << FIELD_U8(a1, 84));
      FIELD_U32(a1, 1204) &= ~0x20u;
      v2 = FIELD_U32(a1, 1228) & 0xFFBFFFFF;
      FIELD_U32(a1, 1228) = v2;
    }
    FIELD_U32(a1, 1228) = v2 & 0xFFFFFFDF;
  }
  v4 = (FIELD_U8(a1, 6900) & 1) == 0;
  if ( (FIELD_U8(a1, 6900) & 1) == 0 )
    v4 = (FIELD_U8(a1, 1214) & 0x20) == 0;
  if ( !v4 || (FIELD_U8(a1, 1208) & 0x20) != 0 )
  {
    v5 = (int *)(a1 + 9872);
    v6 = sub_6078675C(a1 + 688);
    v7 = 0;
    if ( v6 == 1 )
    {
      v7 = *v5 + 1;
      v8 = *v5 - 99 < 0;
      *v5 = v7;
      if ( v8 == __OFSUB__(v7, 100) )
        v7 = 100;
    }
    *v5 = v7;
    v9 = (int *)(a1 + 9868);
    if ( sub_60786750(a1 + 688) == 1 )
    {
      v10 = *v9 + 1;
      if ( v10 >= 100 )
        v10 = 100;
      *v9 = v10;
    }
    else
    {
      *v9 = 0;
    }
  }
  else
  {
    FIELD_U32(a1, 9872) = 0;
    FIELD_U32(a1, 9868) = 0;
  }
  if ( !FIELD_U32(a1, 9712) && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 708))(a1) == 1 )
    FIELD_U32(a1, 1224) |= 0x10000u;
  result = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 716))(a1, 1);
  if ( !result )
  {
    result = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 716))(a1, 0);
    if ( !result )
    {
      result = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 716))(a1, 3);
      if ( !result )
        return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 716))(a1, 2);
    }
  }
  return result;
}
