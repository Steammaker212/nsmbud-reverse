/* sub_60584938
 * address: 0x60584938   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60584938(int a1, int a2, float *a3, unsigned int a4, int a5, int a6, int a7)
{
  float v11; // r1
  int result; // r0
  float WrappedXPos; // [sp+8h] [bp-28h] BYREF
  int v14; // [sp+Ch] [bp-24h]

  sub_6040975C(dword_60C9A1F0, BYTE2(a7));
  v11 = *a3;
  v14 = *((_DWORD *)a3 + 1);
  WrappedXPos = AreaTask_getWrappedXPos(AreaTask_intance, v11);
  TileMgr_setTile(TileMgr_instance, (unsigned int)WrappedXPos, (unsigned int)COERCE_FLOAT(v14 ^ 0x80000000), a5, 0);
  result = SE_OBJ_GET_COIN_ref_2(a1, a2, &WrappedXPos, a4, a7);
  if ( !BYTE2(a7) )
  {
    result = FIELD_U32(a1, 33808) + 1;
    FIELD_U32(a1, 33808) = result;
  }
  return result;
}
