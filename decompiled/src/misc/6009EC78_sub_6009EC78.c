/* sub_6009EC78
 * address: 0x6009EC78   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6009EC78(int a1)
{
  char v1; // r12
  float v3; // s0
  int result; // r0
  int v5; // r5
  int v6; // r8
  int v7; // r0
  int *v8; // r6
  int v9; // r1
  int v10; // r7
  unsigned int v11; // r1
  int v12; // r0
  bool v13; // zf
  int v14; // r0
  unsigned int U32; // r0
  int v16; // r1
  int v17; // r1
  int v18; // r2
  int v19; // r1
  int v20; // r3
  void *v21; // r1

  v3 = FIELD_F32(a1, 108);
  result = dword_60CC6484;
  if ( v3 < (float)(FIELD_F32(dword_60CC6484, 112) + -16.0) && FIELD_F32(a1, 120) <= 0.0
    || v3 > (float)(FIELD_F32(dword_60CC6484, 120) + 16.0) && FIELD_F32(a1, 120) >= 0.0 )
  {
    v5 = 0;
    v6 = 0;
    v8 = (int *)(a1 + 8196);
    v7 = FIELD_U32(a1, 8196);
    v9 = FIELD_U32(a1, 8200);
    v10 = (v7 | 1) == 3;
    if ( v9 != 2 )
    {
      v10 = (v7 | 1) == 3 && v9 == 3;
      v6 = ((v7 == 2) ^ (v7 != 3)) & (v9 != 3);
    }
    v11 = FIELD_U32(a1, 7136);
    if ( v11 )
      v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v11);
    if ( ((unsigned int)&dword_60C82840 & ~(1611263388 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C82840) )
    {
      dword_60C8283C = (int)&off_60BC763C;
      _cxa_guard_release(&dword_60C82840);
    }
    if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C8283C) == 1 )
    {
      v12 = FIELD_U8(v5, 6761);
      if ( FIELD_U8(v5, 6761) )
        v12 = 1;
      v10 |= v12;
    }
    v13 = v10 == 0;
    if ( !v10 )
      v13 = FIELD_U8(a1, 8136) == 0;
    if ( v13 && !FIELD_U8(a1, 8204) )
    {
      U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
      if ( v6 == 1 )
        v14 = (U32 >> 31) | 2;
      else
        v14 = U32 >> 30;
    }
    else
    {
      v14 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31;
    }
    v16 = v14;
    if ( (unsigned int)v14 >= 4 )
      v16 = 0;
    v17 = a1 + 8 * v16;
    v18 = FIELD_U32(v17, 8168);
    v19 = FIELD_U32(v17, 8164);
    v20 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 108) = v19;
    FIELD_U32(a1, 112) = v18;
    FIELD_U32(a1, 584) = v19;
    FIELD_U32(a1, 588) = v18;
    FIELD_U32(a1, 592) = v20;
    FIELD_U32(a1, 608) = v19;
    FIELD_U32(a1, 612) = v18;
    FIELD_U32(a1, 616) = v20;
    FIELD_U32(a1, 8200) = *v8;
    *v8 = v14;
    if ( v14 > 1 )
      v21 = &unk_60C824D0;
    else
      v21 = &unk_60C82658;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, v21);
  }
  return result;
}
