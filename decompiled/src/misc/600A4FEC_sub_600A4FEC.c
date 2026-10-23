/* sub_600A4FEC
 * address: 0x600A4FEC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A4FEC(int a1)
{
  _WORD *v2; // r6
  signed int v3; // r0
  int v4; // r5
  int result; // r0

  CollisionMgr_process((_BYTE *)(a1 + 648));
  v2 = (_WORD *)(a1 + 6276);
  if ( FIELD_U16(a1, 6276) < 0x1Fu )
    EffectWrapper_update((EffectWrapper *)(a1 + 8320), 105, (Vec3 *)(a1 + 108), 0, 0);
  v3 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v3;
  v4 = byte_60AFE3F4[v3];
  FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v4;
  result = (unsigned __int16)*v2;
  if ( !*v2 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C82B68);
  return result;
}
