/* sub_60335E28
 * address: 0x60335E28   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60335E28(int a1)
{
  float v2; // s0
  float v3; // s0
  _DWORD *result; // r0
  int v5; // r1
  int v6; // [sp+0h] [bp-18h] BYREF
  int speed; // [sp+4h] [bp-14h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  speed = 0x4000000;
  v6 = 0;
  moveValueTo((int *)(a1 + 164), &v6, &speed);
  v3 = CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
  }
  else
  {
    FIELD_U8(a1, 6436) = 1;
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    (*(void (__fastcall **)(int, void *, float))(*(_DWORD *)a1 + 192))(a1, &unk_60C941DC, v3);
  }
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  result = (_DWORD *)(a1 + 6304);
  v5 = FIELD_U32(a1, 6304);
  if ( v5 <= 0 )
    return (_DWORD *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C941BC);
  *result = v5 - 1;
  return result;
}
