/* IceBro_vf194
 * address: 0x602F1F6C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall IceBro_vf194(int result)
{
  int v1; // r1
  int *v2; // r4

  v2 = (int *)(result + 12468);
  v1 = FIELD_U32(result, 12468);
  FIELD_U32(result, 12468) = v1 - 1;
  if ( v1 < 2 )
  {
    if ( (FIELD_U8(result, 2872) & 1) != 0 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)result + 192))(result, &dword_60C92758);
      result = ((3 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 2;
      *v2 = result;
    }
  }
  else
  {
    FIELD_U32(result, 6564) = 2;
    return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)result + 192))(result, &BroBase_StateID_Attack);
  }
  return result;
}
