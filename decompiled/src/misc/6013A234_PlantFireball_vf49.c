/* PlantFireball_vf49
 * address: 0x6013A234   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlantFireball_vf49(CollisionActor *a1)
{
  int v2; // r1
  bool v3; // cc
  int v4; // r2
  float y; // s2
  float z; // s4
  int v7; // r1
  float v8; // s8
  char *collisionMgr; // r5
  int v10; // r0
  int direction; // r1
  int result; // r0

  CollisionActor__handleSpeed(a1);
  v2 = *(_DWORD *)&a1[1].collisionMgr[64];
  if ( v2 )
  {
    v3 = v2 <= 1;
    v4 = *(_DWORD *)&a1[1].collisionMgr[64];
    y = FIELD_F32(a1, 0x94);
    z = FIELD_F32(a1, 0x98);
    v7 = v2 - 1;
    if ( v3 )
      v4 = 1;
    v8 = 1.0 / (float)v4;
    FIELD_F32(a1, 0x90) = FIELD_F32(a1, 0x90) + (float)(v8 * (float)(1.0 - FIELD_F32(a1, 0x90)));
    FIELD_F32(a1, 0x94) = y + (float)(v8 * (float)(1.0 - y));
    FIELD_F32(a1, 0x98) = z + (float)(v8 * (float)(1.0 - z));
    *(_DWORD *)&a1[1].collisionMgr[64] = v7;
  }
  collisionMgr = FIELD_U8(a1, 0x288);
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  v10 = *(_DWORD *)&FIELD_U8(a1, 0x288)[2224];
  if ( (v10 & 1) == 0 )
  {
    if ( (v10 & 0x10) != 0 )
      goto LABEL_11;
    direction = FIELD_U32(a1, 0x50);
    if ( (*(_DWORD *)&collisionMgr[4 * ((direction + 18) >> 5) + 2224] & (1 << ((direction + 18) & 0x1F))) != 0
      || (*(_DWORD *)&collisionMgr[4 * ((direction + 22) >> 5) + 2224] & (1 << ((direction + 22) & 0x1F))) != 0 )
    {
      if ( (v10 & 0x10400) != 0x400
        && (*(_DWORD *)&collisionMgr[4 * ((direction + 28) >> 5) + 2224] & (1 << ((direction + 28) & 0x1F))) != 0 )
      {
LABEL_11:
        result = *(_DWORD *)&FIELD_U8(a1, 0x288)[5308] & 0xFF00;
        if ( result != 0x300 )
          return result;
      }
    }
    else if ( (v10 & 0x10400) != 0x400 )
    {
      goto LABEL_11;
    }
  }
  (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 240))(a1);
  return sub_601362A0((int)a1);
}
