/* jump_quake1_ref
 * address: 0x600F2CB4   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jump_quake1_ref(int *a1)
{
  _DWORD *v2; // r5
  int v3; // r1
  int v4; // r0
  int v5; // r0
  int *v6; // r1
  int v7; // r5
  float v8; // s16
  float v9; // s18
  float v10; // s0

  v2 = a1 + 1774;
  sub_60421AD4(a1[1774]);
  j_ModelWrapper_updateAnims(*v2);
  if ( (*(int (__fastcall **)(int *))(*a1 + 716))(a1) == 1 )
  {
    v3 = a1[1777];
  }
  else
  {
    v4 = (*(int (__fastcall **)(int *))(*a1 + 720))(a1);
    v3 = a1[1777];
    if ( v4 != 1 )
    {
      v5 = v3 + 64;
      v6 = &dword_60C856F4;
      goto LABEL_6;
    }
  }
  v5 = v3 + 48;
  v6 = &dword_60C856F0;
LABEL_6:
  v7 = FIELD_U32(v5, 4);
  v8 = *(float *)v5;
  a1[25] = *v6;
  v9 = (float)byte_60AFE3F4[a1[20]];
  *((float *)a1 + 30) = v8 * (float)(v9 * sub_600B2D20((int)a1));
  a1[31] = v7;
  CollisionActor__handleGravity((CollisionActor *)a1);
  v10 = CollisionActor__handleSpeed((CollisionActor *)a1);
  (*(void (__fastcall **)(int *, float))(*a1 + 1232))(a1, v10);
  (*(void (__fastcall **)(int *))(*a1 + 1284))(a1);
  *((_WORD *)a1 + 3138) = 10;
  return 6276;
}
