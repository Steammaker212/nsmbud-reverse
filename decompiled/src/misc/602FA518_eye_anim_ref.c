/* eye_anim_ref
 * address: 0x602FA518   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall eye_anim_ref(int a1)
{
  int v2; // r1
  _DWORD *v3; // r5
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 6300);
  v3 = **(_DWORD ***)(FIELD_U32(a1, 6304) + 20);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "eye_anim";
  TexAnim_play(v3, v2, v5);
  v3[5] = 0;
  v3[7] |= 2u;
  v3[6] = 0;
  FIELD_U32(a1, 6456) = (150 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32;
  FIELD_U32(a1, 6452) = 3;
  FIELD_U32(a1, 6448) = 3;
  FIELD_U8(a1, 6464) = 0;
  return Enemy__vf264((Enemy *)a1);
}
