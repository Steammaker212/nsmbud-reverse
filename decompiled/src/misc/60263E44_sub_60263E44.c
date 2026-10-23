/* sub_60263E44
 * address: 0x60263E44   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60263E44(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r3
  int v5; // r1
  int v6; // r2
  bool v7; // zf
  int v8[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 728))(a1) )
  {
    result = sub_60003AE0((StageActor *)a1);
    if ( result == 1 )
    {
      FIELD_U8(a1, 536) = 1;
      v3 = FIELD_U32(a1, 112);
      v8[0] = FIELD_U32(a1, 108);
      v8[1] = v3;
      v8[2] = 1166843904;
      sub_602A38A4(a1, v8);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 364))(a1);
      return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &BroBase_StateID_DieFall);
    }
  }
  else
  {
    if ( (FIELD_U32(a1, 2872) & 0x10401) == 0x401 )
    {
      if ( FIELD_U16(a1, 5952) == 0x1F )
        sub_6014B69C(a1 + 648);
      if ( FIELD_U16(a1, 5944) == 0x1F )
        sub_6014B6F8(a1 + 648);
    }
    v4 = FIELD_U32(a1, 2872);
    result = (v4 & 0x10000000) == 0;
    v5 = v4 & 0x440000;
    if ( (v4 & 0x440000) != 0 )
      v5 = 1;
    v6 = v4 & 0x880000;
    if ( (v4 & 0x880000) != 0 )
      v6 = 1;
    v7 = (v4 & 0x20000000) == 0;
    if ( (v4 & 0x20000000) == 0 )
    {
      result &= v5 & v6;
      v7 = result == 1;
    }
    if ( v7 )
    {
      if ( FIELD_U16(a1, 5928) == 0x1F )
        sub_6014B758(a1 + 648, 0);
      result = FIELD_U16(a1, 5936);
      if ( result == 0x1F )
        return sub_6014B758(a1 + 648, 1);
    }
  }
  return result;
}
