/* sub_600AAB2C
 * address: 0x600AAB2C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600AAB2C(int a1)
{
  int v2; // r0
  int v3; // r0
  bool v4; // cc
  int result; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionMgr_process((_BYTE *)(a1 + 648));
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1108))(a1);
  sub_600B33DC(a1, v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1312))(a1);
  v3 = FIELD_U32(a1, 7128);
  v4 = v3 <= 1;
  result = v3 - 1;
  FIELD_U32(a1, 7128) = result;
  if ( v4 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C832B4);
  return result;
}
