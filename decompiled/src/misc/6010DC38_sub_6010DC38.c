/* sub_6010DC38
 * address: 0x6010DC38   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6010DC38(int a1)
{
  float v2; // s2
  float v3; // s0
  int v4; // r1
  int v5; // r0
  int v6; // r0
  int *v7; // r1
  int v8; // r5
  float v9; // s16
  float v10; // s18
  float v11; // s0

  sub_60421AD4(FIELD_U32(a1, 7096));
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(dword_60CC6484, 116);
  if ( v2 <= (float)((float)(v3 + FIELD_F32(a1, 7488)) + -1.0) )
  {
    if ( v2 < (float)((float)(v3 + FIELD_F32(a1, 7492)) + 1.0) )
      FIELD_U32(a1, 80) = 0;
  }
  else
  {
    FIELD_U32(a1, 80) = 1;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1) == 1 )
  {
    v4 = FIELD_U32(a1, 7108);
  }
  else
  {
    v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
    v4 = FIELD_U32(a1, 7108);
    if ( v5 != 1 )
    {
      v6 = v4 + 64;
      v7 = &dword_60C86714;
      goto LABEL_10;
    }
  }
  v6 = v4 + 48;
  v7 = &dword_60C86710;
LABEL_10:
  v8 = FIELD_U32(v6, 4);
  v9 = *(float *)v6;
  FIELD_U32(a1, 100) = *v7;
  v10 = (float)byte_60AFE3F4[FIELD_U32(a1, 80)];
  FIELD_F32(a1, 120) = v9 * (float)(v10 * sub_600B2D20(a1));
  FIELD_U32(a1, 124) = v8;
  CollisionActor__handleGravity((CollisionActor *)a1);
  v11 = CollisionActor__handleSpeed((CollisionActor *)a1);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1232))(a1, v11);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1284))(a1);
  FIELD_U16(a1, 6276) = 10;
  return 6276;
}
