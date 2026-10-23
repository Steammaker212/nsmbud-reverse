/* sub_60307018
 * address: 0x60307018   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60307018(int a1)
{
  unsigned int v2; // r0
  _BOOL4 v3; // r5
  int result; // r0
  unsigned int v5; // r6
  int v6; // r0
  float v7; // s0
  float v8; // s2
  float v9; // s2
  float v10; // s4
  Vec2 out; // [sp+8h] [bp-18h] BYREF

  v2 = StageActor__distanceToPlayer((StateActor *)a1, &out);
  v3 = 0;
  if ( v2 == -1 )
    v2 = 0;
  if ( v2 >= 4 )
    v2 = 0;
  result = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 48);
  if ( result )
  {
    v5 = FIELD_U8(result, 84);
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFF1F8, 0, &stru_60AFF204);
    FIELD_U32(a1, 3180) |= 0x20u;
    FIELD_U32(a1, 3188) |= 0x20u;
    FIELD_U32(a1, 3176) |= 0x8000u;
    FIELD_U32(a1, 3184) |= 0x8000u;
    FIELD_U32(a1, 3200) |= 0x40000000u;
    v6 = 0;
    if ( v5 < 4 )
      v6 = (char)v5;
    if ( *(_DWORD *)(PlayerMgr_instance + 4 * v6 + 48) )
    {
      v7 = FIELD_F32(a1, 108);
      v8 = FIELD_F32(dword_60CC6484, 112);
      if ( v7 >= (float)(v8 + 160.0) )
      {
        v3 = 1;
        if ( v7 <= (float)((float)(v8 + FIELD_F32(dword_60CC6484, 104)) + -160.0) )
        {
          v9 = FIELD_F32(dword_60CC6484, 116) + 32.0;
          if ( FIELD_U8(a1, 6605) )
          {
            if ( FIELD_U32(a1, 6600) )
              v10 = -96.0;
            else
              v10 = 96.0;
            v9 = v9 + v10;
          }
          v3 = v7 >= v9;
        }
      }
    }
    FIELD_U32(a1, 132) = dword_60AF2058[v3];
    FIELD_U32(a1, 104) = 1018041467;
    return 1018041467;
  }
  return result;
}
