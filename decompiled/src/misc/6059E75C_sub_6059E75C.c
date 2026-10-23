/* sub_6059E75C
 * address: 0x6059E75C   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059E75C(int a1)
{
  int v2; // r0
  int *v3; // r6
  bool v4; // zf
  int v5; // r1
  char v6; // r0
  char *v7; // r5
  char v8; // r2
  char v9; // r0
  float v10; // s0

  v3 = (int *)(a1 + 6100);
  v2 = FIELD_U32(a1, 6100);
  if ( !v2 )
  {
    v7 = (char *)(a1 + 6420);
    v6 = FIELD_U8(a1, 6420);
    if ( (v6 & 1) != 0 )
      goto LABEL_12;
    goto LABEL_11;
  }
  v5 = v2 - 1;
  v4 = v2 == 1;
  *v3 = v2 - 1;
  v7 = (char *)(a1 + 6420);
  v6 = FIELD_U8(a1, 6420);
  if ( v4 )
  {
    if ( (v6 & 1) != 0 )
    {
LABEL_12:
      v9 = v6 | 3;
      goto LABEL_13;
    }
LABEL_11:
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
    FIELD_U32(a1, 10824) = 0;
    v6 = *v7;
    goto LABEL_12;
  }
  if ( (v6 & 1) != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    v6 = *v7;
    v5 = *v3;
  }
  v8 = v6 & 0xFC;
  if ( v5 < 21 )
    v8 = v6 | 2;
  v9 = v8 & 0xFE;
LABEL_13:
  *v7 = v9;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( FIELD_U8(a1, 10820) )
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
    v10 = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
    FIELD_F32(a1, 116) = v10;
    CollisionMgr_process((_BYTE *)(a1 + 648), v10);
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
      FIELD_U32(a1, 124) = 0;
  }
  ef_fire_rot_cannon_ref(a1);
  ((void (__fastcall *)(int))loc_6059E5AC)(a1);
  ShapedCollider_execute((ColliderBase *)(a1 + 6424));
  FIELD_U32(a1, 7324) = FIELD_U32(a1, 7736);
  ShapedCollider_execute((ColliderBase *)(a1 + 7080));
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
