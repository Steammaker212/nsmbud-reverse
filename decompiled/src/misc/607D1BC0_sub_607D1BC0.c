/* sub_607D1BC0
 * address: 0x607D1BC0   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D1BC0(int a1)
{
  int result; // r0
  int v3; // r0
  ActiveCollider **v4; // r5
  bool v5; // zf
  float CenterX; // s0
  ActiveCollider *v7; // r0
  float v8; // s0
  float v9; // s16
  float CenterY; // s0

  result = FIELD_U8(a1, 1238);
  if ( (result & 4) == 0 )
    return result;
  v4 = (ActiveCollider **)(a1 + 11472);
  v3 = FIELD_U32(a1, 11472);
  v5 = v3 == 0;
  if ( v3 )
    v5 = FIELD_U8(a1, 11480) == 0;
  if ( !v5 )
  {
    sub_607D176C(a1, FIELD_U32(v3, 64));
    result = sub_607CBC00(a1);
    if ( !result )
      return result;
    ActiveCollider_getCenterX(*v4);
LABEL_17:
    JUMPOUT(0x607D60C0);
  }
  result = ((int (__fastcall *)(int))loc_607D1D08)(a1);
  if ( !result )
  {
    result = (int)*v4;
    if ( *v4 )
    {
      if ( !FIELD_U8(a1, 11480) )
      {
        if ( *(_DWORD *)(FIELD_U32(a1, 11368) + 32) != 105 )
        {
          sub_607949A4(a1 + 11364, 105);
          result = (int)*v4;
        }
        FIELD_U32(a1, 11428) = 5;
        CenterX = ActiveCollider_getCenterX((ActiveCollider *)result);
        v7 = *v4;
        v8 = CenterX >= FIELD_F32(a1, 108) ? ActiveCollider_getLeft(v7) : ActiveCollider_getRight(v7);
        v9 = v8;
        CenterY = ActiveCollider_getCenterY((ActiveCollider *)(a1 + 8048));
        FIELD_F32(a1, 11484) = v9;
        FIELD_F32(a1, 11488) = CenterY;
        FIELD_U8(a1, 11492) = 1;
        result = sub_607CBC00(a1);
        if ( result )
          goto LABEL_17;
      }
    }
  }
  return result;
}
