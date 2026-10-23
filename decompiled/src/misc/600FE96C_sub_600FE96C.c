/* sub_600FE96C
 * address: 0x600FE96C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600FE96C(int a1)
{
  int result; // r0
  int *v3; // r5
  float v4; // s2
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  FIELD_F32(a1, 112) = FIELD_F32(a1, 184) + FIELD_F32(a1, 112);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v3 = (int *)(a1 + 9444);
  result = FIELD_U32(a1, 9444);
  if ( result < 1
    || !FIELD_U16(a1, 6276)
    && (*v3 = result - 1,
        FIELD_U16(a1, 6276) = FIELD_U32(a1, 9452),
        v4 = FIELD_F32(a1, 112),
        v5[0] = FIELD_U32(a1, 108),
        *(float *)&v5[1] = v4 + -16.5,
        sub_60716054(TileMgr_instance, v5, 3),
        result = *v3,
        *v3 <= 0) )
  {
    result = FIELD_U16(a1, 6278);
    if ( !FIELD_U16(a1, 6278) )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85F54);
  }
  return result;
}
