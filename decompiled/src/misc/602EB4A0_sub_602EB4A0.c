/* sub_602EB4A0
 * address: 0x602EB4A0   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EB4A0(int a1)
{
  float v2; // s0
  int result; // r0
  float v4; // s2
  int v5; // r1
  float v6; // s2
  int v7; // [sp+4h] [bp-1Ch] BYREF

  StageActor__accelerateX((StageActor *)a1);
  if ( ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 124, -0.33, 0.3, 0.75, 0.0) < 0.25 )
    FIELD_U32(a1, 124) = -1096223293;
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = fabsf(FIELD_F32(a1, 120));
  if ( v2 > 0.25 )
  {
    CollisionMgr_process((_BYTE *)(a1 + 648), v2);
    if ( sub_6000346C(a1) == 1 )
      return sub_602EE7D8(a1, FIELD_U32(a1, 80) ^ 1, FIELD_S8(a1, 84), 0);
  }
  ((void (__fastcall *)(int *, int, int, int, _DWORD))physics_21893E8)(
    &v7,
    a1 + 7432,
    a1 + 7504,
    a1 + 108,
    FIELD_U8(a1, 86));
  FIELD_U32(a1, 7520) = v7;
  v4 = FIELD_F32(a1, 108);
  result = dword_60CC6484;
  if ( (v4 < (float)(FIELD_F32(dword_60CC6484, 112) + -64.0) || v4 > (float)(FIELD_F32(dword_60CC6484, 120) + 64.0))
    && (v5 = FIELD_U32(a1, 56)) != 0 )
  {
    FIELD_U8(v5, 19) = 1;
    return 1;
  }
  else
  {
    v6 = FIELD_F32(a1, 112);
    if ( v6 < (float)(FIELD_F32(dword_60CC6484, 132) + -64.0) || v6 > (float)(FIELD_F32(dword_60CC6484, 124) + 16.0) )
    {
      result = FIELD_U32(a1, 56);
      if ( result )
        FIELD_U8(result, 19) = 1;
    }
  }
  return result;
}
