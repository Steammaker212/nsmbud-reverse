/* sub_6002CDD8
 * address: 0x6002CDD8   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6002CDD8(int a1)
{
  _BYTE *result; // r0
  float v3; // s4
  float v4; // s2
  float v5; // s0

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  result = (_BYTE *)(a1 + 7427);
  if ( FIELD_U8(a1, 7427) == 1 )
  {
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
      FIELD_U32(a1, 124) = 0;
    FIELD_F32(a1, 144) = FIELD_F32(a1, 144) + FIELD_F32(a1, 7352);
    v5 = FIELD_F32(a1, 148) + FIELD_F32(a1, 7356);
    FIELD_F32(a1, 148) = v5;
    FIELD_F32(a1, 152) = FIELD_F32(a1, 152) + FIELD_F32(a1, 7360);
    if ( v5 >= 2.5 )
    {
      FIELD_U32(a1, 144) = 1075838976;
      FIELD_U32(a1, 148) = 1075838976;
      FIELD_U32(a1, 152) = 1075838976;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7F9C8);
    }
    return (_BYTE *)(*(int (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 7096) + 68))(
                      **(_DWORD **)(a1 + 7096),
                      a1 + 144);
  }
  else if ( FIELD_U8(a1, 7427) )
  {
    return (_BYTE *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7F9C8);
  }
  else if ( !FIELD_U16(a1, 6276) )
  {
    v3 = 2.5 - FIELD_F32(a1, 7348);
    v4 = (float)(2.5 - FIELD_F32(a1, 7344)) * 0.25;
    FIELD_F32(a1, 7352) = (float)(2.5 - FIELD_F32(a1, 7340)) * 0.25;
    FIELD_F32(a1, 7356) = v4;
    FIELD_F32(a1, 7360) = v3 * 0.25;
    *result = 1;
  }
  return result;
}
