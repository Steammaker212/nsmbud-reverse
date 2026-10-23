/* sub_602516B4
 * address: 0x602516B4   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602516B4(int a1)
{
  float v2; // s0
  int v3; // r5
  _DWORD *v4; // r6
  signed int v5; // r0
  int v6; // r2
  int result; // r0
  int v8; // r0
  int v9; // r2

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    v4 = (_DWORD *)(a1 + 6344);
    if ( FIELD_U32(a1, 6344) )
    {
      v5 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
      *v4 = 0;
      if ( FIELD_U32(a1, 80) != v5 )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DF14);
    }
    if ( !FIELD_U16(a1, 6276) )
    {
      v6 = FIELD_U32(a1, 6316);
      FIELD_U32(a1, 6316) = v6 + 1;
      if ( v6 < 2 )
      {
        FIELD_U32(a1, 124) = FIELD_U32(a1, 6376);
      }
      else
      {
        FIELD_U32(a1, 124) = FIELD_U32(a1, 6380);
        FIELD_U32(a1, 6316) = 0;
        FIELD_U16(a1, 6276) = 60;
        *v4 = 1;
      }
    }
  }
  result = FIELD_U32(a1, 80);
  if ( (*(_DWORD *)(v3 + 4 * ((result + 18) >> 5) + 2224) & (1 << ((result + 18) & 0x1F))) != 0
    || (*(_DWORD *)(v3 + 4 * ((result + 22) >> 5) + 2224) & (1 << ((result + 22) & 0x1F))) != 0 )
  {
    v8 = result + 28;
    v9 = v8 >> 5;
    result = v8 & 0x1F;
    if ( (*(_DWORD *)(v3 + 4 * v9 + 2224) & (1 << result)) == 0 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DF14);
  }
  return result;
}
