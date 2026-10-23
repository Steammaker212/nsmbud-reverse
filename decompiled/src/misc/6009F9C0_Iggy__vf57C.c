/* Iggy__vf57C
 * address: 0x6009F9C0   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B4620
// 
// Overridden by: None
int __fastcall Iggy__vf57C(int *a1)
{
  int v2; // r1
  int v3; // r0
  int v4; // r0
  int *v5; // r1
  int v6; // r5
  float v7; // s16
  float v8; // s18
  float v9; // s0

  sub_60421AD4(a1[1774]);
  if ( (*(int (__fastcall **)(int *))(*a1 + 716))(a1) == 1 )
  {
    v2 = a1[1777];
  }
  else
  {
    v3 = (*(int (__fastcall **)(int *))(*a1 + 720))(a1);
    v2 = a1[1777];
    if ( v3 != 1 )
    {
      v4 = v2 + 64;
      v5 = &dword_60C82888;
      goto LABEL_6;
    }
  }
  v4 = v2 + 48;
  v5 = &dword_60C82884;
LABEL_6:
  v6 = FIELD_U32(v4, 4);
  v7 = *(float *)v4;
  a1[25] = *v5;
  v8 = (float)byte_60AFE3F4[a1[20]];
  *((float *)a1 + 30) = v7 * (float)(v8 * sub_600B2D20(a1));
  a1[31] = v6;
  CollisionActor__handleGravity((CollisionActor *)a1);
  v9 = CollisionActor__handleSpeed((CollisionActor *)a1);
  (*(void (__fastcall **)(int *, float))(*a1 + 1232))(a1, v9);
  return (*(int (__fastcall **)(int *))(*a1 + 1284))(a1);
}
