/* ShellEnemy__vf318
 * address: 0x603A3900   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
unsigned int *__fastcall ShellEnemy__vf318(int a1)
{
  unsigned int *result; // r0
  int v3; // lr
  unsigned int *v4; // r1
  int v5; // r9
  unsigned int *v6; // r2
  int v7; // r10
  unsigned int v8; // r3
  unsigned int v9; // r5
  unsigned int v10; // r6
  int v11; // r12
  int v12; // r7
  unsigned int *v13; // lr
  CollisionMgr_Sensor *v14; // r1
  _DWORD *v15; // r4
  CollisionMgr_Sensor *v16; // t1

  FIELD_U32(a1, 100) = -1103101952;
  if ( FIELD_U8(a1, 6393) )
    FIELD_U32(a1, 120) = dword_60AF2100[FIELD_U32(a1, 80)];
  else
    sub_600009FC((StageActor *)a1);
  FIELD_U32(a1, 6268) = off_60BE2BE4;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  sub_60272510(a1);
  sub_6027253C((_DWORD *)a1);
  result = (unsigned int *)(a1 + 3192);
  v3 = FIELD_U32(a1, 3192);
  v4 = (unsigned int *)(a1 + 3184);
  v5 = FIELD_U32(a1, 3184);
  v6 = (unsigned int *)(a1 + 3176);
  v7 = FIELD_U32(a1, 3176);
  v8 = v3 & 0xFFFFF99F;
  FIELD_U32(a1, 3192) = v3 & 0xFFFFF99F;
  v9 = v7 & 0xFFFFF99F;
  v10 = v5 & 0xFFFFF99F;
  FIELD_U32(a1, 3176) = v7 & 0xFFFFF99F;
  FIELD_U32(a1, 3184) = v5 & 0xFFFFF99F;
  FIELD_U32(a1, 3196) &= ~1u;
  FIELD_U32(a1, 3180) &= ~1u;
  FIELD_U32(a1, 3188) &= ~1u;
  v11 = FIELD_U8(a1, 6392);
  if ( FIELD_U8(a1, 6392) )
  {
    v12 = -32769;
    v8 = v7 & 0xFEFFF91F;
    v9 = v5 & 0xFEFFF91F;
    v10 = v3 & 0xFEFFF91F;
    v13 = (unsigned int *)(a1 + 3176);
    *v6 = v7 & 0xFEFFF91F;
    *v4 = v5 & 0xFEFFF91F;
    v6 = (unsigned int *)(a1 + 3184);
    v4 = (unsigned int *)(a1 + 3192);
    *result = v10;
  }
  else
  {
    v12 = -2049;
    v13 = (unsigned int *)(a1 + 3192);
  }
  *v13 = v8 & v12;
  *v6 = v9 & v12;
  *v4 = v10 & v12;
  FIELD_U32(a1, 100) = -1103101952;
  if ( !v11 )
  {
    v16 = *(CollisionMgr_Sensor **)(a1 + 6560);
    v15 = (_DWORD *)(a1 + 6560);
    v14 = v16;
    if ( v16 )
    {
      CollisionMgr_setSensor((CollisionMgr *)(result - 636), v14, 3);
      *v15 = 0;
      return 0;
    }
  }
  return result;
}
