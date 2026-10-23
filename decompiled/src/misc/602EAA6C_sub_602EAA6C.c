/* sub_602EAA6C
 * address: 0x602EAA6C   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602EAA6C(int a1)
{
  float v2; // s0
  float v3; // s0
  int v4; // r1
  bool v5; // zf
  unsigned int U32; // r0
  StateMethodExecuter *result; // r0
  float *v8; // r5
  int v9; // r0
  StateBase *v10; // r1
  StateMgr *v11; // r0
  float v12; // s0
  float v13; // s0
  float v14; // r0
  int v15; // [sp+8h] [bp-20h] BYREF
  float v16; // [sp+Ch] [bp-1Ch] BYREF
  float v17; // [sp+10h] [bp-18h]
  int v18; // [sp+14h] [bp-14h]

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  FIELD_U32(a1, 124) = 0;
  v4 = FIELD_U32(a1, 2872);
  if ( (v4 & 0x10401) == 0x401 )
    goto LABEL_6;
  v5 = (v4 & 0x20000000) == 0;
  if ( (v4 & 0x20000000) == 0 )
    v5 = (v4 & 0x10000000) == 0 && (v4 & 0x440000) != 0 && (v4 & 0x880000) != 0;
  if ( v5 )
  {
LABEL_6:
    U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
    return (StateMethodExecuter *)sub_602EE7D8(a1, U32 >> 31, -1, 0);
  }
  v8 = (float *)(a1 + 7432);
  ((void (__fastcall *)(int *, int, int, int, float, _DWORD))physics_21893E8)(
    &v15,
    a1 + 7432,
    a1 + 7504,
    a1 + 108,
    v3,
    FIELD_U8(a1, 86));
  v9 = v15;
  v5 = v15 == 4;
  FIELD_U32(a1, 7520) = v15;
  if ( v5 )
  {
    if ( *v8 >= (float)(FIELD_F32(a1, 112) + 4.0) )
    {
      *(_BYTE *)(FIELD_U32(a1, 7368) + 69) = 1;
      sub_602F4160();
      FIELD_U32(a1, 124) = -1052770304;
      v10 = (StateBase *)&unk_60C92604;
      v11 = (StateMgr *)(a1 + 6084);
      return StateMgr__changeState(v11, v10);
    }
  }
  else if ( v9 == 3 )
  {
    v12 = FIELD_F32(a1, 112);
    if ( *v8 >= (float)(v12 + 4.0) )
    {
      FIELD_U32(a1, 124) = -1052770304;
      v13 = v12 + FIELD_F32(a1, 576);
      v16 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
      v17 = v13;
      sub_602F32F8(a1 + 6784, &v16, 7, 0);
      v14 = *v8;
      v16 = FIELD_F32(a1, 108);
      v17 = v14;
      v18 = 1170939904;
      (*(void (__fastcall **)(int, float *))(*(_DWORD *)a1 + 112))(a1, &v16);
      v11 = (StateMgr *)(a1 + 6084);
      v10 = (StateBase *)&unk_60C925E4;
      return StateMgr__changeState(v11, v10);
    }
  }
  else if ( v9 == 1 && *v8 >= (float)((float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 7404)) + 8.0) )
  {
    if ( !FIELD_U8(a1, 7535) )
    {
      *(_BYTE *)(FIELD_U32(a1, 7368) + 69) = 1;
      sub_602F4160();
    }
    v10 = *(StateBase **)(a1 + 7500);
    v11 = (StateMgr *)(a1 + 6084);
    return StateMgr__changeState(v11, v10);
  }
  result = (StateMethodExecuter *)FIELD_U8(a1, 7528);
  if ( !FIELD_U8(a1, 7528) )
  {
    result = (StateMethodExecuter *)sub_60003460(a1);
    if ( !result )
    {
      v11 = (StateMgr *)(a1 + 6084);
      v10 = &stru_60C92584;
      return StateMgr__changeState(v11, v10);
    }
  }
  return result;
}
