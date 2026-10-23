/* sub_60689F30
 * address: 0x60689F30   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60689F30(int a1)
{
  int v2; // r2
  unsigned int v3; // r0
  int v5; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  v2 = FIELD_S8(a1, 8016);
  if ( v2 < 1 )
  {
    v5 = 357913941;
    target = 0;
    moveValueTo((int *)(a1 + 8020), &target, &v5);
    v3 = FIELD_U32(a1, 8020);
  }
  else
  {
    FIELD_U8(a1, 8016) = v2 - 1;
    v3 = FIELD_U32(a1, 8020) + 357913941;
    FIELD_U32(a1, 8020) = v3;
  }
  FIELD_F32(a1, 8024) = *(float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0))
                        + (float)((float)((float)(v3 & 0xFFFFFF)
                                        * *(float *)((char *)&sinLutTable[1] + ((v3 >> 20) & 0xFF0)))
                                * 0.000000059605);
  SE_OBJ_LIFTMARUTA_ROLL_ref(a1);
  ((void (__fastcall *)(int))loc_60689D78)(a1);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 6464) + 28))(a1 + 6464);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 6912) + 28))(a1 + 6912);
  ShapedCollider_execute((ColliderBase *)(a1 + 7360));
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
