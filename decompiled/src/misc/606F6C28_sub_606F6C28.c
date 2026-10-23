/* sub_606F6C28
 * address: 0x606F6C28   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606F6C28(int a1)
{
  _DWORD *v2; // r1
  signed int result; // r0
  Vec3 v4; // [sp+4h] [bp-2Ch] BYREF
  Vec3 v5; // [sp+10h] [bp-20h] BYREF
  char v6; // [sp+1Ch] [bp-14h] BYREF

  FIELD_U32(a1, 6520) = 0;
  v2 = (_DWORD *)(a1 + 6524);
  do
  {
    *v2 = 0;
    v2[4] = 0;
    v2[5] = 0x40000000;
    v2 += 9;
  }
  while ( (unsigned int)v2 <= a1 + 6848 );
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 6116) = 0;
  FIELD_U16(a1, 6148) = 30;
  ((void (__fastcall *)(char *, int, int, _DWORD))checkLiquidCollisions)(
    &v6,
    a1 + 6124,
    a1 + 108,
    FIELD_U8(a1, 86));
  v5.x = FIELD_F32(a1, 108);
  v5.y = FIELD_F32(a1, 6124);
  v5.z = 6500.0;
  result = FIELD_U8(a1, 6140);
  if ( !FIELD_U8(a1, 6140) )
  {
    result = StageActor__isOffScreen((StageActor *)a1);
    if ( !result )
    {
      v4.x = FIELD_F32(a1, 144);
      v4.y = v4.x;
      v4.z = v4.x;
      return EffectWrapper_update((EffectWrapper *)(a1 + 8116), 29, &v5, 0, &v4);
    }
  }
  return result;
}
