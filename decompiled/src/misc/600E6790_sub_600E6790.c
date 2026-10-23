/* sub_600E6790
 * address: 0x600E6790   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600E6790(int a1)
{
  _BYTE *v2; // r5
  int v3; // r5
  float v4; // s16
  int v5; // r0
  float v6; // s18
  unsigned int v7; // r0
  float v8; // s0
  float v9; // s0
  float v10; // s0
  signed int result; // r0

  v2 = (_BYTE *)(a1 + 8132);
  sub_60421AD4(FIELD_U32(a1, 7096));
  if ( *v2 )
  {
    v3 = FIELD_U32(a1, 56);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 716))(v3)
      || (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 720))(v3) == 1 )
    {
      v4 = 1.0;
      goto LABEL_10;
    }
    goto LABEL_6;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1) )
  {
LABEL_6:
    v4 = 2.0;
    goto LABEL_10;
  }
  v5 = a1;
  if ( *v2 )
    v5 = FIELD_U32(a1, 56);
  (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 720))(v5);
  v4 = 1.2;
LABEL_10:
  v6 = (float)byte_60AFE3F4[FIELD_U32(a1, 80)];
  if ( sub_600B2DF0(a1, (float)(v4 * 70.0) + 8.0) )
  {
    v7 = FIELD_U32(a1, 80);
    if ( v7 >= 2 )
      v7 = 0;
    v8 = fabsf((float)(FIELD_F32(dword_60CC6484, 116) + *(float *)(a1 + 4 * v7 + 7488)) - FIELD_F32(a1, 108));
    if ( v8 >= 8.0 )
      v9 = v8 / (float)(v4 * 70.0);
    else
      v9 = -1.0;
  }
  else
  {
    v9 = 1.0;
  }
  FIELD_F32(a1, 120) = v4 * (float)(v6 * v9);
  FIELD_U32(a1, 124) = 1086324736;
  FIELD_U32(a1, 100) = -1104180487;
  FIELD_U32(a1, 8164) = 70;
  CollisionActor__handleGravity((CollisionActor *)a1);
  v10 = CollisionActor__handleSpeed((CollisionActor *)a1);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1232))(a1, v10);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1284))(a1);
  FIELD_U8(a1, 8185) = 0;
  result = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 8188) = result;
  return result;
}
