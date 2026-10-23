/* sub_60789DBC
 * address: 0x60789DBC   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60789DBC(int a1)
{
  int v1; // r6
  int v2; // r5
  int v3; // r4
  char v4; // r0
  bool v5; // zf
  bool v6; // zf
  bool v7; // zf
  bool v8; // zf

  v2 = a1;
  v3 = 0;
  v4 = FIELD_U8(a1, 66);
  v5 = (v4 & 1) == 0;
  if ( (v4 & 1) != 0 )
  {
    v1 = FIELD_U32(v2, 32);
    v5 = v1 == 0;
  }
  if ( !v5 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 636))(v1) == 1 )
    {
      if ( !(*(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 640))(v1, 3)
        && !(*(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 640))(v1, 5) )
      {
        v3 = 1;
      }
    }
    else
    {
      v3 = 1;
    }
  }
  v6 = (FIELD_U8(v2, 66) & 2) == 0;
  if ( (FIELD_U8(v2, 66) & 2) != 0 )
  {
    v1 = FIELD_U32(v2, 36);
    v6 = v1 == 0;
  }
  if ( !v6 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 636))(v1) == 1 )
    {
      if ( !(*(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 640))(v1, 3)
        && !(*(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 640))(v1, 5) )
      {
        ++v3;
      }
    }
    else
    {
      ++v3;
    }
  }
  v7 = (FIELD_U8(v2, 66) & 4) == 0;
  if ( (FIELD_U8(v2, 66) & 4) != 0 )
  {
    v1 = FIELD_U32(v2, 40);
    v7 = v1 == 0;
  }
  if ( !v7 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 636))(v1) == 1 )
    {
      if ( !(*(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 640))(v1, 3)
        && !(*(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 640))(v1, 5) )
      {
        ++v3;
      }
    }
    else
    {
      ++v3;
    }
  }
  v8 = (FIELD_U8(v2, 66) & 8) == 0;
  if ( (FIELD_U8(v2, 66) & 8) != 0 )
  {
    v2 = FIELD_U32(v2, 44);
    v8 = v2 == 0;
  }
  if ( v8 )
    return v3;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 636))(v2) != 1 )
    return ++v3;
  if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 640))(v2, 3) )
    return v3;
  if ( !(*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 640))(v2, 5) )
    ++v3;
  return v3;
}
