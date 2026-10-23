/* sub_603CBF3C
 * address: 0x603CBF3C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CBF3C(int a1)
{
  int v2; // r7
  int v3; // r5
  _DWORD *v4; // r6
  int v5; // r2
  signed int v6; // r3
  int v8; // [sp+4h] [bp-1Ch] BYREF

  v2 = FIELD_U32(a1, 160);
  v4 = (_DWORD *)(a1 + 6324);
  v3 = FIELD_U32(a1, 6324);
  Enemy__beginState_DieFall((Enemy *)a1);
  FIELD_U32(a1, 160) = v3 + v2;
  *v4 = 0;
  FIELD_U8(a1, 6056) = 1;
  ((void (__fastcall *)(int *, _DWORD, int, _DWORD))checkLiquidCollisions)(
    &v8,
    0,
    a1 + 108,
    FIELD_U8(a1, 86));
  if ( v8 )
  {
    FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * 0.3;
    FIELD_U32(a1, 124) = 1069547520;
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 136) = -1077936128;
    FIELD_U32(a1, 140) = 0;
    FIELD_U32(a1, 100) = -1115684864;
  }
  return sub_603CBC1C(a1, 1, v5, v6);
}
