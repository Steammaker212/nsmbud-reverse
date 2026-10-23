/* KoopaTroopa_decideFirstState
 * address: 0x6035C740   size: 324   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_decideFirstState(Enemy *a1)
{
  unsigned int settings1; // r1
  int result; // r0
  int v4; // r0
  int direction; // r0
  int v6; // r2
  StateVirtual *v7; // r1
  char *v8; // r1

  settings1 = FIELD_U32(a1, 0x0)._._._.settings1;
  if ( (settings1 & 0x70000000) != 0 )
    return (*(int (__fastcall **)(Enemy *, State *))(FIELD_U32(a1, 0x0)._._._.vtable + 0xC0))(a1, &KoopaTroopa_StateID_BlockAppear);
  v4 = (settings1 >> 8) & 3;
  if ( v4 == 1 )
  {
    direction = 1;
  }
  else if ( v4 == 2 )
  {
    direction = 0;
  }
  else
  {
    direction = StageActor__directionToPlayerX((StateActor *)a1, &FIELD_U32(a1, 0x0)._._.position);
    settings1 = FIELD_U32(a1, 0x0)._._._.settings1;
  }
  FIELD_U32(a1, 0x0)._._.direction = direction;
  v6 = dword_60AF20E0[*(_DWORD *)&a1[1]._._.collisionMgr[528]];
  if ( direction )
    v6 = -v6;
  FIELD_U32(a1, 0x0)._._.rotation.y = v6;
  a1[1]._._._.field_234 = -178956970 * byte_60AFE3F4[direction];
  if ( (settings1 & 0x10000) != 0 )
  {
    (*(void (__fastcall **)(Enemy *, State *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &KoopTroopa_StateID_FrozenRelated);
  }
  else
  {
    if ( a1[1]._._._._.field_34 )
      v7 = (StateVirtual *)&KoopaTroopa_StateID_Walk;
    else
      v7 = &KoopaTroopa_StateID_InShell;
    (*(void (__fastcall **)(Enemy *, StateVirtual *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, v7);
  }
  if ( !FIELD_U32(a1, 0x0)._.collisionMgr[2344] )
  {
    result = (unsigned __int8)FIELD_U32(a1, 0x0)._.collisionMgr[2352];
    if ( !FIELD_U32(a1, 0x0)._.collisionMgr[2352] )
      return result;
    v8 = &FIELD_U32(a1, 0x0)._.collisionMgr[2440];
    return sub_60003C60((int)a1, (int)v8, 320.0);
  }
  result = (unsigned __int8)FIELD_U32(a1, 0x0)._.collisionMgr[2348];
  if ( !FIELD_U32(a1, 0x0)._.collisionMgr[2348] )
  {
    v8 = &FIELD_U32(a1, 0x0)._.collisionMgr[2392];
    return sub_60003C60((int)a1, (int)v8, 320.0);
  }
  return result;
}
