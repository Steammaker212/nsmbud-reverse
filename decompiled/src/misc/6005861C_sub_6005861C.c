/* sub_6005861C
 * address: 0x6005861C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005861C(int a1)
{
  int result; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7204));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( FIELD_U16(a1, 6276) == 4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1324))(a1);
  result = FIELD_U32(a1, 2872);
  if ( (result & 0x440000) != 0 && (result & 0x10000000) == 0 || (result & 0x880000) != 0 && (result & 0x20000000) == 0 )
  {
    if ( FIELD_F32(a1, 120) != 0.0 && (result & 1) == 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1320))(a1);
      result = FIELD_U32(a1, 2872);
    }
    FIELD_U32(a1, 120) = 0;
  }
  if ( (result & 1) != 0 && FIELD_F32(a1, 124) < 0.0 )
  {
    FIELD_U32(a1, 124) = 0;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C80AE4);
  }
  return result;
}
