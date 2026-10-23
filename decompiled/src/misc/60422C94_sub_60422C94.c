/* sub_60422C94
 * address: 0x60422C94   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60422C94(int a1)
{
  float v2; // s0
  int v3; // r0
  int v4; // r0
  float v5; // s2
  float v6; // s0
  int result; // r0
  int *v8; // r0
  float v9; // s2
  float v10; // s4
  int *v11; // r2
  int *v12; // r1

  if ( dword_60CD0A20 && (FIELD_U8(dword_60CD0A20, 24) || FIELD_U8(dword_60CD0A20, 25)) )
  {
    if ( FIELD_S32(dword_60CD0A20, 1680) <= 1 )
      v2 = FIELD_F32(dword_60CD0A20, 36);
    else
      v2 = 1.0;
    FIELD_F32(a1, 696) = v2;
    if ( !FIELD_U8(a1, 689) && !FIELD_U32(a1, 692) )
      FIELD_U8(a1, 688) = 1;
  }
  else
  {
    v2 = 1.0;
    FIELD_U32(a1, 696) = 1065353216;
    FIELD_U8(a1, 689) = 0;
    FIELD_U32(a1, 692) = 0;
  }
  if ( dword_60CC6BE4 )
  {
    v3 = FIELD_U32(dword_60CC6BE4, 212);
    if ( FIELD_U32(a1, 684) == 1 )
    {
      if ( !v3 )
      {
        FIELD_U32(a1, 684) = 0;
        if ( dword_60CD0B40 )
        {
          v4 = **(_DWORD **)(dword_60CD0B40 + 28);
          v5 = v2 * 1280.0;
          v6 = v2 * 720.0;
          FIELD_F32(v4, 2288) = v5;
          FIELD_F32(v4, 2292) = v6;
          FIELD_U32(v4, 2352) |= 0x200u;
          return sub_608F2904(dword_60CCF464, 0, 0, 1280, v6, 720);
        }
        sub_608F2904(dword_60CCF464, 0, 0, 1280, v2, 720);
        v2 = FIELD_F32(a1, 696);
      }
    }
    else if ( v3 == 1 )
    {
      FIELD_U32(a1, 684) = 1;
      sub_608F2904(dword_60CCF464, 0, 0, 1920, v2, 1080);
      result = dword_60CD0B40;
      if ( !dword_60CD0B40 )
        return result;
      v8 = *(int **)(dword_60CD0B40 + 28);
      v2 = FIELD_F32(a1, 696);
      v9 = 1920.0;
      v10 = 1080.0;
      goto LABEL_24;
    }
  }
  result = dword_60CD0B40;
  if ( !dword_60CD0B40 )
    return result;
  v11 = dword_60422EEC;
  v12 = dword_60422EF4;
  v8 = *(int **)(dword_60CD0B40 + 28);
  if ( !FIELD_U32(a1, 684) )
  {
    v11 = &dword_60422EEC[1];
    v12 = &dword_60422EF4[1];
  }
  v9 = *(float *)v11;
  v10 = *(float *)v12;
LABEL_24:
  result = *v8;
  FIELD_F32(result, 2288) = v2 * v9;
  FIELD_F32(result, 2292) = v2 * v10;
  FIELD_U32(result, 2352) |= 0x200u;
  return result;
}
