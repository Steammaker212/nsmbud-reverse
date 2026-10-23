/* sub_603383FC
 * address: 0x603383FC   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603383FC(StateActor *a1)
{
  int v2; // r0
  signed int v3; // r0
  unsigned int result; // r0

  if ( BYTE1(a1[1]._._.field_254.z) )
    sub_6033A26C((int)a1, 1);
  else
    (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 732))(a1);
  v2 = *(_DWORD *)&a1[1]._.collisionMgr[108];
  LODWORD(FIELD_F32(a1, 0x78)) = dword_60AF26A4[v2];
  LODWORD(FIELD_F32(a1, 0x7C)) = dword_60AF26B4[v2];
  FIELD_F32(a1, 0x80) = 0.0;
  *(float *)&a1[1]._.collisionMgr[96] = FIELD_F32(a1, 0x6C) + flt_60AF26C4[v2];
  *(float *)&a1[1]._.collisionMgr[100] = FIELD_F32(a1, 0x70) + flt_60AF26D4[v2];
  if ( v2 == 2 )
  {
    v3 = 1;
  }
  else if ( v2 == 3 )
  {
    v3 = 0;
  }
  else
  {
    v3 = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x6C));
  }
  FIELD_U32(a1, 0x50) = v3;
  result = Enemy_CommonRotations[v3];
  FIELD_U32(a1, 0xA0) = result;
  return result;
}
