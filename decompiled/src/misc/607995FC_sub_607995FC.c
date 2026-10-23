/* sub_607995FC
 * address: 0x607995FC   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607995FC(int a1)
{
  _BOOL4 v2; // r0
  bool v3; // zf
  int v4; // r0
  int v5; // r1
  int v6; // r1
  int v7; // r2
  int v8; // r1
  int v9; // r2
  int result; // r0

  FIELD_U8(a1, 3885) = 0;
  FIELD_U8(a1, 3881) = 0;
  FIELD_U8(a1, 3877) = 0;
  FIELD_U8(a1, 3873) = 0;
  FIELD_U8(a1, 3869) = 0;
  FIELD_U8(a1, 3865) = 0;
  FIELD_U8(a1, 3861) = 0;
  FIELD_U8(a1, 3857) = 0;
  FIELD_U8(a1, 3884) = 0;
  FIELD_U8(a1, 3887) = 0;
  FIELD_U8(a1, 3886) = 0;
  FIELD_U8(a1, 3880) = 0;
  FIELD_U8(a1, 3883) = 0;
  FIELD_U8(a1, 3882) = 0;
  FIELD_U8(a1, 3876) = 0;
  FIELD_U8(a1, 3879) = 0;
  FIELD_U8(a1, 3878) = 0;
  FIELD_U8(a1, 3872) = 0;
  FIELD_U8(a1, 3875) = 0;
  FIELD_U8(a1, 3874) = 0;
  FIELD_U8(a1, 3868) = 0;
  FIELD_U8(a1, 3871) = 0;
  FIELD_U8(a1, 3870) = 0;
  FIELD_U8(a1, 3864) = 0;
  FIELD_U8(a1, 3867) = 0;
  FIELD_U8(a1, 3866) = 0;
  FIELD_U8(a1, 3860) = 0;
  FIELD_U8(a1, 3863) = 0;
  FIELD_U8(a1, 3862) = 0;
  FIELD_U8(a1, 3856) = 0;
  FIELD_U8(a1, 3859) = 0;
  FIELD_U8(a1, 3858) = 0;
  sub_6076107C(a1);
  sub_607993A8(a1);
  if ( !FIELD_U8(dword_60C9A1F0, 6536) )
    FIELD_U32(a1, 3880) |= 0x4000u;
  v2 = sub_6075F914((_DWORD *)a1);
  v3 = !v2;
  if ( !v2 )
    v3 = (FIELD_U8(a1, 1219) & 1) == 0;
  if ( v3 )
    FIELD_U32(a1, 3880) |= 2u;
  v4 = FIELD_U32(a1, 1212);
  if ( (v4 & 0x4000) != 0 )
    FIELD_U32(a1, 3880) |= 0x40000000u;
  if ( (v4 & 0x2000) != 0 )
    FIELD_U32(a1, 3884) |= 0x800000u;
  if ( (FIELD_U8(a1, 6904) & 8) == 0 )
  {
    v5 = FIELD_U32(a1, 1208);
    if ( (v5 & 0x10000060) != 0 )
    {
      FIELD_U32(a1, 3856) |= 0x40000u;
      FIELD_U32(a1, 3864) |= 0x40000u;
      if ( (v5 & 0x80) != 0 )
        FIELD_U32(a1, 3880) |= 0x400000u;
    }
  }
  v6 = FIELD_U32(a1, 1320);
  if ( v6 == 5 )
  {
    v8 = 0x80000;
    v7 = 3;
  }
  else
  {
    if ( v6 != 8 )
      goto LABEL_21;
    v7 = 1;
    FIELD_U32(a1, 3884) |= 0x4000u;
    FIELD_U32(a1, 3876) |= 0x4000u;
    FIELD_U32(a1, 3860) |= 0x4000u;
    v8 = 0x4000;
  }
  *(_DWORD *)(a1 + 8 * v7 + 3860) |= v8;
LABEL_21:
  if ( (v4 & 0x1A000) != 0 )
  {
    FIELD_U32(a1, 3872) |= 0x10008000u;
    v9 = FIELD_U32(a1, 3864);
    FIELD_U32(a1, 3856) |= 0x10008000u;
    FIELD_U32(a1, 3864) = v9 | 0x10008000;
  }
  result = FIELD_U8(a1, 1216);
  if ( (result & 8) != 0 )
  {
    FIELD_U32(a1, 3856) |= 0x10000u;
    result = FIELD_U32(a1, 3864) | 0x10000;
    FIELD_U32(a1, 3864) = result;
  }
  return result;
}
