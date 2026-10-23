/* sub_607680DC
 * address: 0x607680DC   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607680DC(int a1)
{
  float v2; // s0
  int v3; // r0
  float v4; // r2
  int v5; // r0
  int v6; // r5
  int v7; // r1
  _DWORD *v8; // r4
  int v10; // [sp+4h] [bp-24h] BYREF
  float v11; // [sp+8h] [bp-20h]
  int v12; // [sp+Ch] [bp-1Ch]

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v10 = FIELD_U32(a1, 108);
  v11 = v2 + 16.0;
  v12 = v3;
  sub_60833074((float *)&v10);
  v4 = v11;
  v5 = dword_60CC62E4 + 116;
  FIELD_U32(dword_60CC62E4, 116) = v10;
  FIELD_F32(v5, 4) = v4;
  FIELD_U32(v5, 8) = 0;
  Player_changeState(a1, &stru_60CBF81C, 0);
  FIELD_U8(a1, 9764) = 0;
  v6 = sub_60778454(dword_60CBFA90, FIELD_S8(a1, 84));
  if ( v6 == sub_6077832C(dword_60CBFA90) - 1 )
    FIELD_U8(a1, 9764) = 1;
  v7 = FIELD_U32(a1, 9728);
  v8 = (_DWORD *)(a1 + (dword_60B0A964[2 * v7 + 1] >> 1));
  return (*(int (__fastcall **)(_DWORD *))(*v8 + dword_60B0A964[2 * v7]))(v8);
}
