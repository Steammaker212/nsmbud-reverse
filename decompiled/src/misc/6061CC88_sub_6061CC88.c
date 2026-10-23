/* sub_6061CC88
 * address: 0x6061CC88   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6061CC88(int a1)
{
  float v2; // s0
  float v3; // s2
  float v4; // s0
  StateMethodExecuter *result; // r0
  int v6; // [sp+0h] [bp-10h] BYREF
  char v7; // [sp+4h] [bp-Ch] BYREF

  v2 = 0.5;
  v3 = FIELD_F32(a1, 124) + -0.0125;
  if ( v3 <= 0.5 )
  {
    v2 = FIELD_F32(a1, 124) + -0.0125;
    if ( v3 < -0.5 )
      v2 = -0.5;
  }
  FIELD_F32(a1, 124) = v2;
  FIELD_F32(a1, 112) = v2 + FIELD_F32(a1, 112);
  v4 = ((float (__fastcall *)(int *, char *, int, _DWORD))checkLiquidCollisions)(
         &v6,
         &v7,
         a1 + 108,
         FIELD_U8(a1, 86));
  CollisionMgr_process((_BYTE *)(a1 + 648), v4);
  sub_6000346C(a1);
  result = (StateMethodExecuter *)(a1 + 6828);
  if ( (float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 6828)) <= FIELD_F32(dword_60CC6484, 28) )
  {
    if ( FIELD_U8(a1, 6868) )
    {
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB35DC);
    }
    else
    {
      FIELD_U8(a1, 19) = 1;
      return (StateMethodExecuter *)1;
    }
  }
  return result;
}
