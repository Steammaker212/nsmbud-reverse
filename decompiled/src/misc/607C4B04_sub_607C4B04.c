/* sub_607C4B04
 * address: 0x607C4B04   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607C4B04(int a1)
{
  _DWORD *v2; // r7
  int v3; // r1
  _BOOL4 v4; // r5
  float v5; // s0
  int v6; // r6
  float *v7; // r5
  float v8; // r0
  int v10; // [sp+0h] [bp-28h] BYREF
  int v11; // [sp+4h] [bp-24h] BYREF
  _BYTE v12[32]; // [sp+8h] [bp-20h] BYREF

  FIELD_U32(a1, 1224) |= 0x8420u;
  FIELD_U32(a1, 1204) |= 0x1000000u;
  FIELD_U32(a1, 9940) = 0;
  v2 = (_DWORD *)(a1 + 9940);
  if ( sub_60771D48(a1, 0) == 1 )
    v3 = 127;
  else
    v3 = 14;
  sub_60794954(a1 + 11356, v3, 0.0, 0.0);
  v4 = FIELD_F32(a1, 88) < 0.0;
  FIELD_U32(a1, 160) = sub_60773F3C(a1, v4);
  FIELD_U32(a1, 80) = !v4;
  FIELD_U32(a1, 11004) = !v4;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 100) = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1100))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
  v5 = FIELD_F32(a1, 88);
  v6 = 1;
  if ( v5 >= 0.0 )
  {
    v6 = 0;
    if ( v5 <= 0.0 )
      v6 = FIELD_U32(a1, 80);
  }
  v7 = (float *)&v10;
  sub_60772748(a1, &v10);
  if ( *v2 >= 2u )
  {
    if ( *v2 == 2 )
      FIELD_U32(a1, 104) = *(_DWORD *)&v12[4];
  }
  else
  {
    if ( (FIELD_U8(a1, 6906) & 1) != 0 )
    {
      if ( sub_607634E8(a1, v6) == 1 )
        v7 = (float *)&v11;
      else
        v7 = (float *)v12;
    }
    v8 = *v7;
    FIELD_F32(a1, 104) = *v7;
    if ( (FIELD_U8(a1, 1222) & 0x20) != 0 )
      FIELD_F32(a1, 104) = v8 * 3.0;
  }
  return sub_6078667C((_DWORD *)(a1 + 688), 9);
}
