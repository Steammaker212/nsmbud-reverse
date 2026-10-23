/* sub_606C70B4
 * address: 0x606C70B4   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall sub_606C70B4(MultiStateActor *a1, ActorBuildInfo *a2)
{
  MultiStateActor__ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60C1C644;
  RectCollider_ctor((RectCollider *)&a1[1]._._._.id);
  a1[1]._._._.id = (int)off_60BC30D8;
  sub_6000BAC8(&a1[1]._.collisionMgr[16], FIELD_U32(a1, 0x8));
  *(_DWORD *)&a1[1]._.collisionMgr[16] = off_60C1C730;
  *(_DWORD *)&a1[1]._.collisionMgr[52] = a1;
  MovementHandler__ctor((MovementHandler *)&a1[1]._.collisionMgr[56]);
  *(_WORD *)&a1[1]._.collisionMgr[330] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[332] = 0;
  a1[1]._.collisionMgr[328] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[324] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[320] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[316] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[312] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[308] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[304] = 0;
  a1[1]._.collisionMgr[336] = -1;
  *(_DWORD *)&a1[1]._.collisionMgr[348] = 0;
  *(_WORD *)&a1[1]._.collisionMgr[344] = 0;
  *(_WORD *)&a1[1]._.collisionMgr[342] = 0;
  *(_WORD *)&a1[1]._.collisionMgr[340] = 0;
  *(_WORD *)&a1[1]._.collisionMgr[338] = 0;
  LightMask__ctor((RevealMaskRelated *)&a1[1]._.collisionMgr[384]);
  *(_DWORD *)&a1[1]._.collisionMgr[424] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[352] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[368] = 21;
  *(_DWORD *)&a1[1]._.collisionMgr[356] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[372] = 21;
  *(_DWORD *)&a1[1]._.collisionMgr[360] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[376] = 21;
  *(_DWORD *)&a1[1]._.collisionMgr[364] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[380] = 21;
  return a1;
}
